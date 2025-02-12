#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <msgs_mainrocon/msg/main_rocon.hpp>
#include <msgs_rovercon/msg/sub_rocon.hpp>

class NodeBridge : public rclcpp::Node {
public:
    NodeBridge() : Node("node_bridge") {
        // Initialize context for subscriber (Domain ID 2)
        rclcpp::InitOptions init_options_sub;
        init_options_sub.set_domain_id(2);
        rclcpp::Context::SharedPtr context_sub = std::make_shared<rclcpp::Context>();
        context_sub->init(0, nullptr, init_options_sub);

        rclcpp::NodeOptions node_options_sub;
        node_options_sub.context(context_sub);
        sub_node_ = std::make_shared<rclcpp::Node>("sub_node", node_options_sub);

        subscription_ = sub_node_->create_subscription<msgs_mainrocon::msg::MainRocon>(
            "pub_rovercontrol", 10, std::bind(&NodeBridge::topic_callback, this, std::placeholders::_1));

        // Initialize context for publisher (Domain ID 1)
        rclcpp::InitOptions init_options_pub;
        init_options_pub.set_domain_id(5);
        rclcpp::Context::SharedPtr context_pub = std::make_shared<rclcpp::Context>();
        context_pub->init(0, nullptr, init_options_pub);

        rclcpp::NodeOptions node_options_pub;
        node_options_pub.context(context_pub);
        pub_node_ = std::make_shared<rclcpp::Node>("pub_node", node_options_pub);

        publisher_ = pub_node_->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol_d1", 10);

        RCLCPP_INFO(this->get_logger(), "NodeBridge initialized (Subscriber: Domain 2, Publisher: Domain 1)");

        // Add nodes to executor and spin in separate thread
        executor_.add_node(sub_node_);
        executor_.add_node(pub_node_);
        executor_thread_ = std::thread([this]() { executor_.spin(); });
    }

    ~NodeBridge() {
        executor_.cancel();
        if (executor_thread_.joinable())
            executor_thread_.join();
    }

private:
    void topic_callback(const msgs_mainrocon::msg::MainRocon::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received on /pub_rovercontrol");

        auto new_mainmsg = msgs_mainrocon::msg::MainRocon();
        auto new_msg = msgs_rovercon::msg::SubRocon();

        new_msg.fdr_msg = msg->mainrocon_msg.fdr_msg;
        new_msg.ro_ctrl_msg = msg->mainrocon_msg.ro_ctrl_msg;
        new_msg.spd_msg = msg->mainrocon_msg.spd_msg;
        new_msg.bdr_msg = msg->mainrocon_msg.bdr_msg;

        new_mainmsg.mainrocon_msg = new_msg;

        publisher_->publish(new_mainmsg);

        RCLCPP_INFO(this->get_logger(), "Forwarded message to /pub_rovercontrol_d1: [%d, %.2f, %d, %d]", 
            new_mainmsg.mainrocon_msg.fdr_msg, 
            new_mainmsg.mainrocon_msg.ro_ctrl_msg, 
            new_mainmsg.mainrocon_msg.spd_msg, 
            new_mainmsg.mainrocon_msg.bdr_msg);
    }

    rclcpp::Node::SharedPtr sub_node_;
    rclcpp::Node::SharedPtr pub_node_;
    rclcpp::Subscription<msgs_mainrocon::msg::MainRocon>::SharedPtr subscription_;
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr publisher_;
    rclcpp::executors::MultiThreadedExecutor executor_;
    std::thread executor_thread_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NodeBridge>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}