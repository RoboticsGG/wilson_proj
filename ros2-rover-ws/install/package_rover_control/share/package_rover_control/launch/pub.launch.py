from launch import LaunchDescription
from launch_ros.actions import Node

# Note: `node_`, `prefix` and `output` will be removed on Foxy
def generate_launch_description():
  return LaunchDescription([
    Node(
      package='package_rover_control',
      executable='node_rovercontrol',
      name='node_rovercontrol',
			prefix=['stdbuf -o L'],
			output="screen"
    )
  ])
