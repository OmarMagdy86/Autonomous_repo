#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
# Import the standard Twist message type for controlling Turtlesim
from geometry_msgs.msg import Twist 

class CircleMoverNode(Node):
    """
    A ROS 2 node that publishes a standard geometry_msgs/Twist message
    to the /turtle1/cmd_vel topic to make the turtle move in a circle.
    
    Turtlesim works by accepting a constant linear (forward) velocity and
    a constant angular (turning) velocity simultaneously.
    """
    def __init__(self):
        # Initialize the Node with a unique name
        super().__init__('circle_mover_node')

        # 1. Initialize Publisher
        # We publish the standard Twist message type to the cmd_vel topic.
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.get_logger().info('Twist publisher initialized for circular movement.')

        # 2. Define Circular Motion Parameters
        # A constant linear velocity (V) and a constant angular velocity (W)
        # results in a stable circle with radius R = V / W.
        self.linear_velocity = 1.5  # meters/sec (forward speed)
        self.angular_velocity = 1.0  # radians/sec (turning rate)
        
        # 3. Initialize Timer
        # The timer calls the timer_callback function every 100 milliseconds (10 Hz)
        # to continuously send motion commands.
        timer_period = 0.1  # seconds (10 Hz frequency)
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.get_logger().info(
            f'Starting circular movement with Linear V={self.linear_velocity} and Angular W={self.angular_velocity}.'
        )

    def timer_callback(self):
        """
        Callback function executed by the timer. It creates and publishes the 
        Twist message to command movement.
        """
        # 1. Create the standard Twist message object
        msg = Twist()
        
        # 2. Populate the message fields
        # Twist has linear (x, y, z) and angular (x, y, z) components.
        # We only use linear.x (forward/backward) and angular.z (yaw/turning).
        msg.linear.x = self.linear_velocity
        msg.angular.z = self.angular_velocity
        
        # 3. Publish the message
        self.publisher_.publish(msg)
        
def main(args=None):
    """
    Main function for the ROS 2 node execution.
    """
    # Initialize the ROS 2 client library
    rclpy.init(args=args)

    # Create the node
    circle_mover = CircleMoverNode()

    # Spin the node (keeps the node alive and running the timer)
    try:
        rclpy.spin(circle_mover)
    except KeyboardInterrupt:
        # Allows for graceful exit upon Ctrl+C
        pass
    finally:
        # Clean up and destroy the node upon exit
        circle_mover.destroy_node()
        # Shutdown the ROS 2 client library
        rclpy.shutdown()

if __name__ == '__main__':
    main()