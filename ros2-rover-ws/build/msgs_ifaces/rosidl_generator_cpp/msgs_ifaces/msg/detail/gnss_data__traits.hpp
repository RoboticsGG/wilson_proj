// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgs_ifaces:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef MSGS_IFACES__MSG__DETAIL__GNSS_DATA__TRAITS_HPP_
#define MSGS_IFACES__MSG__DETAIL__GNSS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msgs_ifaces/msg/detail/gnss_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msgs_ifaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GnssData & msg,
  std::ostream & out)
{
  out << "{";
  // member: date
  {
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: num_satellites
  {
    out << "num_satellites: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites, out);
    out << ", ";
  }

  // member: fix
  {
    out << "fix: ";
    rosidl_generator_traits::value_to_yaml(msg.fix, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GnssData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: num_satellites
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_satellites: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites, out);
    out << "\n";
  }

  // member: fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix: ";
    rosidl_generator_traits::value_to_yaml(msg.fix, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GnssData & msg, bool use_flow_style = false)
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

}  // namespace msgs_ifaces

namespace rosidl_generator_traits
{

[[deprecated("use msgs_ifaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msgs_ifaces::msg::GnssData & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgs_ifaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgs_ifaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const msgs_ifaces::msg::GnssData & msg)
{
  return msgs_ifaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msgs_ifaces::msg::GnssData>()
{
  return "msgs_ifaces::msg::GnssData";
}

template<>
inline const char * name<msgs_ifaces::msg::GnssData>()
{
  return "msgs_ifaces/msg/GnssData";
}

template<>
struct has_fixed_size<msgs_ifaces::msg::GnssData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msgs_ifaces::msg::GnssData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msgs_ifaces::msg::GnssData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSGS_IFACES__MSG__DETAIL__GNSS_DATA__TRAITS_HPP_
