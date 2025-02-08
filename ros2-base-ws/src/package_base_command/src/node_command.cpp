#include <rclcpp/rclcpp.hpp>
#include "rclcpp_action/rclcpp_action.hpp"
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <action_ifaces/action/des_data.hpp>
#include <service_ifaces/srv/spd_limit.hpp>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <future>

class Node_Command : public rclcpp::Node {
public:
    using DesData = action_ifaces::action::DesData; 
    using GoalHandleDesData = rclcpp_action::ClientGoalHandle<DesData>;

    Node_Command(float rover_spd, float des_lat, float des_long)
    : Node("node_command"), rover_spd_(rover_spd), des_lat_(des_lat), des_long_(des_long) {
        spd_client_ = this->create_client<service_ifaces::srv::SpdLimit>("spd_limit");
        
        des_client_ = rclcpp_action::create_client<DesData>(this, "des_data");

        RCLCPP_INFO(this->get_logger(), "Command Node is running...");
        send_service_requests();
    }

private:
    rclcpp::Client<service_ifaces::srv::SpdLimit>::SharedPtr spd_client_;
    rclcpp_action::Client<DesData>::SharedPtr des_client_;
    float rover_spd_;
    float des_lat_;
    float des_long_;

    void send_service_requests() {
        auto speed_request = std::make_shared<service_ifaces::srv::SpdLimit::Request>();
        speed_request->rover_spd = rover_spd_;

        if (spd_client_->wait_for_service(std::chrono::seconds(2))) {
            auto future = spd_client_->async_send_request(speed_request,
                std::bind(&Node_Command::handle_speed_response, this, std::placeholders::_1));
        } else {
            RCLCPP_WARN(this->get_logger(), "Speed Service unavailable.");
        }

        if (!des_client_->wait_for_action_server(std::chrono::seconds(2))) {
            RCLCPP_WARN(this->get_logger(), "Destination Action server is not available.");
            return;
        }

        auto goal_msg = DesData::Goal();
        goal_msg.des_lat = des_lat_;
        goal_msg.des_long = des_long_;

        RCLCPP_INFO(this->get_logger(), "Sending destination goal...");

        rclcpp_action::Client<DesData>::SendGoalOptions send_goal_options;
        send_goal_options.goal_response_callback = std::bind(&Node_Command::goal_response_callback, this, std::placeholders::_1);
        send_goal_options.feedback_callback = std::bind(&Node_Command::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
        send_goal_options.result_callback = std::bind(&Node_Command::result_callback, this, std::placeholders::_1);

        des_client_->async_send_goal(goal_msg, send_goal_options);
    }

    void handle_speed_response(rclcpp::Client<service_ifaces::srv::SpdLimit>::SharedFuture future_result) {
        if (future_result.valid()) {
            RCLCPP_INFO(this->get_logger(), "Speed Service Response: %s", future_result.get()->spd_result.c_str());
        } else {
            RCLCPP_WARN(this->get_logger(), "Failed to receive Speed Service response.");
        }
    }

    void goal_response_callback(std::shared_future<GoalHandleDesData::SharedPtr> future) {
        auto goal_handle = future.get();
        if (!goal_handle) {
            RCLCPP_ERROR(this->get_logger(), "Destination Action goal was rejected.");
        } else {
            RCLCPP_INFO(this->get_logger(), "Destination Action goal accepted.");
        }
    }

    void feedback_callback(GoalHandleDesData::SharedPtr, const std::shared_ptr<const DesData::Feedback> feedback) {
        RCLCPP_INFO(this->get_logger(), "Remaining Distance: %.2f km", feedback->dis_remain);
    }

    void result_callback(const GoalHandleDesData::WrappedResult &result) {
        if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
            RCLCPP_INFO(this->get_logger(), "Destination Action Result: %s", result.result->result_fser.c_str());
        } else {
            RCLCPP_ERROR(this->get_logger(), "Destination Action failed.");
        }
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    
    if (argc != 4) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Usage: node_command <rover_spd> <des_lat> <des_long>");
        return 1;
    }
    
    float rover_spd = std::stof(argv[1]);
    float des_lat = std::stof(argv[2]);
    float des_long = std::stof(argv[3]);
    
    rclcpp::spin(std::make_shared<Node_Command>(rover_spd, des_lat, des_long));
    rclcpp::shutdown();
    return 0;
}