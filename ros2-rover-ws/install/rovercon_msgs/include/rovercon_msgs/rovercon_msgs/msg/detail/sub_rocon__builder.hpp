// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rovercon_msgs:msg/SubRocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__BUILDER_HPP_
#define ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rovercon_msgs/msg/detail/sub_rocon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rovercon_msgs
{

namespace msg
{

namespace builder
{

class Init_SubRocon_b_dr_msg
{
public:
  explicit Init_SubRocon_b_dr_msg(::rovercon_msgs::msg::SubRocon & msg)
  : msg_(msg)
  {}
  ::rovercon_msgs::msg::SubRocon b_dr_msg(::rovercon_msgs::msg::SubRocon::_b_dr_msg_type arg)
  {
    msg_.b_dr_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rovercon_msgs::msg::SubRocon msg_;
};

class Init_SubRocon_spd_msg
{
public:
  explicit Init_SubRocon_spd_msg(::rovercon_msgs::msg::SubRocon & msg)
  : msg_(msg)
  {}
  Init_SubRocon_b_dr_msg spd_msg(::rovercon_msgs::msg::SubRocon::_spd_msg_type arg)
  {
    msg_.spd_msg = std::move(arg);
    return Init_SubRocon_b_dr_msg(msg_);
  }

private:
  ::rovercon_msgs::msg::SubRocon msg_;
};

class Init_SubRocon_roctrl_msg2
{
public:
  explicit Init_SubRocon_roctrl_msg2(::rovercon_msgs::msg::SubRocon & msg)
  : msg_(msg)
  {}
  Init_SubRocon_spd_msg roctrl_msg2(::rovercon_msgs::msg::SubRocon::_roctrl_msg2_type arg)
  {
    msg_.roctrl_msg2 = std::move(arg);
    return Init_SubRocon_spd_msg(msg_);
  }

private:
  ::rovercon_msgs::msg::SubRocon msg_;
};

class Init_SubRocon_roctrl_msg1
{
public:
  Init_SubRocon_roctrl_msg1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubRocon_roctrl_msg2 roctrl_msg1(::rovercon_msgs::msg::SubRocon::_roctrl_msg1_type arg)
  {
    msg_.roctrl_msg1 = std::move(arg);
    return Init_SubRocon_roctrl_msg2(msg_);
  }

private:
  ::rovercon_msgs::msg::SubRocon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rovercon_msgs::msg::SubRocon>()
{
  return rovercon_msgs::msg::builder::Init_SubRocon_roctrl_msg1();
}

}  // namespace rovercon_msgs

#endif  // ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__BUILDER_HPP_
