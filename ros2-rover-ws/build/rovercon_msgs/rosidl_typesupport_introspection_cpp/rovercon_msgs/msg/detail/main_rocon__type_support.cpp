// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rovercon_msgs:msg/MainRocon.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rovercon_msgs/msg/detail/main_rocon__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rovercon_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MainRocon_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rovercon_msgs::msg::MainRocon(_init);
}

void MainRocon_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rovercon_msgs::msg::MainRocon *>(message_memory);
  typed_message->~MainRocon();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MainRocon_message_member_array[1] = {
  {
    "rovercon_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rovercon_msg::msg::SubRocon>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rovercon_msgs::msg::MainRocon, rovercon_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MainRocon_message_members = {
  "rovercon_msgs::msg",  // message namespace
  "MainRocon",  // message name
  1,  // number of fields
  sizeof(rovercon_msgs::msg::MainRocon),
  MainRocon_message_member_array,  // message members
  MainRocon_init_function,  // function to initialize message memory (memory has to be allocated)
  MainRocon_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MainRocon_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MainRocon_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rovercon_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rovercon_msgs::msg::MainRocon>()
{
  return &::rovercon_msgs::msg::rosidl_typesupport_introspection_cpp::MainRocon_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rovercon_msgs, msg, MainRocon)() {
  return &::rovercon_msgs::msg::rosidl_typesupport_introspection_cpp::MainRocon_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
