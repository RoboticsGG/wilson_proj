#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <cstdlib>
#include <ctime>
#include <mutex>

uint8_t speedlimit_ = 0;
int des_a_ = 0;
int des_b_ = 0;

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command") {

        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_speedlimit_t", 10);

        this->declare_parameter<int>("speedlimit", static_cast<int>(speedlimit_));
        this->declare_parameter<int>("des_a", des_a_);
        this->declare_parameter<int>("des_b", des_b_);

        parameter_callback_handle_ = this->add_on_set_parameters_callback(
            std::bind(&Node_Command::on_parameter_change, this, std::placeholders::_1)
        );

        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&Node_Command::publish_parameters, this)
        );

        RCLCPP_INFO(this->get_logger(), "Version : A");
    }

private:
    rcl_interfaces::msg::SetParametersResult on_parameter_change(
        const std::vector<rclcpp::Parameter> &parameters) {
        rcl_interfaces::msg::SetParametersResult result;
        result.successful = true;

        for (const auto &param : parameters) {
            if (param.get_name() == "speedlimit") {
                int new_value = param.as_int();
                if (new_value < 10 || new_value > 100) {
                    result.successful = false;
                    result.reason = "speedlimit must be between 10 and 100.";
                } else {
                    std::lock_guard<std::mutex> lock(parameter_mutex_);
                    speedlimit_ = static_cast<uint8_t>(new_value);
                    RCLCPP_INFO(this->get_logger(), "Updated speedlimit to %d", speedlimit_);
                }
            }
        }

        return result;
    }

    void publish_parameters() {
        uint8_t speed;
        {
            std::lock_guard<std::mutex> lock(parameter_mutex_);
            speed = speedlimit_;
        }

        auto speed_message = std_msgs::msg::String();
        speed_message.data = std::to_string(speed);
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_speedlimit: '%s'", speed_message.data.c_str());
        topic_speedlimit_publisher_->publish(speed_message);
    }

    std::mutex parameter_mutex_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}
