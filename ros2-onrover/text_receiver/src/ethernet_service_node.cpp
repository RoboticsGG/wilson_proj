#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/trigger.hpp"

class EthernetService : public rclcpp::Node
{
public:
    EthernetService()
    : Node("ethernet_service")
    {
        service_ = this->create_service<std_srvs::srv::Trigger>(
            "send_text", std::bind(&EthernetService::handle_service, this, std::placeholders::_1, std::placeholders::_2));
    }

private:
    void handle_service(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
    std::shared_ptr<std_srvs::srv::Trigger::Response> response)
    {
    (void)request;
    response->success = true;
    response->message = "Hello from Rpi_Rover";
    RCLCPP_INFO(this->get_logger(), "Incoming request");
    }
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr service_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EthernetService>());
    rclcpp::shutdown();
    return 0;
}