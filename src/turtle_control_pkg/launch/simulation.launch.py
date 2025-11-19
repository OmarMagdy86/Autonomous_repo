import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # 1. Configuration Variables
    package_name = 'turtle_control_pkg'
    world_file_name = 'building_robot.sdf'
    
    # Get the path to the package
    pkg_share = get_package_share_directory(package_name)
    
    # Path to the world file
    # Assumes your CMakeLists.txt installs 'worlds/' to the share directory
    world_path = os.path.join(pkg_share, 'worlds', world_file_name)

    # 2. Launch Gazebo
    # We use the ros_gz_sim launch file provided by the library
    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': f'-r {world_path}'}.items(),
    )

    # 3. ROS-GZ Bridge
    # This node bridges the specific topics from your SDF file to ROS
    # Syntax: 'TOPIC_NAME@ROS_TYPE[GZ_TYPE'
    # Direction: [ (GZ->ROS), ] (ROS->GZ), @ (Bidirectional)
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        parameters=[{
            'config_file': '', # You can use a YAML file, but we'll list arguments here for simplicity
            'qos_overrides./tf_static.publisher.durability': 'transient_local',
        }],
        arguments=[
            # Velocity Command: ROS (Twist) -> Gazebo (Twist)
            '/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist',
            
            # Lidar: Gazebo (LaserScan) -> ROS (LaserScan)
            '/lidar@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan',
            
            # IMU: Gazebo (IMU) -> ROS (Imu)
            '/imu@sensor_msgs/msg/Imu[gz.msgs.IMU',
            
            # Odometry (Published by DiffDrive plugin): Gazebo (Odometry) -> ROS (Odometry)
            '/model/vehicle_blue/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry',
            
            # TF (Transforms): Gazebo (Pose_V) -> ROS (TFMessage)
            # Note: The DiffDrive plugin publishes TF relative to the model
            '/model/vehicle_blue/tf@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V',
            
            # Clock: Gazebo -> ROS
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock'
        ],
        output='screen'
    )

    # 4. RViz2
    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        # Optional: arguments=['-d', os.path.join(pkg_share, 'rviz', 'my_config.rviz')]
    )

    return LaunchDescription([
        gz_sim,
        bridge,
        rviz
    ])