import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    package_name = 'turtle_control_pkg'
    
    pkg_share = get_package_share_directory(package_name)
    world_path = os.path.join(pkg_share, 'worlds', 'building_robot.sdf')
    
    # Path to the Visual URDF
    urdf_path = os.path.join(pkg_share, 'urdf', 'robot.urdf')
    
    # Read the URDF file to pass to robot_state_publisher
    with open(urdf_path, 'r') as inf:
        robot_desc = inf.read()

    # 1. Launch Gazebo
    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': f'-r {world_path}'}.items(),
    )

    # 2. ROS-GZ Bridge
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        parameters=[{
            'qos_overrides./tf_static.publisher.durability': 'transient_local',
        }],
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist',
            '/lidar@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan',
            '/imu@sensor_msgs/msg/Imu[gz.msgs.IMU',
            '/model/vehicle_blue/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry',
            '/model/vehicle_blue/tf@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V',
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock'
        ],
        output='screen',
        # ⬇️ CRITICAL FIX: Remap the specific GZ topic to the standard ROS /tf topic
        remappings=[
            ('/model/vehicle_blue/tf', '/tf')
        ]
    )

    # 3. Robot State Publisher (Publishes URDF to RViz)
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='both',
        parameters=[
            {'robot_description': robot_desc},
            {'frame_prefix': ''} 
        ]
    )
# 1. Define the path to your config file
    rviz_config_file = os.path.join(pkg_share, 'rviz', 'simulation.rviz')

    # 2. Update the Node
    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_file]  # <--- This line loads the file
    )

    return LaunchDescription([
        gz_sim,
        bridge,
        robot_state_publisher,
        rviz
    ])