#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    if (argc != 3) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: add_two_ints_client X Y");
        return 1;
    }

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_two_ints_client");
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr client = node->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");

    auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    request-> a = atoll(argv[1]);
    request-> b = atoll(argv[2]);

    while (!client->wait_for_service(1s)){
        if (!rclcpp::ok()){
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
    }

    auto result = client->async_send_request(request);

    if (rclcpp::spin_until_future_complte(node, result) == rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %ld", result.get()->sum);
    }
    else 
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
    }

    rclcpp::shutdown();
    return 0;
}

// using AddTwoInts = example_interfaces::srv::AddTwoInts;

// class AddTwoIntsClient : public rclcpp::Node

// {
// public:
//     AddTwoIntsClient() : Node("add_two_ints_client")
//     {
//         client_ = this->create_client<AddTwoInts>("add_two_ints");

//         while (!client_->wait_for_service(std::chrono::seconds(1))) {
//             if (!rclcpp::ok()) {
//                 RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
//                 return;
//             }
//             RCLCPP_INFO(this->get_logger(), "Service not available, waiting again...");
//         }

//         auto request = std::make_shared<AddTwoInts::Request>();
//         request->a = 3;
//         request->b = 5;
// RCLCPP_ERROR(this->get_logger(), "Service call timed out.");
//         }

//         // try {
//         //     auto response = future.get();
//         //     RCLCPP_INFO(this->get_logger(), "Result: %ld", response->sum);
//         // } catch (const std::exception &e) {
//         //     RCLCPP_ERROR(this->get_logger(), "Service call failed: %s", e.what());
//         // }
//     }

// private:
//     rclcpp::Client<AddTwoInts>::SharedPtr client_;
// };
//         auto future = client_->async_send_request(request);

//         auto status = future.wait_for(std::chrono::seconds(5));
//         if (status == std::future_status::ready) {
//             auto response = future.get();
//             RCLCPP_INFO(this->get_logger(), "Result: %ld", response->sum);
//         } else {
            

// int main(int argc, char **argv)
// {
//     rclcpp::init(argc, argv); //Initialzes ROS2 C++ client library
//     rclcpp::spin(std::make_shared<AddTwoIntsClient>());
//     rclcpp::shutdown();
//     return 0;
// }


