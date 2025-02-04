#include "rclcpp/rclcpp.hpp"
#include "msgs_positions/msg/gnss_data.hpp"  // Include your custom message
#include <json/json.h>
#include <fstream>
#include <sstream>

class GNSSPublisher : public rclcpp::Node {
public:
    GNSSPublisher() : Node("gnss_publisher") {
        publisher_ = this->create_publisher<msgs_positions::msg::GnssData>("gnss_data", 10);
        processJSON(R"({"time":"2025-02-04 09:42:25","numSatellites":6,"fix":false,"latitude":37.7749,"longitude":-122.4194})");
    }

private:
    rclcpp::Publisher<msgs_positions::msg::GnssData>::SharedPtr publisher_;

    void processJSON(const std::string &json_data) {
        Json::CharReaderBuilder reader;
        Json::Value root;
        std::string errs;
        std::istringstream ss(json_data);

        if (Json::parseFromStream(reader, ss, &root, &errs)) {
            std::string date_time = root["time"].asString();
            int numSatellites = root["numSatellites"].asInt();
            bool fix = root["fix"].asBool();
            double latitude = root["latitude"].asDouble();
            double longitude = root["longitude"].asDouble();

            std::string date = date_time.substr(0, date_time.find(" "));
            std::string time = date_time.substr(date_time.find(" ") + 1);

            auto msg = msgs_positions::msg::GnssData();
            msg.date = date;
            msg.time = time;
            msg.num_satellites = numSatellites;
            msg.fix = fix;
            msg.latitude = latitude;
            msg.longitude = longitude;

            publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Published GNSS Data: Date=%s, Time=%s, Sat=%d, Fix=%d, Lat=%f, Lon=%f",
                        msg.date.c_str(), msg.time.c_str(), msg.num_satellites, msg.fix, msg.latitude, msg.longitude);
        } else {
            RCLCPP_WARN(this->get_logger(), "Invalid JSON data received!");
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GNSSPublisher>());
    rclcpp::shutdown();
    return 0;
}


// #include <iostream>
// #include <fstream>
// #include <string>
// #include <sstream>
// #include <json/json.h>  // Make sure you have installed libjsoncpp-dev
// #include <rclcpp/rclcpp.hpp>
// #include <std_msgs/msg/string.hpp>
// #include <msgs_positions/msg/gnss_data.hpp>
// #include <fcntl.h>
// #include <termios.h>
// #include <unistd.h>

// class GNSSPublisher : public rclcpp::Node {
// public:
//     GNSSPublisher() : Node("gnss_publisher") {
//         publisher_ = this->create_publisher<std_msgs::msg::String>("gnss_data", 10);
//         serial_fd_ = openSerialPort("/dev/ttyUSB0");

//         if (serial_fd_ == -1) {
//             RCLCPP_ERROR(this->get_logger(), "Error opening serial port: /dev/ttyUSB0");
//             return;
//         }

//         timer_ = this->create_wall_timer(
//             std::chrono::milliseconds(100), 
//             std::bind(&GNSSPublisher::readSerialData, this)
//         );
//     }

// private:
//     int serial_fd_;
//     rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
//     rclcpp::TimerBase::SharedPtr timer_;
//     std::string serial_buffer_;  // Buffer for incomplete JSON messages

//     int openSerialPort(const std::string &port) {
//         int fd = open(port.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
//         if (fd == -1) {
//             return -1;
//         }

//         struct termios options;
//         tcgetattr(fd, &options);
//         cfsetispeed(&options, B115200);
//         cfsetospeed(&options, B115200);
//         options.c_cflag |= (CLOCAL | CREAD);
//         tcsetattr(fd, TCSANOW, &options);

//         return fd;
//     }

//     void readSerialData() {
//         char buffer[256];
//         int bytes_read = read(serial_fd_, buffer, sizeof(buffer) - 1);
//         if (bytes_read > 0) {
//             buffer[bytes_read] = '\0';
//             serial_buffer_ += buffer;  // Append new data to buffer

//             // Check if we have a complete JSON message
//             size_t start = serial_buffer_.find("{");
//             size_t end = serial_buffer_.find("}");

//             while (start != std::string::npos && end != std::string::npos && start < end) {
//                 std::string json_data = serial_buffer_.substr(start, end - start + 1);
//                 serial_buffer_.erase(0, end + 1);  // Remove processed JSON

//                 processJSON(json_data);

//                 // Check for another JSON message in the buffer
//                 start = serial_buffer_.find("{");
//                 end = serial_buffer_.find("}");
//             }
//         }
//     }

//     void processJSON(const std::string &json_data) {
//     Json::CharReaderBuilder reader;
//     Json::Value root;
//     std::string errs;

//     std::istringstream ss(json_data);
//     if (Json::parseFromStream(reader, ss, &root, &errs)) {
//         // Extract values
//         std::string date_time = root.get("time", "N/A").asString();
//         int numSatellites = root.get("numSatellites", 0).asInt();
//         bool fix = root.get("fix", false).asBool();
//         double latitude = root.get("latitude", 0.0).asDouble();
//         double longitude = root.get("longitude", 0.0).asDouble();

//         // Split date and time
//         std::string date = "N/A";
//         std::string time = "N/A";
//         size_t space_pos = date_time.find(" ");
//         if (space_pos != std::string::npos) {
//             date = date_time.substr(0, space_pos);  // Extract date
//             time = date_time.substr(space_pos + 1); // Extract time
//         }

//         // Format extracted data
//         std::ostringstream formatted_msg;
//         formatted_msg << "Date: " << date
//                       << ", Time: " << time
//                       << ", Satellites: " << numSatellites
//                       << ", Fix: " << (fix ? "Yes" : "No")
//                       << ", Lat: " << latitude
//                       << ", Lon: " << longitude;

//         // Publish formatted data
//         std_msgs::msg::String msg;
//         msg.data = formatted_msg.str();
//         publisher_->publish(msg);

//         RCLCPP_INFO(this->get_logger(), "Published: %s", formatted_msg.str().c_str());
//     } else {
//         RCLCPP_WARN(this->get_logger(), "Invalid JSON data: %s", json_data.c_str());
//     }
// }


// };

// int main(int argc, char **argv) {
//     rclcpp::init(argc, argv);
//     rclcpp::spin(std::make_shared<GNSSPublisher>());
//     rclcpp::shutdown();
//     return 0;
// }
