#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <cstring>
#include <json/json.h>  // Install with: sudo apt install libjsoncpp-dev

#define SERIAL_PORT "/dev/ttyUSB0" // Change if necessary
#define BUFFER_SIZE 256

class GNSSPublisher : public rclcpp::Node {
public:
    GNSSPublisher() : Node("gnss_publisher") {
        publisher_ = this->create_publisher<std_msgs::msg::String>("/gnss_data", 10);
        RCLCPP_INFO(this->get_logger(), "GNSS Publisher Node Started!");

        // Open Serial Port
        serial_fd_ = open(SERIAL_PORT, O_RDWR | O_NOCTTY);
        if (serial_fd_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Error opening serial port: %s", SERIAL_PORT);
            rclcpp::shutdown();
            return;
        }

        if (!configureSerialPort(serial_fd_)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to configure serial port!");
            close(serial_fd_);
            rclcpp::shutdown();
            return;
        }

        // Start Timer for continuous reading
        timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&GNSSPublisher::readSerialData, this));
    }

    ~GNSSPublisher() {
        if (serial_fd_ != -1) close(serial_fd_);
    }

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int serial_fd_;

    bool configureSerialPort(int fd) {
        struct termios tty;
        if (tcgetattr(fd, &tty) != 0) return false;

        cfsetospeed(&tty, B115200);
        cfsetispeed(&tty, B115200);
        tty.c_cflag &= ~PARENB;
        tty.c_cflag &= ~CSTOPB;
        tty.c_cflag &= ~CSIZE;
        tty.c_cflag |= CS8;
        tty.c_cflag |= CREAD | CLOCAL;
        tty.c_iflag &= ~(IXON | IXOFF | IXANY);
        tty.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
        tty.c_oflag &= ~OPOST;

        return (tcsetattr(fd, TCSANOW, &tty) == 0);
    }

    void readSerialData() {
        char buffer[BUFFER_SIZE];
        memset(buffer, 0, BUFFER_SIZE);

        int bytes_read = read(serial_fd_, buffer, BUFFER_SIZE - 1);
        if (bytes_read > 0) {
            buffer[bytes_read] = '\0';
            RCLCPP_INFO(this->get_logger(), "Received: %s", buffer);

            // Parse JSON data from Spresense
            Json::CharReaderBuilder reader;
            Json::Value jsonData;
            std::string errs;
            std::istringstream s(buffer);
            if (Json::parseFromStream(reader, s, &jsonData, &errs)) {
                std_msgs::msg::String msg;
                msg.data = buffer;
                publisher_->publish(msg);
                RCLCPP_INFO(this->get_logger(), "Published GNSS data: %s", buffer);
            } else {
                RCLCPP_WARN(this->get_logger(), "Invalid JSON data received!");
            }
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GNSSPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

// #include "msgs_positions/msg/nav_sat_fix.hpp"
// #include <serial/serial.h>
// #include <string>
// #include <iostream>

// class GNSSReceiver : public rclcpp::Node {
// public:
//     GNSSReceiver() : Node("gnss_receiver") {
//         publisher_ = this->create_publisher<sensor_msgs::msg::NavSatFix>("gnss/fix", 10);
//         serial_port_.setPort("/dev/ttyUSB0");
//         serial_port_.setBaudrate(115200);
//         serial::Timeout timeout = serial::Timeout::simpleTimeout(1000);
//         serial_port_.setTimeout(timeout);
        
//         try {
//             serial_port_.open();
//         } catch (const serial::IOException &e) {
//             RCLCPP_ERROR(this->get_logger(), "Unable to open serial port!");
//             rclcpp::shutdown();
//         }
        
//         timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&GNSSReceiver::read_gnss_data, this));
//         RCLCPP_INFO(this->get_logger(), "GNSS Receiver Node Started");
//     }

// private:
//     void read_gnss_data() {
//         if (serial_port_.available()) {
//             std::string line = serial_port_.readline();
//             RCLCPP_INFO(this->get_logger(), "Received: %s", line.c_str());
            
//             double lat, lon;
//             if (parse_gnss_data(line, lat, lon)) {
//                 auto msg = sensor_msgs::msg::NavSatFix();
//                 msg.latitude = lat;
//                 msg.longitude = lon;
//                 msg.altitude = 0.0;
//                 msg.header.stamp = this->get_clock()->now();
//                 publisher_->publish(msg);
//                 RCLCPP_INFO(this->get_logger(), "Published GNSS Fix: Lat=%f, Lon=%f", lat, lon);
//             }
//         }
//     }
    
//     bool parse_gnss_data(const std::string &data, double &lat, double &lon) {
//         if (data.find("$GPGGA") != std::string::npos) {
//             std::vector<std::string> parts;
//             std::stringstream ss(data);
//             std::string item;
//             while (std::getline(ss, item, ',')) {
//                 parts.push_back(item);
//             }
            
//             if (parts.size() > 5) {
//                 lat = convert_nmea_to_decimal(parts[2], parts[3]);
//                 lon = convert_nmea_to_decimal(parts[4], parts[5]);
//                 return true;
//             }
//         }
//         return false;
//     }
    
//     double convert_nmea_to_decimal(const std::string &coord, const std::string &direction) {
//         double degrees = std::stod(coord.substr(0, 2));
//         double minutes = std::stod(coord.substr(2));
//         double decimal = degrees + (minutes / 60.0);
//         return (direction == "S" || direction == "W") ? -decimal : decimal;
//     }
    
//     rclcpp::Publisher<sensor_msgs::msg::NavSatFix>::SharedPtr publisher_;
//     serial::Serial serial_port_;
//     rclcpp::TimerBase::SharedPtr timer_;
// };

// int main(int argc, char **argv) {
//     rclcpp::init(argc, argv);
//     auto node = std::make_shared<GNSSReceiver>();
//     rclcpp::spin(node);
//     rclcpp::shutdown();
//     return 0;
// }
