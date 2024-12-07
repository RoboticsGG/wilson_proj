#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/int32.hpp>
#include <sstream>
#include <vector>

class Motors_Rovercontrol {
public:
    int test(int a, int b) {
        return a + b;
    }
};

class Sub_Rovercontrol : public rclcpp::Node {
public:
    Sub_Rovercontrol() : Node("node_rovercontrol") {
        topic_speedlimit_subscription_ = this->create_subscription<std_msgs::msg::String>(
            "topic_speedlimit", 10,
            std::bind(&Sub_Rovercontrol::topic_speedlimit_callback, this, std::placeholders::_1)
        );

        topic_speedresult_publisher_ = this->create_publisher<std_msgs::msg::Int32>("pub_speedresult", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),  // Set interval to 1 second
            std::bind(&Sub_Rovercontrol::timer_callback, this)
        );

        RCLCPP_INFO(this->get_logger(), "Sub_Rovercontrol initialized and listening...");
    }

private:
    void topic_speedlimit_callback(const std_msgs::msg::String::SharedPtr msg) {
        speedlimit_message_ = msg->data;
        RCLCPP_INFO(this->get_logger(), "Received on topic_speedlimit: '%s'", speedlimit_message_.c_str());
    }

    void timer_callback() {
        if (!speedlimit_message_.empty()) {
            try {
                std::vector<int> values = parse_speedlimit_message(speedlimit_message_);
                if (values.size() == 2) {
                    Motors_Rovercontrol motor_controller;
                    int result = motor_controller.test(values[0], values[1]);  // Perform computation

                    auto result_msg = std::make_shared<std_msgs::msg::Int32>();
                    result_msg->data = result;

                    topic_speedresult_publisher_->publish(*result_msg);  // Publish result

                    RCLCPP_INFO(this->get_logger(), "Published speed result: '%d'", result);
                } else {
                    RCLCPP_WARN(this->get_logger(), "Expected two integers in the message but got: '%s'", speedlimit_message_.c_str());
                }
            } catch (const std::exception &e) {
                RCLCPP_WARN(this->get_logger(), "Error processing speed limit message: '%s'", speedlimit_message_.c_str());
            }
        } else {
            RCLCPP_INFO(this->get_logger(), "Waiting for messages on topic_speedlimit...");
        }
    }

    std::vector<int> parse_speedlimit_message(const std::string &message) {
        std::vector<int> result;
        std::stringstream ss(message);
        std::string token;

        while (std::getline(ss, token, ',')) {
            try {
                result.push_back(std::stoi(token));
            } catch (const std::invalid_argument &e) {
                RCLCPP_WARN(this->get_logger(), "Invalid token in message: '%s'", token.c_str());
            }
        }

        return result;
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_speedlimit_subscription_;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr topic_speedresult_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::string speedlimit_message_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Sub_Rovercontrol>());
    rclcpp::shutdown();
    return 0;
}
