// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgs_positions:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_
#define MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msgs_positions/msg/detail/gnss_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msgs_positions
{

namespace msg
{

namespace builder
{

class Init_GnssData_longitude
{
public:
  explicit Init_GnssData_longitude(::msgs_positions::msg::GnssData & msg)
  : msg_(msg)
  {}
  ::msgs_positions::msg::GnssData longitude(::msgs_positions::msg::GnssData::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_positions::msg::GnssData msg_;
};

class Init_GnssData_latitude
{
public:
  explicit Init_GnssData_latitude(::msgs_positions::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_longitude latitude(::msgs_positions::msg::GnssData::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GnssData_longitude(msg_);
  }

private:
  ::msgs_positions::msg::GnssData msg_;
};

class Init_GnssData_fix
{
public:
  explicit Init_GnssData_fix(::msgs_positions::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_latitude fix(::msgs_positions::msg::GnssData::_fix_type arg)
  {
    msg_.fix = std::move(arg);
    return Init_GnssData_latitude(msg_);
  }

private:
  ::msgs_positions::msg::GnssData msg_;
};

class Init_GnssData_num_satellites
{
public:
  explicit Init_GnssData_num_satellites(::msgs_positions::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_fix num_satellites(::msgs_positions::msg::GnssData::_num_satellites_type arg)
  {
    msg_.num_satellites = std::move(arg);
    return Init_GnssData_fix(msg_);
  }

private:
  ::msgs_positions::msg::GnssData msg_;
};

class Init_GnssData_time
{
public:
  explicit Init_GnssData_time(::msgs_positions::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_num_satellites time(::msgs_positions::msg::GnssData::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_GnssData_num_satellites(msg_);
  }

private:
  ::msgs_positions::msg::GnssData msg_;
};

class Init_GnssData_date
{
public:
  Init_GnssData_date()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssData_time date(::msgs_positions::msg::GnssData::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_GnssData_time(msg_);
  }

private:
  ::msgs_positions::msg::GnssData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_positions::msg::GnssData>()
{
  return msgs_positions::msg::builder::Init_GnssData_date();
}

}  // namespace msgs_positions

#endif  // MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_
