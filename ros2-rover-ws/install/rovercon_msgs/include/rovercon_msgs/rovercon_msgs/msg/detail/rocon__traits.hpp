// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rovercon_msgs:msg/Rocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__ROCON__TRAITS_HPP_
#define ROVERCON_MSGS__MSG__DETAIL__ROCON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rovercon_msgs/msg/detail/rocon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rovercon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Rocon & msg,
  std::ostream & out)
{
  out << "{";
  // member: fdr_msg
  {
    out << "fdr_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.fdr_msg, out);
    out << ", ";
  }

  // member: ro_ctrl_msg
  {
    out << "ro_ctrl_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.ro_ctrl_msg, out);
    out << ", ";
  }

  // member: spd_msg
  {
    out << "spd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_msg, out);
    out << ", ";
  }

  // member: bdr_msg
  {
    out << "bdr_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.bdr_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fdr_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fdr_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.fdr_msg, out);
    out << "\n";
  }

  // member: ro_ctrl_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ro_ctrl_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.ro_ctrl_msg, out);
    out << "\n";
  }

  // member: spd_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_msg, out);
    out << "\n";
  }

  // member: bdr_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bdr_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.bdr_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rocon & msg, bool use_flow_style = false)
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
  const rovercon_msgs::msg::Rocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  rovercon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rovercon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rovercon_msgs::msg::Rocon & msg)
{
  return rovercon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rovercon_msgs::msg::Rocon>()
{
  return "rovercon_msgs::msg::Rocon";
}

template<>
inline const char * name<rovercon_msgs::msg::Rocon>()
{
  return "rovercon_msgs/msg/Rocon";
}

template<>
struct has_fixed_size<rovercon_msgs::msg::Rocon>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rovercon_msgs::msg::Rocon>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rovercon_msgs::msg::Rocon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROVERCON_MSGS__MSG__DETAIL__ROCON__TRAITS_HPP_
