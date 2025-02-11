import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    config = os.path.join(
        get_package_share_directory('package_base_command'),  # Get package directory
        'config',
        'params.yaml'  # Path to params.yaml inside the config folder
    )

    return LaunchDescription([
        Node(
            package='package_base_command',
            executable='node_command',
            name='node_command',
            parameters=[config]  # Load parameters from the file
        )
    ])
