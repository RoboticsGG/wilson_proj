// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgs_rovercon:msg/SubRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__TRAITS_HPP_
#define MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msgs_rovercon/msg/detail/sub_rocon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msgs_rovercon
{

namespace msg
{

inline void to_flow_style_yaml(
  const SubRocon & msg,
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
  const SubRocon & msg,
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

}  // namespace msgs_rovercon

namespace rosidl_generator_traits
{

[[deprecated("use msgs_rovercon::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msgs_rovercon::msg::SubRocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgs_rovercon::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgs_rovercon::msg::to_yaml() instead")]]
inline std::string to_yaml(const msgs_rovercon::msg::SubRocon & msg)
{
  return msgs_rovercon::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msgs_rovercon::msg::SubRocon>()
{
  return "msgs_rovercon::msg::SubRocon";
}

template<>
inline const char * name<msgs_rovercon::msg::SubRocon>()
{
  return "msgs_rovercon/msg/SubRocon";
}

template<>
struct has_fixed_size<msgs_rovercon::msg::SubRocon>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msgs_rovercon::msg::SubRocon>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msgs_rovercon::msg::SubRocon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__TRAITS_HPP_
