#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using AddTwoInts = example_interfaces::srv::AddTwoInts;

class AddTwoIntsClient : public rclcpp::Node

{
public:
    AddTwoIntsClient() : Node("add_two_ints_client")
    {
        client_ = this->create_client<AddTwoInts>("add_two_ints");

        while (!client_->wait_for_service(std::chrono::seconds(1))) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "Service not available, waiting again...");
        }

        auto request = std::make_shared<AddTwoInts::Request>();
        request->a = 3;
        request->b = 5;

        auto future = client_->async_send_request(request);

        auto status = future.wait_for(std::chrono::seconds(5));
        if (status == std::future_status::ready) {
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "Result: %ld", response->sum);
        } else {
            RCLCPP_ERROR(this->get_logger(), "Service call timed out.");
        }

        // try {
        //     auto response = future.get();
        //     RCLCPP_INFO(this->get_logger(), "Result: %ld", response->sum);
        // } catch (const std::exception &e) {
        //     RCLCPP_ERROR(this->get_logger(), "Service call failed: %s", e.what());
        // }
    }

private:
    rclcpp::Client<AddTwoInts>::SharedPtr client_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AddTwoIntsClient>());
    rclcpp::shutdown();
    return 0;
}


