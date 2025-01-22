#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <mutex>

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
        : Node("node_command"), speedlimit_(50) { // Default speed limit set to 50
        // Publisher for the "topic_speedlimit_t"
        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_speedlimit_t", 10);

        // Declare parameters
        this->declare_parameter<int>("speedlimit", static_cast<int>(speedlimit_));

        // Add parameter callback
        parameter_callback_handle_ = this->add_on_set_parameters_callback(
            std::bind(&Node_Command::on_parameter_change, this, std::placeholders::_1)
        );

        // Timer to periodically publish the speed limit
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(250), // Publish every 250ms
            std::bind(&Node_Command::publish_parameters, this)
        );

        RCLCPP_INFO(this->get_logger(), "Node initialized with default speed limit: %d", speedlimit_);
    }

private:
    // Callback for parameter changes
    rcl_interfaces::msg::SetParametersResult on_parameter_change(const std::vector<rclcpp::Parameter>& parameters) {
        rcl_interfaces::msg::SetParametersResult result;
        result.successful = true;

        for (const auto& param : parameters) {
            if (param.get_name() == "speedlimit") {
                int new_value = param.as_int();

                // Validate the speed limit range
                if (new_value < 10 || new_value > 100) {
                    result.successful = false;
                    result.reason = "speedlimit must be between 10 and 100.";
                    RCLCPP_WARN(this->get_logger(), "Invalid speedlimit value: %d", new_value);
                } else {
                    std::lock_guard<std::mutex> lock(parameter_mutex_);
                    speedlimit_ = static_cast<uint8_t>(new_value);
                    RCLCPP_INFO(this->get_logger(), "Speed limit updated to: %d", speedlimit_);
                }
            }
        }

        return result;
    }

    // Timer callback to publish parameters
    void publish_parameters() {
        uint8_t speed;
        {
            // Ensure thread-safe access to speedlimit_
            std::lock_guard<std::mutex> lock(parameter_mutex_);
            speed = speedlimit_;
        }

        // Create and publish the speed limit message
        auto speed_message = std_msgs::msg::String();
        speed_message.data = std::to_string(speed);
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_speedlimit: '%s'", speed_message.data.c_str());
        topic_speedlimit_publisher_->publish(speed_message);
    }

    // Member variables
    uint8_t speedlimit_;
    std::mutex parameter_mutex_; // Mutex for thread-safe access to parameters
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}
