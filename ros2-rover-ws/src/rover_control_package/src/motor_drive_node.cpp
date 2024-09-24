#include <functional>
#include <memory>
#include <thread>

#include "rover_control_package/action/carcontrol.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

#include "rover_control_package/msg/visibility_control.h"

namespace carcontrol_cpp
{
  class CarControlActionServer : public rclcpp::Node
  {
    public:
      using Carcontrol = rover_control_package::action::Carcontrol;
      using GoalHandleCarcontrol = rclcpp_action::ClientGoalHandle<Carcontrol>

    CARCONTROL_CPP_PUBLIC
    explicit CarControlActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("carcontrol_server_node", options)
    {
      using namespace std::placeholders;
      
      this->action_server_ = rclcpp_action::create<Carcontrol>(
        this,
        "carcontrol",
        std::bind(&CarControlActionServer::handle_goal, this, _1, _2),
        std::bind(&CarControlActionServer::handle_cancel, this, _1),
        std::bind(&CarControlActionServer::handle_accepted, this, _1)
      );
    }

    private:
      rclcpp_action::Server<Carcontrol>::SharedPtr action_server_;
      rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid,
        std::shared_ptr<const Carcontrol::Goal> goal
      )
      {
        RCLCPP_INFO(this->get_logger(), "Received goal request with direction %s", goal->direction.c_str());
        RCLCPP_INFO(this->get_logger(), "Received goal request with timestop %d", goal->timestop);
        
        if(goal->timestop <= 0){
          RCLCPP_WARN(this->get_logger(), "Invalid timestop. Rejecting goal.");
          return rclcpp_action::GoalResponse::REJECT;
        }
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
      }

      rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleCarcontrol> goal_handle) {
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        return rclcpp_action::CancelResponse::ACCEPT;
      }

      void handle_accepted(const std::shared_ptr<GoalHandleCarcontrol> goal_handle)
      {
        std::thread{std::bind(&CarControlActionServer::execute, this, goal_handle)}.detach();
      }

      void execute(const std::shared_ptr<GoalHandleCarcontrol> goal_handle)
      {
        RCLCPP_INFO(this->get_logger(), "Executing goal");
        
        const auto goal = goal_handle->get_goal(); //retrieves the goal
        auto feedback = std::make_shared<Carcontrol::Feedback>(); //shared pointer to a feedback message
        auto result = std::make_shared<Carcontrol::Result>();

        rclcpp::Rate loop_rate(1);

        for (int i = goal->timestop; i >= 0 && rclcpp::ok(); --i){
          if (goal_handle->is_canceling()){
            RCLCPP_INFO(this->get_logger(), "Goal canceled");
            result->result_msg = "Countdown canceled";
            goal_handle->canceled(result);
            return;
          }
        
        //Update feedback
        feedback->time_remaining.clear();
        for (int j = i; j >= 0; --j){
          feedback->time_remaining.push_back(j);
        }

        //Publish feedback
        goal_handle->publish_feedback(feedback);
        RCLCPP_INFO(this->get_logger(), "Publishing feedback: %d second remaining", i);

        //Sleep for 1 second
        loop_rate.sleep();
        }

        if (rclcpp::ok()){
          result->result_msg = "Countdown complete";
          goal_handle->succeed(result);
          RCLCPP_INFO(this->get_logger(), "Goal succeed: Countdown complete");
        }

        RCLCPP_INFO(this->get_logger(), "Waiting for next goal...");
        
      }

  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(carcontrol_cpp::CarControlActionServer)