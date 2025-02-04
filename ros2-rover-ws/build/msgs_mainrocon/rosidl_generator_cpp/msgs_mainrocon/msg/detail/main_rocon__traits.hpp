// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__TRAITS_HPP_
#define MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msgs_mainrocon/msg/detail/main_rocon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mainrocon_msg'
#include "msgs_rovercon/msg/detail/sub_rocon__traits.hpp"

namespace msgs_mainrocon
{

namespace msg
{

inline void to_flow_style_yaml(
  const MainRocon & msg,
  std::ostream & out)
{
  out << "{";
  // member: mainrocon_msg
  {
    out << "mainrocon_msg: ";
    to_flow_style_yaml(msg.mainrocon_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MainRocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mainrocon_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mainrocon_msg:\n";
    to_block_style_yaml(msg.mainrocon_msg, out, indentation + 2);
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

}  // namespace msgs_mainrocon

namespace rosidl_generator_traits
{

[[deprecated("use msgs_mainrocon::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msgs_mainrocon::msg::MainRocon & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgs_mainrocon::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgs_mainrocon::msg::to_yaml() instead")]]
inline std::string to_yaml(const msgs_mainrocon::msg::MainRocon & msg)
{
  return msgs_mainrocon::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msgs_mainrocon::msg::MainRocon>()
{
  return "msgs_mainrocon::msg::MainRocon";
}

template<>
inline const char * name<msgs_mainrocon::msg::MainRocon>()
{
  return "msgs_mainrocon/msg/MainRocon";
}

template<>
struct has_fixed_size<msgs_mainrocon::msg::MainRocon>
  : std::integral_constant<bool, has_fixed_size<msgs_rovercon::msg::SubRocon>::value> {};

template<>
struct has_bounded_size<msgs_mainrocon::msg::MainRocon>
  : std::integral_constant<bool, has_bounded_size<msgs_rovercon::msg::SubRocon>::value> {};

template<>
struct is_message<msgs_mainrocon::msg::MainRocon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__TRAITS_HPP_
