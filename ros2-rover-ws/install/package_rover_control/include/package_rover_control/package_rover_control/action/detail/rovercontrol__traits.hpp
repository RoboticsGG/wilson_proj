// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from package_rover_control:action/Rovercontrol.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__TRAITS_HPP_
#define PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "package_rover_control/action/detail/rovercontrol__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: timestop
  {
    out << "timestop: ";
    rosidl_generator_traits::value_to_yaml(msg.timestop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: timestop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestop: ";
    rosidl_generator_traits::value_to_yaml(msg.timestop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_Goal & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_Goal>()
{
  return "package_rover_control::action::Rovercontrol_Goal";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_Goal>()
{
  return "package_rover_control/action/Rovercontrol_Goal";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_msg
  {
    out << "result_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.result_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.result_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_Result & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_Result>()
{
  return "package_rover_control::action::Rovercontrol_Result";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_Result>()
{
  return "package_rover_control/action/Rovercontrol_Result";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_remaining
  {
    if (msg.time_remaining.size() == 0) {
      out << "time_remaining: []";
    } else {
      out << "time_remaining: [";
      size_t pending_items = msg.time_remaining.size();
      for (auto item : msg.time_remaining) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_remaining.size() == 0) {
      out << "time_remaining: []\n";
    } else {
      out << "time_remaining:\n";
      for (auto item : msg.time_remaining) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_Feedback & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_Feedback>()
{
  return "package_rover_control::action::Rovercontrol_Feedback";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_Feedback>()
{
  return "package_rover_control/action/Rovercontrol_Feedback";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "package_rover_control/action/detail/rovercontrol__traits.hpp"

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_SendGoal_Request & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_SendGoal_Request>()
{
  return "package_rover_control::action::Rovercontrol_SendGoal_Request";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_SendGoal_Request>()
{
  return "package_rover_control/action/Rovercontrol_SendGoal_Request";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<package_rover_control::action::Rovercontrol_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<package_rover_control::action::Rovercontrol_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_SendGoal_Response & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_SendGoal_Response>()
{
  return "package_rover_control::action::Rovercontrol_SendGoal_Response";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_SendGoal_Response>()
{
  return "package_rover_control/action/Rovercontrol_SendGoal_Response";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_SendGoal_Event & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_SendGoal_Event>()
{
  return "package_rover_control::action::Rovercontrol_SendGoal_Event";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_SendGoal_Event>()
{
  return "package_rover_control/action/Rovercontrol_SendGoal_Event";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<package_rover_control::action::Rovercontrol_SendGoal_Request>::value && has_bounded_size<package_rover_control::action::Rovercontrol_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_SendGoal>()
{
  return "package_rover_control::action::Rovercontrol_SendGoal";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_SendGoal>()
{
  return "package_rover_control/action/Rovercontrol_SendGoal";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<package_rover_control::action::Rovercontrol_SendGoal_Request>::value &&
    has_fixed_size<package_rover_control::action::Rovercontrol_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<package_rover_control::action::Rovercontrol_SendGoal_Request>::value &&
    has_bounded_size<package_rover_control::action::Rovercontrol_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<package_rover_control::action::Rovercontrol_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<package_rover_control::action::Rovercontrol_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<package_rover_control::action::Rovercontrol_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_GetResult_Request & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_GetResult_Request>()
{
  return "package_rover_control::action::Rovercontrol_GetResult_Request";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_GetResult_Request>()
{
  return "package_rover_control/action/Rovercontrol_GetResult_Request";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "package_rover_control/action/detail/rovercontrol__traits.hpp"

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_GetResult_Response & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_GetResult_Response>()
{
  return "package_rover_control::action::Rovercontrol_GetResult_Response";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_GetResult_Response>()
{
  return "package_rover_control/action/Rovercontrol_GetResult_Response";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<package_rover_control::action::Rovercontrol_Result>::value> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<package_rover_control::action::Rovercontrol_Result>::value> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_GetResult_Event & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_GetResult_Event>()
{
  return "package_rover_control::action::Rovercontrol_GetResult_Event";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_GetResult_Event>()
{
  return "package_rover_control/action/Rovercontrol_GetResult_Event";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<package_rover_control::action::Rovercontrol_GetResult_Request>::value && has_bounded_size<package_rover_control::action::Rovercontrol_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_GetResult>()
{
  return "package_rover_control::action::Rovercontrol_GetResult";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_GetResult>()
{
  return "package_rover_control/action/Rovercontrol_GetResult";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<package_rover_control::action::Rovercontrol_GetResult_Request>::value &&
    has_fixed_size<package_rover_control::action::Rovercontrol_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<package_rover_control::action::Rovercontrol_GetResult_Request>::value &&
    has_bounded_size<package_rover_control::action::Rovercontrol_GetResult_Response>::value
  >
{
};

template<>
struct is_service<package_rover_control::action::Rovercontrol_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<package_rover_control::action::Rovercontrol_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<package_rover_control::action::Rovercontrol_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "package_rover_control/action/detail/rovercontrol__traits.hpp"

namespace package_rover_control
{

namespace action
{

inline void to_flow_style_yaml(
  const Rovercontrol_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rovercontrol_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rovercontrol_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace package_rover_control

namespace rosidl_generator_traits
{

[[deprecated("use package_rover_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const package_rover_control::action::Rovercontrol_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  package_rover_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use package_rover_control::action::to_yaml() instead")]]
inline std::string to_yaml(const package_rover_control::action::Rovercontrol_FeedbackMessage & msg)
{
  return package_rover_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<package_rover_control::action::Rovercontrol_FeedbackMessage>()
{
  return "package_rover_control::action::Rovercontrol_FeedbackMessage";
}

template<>
inline const char * name<package_rover_control::action::Rovercontrol_FeedbackMessage>()
{
  return "package_rover_control/action/Rovercontrol_FeedbackMessage";
}

template<>
struct has_fixed_size<package_rover_control::action::Rovercontrol_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<package_rover_control::action::Rovercontrol_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<package_rover_control::action::Rovercontrol_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<package_rover_control::action::Rovercontrol_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<package_rover_control::action::Rovercontrol_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<package_rover_control::action::Rovercontrol>
  : std::true_type
{
};

template<>
struct is_action_goal<package_rover_control::action::Rovercontrol_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<package_rover_control::action::Rovercontrol_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<package_rover_control::action::Rovercontrol_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__TRAITS_HPP_
