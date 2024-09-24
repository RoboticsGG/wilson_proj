#include <cstdio>
#include <future>
#include <memory>
#include <string>
#include <sstream>

#include "base_command_package/action/carcontrol.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macrp.hpp"

#include "base_command_package/msg/visibility_control.h"

namespace carcontrol_cpp
{
class CarControlActionClient : public rclcpp::Node
{
    public:
      using Carcontrol = base_command_package::action::Carcontrol;
      using GoalHandleCarcontrol = rclcpp_action::ClientGoalHandle<Carcontrol>

      explicit CarControlActionClient(const rclcpp::NodeOptions & options)
      : Node("carcontrol_client_node", options)
      {
        this->client_ptr_ = rclcpp_action::create_client<Carcontrol>(
            this,
            "carcontrol");

        this->timer_ = this->create_wall_timer(
            std::chrono::millisecond(500),
            std::bind(&CarControlActionClient::send_goal, this)
        )
      }

      void send_goal(){
        using namespace std::placeholder;

        this->timer_->cancel();
        if (!this->client_ptr_->wait_for_action_server()){
            RCLCPP_ERROR(this->get_logger(), "Action server not available");
            rclcpp::shutdown();
        }

        auto goal_msg = Carcontrol::Goal();
        goal_msg.direction = "FW"
        goal_msg.timestop = 10

        RCLCPP_INFO(this->get_logger(), "Sending goal");

        auto send_goal_options = rclcpp_action::Client<Carcontrol>::SendGoalOptions();
        send_goal_options.goal_response_callback =
            [this](std::shared_ptr<GoalHandleCarcontrol> goal_handle){
                if (!goal_handle) {
                    RCLCPP_ERROR(this->get_logger(), "Goal was reject");
                } else {
                    RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
                }
            };

        send_goal_options.feedback_callback =
            [this](GoalHandleCarcontrol::SharedPtr goal_handle, const std::shared_ptr<const Carcontrol::Feedback> feedback){
                this->feedback_callback(goal_handle, feedback);
            };

        send_goal_options.result_callback =
            [this](const GoalHandleCarcontrol::WrappedResult & result) {
                this->result_callback(result);
            };

        this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
      }

      private:
        rclcpp_action::Client<Carcontrol>::SharedPtr client_ptr_;
        rclcpp::TimerBase::SharedPtr timer_;

        void goal_response_callback(std::shared_future<GoalHandleCarcontrol::SharedPtr> future){
            auto goal_handle = future.get();
            if (!goal_handle){
                RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
            }
            else {
                RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
            }
        }

        void feedback_callback(
            GoalHandleCarcontrol::SharedPtr,
            const std::shared_ptr<const Carcontrol::Feedback> feedback
        )
        {
            std::stringstream ss;
            ss << "Time Remaining: ";
            for (auto times : feedback->time_remaining){
                ss << times << " ";
            }
            RCLCPP_INFO(this->get_logger(), ss,str().c_str());
        }

        void result_callback(const GoalHandleCarcontrol::WrappedResult & result)
        {
            switch (result.code){
                case rclcpp_action::ResultCode::SUCCEEDED:
                    break;
                case rclcpp_action::ResultCode::ABORTED:
                    RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
                    return;
                case rclcpp_action::ResultCode::CANCELLED:
                    RCLCPP_ERROR(this->get_logger(), "Unknown result code");
                    return;
            }
            std::stringstream ss;
            ss << "Result received: ";\
            for (auto remsg : result.result->result_msg){
                ss << remsg << " ";
            }
            RCLCPP_INFO(this->get_logger(), ss.str().c_str());
            rclcpp::shutdown();
        }

};

}

RCLCPP_COMPONENTS_REGISTER_NODE(carcontrol_cpp::CarControlActionClient)