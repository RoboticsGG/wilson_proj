#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <json/json.h>  // Make sure you have installed libjsoncpp-dev
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

class GNSSPublisher : public rclcpp::Node {
public:
    GNSSPublisher() : Node("gnss_publisher") {
        publisher_ = this->create_publisher<std_msgs::msg::String>("gnss_data", 10);
        serial_fd_ = openSerialPort("/dev/ttyUSB0");

        if (serial_fd_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Error opening serial port: /dev/ttyUSB0");
            return;
        }

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100), 
            std::bind(&GNSSPublisher::readSerialData, this)
        );
    }

private:
    int serial_fd_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::string serial_buffer_;  // Buffer for incomplete JSON messages

    int openSerialPort(const std::string &port) {
        int fd = open(port.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
        if (fd == -1) {
            return -1;
        }

        struct termios options;
        tcgetattr(fd, &options);
        cfsetispeed(&options, B115200);
        cfsetospeed(&options, B115200);
        options.c_cflag |= (CLOCAL | CREAD);
        tcsetattr(fd, TCSANOW, &options);

        return fd;
    }

    void readSerialData() {
        char buffer[256];
        int bytes_read = read(serial_fd_, buffer, sizeof(buffer) - 1);
        if (bytes_read > 0) {
            buffer[bytes_read] = '\0';
            serial_buffer_ += buffer;  // Append new data to buffer

            // Check if we have a complete JSON message
            size_t start = serial_buffer_.find("{");
            size_t end = serial_buffer_.find("}");

            while (start != std::string::npos && end != std::string::npos && start < end) {
                std::string json_data = serial_buffer_.substr(start, end - start + 1);
                serial_buffer_.erase(0, end + 1);  // Remove processed JSON

                processJSON(json_data);

                // Check for another JSON message in the buffer
                start = serial_buffer_.find("{");
                end = serial_buffer_.find("}");
            }
        }
    }

    // void processJSON(const std::string &json_data) {
    //     Json::CharReaderBuilder reader;
    //     Json::Value root;
    //     std::string errs;

    //     std::istringstream ss(json_data);
    //     if (Json::parseFromStream(reader, ss, &root, &errs)) {
    //         std_msgs::msg::String msg;
    //         msg.data = json_data;
    //         publisher_->publish(msg);
    //         RCLCPP_INFO(this->get_logger(), "Valid JSON received: %s", json_data.c_str());
    //     } else {
    //         RCLCPP_WARN(this->get_logger(), "Invalid JSON data: %s", json_data.c_str());
    //     }
    // }
    void processJSON(const std::string &json_data) {
      Json::CharReaderBuilder reader;
      Json::Value root;
      std::string errs;

      std::istringstream ss(json_data);
      if (Json::parseFromStream(reader, ss, &root, &errs)) {
          // Extract specific values (modify these keys as needed)
          std::string time = root.get("time", "N/A").asString();
          int numSatellites = root.get("numSatellites", 0).asInt();
          bool fix = root.get("fix", false).asBool();
          double latitude = root.get("latitude", 0.0).asDouble();
          double longitude = root.get("longitude", 0.0).asDouble();

          // Format extracted data as a string
          std::ostringstream formatted_msg;
          formatted_msg << "Time: " << time 
                        << ", Satellites: " << numSatellites 
                        << ", Fix: " << (fix ? "Yes" : "No") 
                        << ", Lat: " << latitude 
                        << ", Lon: " << longitude;

          // Publish formatted data
          std_msgs::msg::String msg;
          msg.data = formatted_msg.str();
          publisher_->publish(msg);

          RCLCPP_INFO(this->get_logger(), "Published: %s", formatted_msg.str().c_str());
      } else {
          RCLCPP_WARN(this->get_logger(), "Invalid JSON data: %s", json_data.c_str());
      }
  }

};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GNSSPublisher>());
    rclcpp::shutdown();
    return 0;
}


// #include <rclcpp/rclcpp.hpp>
// #include <std_msgs/msg/string.hpp>
// #include <iostream>
// #include <fcntl.h>
// #include <unistd.h>
// #include <termios.h>
// #include <cstring>
// #include <json/json.h>  // Install with: sudo apt install libjsoncpp-dev

// #define SERIAL_PORT "/dev/ttyUSB0" // Change if necessary
// #define BUFFER_SIZE 256

// class GNSSPublisher : public rclcpp::Node {
// public:
//     GNSSPublisher() : Node("gnss_publisher") {
//         publisher_ = this->create_publisher<std_msgs::msg::String>("gnss_data", 10);
//         RCLCPP_INFO(this->get_logger(), "GNSS Publisher Node Started!");

//         // Open Serial Port
//         serial_fd_ = open(SERIAL_PORT, O_RDWR | O_NOCTTY);
//         if (serial_fd_ == -1) {
//             RCLCPP_ERROR(this->get_logger(), "Error opening serial port: %s", SERIAL_PORT);
//             rclcpp::shutdown();
//             return;
//         }

//         if (!configureSerialPort(serial_fd_)) {
//             RCLCPP_ERROR(this->get_logger(), "Failed to configure serial port!");
//             close(serial_fd_);
//             rclcpp::shutdown();
//             return;
//         }

//         // Start Timer for continuous reading
//         timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&GNSSPublisher::readSerialData, this));
//     }

//     ~GNSSPublisher() {
//         if (serial_fd_ != -1) close(serial_fd_);
//     }

// private:
//     rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
//     rclcpp::TimerBase::SharedPtr timer_;
//     int serial_fd_;

//     bool configureSerialPort(int fd) {
//         struct termios tty;
//         if (tcgetattr(fd, &tty) != 0) return false;

//         cfsetospeed(&tty, B115200);
//         cfsetispeed(&tty, B115200);
//         tty.c_cflag &= ~PARENB;
//         tty.c_cflag &= ~CSTOPB;
//         tty.c_cflag &= ~CSIZE;
//         tty.c_cflag |= CS8;
//         tty.c_cflag |= CREAD | CLOCAL;
//         tty.c_iflag &= ~(IXON | IXOFF | IXANY);
//         tty.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
//         tty.c_oflag &= ~OPOST;

//         return (tcsetattr(fd, TCSANOW, &tty) == 0);
//     }

//     void readSerialData() {
//         char buffer[BUFFER_SIZE];
//         memset(buffer, 0, BUFFER_SIZE);

//         int bytes_read = read(serial_fd_, buffer, BUFFER_SIZE - 1);
//         if (bytes_read > 0) {
//             buffer[bytes_read] = '\0';
//             RCLCPP_INFO(this->get_logger(), "Received: %s", buffer);

//             // Parse JSON data from Spresense
//             Json::CharReaderBuilder reader;
//             Json::Value jsonData;
//             std::string errs;
//             std::istringstream s(buffer);
//             if (Json::parseFromStream(reader, s, &jsonData, &errs)) {
//                 std_msgs::msg::String msg;
//                 msg.data = buffer;
//                 publisher_->publish(msg);
//                 RCLCPP_INFO(this->get_logger(), "Published GNSS data: %s", buffer);
//             } else {
//                 RCLCPP_WARN(this->get_logger(), "Invalid JSON data received!");
//             }
//         }
//     }
// };

// int main(int argc, char **argv) {
//     rclcpp::init(argc, argv);
//     auto node = std::make_shared<GNSSPublisher>();
//     rclcpp::spin(node);
//     rclcpp::shutdown();
//     return 0;
// }
