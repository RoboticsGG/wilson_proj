// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rover_control_package:action/Carcontrol.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
#include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rover_control_package/action/detail/carcontrol__functions.h"
#include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_Goal__init(message_memory);
}

void rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_message_member_array[2] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_Goal, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_Goal, timestop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_Goal",  // message name
  2,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_Goal),
  rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_message_member_array,  // message members
  rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_Goal__get_type_hash,
  &rover_control_package__action__Carcontrol_Goal__get_type_description,
  &rover_control_package__action__Carcontrol_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_Goal)() {
  if (!rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_Goal__rosidl_typesupport_introspection_c__Carcontrol_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `result_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_Result__init(message_memory);
}

void rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_message_member_array[1] = {
  {
    "result_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_Result, result_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_Result",  // message name
  1,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_Result),
  rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_message_member_array,  // message members
  rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_Result__get_type_hash,
  &rover_control_package__action__Carcontrol_Result__get_type_description,
  &rover_control_package__action__Carcontrol_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_Result)() {
  if (!rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_Result__rosidl_typesupport_introspection_c__Carcontrol_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `time_remaining`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_Feedback__init(message_memory);
}

void rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_Feedback__fini(message_memory);
}

size_t rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__size_function__Carcontrol_Feedback__time_remaining(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_Feedback__time_remaining(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__get_function__Carcontrol_Feedback__time_remaining(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_Feedback__time_remaining(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_Feedback__time_remaining(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__assign_function__Carcontrol_Feedback__time_remaining(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__get_function__Carcontrol_Feedback__time_remaining(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__resize_function__Carcontrol_Feedback__time_remaining(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_message_member_array[1] = {
  {
    "time_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_Feedback, time_remaining),  // bytes offset in struct
    NULL,  // default value
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__size_function__Carcontrol_Feedback__time_remaining,  // size() function pointer
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_Feedback__time_remaining,  // get_const(index) function pointer
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__get_function__Carcontrol_Feedback__time_remaining,  // get(index) function pointer
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_Feedback__time_remaining,  // fetch(index, &value) function pointer
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__assign_function__Carcontrol_Feedback__time_remaining,  // assign(index, value) function pointer
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__resize_function__Carcontrol_Feedback__time_remaining  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_Feedback",  // message name
  1,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_Feedback),
  rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_message_member_array,  // message members
  rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_Feedback__get_type_hash,
  &rover_control_package__action__Carcontrol_Feedback__get_type_description,
  &rover_control_package__action__Carcontrol_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_Feedback)() {
  if (!rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_Feedback__rosidl_typesupport_introspection_c__Carcontrol_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "rover_control_package/action/carcontrol.h"
// Member `goal`
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_SendGoal_Request__init(message_memory);
}

void rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_SendGoal_Request),
  rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_member_array,  // message members
  rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_SendGoal_Request__get_type_hash,
  &rover_control_package__action__Carcontrol_SendGoal_Request__get_type_description,
  &rover_control_package__action__Carcontrol_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Request)() {
  rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_Goal)();
  if (!rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_SendGoal_Response__init(message_memory);
}

void rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_SendGoal_Response),
  rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_member_array,  // message members
  rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_SendGoal_Response__get_type_hash,
  &rover_control_package__action__Carcontrol_SendGoal_Response__get_type_description,
  &rover_control_package__action__Carcontrol_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Response)() {
  rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "rover_control_package/action/carcontrol.h"
// Member `request`
// Member `response`
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_SendGoal_Event__init(message_memory);
}

void rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_SendGoal_Event__fini(message_memory);
}

size_t rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Carcontrol_SendGoal_Event__request(
  const void * untyped_member)
{
  const rover_control_package__action__Carcontrol_SendGoal_Request__Sequence * member =
    (const rover_control_package__action__Carcontrol_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const rover_control_package__action__Carcontrol_SendGoal_Request__Sequence * member =
    (const rover_control_package__action__Carcontrol_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  rover_control_package__action__Carcontrol_SendGoal_Request__Sequence * member =
    (rover_control_package__action__Carcontrol_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rover_control_package__action__Carcontrol_SendGoal_Request * item =
    ((const rover_control_package__action__Carcontrol_SendGoal_Request *)
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_SendGoal_Event__request(untyped_member, index));
  rover_control_package__action__Carcontrol_SendGoal_Request * value =
    (rover_control_package__action__Carcontrol_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Carcontrol_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rover_control_package__action__Carcontrol_SendGoal_Request * item =
    ((rover_control_package__action__Carcontrol_SendGoal_Request *)
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_SendGoal_Event__request(untyped_member, index));
  const rover_control_package__action__Carcontrol_SendGoal_Request * value =
    (const rover_control_package__action__Carcontrol_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Carcontrol_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  rover_control_package__action__Carcontrol_SendGoal_Request__Sequence * member =
    (rover_control_package__action__Carcontrol_SendGoal_Request__Sequence *)(untyped_member);
  rover_control_package__action__Carcontrol_SendGoal_Request__Sequence__fini(member);
  return rover_control_package__action__Carcontrol_SendGoal_Request__Sequence__init(member, size);
}

size_t rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Carcontrol_SendGoal_Event__response(
  const void * untyped_member)
{
  const rover_control_package__action__Carcontrol_SendGoal_Response__Sequence * member =
    (const rover_control_package__action__Carcontrol_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const rover_control_package__action__Carcontrol_SendGoal_Response__Sequence * member =
    (const rover_control_package__action__Carcontrol_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  rover_control_package__action__Carcontrol_SendGoal_Response__Sequence * member =
    (rover_control_package__action__Carcontrol_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rover_control_package__action__Carcontrol_SendGoal_Response * item =
    ((const rover_control_package__action__Carcontrol_SendGoal_Response *)
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_SendGoal_Event__response(untyped_member, index));
  rover_control_package__action__Carcontrol_SendGoal_Response * value =
    (rover_control_package__action__Carcontrol_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Carcontrol_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rover_control_package__action__Carcontrol_SendGoal_Response * item =
    ((rover_control_package__action__Carcontrol_SendGoal_Response *)
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_SendGoal_Event__response(untyped_member, index));
  const rover_control_package__action__Carcontrol_SendGoal_Response * value =
    (const rover_control_package__action__Carcontrol_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Carcontrol_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  rover_control_package__action__Carcontrol_SendGoal_Response__Sequence * member =
    (rover_control_package__action__Carcontrol_SendGoal_Response__Sequence *)(untyped_member);
  rover_control_package__action__Carcontrol_SendGoal_Response__Sequence__fini(member);
  return rover_control_package__action__Carcontrol_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_SendGoal_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Carcontrol_SendGoal_Event__request,  // size() function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_SendGoal_Event__request,  // get_const(index) function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_SendGoal_Event__request,  // get(index) function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_SendGoal_Event__request,  // fetch(index, &value) function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Carcontrol_SendGoal_Event__request,  // assign(index, value) function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Carcontrol_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Carcontrol_SendGoal_Event__response,  // size() function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_SendGoal_Event__response,  // get_const(index) function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_SendGoal_Event__response,  // get(index) function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_SendGoal_Event__response,  // fetch(index, &value) function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Carcontrol_SendGoal_Event__response,  // assign(index, value) function pointer
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Carcontrol_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_SendGoal_Event),
  rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_member_array,  // message members
  rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_SendGoal_Event__get_type_hash,
  &rover_control_package__action__Carcontrol_SendGoal_Event__get_type_description,
  &rover_control_package__action__Carcontrol_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Event)() {
  rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Request)();
  rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Response)();
  if (!rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_service_members = {
  "rover_control_package__action",  // service namespace
  "Carcontrol_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_service_type_support_handle = {
  0,
  &rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Request_message_type_support_handle,
  &rover_control_package__action__Carcontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Response_message_type_support_handle,
  &rover_control_package__action__Carcontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rover_control_package,
    action,
    Carcontrol_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rover_control_package,
    action,
    Carcontrol_SendGoal
  ),
  &rover_control_package__action__Carcontrol_SendGoal__get_type_hash,
  &rover_control_package__action__Carcontrol_SendGoal__get_type_description,
  &rover_control_package__action__Carcontrol_SendGoal__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal)() {
  if (!rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_service_type_support_handle.typesupport_identifier) {
    rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_SendGoal_Event)()->data;
  }

  return &rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_GetResult_Request__init(message_memory);
}

void rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_GetResult_Request),
  rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_member_array,  // message members
  rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_GetResult_Request__get_type_hash,
  &rover_control_package__action__Carcontrol_GetResult_Request__get_type_description,
  &rover_control_package__action__Carcontrol_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Request)() {
  rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "rover_control_package/action/carcontrol.h"
// Member `result`
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_GetResult_Response__init(message_memory);
}

void rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_GetResult_Response),
  rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_member_array,  // message members
  rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_GetResult_Response__get_type_hash,
  &rover_control_package__action__Carcontrol_GetResult_Response__get_type_description,
  &rover_control_package__action__Carcontrol_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Response)() {
  rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_Result)();
  if (!rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "rover_control_package/action/carcontrol.h"
// Member `request`
// Member `response`
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_GetResult_Event__init(message_memory);
}

void rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_GetResult_Event__fini(message_memory);
}

size_t rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Carcontrol_GetResult_Event__request(
  const void * untyped_member)
{
  const rover_control_package__action__Carcontrol_GetResult_Request__Sequence * member =
    (const rover_control_package__action__Carcontrol_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const rover_control_package__action__Carcontrol_GetResult_Request__Sequence * member =
    (const rover_control_package__action__Carcontrol_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  rover_control_package__action__Carcontrol_GetResult_Request__Sequence * member =
    (rover_control_package__action__Carcontrol_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rover_control_package__action__Carcontrol_GetResult_Request * item =
    ((const rover_control_package__action__Carcontrol_GetResult_Request *)
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_GetResult_Event__request(untyped_member, index));
  rover_control_package__action__Carcontrol_GetResult_Request * value =
    (rover_control_package__action__Carcontrol_GetResult_Request *)(untyped_value);
  *value = *item;
}

void rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Carcontrol_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rover_control_package__action__Carcontrol_GetResult_Request * item =
    ((rover_control_package__action__Carcontrol_GetResult_Request *)
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_GetResult_Event__request(untyped_member, index));
  const rover_control_package__action__Carcontrol_GetResult_Request * value =
    (const rover_control_package__action__Carcontrol_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Carcontrol_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  rover_control_package__action__Carcontrol_GetResult_Request__Sequence * member =
    (rover_control_package__action__Carcontrol_GetResult_Request__Sequence *)(untyped_member);
  rover_control_package__action__Carcontrol_GetResult_Request__Sequence__fini(member);
  return rover_control_package__action__Carcontrol_GetResult_Request__Sequence__init(member, size);
}

size_t rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Carcontrol_GetResult_Event__response(
  const void * untyped_member)
{
  const rover_control_package__action__Carcontrol_GetResult_Response__Sequence * member =
    (const rover_control_package__action__Carcontrol_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const rover_control_package__action__Carcontrol_GetResult_Response__Sequence * member =
    (const rover_control_package__action__Carcontrol_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  rover_control_package__action__Carcontrol_GetResult_Response__Sequence * member =
    (rover_control_package__action__Carcontrol_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rover_control_package__action__Carcontrol_GetResult_Response * item =
    ((const rover_control_package__action__Carcontrol_GetResult_Response *)
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_GetResult_Event__response(untyped_member, index));
  rover_control_package__action__Carcontrol_GetResult_Response * value =
    (rover_control_package__action__Carcontrol_GetResult_Response *)(untyped_value);
  *value = *item;
}

void rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Carcontrol_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rover_control_package__action__Carcontrol_GetResult_Response * item =
    ((rover_control_package__action__Carcontrol_GetResult_Response *)
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_GetResult_Event__response(untyped_member, index));
  const rover_control_package__action__Carcontrol_GetResult_Response * value =
    (const rover_control_package__action__Carcontrol_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Carcontrol_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  rover_control_package__action__Carcontrol_GetResult_Response__Sequence * member =
    (rover_control_package__action__Carcontrol_GetResult_Response__Sequence *)(untyped_member);
  rover_control_package__action__Carcontrol_GetResult_Response__Sequence__fini(member);
  return rover_control_package__action__Carcontrol_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_GetResult_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Carcontrol_GetResult_Event__request,  // size() function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_GetResult_Event__request,  // get_const(index) function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_GetResult_Event__request,  // get(index) function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_GetResult_Event__request,  // fetch(index, &value) function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Carcontrol_GetResult_Event__request,  // assign(index, value) function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Carcontrol_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Carcontrol_GetResult_Event__response,  // size() function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Carcontrol_GetResult_Event__response,  // get_const(index) function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Carcontrol_GetResult_Event__response,  // get(index) function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Carcontrol_GetResult_Event__response,  // fetch(index, &value) function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Carcontrol_GetResult_Event__response,  // assign(index, value) function pointer
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Carcontrol_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_GetResult_Event),
  rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_member_array,  // message members
  rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_GetResult_Event__get_type_hash,
  &rover_control_package__action__Carcontrol_GetResult_Event__get_type_description,
  &rover_control_package__action__Carcontrol_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Event)() {
  rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Request)();
  rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Response)();
  if (!rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_service_members = {
  "rover_control_package__action",  // service namespace
  "Carcontrol_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_service_type_support_handle = {
  0,
  &rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_service_members,
  get_service_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_GetResult_Request__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Request_message_type_support_handle,
  &rover_control_package__action__Carcontrol_GetResult_Response__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Response_message_type_support_handle,
  &rover_control_package__action__Carcontrol_GetResult_Event__rosidl_typesupport_introspection_c__Carcontrol_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rover_control_package,
    action,
    Carcontrol_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rover_control_package,
    action,
    Carcontrol_GetResult
  ),
  &rover_control_package__action__Carcontrol_GetResult__get_type_hash,
  &rover_control_package__action__Carcontrol_GetResult__get_type_description,
  &rover_control_package__action__Carcontrol_GetResult__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult)() {
  if (!rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_service_type_support_handle.typesupport_identifier) {
    rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_GetResult_Event)()->data;
  }

  return &rover_control_package__action__detail__carcontrol__rosidl_typesupport_introspection_c__Carcontrol_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_control_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__functions.h"
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "rover_control_package/action/carcontrol.h"
// Member `feedback`
// already included above
// #include "rover_control_package/action/detail/carcontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_control_package__action__Carcontrol_FeedbackMessage__init(message_memory);
}

void rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_fini_function(void * message_memory)
{
  rover_control_package__action__Carcontrol_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_control_package__action__Carcontrol_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_members = {
  "rover_control_package__action",  // message namespace
  "Carcontrol_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(rover_control_package__action__Carcontrol_FeedbackMessage),
  rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_member_array,  // message members
  rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_type_support_handle = {
  0,
  &rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &rover_control_package__action__Carcontrol_FeedbackMessage__get_type_hash,
  &rover_control_package__action__Carcontrol_FeedbackMessage__get_type_description,
  &rover_control_package__action__Carcontrol_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_control_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_FeedbackMessage)() {
  rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_control_package, action, Carcontrol_Feedback)();
  if (!rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_control_package__action__Carcontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Carcontrol_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif