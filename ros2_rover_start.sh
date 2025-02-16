#!/bin/bash

#ROS2_ROVER_START#
source ./ros2-rover-ws/install/setup.bash || exit 1
export ROS_DOMAIN_ID=2
ros2 run package_position_process node_gnss || exit 1
ros2 run package_position_process node_position_process || exit 1
ros2 run package_image_process node_camera_proc2 || exit 1
ros2 run package_rover_control node_rovercontrol || exit 1
export ROS_DOMAIN_ID=5
ros2 run package_rover_control node_d5bridge || exit 1

echo "ROS2 Rover Start Complete!"
