#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/trigger.hpp"
#include "chrono"

using namespace std::chrono_literals;

class EthernetRequest
: public rclcpp::Node {
    public:
        EthernetRequest() : Node("ethernet_request") {
            request_ = this->create_client<std_srvs::srv::Trigger>("send_text");
            timer_ = this->create_wall_timer(
                2000ms, std::bind(&EthernetRequest::send_request, this));
        }

    private:
        void send_request() {
            auto request = std::make_shared<std_srvs::srv::Trigger::Request>();
            auto result_future = request_->async_send_request(request);

            if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future) ==
                rclcpp::FutureReturnCode::SUCCESS) {
                RCLCPP_INFO(this->get_logger(), "Result: %s", result_future.get()->message.c_str());
            } else {
                RCLCPP_ERROR(this->get_logger(), "Failed to call service send_text");
            }
        }
        rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr request_;
        rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EthernetRequest>());
    rclcpp::shutdown();
    return 0;
}