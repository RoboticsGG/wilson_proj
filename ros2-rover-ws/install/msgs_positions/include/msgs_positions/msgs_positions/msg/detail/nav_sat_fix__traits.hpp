// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgs_positions:msg/NavSatFix.idl
// generated code does not contain a copyright notice

#ifndef MSGS_POSITIONS__MSG__DETAIL__NAV_SAT_FIX__TRAITS_HPP_
#define MSGS_POSITIONS__MSG__DETAIL__NAV_SAT_FIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msgs_positions/msg/detail/nav_sat_fix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace msgs_positions
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavSatFix & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: position_covariance
  {
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []";
    } else {
      out << "position_covariance: [";
      size_t pending_items = msg.position_covariance.size();
      for (auto item : msg.position_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_covariance_type
  {
    out << "position_covariance_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_covariance_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavSatFix & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
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

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []\n";
    } else {
      out << "position_covariance:\n";
      for (auto item : msg.position_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_covariance_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_covariance_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_covariance_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavSatFix & msg, bool use_flow_style = false)
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

}  // namespace msgs_positions

namespace rosidl_generator_traits
{

[[deprecated("use msgs_positions::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msgs_positions::msg::NavSatFix & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgs_positions::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgs_positions::msg::to_yaml() instead")]]
inline std::string to_yaml(const msgs_positions::msg::NavSatFix & msg)
{
  return msgs_positions::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msgs_positions::msg::NavSatFix>()
{
  return "msgs_positions::msg::NavSatFix";
}

template<>
inline const char * name<msgs_positions::msg::NavSatFix>()
{
  return "msgs_positions/msg/NavSatFix";
}

template<>
struct has_fixed_size<msgs_positions::msg::NavSatFix>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<msgs_positions::msg::NavSatFix>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<msgs_positions::msg::NavSatFix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSGS_POSITIONS__MSG__DETAIL__NAV_SAT_FIX__TRAITS_HPP_
