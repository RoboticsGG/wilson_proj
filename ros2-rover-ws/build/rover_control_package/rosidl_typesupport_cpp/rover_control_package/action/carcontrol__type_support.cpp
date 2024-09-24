// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rover_control_package:action/Carcontrol.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rover_control_package/action/detail/carcontrol__functions.h"
#include "rover_control_package/action/detail/carcontrol__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_Goal_type_support_ids_t;

static const _Carcontrol_Goal_type_support_ids_t _Carcontrol_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_Goal_type_support_symbol_names_t _Carcontrol_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_Goal)),
  }
};

typedef struct _Carcontrol_Goal_type_support_data_t
{
  void * data[2];
} _Carcontrol_Goal_type_support_data_t;

static _Carcontrol_Goal_type_support_data_t _Carcontrol_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_Goal_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_Goal__get_type_hash,
  &rover_control_package__action__Carcontrol_Goal__get_type_description,
  &rover_control_package__action__Carcontrol_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_Goal>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_Goal)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_Result_type_support_ids_t;

static const _Carcontrol_Result_type_support_ids_t _Carcontrol_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_Result_type_support_symbol_names_t _Carcontrol_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_Result)),
  }
};

typedef struct _Carcontrol_Result_type_support_data_t
{
  void * data[2];
} _Carcontrol_Result_type_support_data_t;

static _Carcontrol_Result_type_support_data_t _Carcontrol_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_Result_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_Result__get_type_hash,
  &rover_control_package__action__Carcontrol_Result__get_type_description,
  &rover_control_package__action__Carcontrol_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_Result>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_Result)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_Feedback_type_support_ids_t;

static const _Carcontrol_Feedback_type_support_ids_t _Carcontrol_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_Feedback_type_support_symbol_names_t _Carcontrol_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_Feedback)),
  }
};

typedef struct _Carcontrol_Feedback_type_support_data_t
{
  void * data[2];
} _Carcontrol_Feedback_type_support_data_t;

static _Carcontrol_Feedback_type_support_data_t _Carcontrol_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_Feedback_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_Feedback__get_type_hash,
  &rover_control_package__action__Carcontrol_Feedback__get_type_description,
  &rover_control_package__action__Carcontrol_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_Feedback>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_Feedback)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_SendGoal_Request_type_support_ids_t;

static const _Carcontrol_SendGoal_Request_type_support_ids_t _Carcontrol_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_SendGoal_Request_type_support_symbol_names_t _Carcontrol_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_SendGoal_Request)),
  }
};

typedef struct _Carcontrol_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Carcontrol_SendGoal_Request_type_support_data_t;

static _Carcontrol_SendGoal_Request_type_support_data_t _Carcontrol_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_SendGoal_Request_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_SendGoal_Request__get_type_hash,
  &rover_control_package__action__Carcontrol_SendGoal_Request__get_type_description,
  &rover_control_package__action__Carcontrol_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Request>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_SendGoal_Request)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_SendGoal_Response_type_support_ids_t;

static const _Carcontrol_SendGoal_Response_type_support_ids_t _Carcontrol_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_SendGoal_Response_type_support_symbol_names_t _Carcontrol_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_SendGoal_Response)),
  }
};

typedef struct _Carcontrol_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Carcontrol_SendGoal_Response_type_support_data_t;

static _Carcontrol_SendGoal_Response_type_support_data_t _Carcontrol_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_SendGoal_Response_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_SendGoal_Response__get_type_hash,
  &rover_control_package__action__Carcontrol_SendGoal_Response__get_type_description,
  &rover_control_package__action__Carcontrol_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Response>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_SendGoal_Response)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_SendGoal_Event_type_support_ids_t;

static const _Carcontrol_SendGoal_Event_type_support_ids_t _Carcontrol_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_SendGoal_Event_type_support_symbol_names_t _Carcontrol_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_SendGoal_Event)),
  }
};

typedef struct _Carcontrol_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Carcontrol_SendGoal_Event_type_support_data_t;

static _Carcontrol_SendGoal_Event_type_support_data_t _Carcontrol_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_SendGoal_Event_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_SendGoal_Event__get_type_hash,
  &rover_control_package__action__Carcontrol_SendGoal_Event__get_type_description,
  &rover_control_package__action__Carcontrol_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Event>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_SendGoal_Event)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_SendGoal_type_support_ids_t;

static const _Carcontrol_SendGoal_type_support_ids_t _Carcontrol_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_SendGoal_type_support_symbol_names_t _Carcontrol_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_SendGoal)),
  }
};

typedef struct _Carcontrol_SendGoal_type_support_data_t
{
  void * data[2];
} _Carcontrol_SendGoal_type_support_data_t;

static _Carcontrol_SendGoal_type_support_data_t _Carcontrol_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_SendGoal_service_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Carcontrol_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_control_package::action::Carcontrol_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rover_control_package::action::Carcontrol_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rover_control_package::action::Carcontrol_SendGoal>,
  &rover_control_package__action__Carcontrol_SendGoal__get_type_hash,
  &rover_control_package__action__Carcontrol_SendGoal__get_type_description,
  &rover_control_package__action__Carcontrol_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rover_control_package::action::Carcontrol_SendGoal>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_GetResult_Request_type_support_ids_t;

