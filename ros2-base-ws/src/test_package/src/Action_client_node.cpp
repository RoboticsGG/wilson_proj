#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>

#include "test_package/action/fibonacci.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

namespace action_tutorials_cpp
{
class FibonacciActionClient : public rclcpp::Node
{
public:
  using Fibonacci = test_package::action::Fibonacci;
  using GoalHandleFibonacci = rclcpp_action::ClientGoalHandle<Fibonacci>;

/*************************************กำหนดโหนด***************************************************/
  explicit FibonacciActionClient(const rclcpp::NodeOptions & options)
  : Node("action_client_node", options)
/*****************************************************************************************************/
/*********************************สร้าง instance สำหรับดำเนินการให้ client********************************************************/
  {
    this->client_ptr_ = rclcpp_action::create_client<Fibonacci>(
      this,
      "fibonacci");
/*****************************************************************************************************/
/*************************timer กำหนดการเรียกใช้งาน send-goal********************************************************************/
    this->timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500),
      std::bind(&FibonacciActionClient::send_goal, this));
  }
/*****************************************************************************************************/
/******************************send_goal method**********************************************************/
/*cancels timer -> waits for action server -> instamtiates new Goal (Fibonacci Goal) ->
sets the response, feedback, and result callbacks -> sends the goal to the server*/
  void send_goal()
{
  using namespace std::placeholders;

  this->timer_->cancel();
  if (!this->client_ptr_->wait_for_action_server()) {
    RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
    rclcpp::shutdown();
  }

  auto goal_msg = Fibonacci::Goal();
  goal_msg.order = 10;

  RCLCPP_INFO(this->get_logger(), "Sending goal");

  auto send_goal_options = rclcpp_action::Client<Fibonacci>::SendGoalOptions();
  send_goal_options.goal_response_callback = 
    [this](std::shared_ptr<GoalHandleFibonacci> goal_handle) {
      if (!goal_handle) {
        RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
      } else {
        RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
      }
    };
  send_goal_options.feedback_callback = 
    [this](GoalHandleFibonacci::SharedPtr goal_handle, const std::shared_ptr<const Fibonacci::Feedback> feedback) {
      this->feedback_callback(goal_handle, feedback);
    };

  // Lambda for result_callback
  send_goal_options.result_callback = 
    [this](const GoalHandleFibonacci::WrappedResult & result) {
      this->result_callback(result);
    };

  this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
}
/*****************************************************************************************************/

private:
  rclcpp_action::Client<Fibonacci>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;

/******************response from server after server receives and accepts*******************************************************************/
  void goal_response_callback(std::shared_future<GoalHandleFibonacci::SharedPtr> future)
  {
    auto goal_handle = future.get();
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    } else {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
  }
/*****************************************************************************************************/
/*******************handle any feedback from server****************************************************************/
  void feedback_callback(
    GoalHandleFibonacci::SharedPtr,
    const std::shared_ptr<const Fibonacci::Feedback> feedback)
  {
    std::stringstream ss;
    ss << "Next number in sequence received: ";
    for (auto number : feedback->partial_sequence) {
      ss << number << " ";
    }
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
  }
/*****************************************************************************************************/
/*************handle result from server after server finished processing*************************************************************/
  void result_callback(const GoalHandleFibonacci::WrappedResult & result)
  {
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
        return;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
        return;
      default:
        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
        return;
    }
    std::stringstream ss;
    ss << "Result received: ";
    for (auto number : result.result->sequence) {
      ss << number << " ";
    }
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
    rclcpp::shutdown();
  }
};  // class FibonacciActionClient
/*****************************************************************************************************/

}  // namespace action_tutorials_cpp

RCLCPP_COMPONENTS_REGISTER_NODE(action_tutorials_cpp::FibonacciActionClient)