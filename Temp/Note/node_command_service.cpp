#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <service_ifaces/srv/des_data.hpp>
#include <service_ifaces/srv/spd_limit.hpp>
#include <cstdlib>
#include <ctime>

class Node_Command : public rclcpp::Node {
public:
    Node_Command(float rover_spd, float des_lat, float des_long)
    : Node("node_command"), rover_spd_(rover_spd), des_lat_(des_lat), des_long_(des_long) {
        spd_client_ = this->create_client<service_ifaces::srv::SpdLimit>("spd_limit");
        des_client_ = this->create_client<service_ifaces::srv::DesData>("des_data");

        RCLCPP_INFO(this->get_logger(), "Command Node is running...");
        send_service_requests();
    }

private:
    rclcpp::Client<service_ifaces::srv::SpdLimit>::SharedPtr spd_client_;
    rclcpp::Client<service_ifaces::srv::DesData>::SharedPtr des_client_;
    float rover_spd_;
    float des_lat_;
    float des_long_;

    void send_service_requests() {
    auto speed_request = std::make_shared<service_ifaces::srv::SpdLimit::Request>();
    speed_request->rover_spd = rover_spd_;

    auto destination_request = std::make_shared<service_ifaces::srv::DesData::Request>();
    destination_request->des_lat = des_lat_;
    destination_request->des_long = des_long_;

    // Call Speed Service asynchronously
    if (spd_client_->wait_for_service(std::chrono::seconds(2))) {
        auto future = spd_client_->async_send_request(speed_request,
            [this](rclcpp::Client<service_ifaces::srv::SpdLimit>::SharedFuture future_result) {
                if (future_result.valid()) {
                    RCLCPP_INFO(this->get_logger(), "Speed Service Response: %s", future_result.get()->spd_result.c_str());
                } else {
                    RCLCPP_WARN(this->get_logger(), "Failed to receive Speed Service response.");
                }
            });
    } else {
        RCLCPP_WARN(this->get_logger(), "Speed Service unavailable.");
    }

    // Call Destination Service asynchronously
    if (des_client_->wait_for_service(std::chrono::seconds(2))) {
        auto future = des_client_->async_send_request(destination_request,
            [this](rclcpp::Client<service_ifaces::srv::DesData>::SharedFuture future_result) {
                if (future_result.valid()) {
                    RCLCPP_INFO(this->get_logger(), "Destination Service Response: %s", future_result.get()->result_fser.c_str());
                } else {
                    RCLCPP_WARN(this->get_logger(), "Failed to receive Destination Service response.");
                }
            });
    } else {
        RCLCPP_WARN(this->get_logger(), "Destination Service unavailable.");
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