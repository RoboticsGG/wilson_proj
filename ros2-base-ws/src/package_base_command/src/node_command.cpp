#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <ifaces_base/srv/des_data.hpp>
#include <ifaces_base/srv/spd_limit.hpp>
#include <cstdlib>
#include <ctime>

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command") {
        spd_client_ = this->create_client<ifaces_base::srv::SpdLimit>("spd_limit");
        des_client_ = this->create_client<ifaces_base::srv::DesData>("des_data");

        // timer_ = this->create_wall_timer(
        //     std::chrono::seconds(1), 
        //     std::bind(&Node_Command::publish_parameters, this)
        // );

        RCLCPP_INFO(this->get_logger(), "Command Node is running...");
    }

private:
    rclcpp::Client<ifaces_base::srv::SpdLimit>::SharedPtr spd_client_;
    rclcpp::Client<ifaces_base::srv::DesData>::SharedPtr des_client_;
    rclcpp::TimerBase::SharedPtr timer_;

    void send_service_requests(){
        auto speed_request = std::make_shared<ifaces_base::srv::SpdLimit::Request>();
        speed_request->rover_spd = 30;

        auto destination_request = std::make_shared<ifaces_base::srv::DesData::Request>();
        destination_request->des_lat = 0.00;
        destination_request->des_long = 0.00;

        if (spd_client_->wait_for_service(std::chrono::seconds(2))) {
            auto future = spd_client_->async_send_request(speed_request);
            future.then([this](decltype(future) result) {
                if (result.valid()) {
                    RCLCPP_INFO(this->get_logger(), "Speed Service Response: %s", result.get()->spd_result.c_str());
                }
            });
        } else {
            RCLCPP_WARN(this->get_logger(), "Speed Service unavailable.");
        }
    
        if (des_client_->wait_for_service(std::chrono::seconds(2))) {
            auto future = des_client_->async_send_request(destination_request);
            future.then([this](decltype(future) result) {
                if (result.valid()) {
                    RCLCPP_INFO(this->get_logger(), "Destination Service Response: %s", result.get()->result_fser.c_str());
                }
            });
        } else {
            RCLCPP_WARN(this->get_logger(), "Destination Service unavailable.");
        }
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}