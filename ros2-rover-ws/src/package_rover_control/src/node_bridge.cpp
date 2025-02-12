#include <rclcpp/rclcpp.hpp>
#include <msgs_mainrocon/msg/main_rocon.hpp>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <thread>

// Shared queue to transfer messages between domains
std::queue<msgs_mainrocon::msg::MainRocon::SharedPtr> message_queue;
std::mutex queue_mutex;
std::condition_variable queue_cv;

// **Thread 1: Subscriber (Domain 2)**
void subscriber_thread() {
    setenv("ROS_DOMAIN_ID", "2", 1);
    rclcpp::init(0, nullptr);
    
    auto node = std::make_shared<rclcpp::Node>("domain_bridge_subscriber");
    auto sub = node->create_subscription<msgs_mainrocon::msg::MainRocon>(
        "pub_rovercontrol", 10,
        [](const msgs_mainrocon::msg::MainRocon::SharedPtr msg) {
            std::lock_guard<std::mutex> lock(queue_mutex);
            message_queue.push(msg);
            queue_cv.notify_one();
            RCLCPP_INFO(rclcpp::get_logger("Domain 2"), "Received Message: [%d, %.2f, %d, %d]", 
                        msg->mainrocon_msg.fdr_msg, 
                        msg->mainrocon_msg.ro_ctrl_msg, 
                        msg->mainrocon_msg.spd_msg, 
                        msg->mainrocon_msg.bdr_msg);
        }
    );

    rclcpp::spin(node);
    rclcpp::shutdown();
}

// **Thread 2: Publisher (Domain 1)**
void publisher_thread() {
    setenv("ROS_DOMAIN_ID", "1", 1);
    rclcpp::init(0, nullptr);

    auto node = std::make_shared<rclcpp::Node>("domain_bridge_publisher");
    auto pub = node->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol", 10);

    while (rclcpp::ok()) {
        std::unique_lock<std::mutex> lock(queue_mutex);
        queue_cv.wait(lock, [] { return !message_queue.empty(); });

        auto msg = message_queue.front();
        message_queue.pop();
        lock.unlock();

        RCLCPP_INFO(rclcpp::get_logger("Domain 1"), "Forwarding Message...");
        pub->publish(*msg);
        
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    rclcpp::shutdown();
}

int main(int argc, char *argv[]) {

    void argc;
    void argv;
    std::thread sub_thread(subscriber_thread);
    std::thread pub_thread(publisher_thread);

    sub_thread.join();
    pub_thread.join();

    return 0;
}
