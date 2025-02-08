#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/float64.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>

#include <string>
#include <mutex>

#include <msgs_rovercon/msg/sub_rocon.hpp>
#include <msgs_mainrocon/msg/main_rocon.hpp>
#include <ifaces_rover/srv/spd_limit.hpp>

// class Motors_Rovercontrol {
// public:
//     int test(int a, int b){
//         return a+b; //เขียนประมวลผลค่าเพื่อควบคุม rover เผื่อถ้าบน mbed เขียนยาก
//     }
// };

class Node_Rovercontrol : public rclcpp::Node {
public:
    Node_Rovercontrol() : Node("node_rovercontrol") {
        spd_service_ = this->create_service<ifaces_rover::srv::SpdLimit>("spd_limit",
            std::bind(&Node_Rovercontrol::handle_spd_request, this, std::placeholders::_1, std::placeholders::_2)
        );

        topic_direct_sub_ = this->create_subscription<std_msgs::msg::Float32MultiArray>(
            "topic_direction", 10,
            std::bind(&Node_Rovercontrol::topic_direct_callback, this, std::placeholders::_1)
        );

        topic_rocon_pub_ = this->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(2), 
            std::bind(&Node_Rovercontrol::timer_callback, this)
        );
        RCLCPP_INFO(this->get_logger(), "Version : A");
        RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized and listening...");
    }

private:
    void topic_direct_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg) {
    if (msg->data.size() >= 2) {
        std::lock_guard<std::mutex> lock(data_lock_);
        if (msg->data[0] != ro_ctrl_msg1_ || msg->data[1] != ro_ctrl_msg2_) {
            ro_ctrl_msg1_ = msg->data[0];
            ro_ctrl_msg2_ = msg->data[1];
            //RCLCPP_INFO(this->get_logger(), "Received on topic_direction: x = %.2f, y = %.2f", ro_ctrl_msg1_, ro_ctrl_msg2_);
        }
    } else {
        RCLCPP_WARN(this->get_logger(), "Received insufficient data on topic_direction.");
        }
    }

    void handle_spd_request(const std::shared_ptr<ifaces_rover::srv::SpdLimit::Request> request,
                            std::shared_ptr<ifaces_rover::srv::SpdLimit::Response> response) {
        std::lock_guard<std::mutex> lock(data_lock_);
        spd_msg_ = request->rover_spd;
        response->spd_result = "Speed Limit set to " + std::to_string(request->rover_spd);
        RCLCPP_INFO(this->get_logger(), "Speed Limit set to %d", request->rover_spd);
    }



    void timer_callback() {
        auto subrocon = msgs_rovercon::msg::SubRocon();
        auto mainrocon = msgs_mainrocon::msg::MainRocon();

        subrocon.fdr_msg = static_cast<uint8_t>(ro_ctrl_msg1_);
        subrocon.ro_ctrl_msg = ro_ctrl_msg2_;
        subrocon.spd_msg = spd_msg_;
        subrocon.bdr_msg = 1;

        mainrocon.mainrocon_msg = subrocon;
        topic_rocon_pub_->publish(mainrocon);

        RCLCPP_INFO(this->get_logger(), "Publishing to pub_rovercontrol: [%d, %.2f, %d, %.d]", mainrocon.mainrocon_msg.fdr_msg, mainrocon.mainrocon_msg.ro_ctrl_msg, mainrocon.mainrocon_msg.spd_msg, mainrocon.mainrocon_msg.bdr_msg);
        RCLCPP_INFO(this->get_logger(), "################################################");
  }

    rclcpp::Service<ifaces_rover::srv::SpdLimit>::SharedPtr spd_service_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr topic_direct_sub_;
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr topic_rocon_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    //std::vector<float> ro_ctrl_msg_;
    float ro_ctrl_msg1_;
    float ro_ctrl_msg2_;
    uint8_t spd_msg_;

    std::mutex data_lock_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Rovercontrol>());
    rclcpp::shutdown();
    return 0;
}