// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ifaces_base:srv/SpdLimit.idl
// generated code does not contain a copyright notice

#ifndef IFACES_BASE__SRV__DETAIL__SPD_LIMIT__TRAITS_HPP_
#define IFACES_BASE__SRV__DETAIL__SPD_LIMIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ifaces_base/srv/detail/spd_limit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ifaces_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpdLimit_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: rover_spd
  {
    out << "rover_spd: ";
    rosidl_generator_traits::value_to_yaml(msg.rover_spd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpdLimit_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rover_spd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rover_spd: ";
    rosidl_generator_traits::value_to_yaml(msg.rover_spd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpdLimit_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ifaces_base

namespace rosidl_generator_traits
{

[[deprecated("use ifaces_base::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ifaces_base::srv::SpdLimit_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ifaces_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ifaces_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const ifaces_base::srv::SpdLimit_Request & msg)
{
  return ifaces_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ifaces_base::srv::SpdLimit_Request>()
{
  return "ifaces_base::srv::SpdLimit_Request";
}

template<>
inline const char * name<ifaces_base::srv::SpdLimit_Request>()
{
  return "ifaces_base/srv/SpdLimit_Request";
}

template<>
struct has_fixed_size<ifaces_base::srv::SpdLimit_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ifaces_base::srv::SpdLimit_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ifaces_base::srv::SpdLimit_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ifaces_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpdLimit_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: spd_result
  {
    out << "spd_result: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpdLimit_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spd_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd_result: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpdLimit_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ifaces_base

namespace rosidl_generator_traits
{

[[deprecated("use ifaces_base::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ifaces_base::srv::SpdLimit_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ifaces_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ifaces_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const ifaces_base::srv::SpdLimit_Response & msg)
{
  return ifaces_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ifaces_base::srv::SpdLimit_Response>()
{
  return "ifaces_base::srv::SpdLimit_Response";
}

template<>
inline const char * name<ifaces_base::srv::SpdLimit_Response>()
{
  return "ifaces_base/srv/SpdLimit_Response";
}

template<>
struct has_fixed_size<ifaces_base::srv::SpdLimit_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ifaces_base::srv::SpdLimit_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ifaces_base::srv::SpdLimit_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ifaces_base::srv::SpdLimit>()
{
  return "ifaces_base::srv::SpdLimit";
}

template<>
inline const char * name<ifaces_base::srv::SpdLimit>()
{
  return "ifaces_base/srv/SpdLimit";
}

template<>
struct has_fixed_size<ifaces_base::srv::SpdLimit>
  : std::integral_constant<
    bool,
    has_fixed_size<ifaces_base::srv::SpdLimit_Request>::value &&
    has_fixed_size<ifaces_base::srv::SpdLimit_Response>::value
  >
{
};

template<>
struct has_bounded_size<ifaces_base::srv::SpdLimit>
  : std::integral_constant<
    bool,
    has_bounded_size<ifaces_base::srv::SpdLimit_Request>::value &&
    has_bounded_size<ifaces_base::srv::SpdLimit_Response>::value
  >
{
};

template<>
struct is_service<ifaces_base::srv::SpdLimit>
  : std::true_type
{
};

template<>
struct is_service_request<ifaces_base::srv::SpdLimit_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ifaces_base::srv::SpdLimit_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IFACES_BASE__SRV__DETAIL__SPD_LIMIT__TRAITS_HPP_
