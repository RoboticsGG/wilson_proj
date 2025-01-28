// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rovercon_msgs:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__TRAITS_HPP_
#define ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rovercon_msgs/msg/detail/main_rocon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rovercon_msg'
#include "rovercon_msg/msg/detail/sub_rocon__traits.hpp"

namespace rovercon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MainRocon & msg,
  std::ostream & out)
{
  out << "{";
  // member: rovercon_msg
  {
    out << "rovercon_msg: ";
    to_flow_style_yaml(msg.rovercon_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MainRocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rovercon_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rovercon_msg:\n";
    to_block_style_yaml(msg.rovercon_msg, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MainRocon & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rovercon_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rovercon_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rovercon_msgs::msg::MainRocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  rovercon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rovercon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rovercon_msgs::msg::MainRocon & msg)
{
  return rovercon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rovercon_msgs::msg::MainRocon>()
{
  return "rovercon_msgs::msg::MainRocon";
}

template<>
inline const char * name<rovercon_msgs::msg::MainRocon>()
{
  return "rovercon_msgs/msg/MainRocon";
}

template<>
struct has_fixed_size<rovercon_msgs::msg::MainRocon>
  : std::integral_constant<bool, has_fixed_size<rovercon_msg::msg::SubRocon>::value> {};

template<>
struct has_bounded_size<rovercon_msgs::msg::MainRocon>
  : std::integral_constant<bool, has_bounded_size<rovercon_msg::msg::SubRocon>::value> {};

template<>
struct is_message<rovercon_msgs::msg::MainRocon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__TRAITS_HPP_
