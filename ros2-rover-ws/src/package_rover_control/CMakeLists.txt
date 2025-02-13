cmake_minimum_required(VERSION 3.8)
project(package_rover_control)


# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
#find_package(action_interfaces REQUIRED)
#find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs)
find_package(msgs_rovercon REQUIRED)
find_package(msgs_mainrocon REQUIRED)
find_package(service_ifaces REQUIRED)


#---------------------------node_rover_control---------------------------------------
add_executable(node_rovercontrol src/node_rover_control.cpp)
ament_target_dependencies(node_rovercontrol rclcpp geometry_msgs std_msgs msgs_rovercon msgs_mainrocon service_ifaces)

target_include_directories(node_rovercontrol PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

install(TARGETS node_rovercontrol
  DESTINATION lib/${PROJECT_NAME})

target_compile_features(node_rovercontrol PUBLIC c_std_99 cxx_std_17)

#---------------------------node_rover_control---------------------------------------

add_executable(node_d5bridge src/node_d5bridge.cpp)
ament_target_dependencies(node_d5bridge rclcpp msgs_mainrocon msgs_rovercon)
install(TARGETS node_d5bridge DESTINATION lib/${PROJECT_NAME})


ament_package()
