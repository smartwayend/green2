
#!/usr/bin/env python3

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.substitutions import ThisLaunchFileDir
from launch_ros.actions import Node


def generate_launch_description():
    rplidar_port = LaunchConfiguration('rplidar_port', default='/dev/ttyUSB0')

    return LaunchDescription([
        DeclareLaunchArgument(
            'rplidar_port',
            default_value=rplidar_port,
            description='Port for rplidar sensor'
        ),
        # lidar launch file
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [ThisLaunchFileDir(), '/lidar.launch.py']
            ),
            launch_arguments={'serial_port': rplidar_port}.items()
        ),
        # Execute RCCar_Control.py with sudo
        Node(
            package='rpi_robot_bringup',
            executable='RCCarControlNode.py',
            name='RCCar_control_node',
            emulate_tty=True,
            prefix=['sudo -E'],            
            output='screen'
        ),

        # static transform for map to odom
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='map_to_odom_tf_publisher',
            arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom'],
            output='screen'
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='odom_to_basefootprint_tf_publisher',
            arguments=['0', '0', '0', '0', '0', '0', 'odom', 'base_footprint'],
            output='screen'
        ),

        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='basefootprint_to_base_link_tf_publisher',
            arguments=['0', '0', '0.1575', '0', '0', '0', 'base_footprint', 'base_link'],
            output='screen'
        ),

        Node(

            package='tf2_ros',
            executable='static_transform_publisher',
            name='base_link_to_laser_tf_publisher',         
            arguments=['0', '0', '0.115', '0', '0', '0', 'base_link', 'laser'],
            output='screen'

        ),
        
        
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='base_link_to_l_back_wheel_tf_publisher',
            arguments=['-0.0925','-0.0625', '-0.1125', '0', '0', '0', 'base_link', 'l_back_wheel'],
            output='screen'
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='base_link_to_r_back_wheel_tf_publisher',
            arguments=['0.0925','-0.0625', '-0.1125', '0', '0', '0', 'base_link', 'r_back_wheel'],
            output='screen'
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='base_link_to_l_front_wheel_tf_publisher',
            arguments=['-0.0925','0.0625', '-0.1125', '0', '0', '0', 'base_link', 'l_front_wheel'],
            output='screen'
        ),        
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='base_link_to_r_front_wheel_tf_publisher',
            arguments=['0.0925','0.0625', '-0.1125', '0', '0', '0', 'base_link', 'r_front_wheel'],
            output='screen'
        )          
    ])
