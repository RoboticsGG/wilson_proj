#!/bin/bash

#ROS2_BASE_SETUP#
cd wilson_proj/ros2-base-ws || exit 1
sudo rm -rf build/ install/ log/ || exit 1
colcon build --packages-select action_ifaces service_ifaces msgs_rovercon || exit 1
source install/setup.bash || exit 1
colcon build || exit 1
source install/setup.bash || exit 1
export ROS_DOMAIN_ID=2

echo "ROS2 Base Setup Complete!"
