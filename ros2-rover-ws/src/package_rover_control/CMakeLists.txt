cmake_minimum_required(VERSION 3.8)
project(package_rover_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()



# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_srvs)

find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Rovercontrol.action"
  DEPENDENCIES action_msgs
)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_library(carcontrol_server SHARED
  src/node_motor_control.cpp)

target_include_directories(carcontrol_server PRIVATE
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)
  
target_compile_definitions(carcontrol_server
  PRIVATE "CARCONTROL_CPP_BUILDING_DLL")
  
ament_target_dependencies(carcontrol_server
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components")
rclcpp_components_register_node(carcontrol_server PLUGIN "motorcontrol_cpp::MotorControlActionServer" EXECUTABLE node_motor_control)
install(TARGETS
  carcontrol_server
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)

add_executable(node_motor_control src/node_motor_control.cpp)
target_include_directories(node_motor_control PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_features(node_motor_control PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS node_motor_control
  DESTINATION lib/${PROJECT_NAME})

# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   # the following line skips the linter which checks for copyrights
#   # comment the line when a copyright and license is added to all source files
#   set(ament_cmake_copyright_FOUND TRUE)
#   # the following line skips cpplint (only works in a git repo)
#   # comment the line when this package is in a git repo and when
#   # a copyright and license is added to all source files
#   set(ament_cmake_cpplint_FOUND TRUE)
#   ament_lint_auto_find_test_dependencies()
# endif()

ament_package()
