cmake_minimum_required(VERSION 3.8)
project(rover_control_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Carcontrol.action"
)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rover_control_package REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_srvs)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_library(carcontrol_ros2_server SHARED
  src/motor_drive_node.cpp)

message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
message("Full include path: ${CMAKE_CURRENT_SOURCE_DIR}/include")
message("BUILD_INTERFACE path: ${CMAKE_CURRENT_SOURCE_DIR}/include")


target_include_directories(carcontrol_ros2_server PRIVATE
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

target_compile_definitions(carcontrol_ros2_server
  PRIVATE "CARCONTROL_CPP_BUILDING_DLL")
ament_target_dependencies(carcontrol_ros2_server
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components")
rclcpp_components_register_node(carcontrol_ros2_server PLUGIN "carcontrol_cpp::CarControlActionServer" EXECUTABLE carcontrol_server)
install(TARGETS
  carcontrol_ros2_server
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)

#------------------------------------------------------------
# add_executable(motor_drive_node src/motor_drive_node.cpp)
# target_include_directories(motor_drive_node PUBLIC
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<INSTALL_INTERFACE:include>)
# target_compile_features(motor_drive_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

# install(TARGETS motor_drive_node
#   DESTINATION lib/${PROJECT_NAME})
#-------------------------------------------------------------

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
