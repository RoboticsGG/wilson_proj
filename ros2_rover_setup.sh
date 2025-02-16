#!/bin/bash

#ROS2_ROVER_SETUP#
cd ros2-rover-ws/ || exit 1
sudo rm -rf build/ install/ log/ || exit 1
colcon build --packages-select action_ifaces ifaces_position ifaces_rover msgs_ifaces msgs_rovercon service_ifaces || exit 1
source install/setup.bash || exit 1
colcon build || exit 1
source install/setup.bash || exit 1

echo "ROS2 Rover Setup Complete!"
