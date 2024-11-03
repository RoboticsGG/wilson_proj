cmake_minimum_required(VERSION 3.8)
project(base_command_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

############## Start Define Action #####################
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Carcontrol.action"
)
############### End Define Action ########################

############## Start add find dependencies ######################
find_package(ament_cmake REQUIRED)
#find_package(base_command_package REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_srvs)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
#################### End add find dependencies ##########################

#################### Start carcontrol_ros2_client Node ###########################
add_library(carcontrol_ros2_client SHARED
  src/carcontrol_node.cpp)
  
target_include_directories(carcontrol_ros2_client PRIVATE
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

target_compile_definitions(carcontrol_ros2_client
  PRIVATE "CARCONTROL_CPP_BUILDING_DLL")
ament_target_dependencies(carcontrol_ros2_client
  "base_command_package"
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components")
rclcpp_components_register_node(carcontrol_ros2_client PLUGIN "carcontrol_cpp::CarControlActionClient" EXECUTABLE carcontrol_client_node)
install(TARGETS
  carcontrol_ros2_client
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)
#################### End carcontrol_ros2_client Node ###########################

# add_executable(command_node src/command_node.cpp)
# target_include_directories(command_node PUBLIC
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<INSTALL_INTERFACE:include>)
# target_compile_features(command_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

# install(TARGETS command_node
#   DESTINATION lib/${PROJECT_NAME})

# #--------------------------------------------------------------

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
