import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    script_path = os.path.join(
        get_package_share_directory('hapthexa_visualizer'),
        '../../lib/hapthexa_visualizer/visualizer_node.py'
    )
    
    return LaunchDescription([
        Node(
            package='hapthexa_visualizer',
            executable='python3',
            arguments=[script_path],
            name='visualizer_node',
            output='screen'
        )
    ])
