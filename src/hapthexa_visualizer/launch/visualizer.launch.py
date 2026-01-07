from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='hapthexa_visualizer',
            executable='visualizer_node.py',
            name='visualizer_node',
            output='screen'
        )
    ])
