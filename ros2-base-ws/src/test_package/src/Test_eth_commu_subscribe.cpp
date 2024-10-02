#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/trigger.hpp>
#include <chrono>

using namespace std::chrono_literals;

class EthernetClient : public rclcpp::Node {
public:
    EthernetClient() : Node("ethernet_client") {
        client_ = this->create_client<std_srvs::srv::Trigger>("send_text");
        timer_ = this->create_wall_timer(
            2000ms, std::bind(&EthernetClient::send_request, this));
    }

private:
    void send_request() {
        auto request = std::make_shared<std_srvs::srv::Trigger::Request>();
        auto result_future = client_->async_send_request(request);

        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future) ==
            rclcpp::FutureReturnCode::SUCCESS) {
            RCLCPP_INFO(this->get_logger(), "Result: %s", result_future.get()->message.c_str());
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to call service send_text");
        }
    }
    rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr client_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EthernetClient>());
    rclcpp::shutdown();
    return 0;
}