static const _Carcontrol_GetResult_Request_type_support_ids_t _Carcontrol_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_GetResult_Request_type_support_symbol_names_t _Carcontrol_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_GetResult_Request)),
  }
};

typedef struct _Carcontrol_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Carcontrol_GetResult_Request_type_support_data_t;

static _Carcontrol_GetResult_Request_type_support_data_t _Carcontrol_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_GetResult_Request_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_GetResult_Request__get_type_hash,
  &rover_control_package__action__Carcontrol_GetResult_Request__get_type_description,
  &rover_control_package__action__Carcontrol_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Request>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_GetResult_Request)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_GetResult_Response_type_support_ids_t;

static const _Carcontrol_GetResult_Response_type_support_ids_t _Carcontrol_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_GetResult_Response_type_support_symbol_names_t _Carcontrol_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_GetResult_Response)),
  }
};

typedef struct _Carcontrol_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Carcontrol_GetResult_Response_type_support_data_t;

static _Carcontrol_GetResult_Response_type_support_data_t _Carcontrol_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_GetResult_Response_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_GetResult_Response__get_type_hash,
  &rover_control_package__action__Carcontrol_GetResult_Response__get_type_description,
  &rover_control_package__action__Carcontrol_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Response>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_GetResult_Response)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_GetResult_Event_type_support_ids_t;

static const _Carcontrol_GetResult_Event_type_support_ids_t _Carcontrol_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_GetResult_Event_type_support_symbol_names_t _Carcontrol_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_GetResult_Event)),
  }
};

typedef struct _Carcontrol_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Carcontrol_GetResult_Event_type_support_data_t;

static _Carcontrol_GetResult_Event_type_support_data_t _Carcontrol_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_GetResult_Event_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_GetResult_Event__get_type_hash,
  &rover_control_package__action__Carcontrol_GetResult_Event__get_type_description,
  &rover_control_package__action__Carcontrol_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Event>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_GetResult_Event)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_GetResult_type_support_ids_t;

static const _Carcontrol_GetResult_type_support_ids_t _Carcontrol_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_GetResult_type_support_symbol_names_t _Carcontrol_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_GetResult)),
  }
};

typedef struct _Carcontrol_GetResult_type_support_data_t
{
  void * data[2];
} _Carcontrol_GetResult_type_support_data_t;

static _Carcontrol_GetResult_type_support_data_t _Carcontrol_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_GetResult_service_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Carcontrol_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_control_package::action::Carcontrol_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rover_control_package::action::Carcontrol_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rover_control_package::action::Carcontrol_GetResult>,
  &rover_control_package__action__Carcontrol_GetResult__get_type_hash,
  &rover_control_package__action__Carcontrol_GetResult__get_type_description,
  &rover_control_package__action__Carcontrol_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rover_control_package::action::Carcontrol_GetResult>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Carcontrol_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Carcontrol_FeedbackMessage_type_support_ids_t;

static const _Carcontrol_FeedbackMessage_type_support_ids_t _Carcontrol_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Carcontrol_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Carcontrol_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Carcontrol_FeedbackMessage_type_support_symbol_names_t _Carcontrol_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_control_package, action, Carcontrol_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_control_package, action, Carcontrol_FeedbackMessage)),
  }
};

typedef struct _Carcontrol_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Carcontrol_FeedbackMessage_type_support_data_t;

static _Carcontrol_FeedbackMessage_type_support_data_t _Carcontrol_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Carcontrol_FeedbackMessage_message_typesupport_map = {
  2,
  "rover_control_package",
  &_Carcontrol_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Carcontrol_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Carcontrol_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Carcontrol_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Carcontrol_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_FeedbackMessage__get_type_hash,
  &rover_control_package__action__Carcontrol_FeedbackMessage__get_type_description,
  &rover_control_package__action__Carcontrol_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_control_package::action::Carcontrol_FeedbackMessage>()
{
  return &::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_control_package, action, Carcontrol_FeedbackMessage)() {
  return get_message_type_support_handle<rover_control_package::action::Carcontrol_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace rover_control_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Carcontrol_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &rover_control_package__action__Carcontrol__get_type_hash,
  &rover_control_package__action__Carcontrol__get_type_description,
  &rover_control_package__action__Carcontrol__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rover_control_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<rover_control_package::action::Carcontrol>()
{
  using ::rover_control_package::action::rosidl_typesupport_cpp::Carcontrol_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Carcontrol_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::rover_control_package::action::Carcontrol::Impl::SendGoalService>();
  Carcontrol_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::rover_control_package::action::Carcontrol::Impl::GetResultService>();
  Carcontrol_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::rover_control_package::action::Carcontrol::Impl::CancelGoalService>();
  Carcontrol_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::rover_control_package::action::Carcontrol::Impl::FeedbackMessage>();
  Carcontrol_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::rover_control_package::action::Carcontrol::Impl::GoalStatusMessage>();
  return &Carcontrol_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
