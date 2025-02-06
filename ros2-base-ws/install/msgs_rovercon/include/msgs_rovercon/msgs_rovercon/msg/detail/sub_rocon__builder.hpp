// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgs_rovercon:msg/SubRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__BUILDER_HPP_
#define MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msgs_rovercon/msg/detail/sub_rocon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msgs_rovercon
{

namespace msg
{

namespace builder
{

class Init_SubRocon_bdr_msg
{
public:
  explicit Init_SubRocon_bdr_msg(::msgs_rovercon::msg::SubRocon & msg)
  : msg_(msg)
  {}
  ::msgs_rovercon::msg::SubRocon bdr_msg(::msgs_rovercon::msg::SubRocon::_bdr_msg_type arg)
  {
    msg_.bdr_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_rovercon::msg::SubRocon msg_;
};

class Init_SubRocon_spd_msg
{
public:
  explicit Init_SubRocon_spd_msg(::msgs_rovercon::msg::SubRocon & msg)
  : msg_(msg)
  {}
  Init_SubRocon_bdr_msg spd_msg(::msgs_rovercon::msg::SubRocon::_spd_msg_type arg)
  {
    msg_.spd_msg = std::move(arg);
    return Init_SubRocon_bdr_msg(msg_);
  }

private:
  ::msgs_rovercon::msg::SubRocon msg_;
};

class Init_SubRocon_ro_ctrl_msg
{
public:
  explicit Init_SubRocon_ro_ctrl_msg(::msgs_rovercon::msg::SubRocon & msg)
  : msg_(msg)
  {}
  Init_SubRocon_spd_msg ro_ctrl_msg(::msgs_rovercon::msg::SubRocon::_ro_ctrl_msg_type arg)
  {
    msg_.ro_ctrl_msg = std::move(arg);
    return Init_SubRocon_spd_msg(msg_);
  }

private:
  ::msgs_rovercon::msg::SubRocon msg_;
};

class Init_SubRocon_fdr_msg
{
public:
  Init_SubRocon_fdr_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubRocon_ro_ctrl_msg fdr_msg(::msgs_rovercon::msg::SubRocon::_fdr_msg_type arg)
  {
    msg_.fdr_msg = std::move(arg);
    return Init_SubRocon_ro_ctrl_msg(msg_);
  }

private:
  ::msgs_rovercon::msg::SubRocon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_rovercon::msg::SubRocon>()
{
  return msgs_rovercon::msg::builder::Init_SubRocon_fdr_msg();
}

}  // namespace msgs_rovercon

#endif  // MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__BUILDER_HPP_
