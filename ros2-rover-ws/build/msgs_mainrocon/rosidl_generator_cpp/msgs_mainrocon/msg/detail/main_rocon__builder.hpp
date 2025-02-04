// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__BUILDER_HPP_
#define MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msgs_mainrocon/msg/detail/main_rocon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msgs_mainrocon
{

namespace msg
{

namespace builder
{

class Init_MainRocon_mainrocon_msg
{
public:
  Init_MainRocon_mainrocon_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msgs_mainrocon::msg::MainRocon mainrocon_msg(::msgs_mainrocon::msg::MainRocon::_mainrocon_msg_type arg)
  {
    msg_.mainrocon_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_mainrocon::msg::MainRocon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_mainrocon::msg::MainRocon>()
{
  return msgs_mainrocon::msg::builder::Init_MainRocon_mainrocon_msg();
}

}  // namespace msgs_mainrocon

#endif  // MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__BUILDER_HPP_
