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

    private:
      rclcpp_action::Server<Carcontrol>::SharedPtr action_server_;
      rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid,
        std::shared_ptr<const Carcontrol::Goal> goal)
      {
        RCLCPP_INFO(this->get_logger(), "Received goal request: Direction = %s, Timestop = %d",
          gola->direction.c_str(), goal->timestop);
        (void)uuid;
        if(gola->timestop <= 0){
          RCLCPP_WARN(this->get_logger(), "Invalid timestop. Rejecting goal.");
          return rclcpp_action::GoalResponse::REJECT;
        }
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
      }

      rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleCarcontrol> goal_handle){
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
      }

      void handle_accepted(const std::shared_ptr<GoalHandleCarcontrol> goal_handle)
      {
        std::thread{std::bind(&MotorControlActionServer::execute, this, goal_handle)}.detect();
      }

      void execute(const std::shared_ptr<GoalHandleCarcontrol> goal_handle)
      {
        RCLCPP_INFO(this->get_logger(), "Executing goal");

        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<Carcontrol::Feedback>();
        auto result = std::make_shared<Carcontrol::Result>();

        rclcpp::Rate loop_rate(1);

        for (int i = goal->timestop; i>=0 && rclcpp::ok(); --i){
          if(goal_handle->is_canceling()){
            RCLCPP_INFO(this->get_logger(), "Goal canceled");
            result->result_msg = "Countdown canceled";
            goal_handle->canceled(result);
            return;
          }

        feedback->time_remaining.clear();
        for (int j = i; j >= 0; --j){
          feedback->time_remaining.push_back(j);
        }

        goal_handle->publish_feedback(feedback);
        RCLCPP_INFO(this->get_logger(), "Publishing feedback: %d second remaining", i);

        loop_rate.sleep();
        }

        if(rclcpp::ok()){
          result->result_msg = "Countdown complete";
          goal_handle->succeed(result);
          RCLCPP_INFO(this->get_logger(), "Goal succeed: Countdown complete");
        }

        RCLCPP_INFO(this->get_logger(), "Waiting for next goal...");
      }

  };

}

RCLCPP_COMPONENTS_REGISTER_NODE(motorcontrol_cpp::MotorControlActionServer)

// #include <cstdio>

// int main(int argc, char ** argv)
// {
//   (void) argc;
//   (void) argv;

//   printf("hello world package_rover_control package\n");
//   return 0;
// }
