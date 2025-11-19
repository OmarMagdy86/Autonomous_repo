#!/usr/bin/env python3
import sys
import select
import termios
import tty
import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException # FIXED: Added missing import
from geometry_msgs.msg import Twist

# Settings
LINEAR_SPEED = 0.5
ANGULAR_SPEED = 0.5
# FIXED: Increased timeout to handle OS key-repeat delays (stops jerky movement)
# This also helps 'simulate' multi-input by remembering the last key longer.
KEY_TIMEOUT = 0.6 

class KeyboardController(Node):
    def __init__(self):
        super().__init__('keyboard_controller')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        # Run at 50Hz to capture rapid inputs
        self.timer = self.create_timer(0.02, self.timer_callback)
        
        # State variables
        self.target_linear = 0.0
        self.target_angular = 0.0
        self.last_linear_time = 0.0
        self.last_angular_time = 0.0

        print("Control Your Robot!")
        print("---------------------------")
        print("Use ARROW KEYS to move.")
        print("To drive in an ARC: Tap 'Up' then hold 'Right' quickly.")
        print("Press 'q' or 'Ctrl+C' to quit.")

        # 1. Save settings and ENABLE RAW MODE PERMANENTLY (until exit)
        self.settings = termios.tcgetattr(sys.stdin)
        tty.setraw(sys.stdin.fileno())

    def get_key(self):
        # Non-blocking check for input
        rlist, _, _ = select.select([sys.stdin], [], [], 0.0)
        if rlist:
            key = sys.stdin.read(1)
            if key == '\x1b':  # Handle Arrow keys (ESC sequence)
                additional_chars = sys.stdin.read(2)
                key += additional_chars
            return key
        return None

    def timer_callback(self):
        timestamp = self.get_clock().now().nanoseconds / 1e9
        
        # Drain all buffered keys
        while True:
            key = self.get_key()
            if key is None:
                break
            
            # Check for Ctrl+C (ASCII 3) or 'q'
            if key == '\x03' or key == 'q':
                raise KeyboardInterrupt

            if key == '\x1b[A': # Up
                self.target_linear = LINEAR_SPEED
                self.last_linear_time = timestamp
            elif key == '\x1b[B': # Down
                self.target_linear = -LINEAR_SPEED
                self.last_linear_time = timestamp
            elif key == '\x1b[C': # Right
                self.target_angular = -ANGULAR_SPEED
                self.last_angular_time = timestamp
            elif key == '\x1b[D': # Left
                self.target_angular = ANGULAR_SPEED
                self.last_angular_time = timestamp

        # Decay Logic (Auto-stop if no key pressed recently)
        # We handle Linear and Angular independently to allow 'mixing' states
        if (timestamp - self.last_linear_time) > KEY_TIMEOUT:
            self.target_linear = 0.0
        
        if (timestamp - self.last_angular_time) > KEY_TIMEOUT:
            self.target_angular = 0.0

        # Publish
        twist = Twist()
        twist.linear.x = self.target_linear
        twist.angular.z = self.target_angular
        self.publisher_.publish(twist)

    def restore_terminal(self):
        # Restore the terminal to normal settings
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)

def main(args=None):
    rclpy.init(args=args)
    node = None
    try:
        node = KeyboardController()
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    except Exception as e:
        # Print error but ensure terminal is restored
        if node: node.restore_terminal()
        print(e)
    finally:
        if node:
            node.restore_terminal()
            node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()
        print("\nExited cleanly.")

if __name__ == '__main__':
    main()