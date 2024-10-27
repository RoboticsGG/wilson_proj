cmake_minimum_required(VERSION 3.8)
project(test_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

############## Start Define Action #####################
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Fibonacci.action"
)
############### End Define Action ########################

############## Start add find dependencies ######################
find_package(ament_cmake REQUIRED)
find_package(test_package REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_srvs REQUIRED)
find_package(example_interfaces REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
#################### End add find dependencies ##########################

#################### Start Action Client Node ###########################
add_library(action_client SHARED
  src/Action_client_node.cpp)

target_include_directories(action_client PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_definitions(action_client
  PRIVATE "ACTION_TUTORIALS_CPP_BUILDING_DLL")
ament_target_dependencies(action_client
  "test_package"
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components")
rclcpp_components_register_node(action_client PLUGIN "action_tutorials_cpp::FibonacciActionClient" EXECUTABLE action_client_node)

install(TARGETS
  action_client
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)
#################### End Action Client Node ###########################

#################### Start Tclient Node ###############################
add_executable(Tclient_node src/Tclient_node.cpp)
ament_target_dependencies(Tclient_node rclcpp std_srvs example_interfaces)

target_include_directories(Tclient_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(Tclient_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS Tclient_node
  DESTINATION lib/${PROJECT_NAME})
#################### End Tclient Node ##################################

#################### Start Test_eth_Sub ################################
add_executable(TestEthSub_node src/Test_eth_commu_subscribe.cpp)
ament_target_dependencies(TestEthSub_node rclcpp std_msgs)

target_include_directories(TestEthSub_node PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)
target_compile_features(TestEthSub_node PUBLIC c_std_99 cxx_std_17)

install(TARGETS TestEthSub_node
  DESTINATION lib/${PROJECT_NAME})
#################### End Test_eth_Sub ################################
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
