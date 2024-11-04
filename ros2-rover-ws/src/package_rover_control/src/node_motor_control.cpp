#include <functional>
#include <memory>
#include <thread>

#include "action_interfaces/action/rovercontrol.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"



namespace motorcontrol_cpp
{
  class MotorControlActionServer : public rclcpp::Node
  {
    public:
      using Carcontrol = action_interfaces::action::Rovercontrol;
      using GoalHandleCarcontrol = rclcpp_action::ServerGoalHandle<Carcontrol>;
      explicit MotorControlActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()):
        Node("node_motor_control", options)
        {
          using namespace std::placeholders;

          this->action_server_ = rclcpp_action::create_server<Carcontrol>(
            "motorcontrol",
            std::bind(&MotorControlActionServer::handle_goal, this, _1, _2),
            std::bind(&MotorControlActionServer::handle_cancel, this, _1),
            std::bind(&MotorControlActionServer::handle_accepted, this, _1)
          );
          RCLCPP_INFO(this->get_logger(), "Motor Control Action Server is Ready.");

        }
  };

}

RCLCPP_COMPONENTS_REGISTER_NODE(motorcontrol_cpp::CarControlActionServer)

// #include <cstdio>

// int main(int argc, char ** argv)
// {
//   (void) argc;
//   (void) argv;

//   printf("hello world package_rover_control package\n");
//   return 0;
// }
