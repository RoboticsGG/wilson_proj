// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ifaces_base:srv/DesData.idl
// generated code does not contain a copyright notice

#ifndef IFACES_BASE__SRV__DETAIL__DES_DATA__TRAITS_HPP_
#define IFACES_BASE__SRV__DETAIL__DES_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ifaces_base/srv/detail/des_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ifaces_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const DesData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: des_lat
  {
    out << "des_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.des_lat, out);
    out << ", ";
  }

  // member: des_long
  {
    out << "des_long: ";
    rosidl_generator_traits::value_to_yaml(msg.des_long, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DesData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: des_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "des_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.des_lat, out);
    out << "\n";
  }

  // member: des_long
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "des_long: ";
    rosidl_generator_traits::value_to_yaml(msg.des_long, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DesData_Request & msg, bool use_flow_style = false)
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
  const ifaces_base::srv::DesData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ifaces_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ifaces_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const ifaces_base::srv::DesData_Request & msg)
{
  return ifaces_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ifaces_base::srv::DesData_Request>()
{
  return "ifaces_base::srv::DesData_Request";
}

template<>
inline const char * name<ifaces_base::srv::DesData_Request>()
{
  return "ifaces_base/srv/DesData_Request";
}

template<>
struct has_fixed_size<ifaces_base::srv::DesData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ifaces_base::srv::DesData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ifaces_base::srv::DesData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ifaces_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const DesData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_fser
  {
    out << "result_fser: ";
    rosidl_generator_traits::value_to_yaml(msg.result_fser, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DesData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_fser
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_fser: ";
    rosidl_generator_traits::value_to_yaml(msg.result_fser, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DesData_Response & msg, bool use_flow_style = false)
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
  const ifaces_base::srv::DesData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ifaces_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ifaces_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const ifaces_base::srv::DesData_Response & msg)
{
  return ifaces_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ifaces_base::srv::DesData_Response>()
{
  return "ifaces_base::srv::DesData_Response";
}

template<>
inline const char * name<ifaces_base::srv::DesData_Response>()
{
  return "ifaces_base/srv/DesData_Response";
}

template<>
struct has_fixed_size<ifaces_base::srv::DesData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ifaces_base::srv::DesData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ifaces_base::srv::DesData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ifaces_base::srv::DesData>()
{
  return "ifaces_base::srv::DesData";
}

template<>
inline const char * name<ifaces_base::srv::DesData>()
{
  return "ifaces_base/srv/DesData";
}

template<>
struct has_fixed_size<ifaces_base::srv::DesData>
  : std::integral_constant<
    bool,
    has_fixed_size<ifaces_base::srv::DesData_Request>::value &&
    has_fixed_size<ifaces_base::srv::DesData_Response>::value
  >
{
};

template<>
struct has_bounded_size<ifaces_base::srv::DesData>
  : std::integral_constant<
    bool,
    has_bounded_size<ifaces_base::srv::DesData_Request>::value &&
    has_bounded_size<ifaces_base::srv::DesData_Response>::value
  >
{
};

template<>
struct is_service<ifaces_base::srv::DesData>
  : std::true_type
{
};

template<>
struct is_service_request<ifaces_base::srv::DesData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ifaces_base::srv::DesData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IFACES_BASE__SRV__DETAIL__DES_DATA__TRAITS_HPP_
