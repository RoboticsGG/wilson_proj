cmake_minimum_required(VERSION 3.8)
project(package_base_command)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs)
find_package(service_ifaces REQUIRED)
find_package(action_ifaces REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

#---------------------------node_command---------------------------------------
add_executable(node_command src/node_command.cpp)
ament_target_dependencies(node_command rclcpp rclcpp_action rclcpp_components std_msgs service_ifaces action_ifaces)

target_include_directories(node_command PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

target_compile_features(node_command PUBLIC c_std_99 cxx_std_17)

install(TARGETS node_command
  DESTINATION lib/${PROJECT_NAME})

install(
  DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

install(
  DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)
#---------------------------node_command---------------------------------------

ament_package()
