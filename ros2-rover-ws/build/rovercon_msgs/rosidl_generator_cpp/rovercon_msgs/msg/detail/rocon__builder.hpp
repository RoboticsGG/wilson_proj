// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rovercon_msgs:msg/Rocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__ROCON__BUILDER_HPP_
#define ROVERCON_MSGS__MSG__DETAIL__ROCON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rovercon_msgs/msg/detail/rocon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rovercon_msgs
{

namespace msg
{

namespace builder
{

class Init_Rocon_bdr_msg
{
public:
  explicit Init_Rocon_bdr_msg(::rovercon_msgs::msg::Rocon & msg)
  : msg_(msg)
  {}
  ::rovercon_msgs::msg::Rocon bdr_msg(::rovercon_msgs::msg::Rocon::_bdr_msg_type arg)
  {
    msg_.bdr_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rovercon_msgs::msg::Rocon msg_;
};

class Init_Rocon_spd_msg
{
public:
  explicit Init_Rocon_spd_msg(::rovercon_msgs::msg::Rocon & msg)
  : msg_(msg)
  {}
  Init_Rocon_bdr_msg spd_msg(::rovercon_msgs::msg::Rocon::_spd_msg_type arg)
  {
    msg_.spd_msg = std::move(arg);
    return Init_Rocon_bdr_msg(msg_);
  }

private:
  ::rovercon_msgs::msg::Rocon msg_;
};

class Init_Rocon_ro_ctrl_msg
{
public:
  explicit Init_Rocon_ro_ctrl_msg(::rovercon_msgs::msg::Rocon & msg)
  : msg_(msg)
  {}
  Init_Rocon_spd_msg ro_ctrl_msg(::rovercon_msgs::msg::Rocon::_ro_ctrl_msg_type arg)
  {
    msg_.ro_ctrl_msg = std::move(arg);
    return Init_Rocon_spd_msg(msg_);
  }

private:
  ::rovercon_msgs::msg::Rocon msg_;
};

class Init_Rocon_fdr_msg
{
public:
  Init_Rocon_fdr_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rocon_ro_ctrl_msg fdr_msg(::rovercon_msgs::msg::Rocon::_fdr_msg_type arg)
  {
    msg_.fdr_msg = std::move(arg);
    return Init_Rocon_ro_ctrl_msg(msg_);
  }

private:
  ::rovercon_msgs::msg::Rocon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rovercon_msgs::msg::Rocon>()
{
  return rovercon_msgs::msg::builder::Init_Rocon_fdr_msg();
}

}  // namespace rovercon_msgs

#endif  // ROVERCON_MSGS__MSG__DETAIL__ROCON__BUILDER_HPP_
