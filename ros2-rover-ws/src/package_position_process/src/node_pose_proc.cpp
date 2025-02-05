#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>

#include <msgs_positions/msg/gnss_data.hpp>

class PoseProcessor : public rclcpp::Node {
public:
    PoseProcessor() : Node("pose_processor") {
        des_pose_sub_ = this->create_subscription<std_msgs::msg::Float32MultiArray>(
            "topic_destination", 10,
            std::bind(&PoseProcessor::topic_des_callback, this, std::placeholders::_1)
        );
        cur_pose_sub_ = this->create_subscription<msgs_positions::msg::GnssData>(
            "gnss_data", 10,
            std::bind(&PoseProcessor::topic_cur_callback, this, std::placeholders::_1)
        );

        // timer_ = this->create_wall_timer(
        //     std::chrono::seconds(1), 
        //     std::bind(&PoseProcessor::processData, this)
        // );
    }

private:
    rclcpp::Publisher<msgs_positions::msg::GnssData>::SharedPtr publisher_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr des_pose_sub_;
    rclcpp::Subscription<msgs_positions::msg::GnssData>::SharedPtr cur_pose_sub_;
    rclcpp::TimerBase::SharedPtr timer_;

    // void processData() {
    //     pass;
    // }

    void topic_des_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg){
        if (msg->data.size()>=3) {
            if (destination_a_ != msg->data[0] || destination_b_ != msg->data[1] ){
                destination_a_ = msg->data[0];
                destination_b_ = msg->data[1];
                RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %.2f, b = %.2f", destination_a_, destination_b_;
            } else {
            //RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %.2f, b = %.2f, c = %.2f", destination_a_, destination_b_, destination_c_);
        }} else {
            RCLCPP_WARN(this->get_logger(), "Received insufficient data on topic_destination.");
        }
    }

    void topic_cur_callback(const msgs_positions::msg::GnssData::SharedPtr msg) {

        auto cur_pose_msg = msgs_positions::msg::GnssData();
        cur_pose_msg.date = msg->date;
        cur_pose_msg.time = msg->time;
        cur_pose_msg.num_satellites = msg->num_satellites;
        cur_pose_msg.fix = msg->fix;
        cur_pose_msg.latitude = msg->latitude;
        cur_pose_msg.longitude = msg->longitude;

        RCLCPP_INFO(this->get_logger(), "Received GNSS Data: Date=%s, Time=%s, Sat=%d, Fix=%d, Lat=%f, Lon=%f",
                    cur_pose_msg.date.c_str(), cur_pose_msg.time.c_str(), cur_pose_msg.num_satellites, cur_pose_msg.fix, cur_pose_msg.latitude, cur_pose_msg.longitude);

        
    }

    float destination_a_;
    float destination_b_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PoseProcessor>());
    rclcpp::shutdown();
    return 0;
}