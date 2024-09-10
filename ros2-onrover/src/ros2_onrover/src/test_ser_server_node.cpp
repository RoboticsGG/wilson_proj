#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

#include <memory>

void add(const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> request,
        std::shared_ptr<example_interfaces::srv::AddTwoInts::Response> response)
    {
        response->sum = request->a + request->b;
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld" " b: %ld", request->a, request->b);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sending back response: [%ld]", (long int)response->sum);
    }

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_two_ints_server");

    rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr service = 
      node->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", &add);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints.");

    rclcpp::spin(node);
    rclcpp::shutdown();

}

// using AddTwoInts = example_interfaces::srv::AddTwoInts;

// class AddTwoIntsService : public rclcpp::Node
// {
// public:
//     AddTwoIntsService() : Node("add_two_ints_service")
//     {
//         service_ = this->create_service<AddTwoInts>(
//             "add_two_ints",
//             std::bind(&AddTwoIntsService::handle_add_two_ints, this, std::placeholders::_1, std::placeholders::_2)
//         );

//         RCLCPP_INFO(this->get_logger(), "Service ready to add two ints.");
//     }

// private:
//     void handle_add_two_ints(const std::shared_ptr<AddTwoInts::Request> request,
//                              std::shared_ptr<AddTwoInts::Response> response)
//     {
//         response->sum = request->a + request->b;
//         RCLCPP_INFO(this->get_logger(), "Incoming request\na: %ld b: %ld", request->a, request->b);
//         RCLCPP_INFO(this->get_logger(), "Sending back response: [%ld]", response->sum);
//     }

//     rclcpp::Service<AddTwoInts>::SharedPtr service_;
// };

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AddTwoIntsService>());
    rclcpp::shutdown();
    return 0;
}

