#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <chrono>
#include <memory>
#include <string>
#include <mutex>
#include <msgs_rovercon/msg/sub_rocon.hpp>
#include <msgs_mainrocon/msg/main_rocon.hpp>


class PubNode : public rclcpp::Node {
public:
    PubNode() : Node("test_pub") {
      topic_rocon_pub_ = this->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol_way1", 10);

      timer_ = this->create_wall_timer(
        std::chrono::seconds(2), 
        std::bind(&PubNode::timer_callback, this)
    );
      RCLCPP_INFO(this->get_logger(), "Version : A");
    }

private:
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr topic_rocon_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    std::mutex data_lock_;

    void timer_callback() {
      auto subrocon = msgs_rovercon::msg::SubRocon();
      auto mainrocon = msgs_mainrocon::msg::MainRocon();
      
      {
          std::lock_guard<std::mutex> lock(data_lock_);

          subrocon.fdr_msg = 2;
          subrocon.ro_ctrl_msg = 12.20;
          subrocon.spd_msg = 20;
          subrocon.bdr_msg = 2; // 1 = fw, 2 = bw, 0 = stop.
          
          mainrocon.mainrocon_msg = subrocon;
      }
      topic_rocon_pub_->publish(mainrocon);
    }
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PubNode>());
    rclcpp::shutdown();
    return 0;
}
