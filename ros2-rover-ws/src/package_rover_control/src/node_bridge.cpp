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
        init_options_pub.set_domain_id(1);
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

// #include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/string.hpp"
// #include <msgs_mainrocon/msg/main_rocon.hpp>
// #include <msgs_rovercon/msg/sub_rocon.hpp>

// class NodeBridge : public rclcpp::Node {
//     public:
//         NodeBridge() : Node("node_bridge") {
//             rclcpp::Context::SharedPtr context_sub = std::make_shared<rclcpp::Context>();
//             rclcpp::InitOptions init_options_sub;
//             init_options_sub.set_domain_id(2);  // Domain ID 2 for Subscriber
//             context_sub->init(0, nullptr, init_options_sub);

//             sub_node_ = std::make_shared<rclcpp::Node>("sub_node", init_options_sub);
//             subscription_ = sub_node_->create_subscription<msgs_mainrocon::msg::MainRocon>(
//                 "pub_rovercontrol", 10, std::bind(&NodeBridge::topic_callback, this, std::placeholders::_1));

//             // Set Domain ID for Publisher
//             rclcpp::Context::SharedPtr context_pub = std::make_shared<rclcpp::Context>();
//             rclcpp::InitOptions init_options_pub;
//             init_options_pub.set_domain_id(1);  // Domain ID 1 for Publisher
//             context_pub->init(0, nullptr, init_options_pub);

//             pub_node_ = std::make_shared<rclcpp::Node>("pub_node", init_options_pub);
//             publisher_ = pub_node_->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol_d1", 10);

//             RCLCPP_INFO(this->get_logger(), "Combined node initialized (Sub: Domain 1, Pub: Domain 2)");

//             executor_.add_node(sub_node_);
//             executor_.add_node(pub_node_);
//             executor_thread_ = std::thread([this]() { executor_.spin(); });
//         }

//         ~NodeBridge()
//         {
//             executor_.cancel();
//             if (executor_thread_.joinable())
//                 executor_thread_.join();
//         }
        
//     private:
//         void topic_callback(const msgs_mainrocon::msg::MainRocon::SharedPtr msg)
//         {
//             RCLCPP_INFO(this->get_logger(), "Received on /pub_rovercontrol");

//             // Publish received message to /topic_b
//             auto new_mainmsg = msgs_mainrocon::msg::MainRocon();
//             auto new_msg = msgs_rovercon::msg::SubRocon();
        
//             new_msg.fdr_msg = msg->mainrocon_msg.fdr_msg;
//             new_msg.ro_ctrl_msg = msg->mainrocon_msg.ro_ctrl_msg;
//             new_msg.spd_msg = msg->mainrocon_msg.spd_msg;
//             new_msg.bdr_msg = msg->mainrocon_msg.bdr_msg;

//             new_mainmsg.mainrocon_msg = new_msg;

//             publisher_->publish(new_mainmsg);

//             RCLCPP_INFO(this->get_logger(), "Forwarded message to /pub_rovercontrol_d1: [%d, %.2f, %d, %d]", 
//                 new_mainmsg.mainrocon_msg.fdr_msg, 
//                 new_mainmsg.mainrocon_msg.ro_ctrl_msg, 
//                 new_mainmsg.mainrocon_msg.spd_msg, 
//                 new_mainmsg.mainrocon_msg.bdr_msg);
//         }

//         rclcpp::Node::SharedPtr sub_node_;
//         rclcpp::Node::SharedPtr pub_node_;
//         rclcpp::Subscription<msgs_mainrocon::msg::MainRocon>::SharedPtr subscription_;
//         rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr publisher_;
//         rclcpp::executors::MultiThreadedExecutor executor_;
//         std::thread executor_thread_;

// };
//     int main(int argc, char *argv[]) {
//         rclcpp::init(argc, argv);
//         auto node = std::make_shared<NodeBridge>();
//         rclcpp::spin(node);
//         rclcpp::shutdown();
//         return 0;
//     }
// #include <rclcpp/rclcpp.hpp>
// #include <msgs_mainrocon/msg/main_rocon.hpp>
// #include <queue>
// #include <mutex>
// #include <condition_variable>
// #include <thread>

// std::queue<msgs_mainrocon::msg::MainRocon::SharedPtr> message_queue;
// std::mutex queue_mutex;
// std::condition_variable queue_cv;

// void subscriber_thread() {
//     setenv("ROS_DOMAIN_ID", "2", 1); 

//     auto node = std::make_shared<rclcpp::Node>("domain_bridge_subscriber");
//     auto sub = node->create_subscription<msgs_mainrocon::msg::MainRocon>(
//         "pub_rovercontrol", 10,
//         [](const msgs_mainrocon::msg::MainRocon::SharedPtr msg) {
//             std::lock_guard<std::mutex> lock(queue_mutex);
//             message_queue.push(msg);
//             queue_cv.notify_one();
//             RCLCPP_INFO(rclcpp::get_logger("Domain 2"), "Received Message: [%d, %.2f, %d, %d]", 
//                         msg->mainrocon_msg.fdr_msg, 
//                         msg->mainrocon_msg.ro_ctrl_msg, 
//                         msg->mainrocon_msg.spd_msg, 
//                         msg->mainrocon_msg.bdr_msg);
//         }
//     );

//     rclcpp::spin(node);
// }


// void publisher_thread() {
//     setenv("ROS_DOMAIN_ID", "1", 1); 

//     auto node = std::make_shared<rclcpp::Node>("domain_bridge_publisher");
//     auto pub = node->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol_a", 10);

//     while (rclcpp::ok()) {
//         std::unique_lock<std::mutex> lock(queue_mutex);
//         queue_cv.wait(lock, [] { return !message_queue.empty(); });

//         auto msg = message_queue.front();
//         message_queue.pop();
//         lock.unlock();

//         RCLCPP_INFO(rclcpp::get_logger("Domain 1"), "Forwarding Message...");
//         pub->publish(*msg);
        
//         std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//     }
// }

// int main(int argc, char *argv[]) {
//     rclcpp::init(argc, argv); 

//     std::thread sub_thread(subscriber_thread);
//     std::thread pub_thread(publisher_thread);

//     sub_thread.join();
//     pub_thread.join();

//     rclcpp::shutdown(); 

//     return 0;
// }
