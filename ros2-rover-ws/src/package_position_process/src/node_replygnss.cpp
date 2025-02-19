#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <msgs_ifaces/msg/gnss_data.hpp>
#include <fstream>
#include <sstream>
#include <vector>
#include <thread>
#include <chrono>

class Node_ReplyGnss : public rclcpp::Node {
public:
    Node_ReplyGnss() : Node("pose_processor"), current_index_(0) {
        gnss_publisher_ = this->create_publisher<msgs_ifaces::msg::GnssData>("gnss_data", 10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1), std::bind(&Node_ReplyGnss::publishGnssData, this)
        );

        loadCsvData("/home/curry/wilson_proj/gnss_data_demo.csv");
    }

private:
    rclcpp::Publisher<msgs_ifaces::msg::GnssData>::SharedPtr gnss_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::vector<msgs_ifaces::msg::GnssData> gnss_data_;
    size_t current_index_;

    void loadCsvData(const std::string& file_path) {
        std::ifstream file(file_path);
        if (!file.is_open()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to open GNSS data file: %s", file_path.c_str());
            return;
        }

        std::string line;
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string date, time, num_satellites, fix, latitude, longitude;
            
            std::getline(ss, date, ',');
            std::getline(ss, time, ',');
            std::getline(ss, num_satellites, ',');
            std::getline(ss, fix, ',');
            std::getline(ss, latitude, ',');
            std::getline(ss, longitude, ',');

            msgs_ifaces::msg::GnssData gnss_msg;
            gnss_msg.date = date;
            gnss_msg.time = time;
            gnss_msg.num_satellites = std::stoi(num_satellites);
            gnss_msg.fix = (fix == "true" || fix == "1");
            gnss_msg.latitude = std::stod(latitude);
            gnss_msg.longitude = std::stod(longitude);

            gnss_data_.push_back(gnss_msg);
        }

        file.close();
        RCLCPP_INFO(this->get_logger(), "Loaded %zu GNSS data entries from CSV.", gnss_data_.size());
    }

    void publishGnssData() {
        if (gnss_data_.empty()) {
            RCLCPP_WARN(this->get_logger(), "No GNSS data available to publish.");
            return;
        }

        auto gnss_msg = gnss_data_[current_index_];
        gnss_publisher_->publish(gnss_msg);

        RCLCPP_INFO(this->get_logger(), "Published GNSS Data: Date=%s, Time=%s, Sat=%d, Fix=%d, Lat=%.6f, Lon=%.6f",
                    gnss_msg.date.c_str(), gnss_msg.time.c_str(), gnss_msg.num_satellites,
                    gnss_msg.fix, gnss_msg.latitude, gnss_msg.longitude);

        current_index_ = (current_index_ + 1) % gnss_data_.size();  // Loop when reaching the end
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_ReplyGnss>());
    rclcpp::shutdown();
    return 0;
}
