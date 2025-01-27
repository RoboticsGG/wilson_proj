// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rovercon_msgs:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__BUILDER_HPP_
#define ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rovercon_msgs/msg/detail/main_rocon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rovercon_msgs
{

namespace msg
{

namespace builder
{

class Init_MainRocon_rovercon_msg
{
public:
  Init_MainRocon_rovercon_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rovercon_msgs::msg::MainRocon rovercon_msg(::rovercon_msgs::msg::MainRocon::_rovercon_msg_type arg)
  {
    msg_.rovercon_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rovercon_msgs::msg::MainRocon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rovercon_msgs::msg::MainRocon>()
{
  return rovercon_msgs::msg::builder::Init_MainRocon_rovercon_msg();
}

}  // namespace rovercon_msgs

#endif  // ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__BUILDER_HPP_
