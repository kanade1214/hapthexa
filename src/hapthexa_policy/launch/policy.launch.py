from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
import os

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'model_path',
            default_value='',
            description='Path to the TorchScript policy model (.pt)'
        ),
        Node(
            package='hapthexa_policy',
            executable='policy_node.py',
            name='policy_node',
            parameters=[{
                'model_path': LaunchConfiguration('model_path'),
                'frequency': 50.0,
            }],
            output='screen'
        ),
        # You might also want to run joy_node here if not already running
        # Node(
        #     package='joy',
        #     executable='joy_node',
        #     name='joy_node',
        #     output='screen'
        # )
    ])
