#!/bin/bash

#ROS2_ROVER_START#
source ./ros2-rover-ws/install/setup.bash || exit 1
export ROS_DOMAIN_ID=2

# Run all nodes in the background simultaneously
ros2 run package_position_process node_gnss & 
ros2 run package_position_process node_position_process & 
ros2 run package_image_process node_camera_proc2 & 
ros2 run package_rover_control node_rovercontrol &

# Switch ROS_DOMAIN_ID and run the last node in the background
export ROS_DOMAIN_ID=5
ros2 run package_rover_control node_d5bridge &


echo "ROS2 Rover Start Complete!"
