// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rovercon_msgs:msg/SubRocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__TRAITS_HPP_
#define ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rovercon_msgs/msg/detail/sub_rocon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rovercon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SubRocon & msg,
  std::ostream & out)
{
  out << "{";
  // member: roctrl_msg1
  {
    out << "roctrl_msg1: ";
    rosidl_generator_traits::value_to_yaml(msg.roctrl_msg1, out);
    out << ", ";
  }

  // member: roctrl_msg2
  {
    out << "roctrl_msg2: ";
    rosidl_generator_traits::value_to_yaml(msg.roctrl_msg2, out);
    out << ", ";
  }

  // member: spd_msg
  {
    out << "spd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_msg, out);
    out << ", ";
  }

  // member: b_dr_msg
  {
    out << "b_dr_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.b_dr_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubRocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roctrl_msg1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roctrl_msg1: ";
    rosidl_generator_traits::value_to_yaml(msg.roctrl_msg1, out);
    out << "\n";
  }

  // member: roctrl_msg2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roctrl_msg2: ";
    rosidl_generator_traits::value_to_yaml(msg.roctrl_msg2, out);
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

  // member: b_dr_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b_dr_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.b_dr_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubRocon & msg, bool use_flow_style = false)
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
  const rovercon_msgs::msg::SubRocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  rovercon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rovercon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rovercon_msgs::msg::SubRocon & msg)
{
  return rovercon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rovercon_msgs::msg::SubRocon>()
{
  return "rovercon_msgs::msg::SubRocon";
}

template<>
inline const char * name<rovercon_msgs::msg::SubRocon>()
{
  return "rovercon_msgs/msg/SubRocon";
}

template<>
struct has_fixed_size<rovercon_msgs::msg::SubRocon>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rovercon_msgs::msg::SubRocon>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rovercon_msgs::msg::SubRocon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__TRAITS_HPP_
