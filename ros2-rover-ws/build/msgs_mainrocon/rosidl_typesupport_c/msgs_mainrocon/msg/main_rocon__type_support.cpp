// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "msgs_mainrocon/msg/detail/main_rocon__struct.h"
#include "msgs_mainrocon/msg/detail/main_rocon__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace msgs_mainrocon
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _MainRocon_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MainRocon_type_support_ids_t;

static const _MainRocon_type_support_ids_t _MainRocon_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MainRocon_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MainRocon_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MainRocon_type_support_symbol_names_t _MainRocon_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_mainrocon, msg, MainRocon)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_mainrocon, msg, MainRocon)),
  }
};

typedef struct _MainRocon_type_support_data_t
{
  void * data[2];
} _MainRocon_type_support_data_t;

static _MainRocon_type_support_data_t _MainRocon_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MainRocon_message_typesupport_map = {
  2,
  "msgs_mainrocon",
  &_MainRocon_message_typesupport_ids.typesupport_identifier[0],
  &_MainRocon_message_typesupport_symbol_names.symbol_name[0],
  &_MainRocon_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MainRocon_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MainRocon_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace msgs_mainrocon

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msgs_mainrocon, msg, MainRocon)() {
  return &::msgs_mainrocon::msg::rosidl_typesupport_c::MainRocon_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
