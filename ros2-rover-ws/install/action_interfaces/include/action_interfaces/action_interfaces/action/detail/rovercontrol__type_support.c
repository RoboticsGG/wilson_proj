// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_interfaces:action/Rovercontrol.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
#include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_interfaces/action/detail/rovercontrol__functions.h"
#include "action_interfaces/action/detail/rovercontrol__struct.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_Goal__init(message_memory);
}

void action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_message_member_array[2] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_Goal, direction),  // bytes offset in struct
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
    offsetof(action_interfaces__action__Rovercontrol_Goal, timestop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_Goal",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_Goal),
  action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_Goal__get_type_hash,
  &action_interfaces__action__Rovercontrol_Goal__get_type_description,
  &action_interfaces__action__Rovercontrol_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_Goal)() {
  if (!action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_Goal__rosidl_typesupport_introspection_c__Rovercontrol_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


// Include directives for member types
// Member `result_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_Result__init(message_memory);
}

void action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_message_member_array[1] = {
  {
    "result_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_Result, result_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_Result",  // message name
  1,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_Result),
  action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_Result__get_type_hash,
  &action_interfaces__action__Rovercontrol_Result__get_type_description,
  &action_interfaces__action__Rovercontrol_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_Result)() {
  if (!action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_Result__rosidl_typesupport_introspection_c__Rovercontrol_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


// Include directives for member types
// Member `time_remaining`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_Feedback__init(message_memory);
}

void action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_Feedback__fini(message_memory);
}

size_t action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__size_function__Rovercontrol_Feedback__time_remaining(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_Feedback__time_remaining(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__get_function__Rovercontrol_Feedback__time_remaining(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_Feedback__time_remaining(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_Feedback__time_remaining(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_Feedback__time_remaining(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__get_function__Rovercontrol_Feedback__time_remaining(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_Feedback__time_remaining(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_message_member_array[1] = {
  {
    "time_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_Feedback, time_remaining),  // bytes offset in struct
    NULL,  // default value
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__size_function__Rovercontrol_Feedback__time_remaining,  // size() function pointer
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_Feedback__time_remaining,  // get_const(index) function pointer
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__get_function__Rovercontrol_Feedback__time_remaining,  // get(index) function pointer
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_Feedback__time_remaining,  // fetch(index, &value) function pointer
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_Feedback__time_remaining,  // assign(index, value) function pointer
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_Feedback__time_remaining  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_Feedback",  // message name
  1,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_Feedback),
  action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_Feedback__get_type_hash,
  &action_interfaces__action__Rovercontrol_Feedback__get_type_description,
  &action_interfaces__action__Rovercontrol_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_Feedback)() {
  if (!action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_Feedback__rosidl_typesupport_introspection_c__Rovercontrol_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "action_interfaces/action/rovercontrol.h"
// Member `goal`
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_SendGoal_Request__init(message_memory);
}

void action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(action_interfaces__action__Rovercontrol_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_SendGoal_Request),
  action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_SendGoal_Request__get_type_hash,
  &action_interfaces__action__Rovercontrol_SendGoal_Request__get_type_description,
  &action_interfaces__action__Rovercontrol_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Request)() {
  action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_Goal)();
  if (!action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_SendGoal_Response__init(message_memory);
}

void action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(action_interfaces__action__Rovercontrol_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_SendGoal_Response),
  action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_SendGoal_Response__get_type_hash,
  &action_interfaces__action__Rovercontrol_SendGoal_Response__get_type_description,
  &action_interfaces__action__Rovercontrol_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Response)() {
  action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "action_interfaces/action/rovercontrol.h"
// Member `request`
// Member `response`
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_SendGoal_Event__init(message_memory);
}

void action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_SendGoal_Event__fini(message_memory);
}

size_t action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Rovercontrol_SendGoal_Event__request(
  const void * untyped_member)
{
  const action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence * member =
    (const action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence * member =
    (const action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence * member =
    (action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const action_interfaces__action__Rovercontrol_SendGoal_Request * item =
    ((const action_interfaces__action__Rovercontrol_SendGoal_Request *)
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_SendGoal_Event__request(untyped_member, index));
  action_interfaces__action__Rovercontrol_SendGoal_Request * value =
    (action_interfaces__action__Rovercontrol_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  action_interfaces__action__Rovercontrol_SendGoal_Request * item =
    ((action_interfaces__action__Rovercontrol_SendGoal_Request *)
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_SendGoal_Event__request(untyped_member, index));
  const action_interfaces__action__Rovercontrol_SendGoal_Request * value =
    (const action_interfaces__action__Rovercontrol_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence * member =
    (action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence *)(untyped_member);
  action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence__fini(member);
  return action_interfaces__action__Rovercontrol_SendGoal_Request__Sequence__init(member, size);
}

size_t action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Rovercontrol_SendGoal_Event__response(
  const void * untyped_member)
{
  const action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence * member =
    (const action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence * member =
    (const action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence * member =
    (action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const action_interfaces__action__Rovercontrol_SendGoal_Response * item =
    ((const action_interfaces__action__Rovercontrol_SendGoal_Response *)
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_SendGoal_Event__response(untyped_member, index));
  action_interfaces__action__Rovercontrol_SendGoal_Response * value =
    (action_interfaces__action__Rovercontrol_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  action_interfaces__action__Rovercontrol_SendGoal_Response * item =
    ((action_interfaces__action__Rovercontrol_SendGoal_Response *)
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_SendGoal_Event__response(untyped_member, index));
  const action_interfaces__action__Rovercontrol_SendGoal_Response * value =
    (const action_interfaces__action__Rovercontrol_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence * member =
    (action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence *)(untyped_member);
  action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence__fini(member);
  return action_interfaces__action__Rovercontrol_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(action_interfaces__action__Rovercontrol_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Rovercontrol_SendGoal_Event__request,  // size() function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_SendGoal_Event__request,  // get_const(index) function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_SendGoal_Event__request,  // get(index) function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_SendGoal_Event__request,  // fetch(index, &value) function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_SendGoal_Event__request,  // assign(index, value) function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Rovercontrol_SendGoal_Event__response,  // size() function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_SendGoal_Event__response,  // get_const(index) function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_SendGoal_Event__response,  // get(index) function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_SendGoal_Event__response,  // fetch(index, &value) function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_SendGoal_Event__response,  // assign(index, value) function pointer
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_SendGoal_Event),
  action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_SendGoal_Event__get_type_hash,
  &action_interfaces__action__Rovercontrol_SendGoal_Event__get_type_description,
  &action_interfaces__action__Rovercontrol_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Event)() {
  action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Request)();
  action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Response)();
  if (!action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_service_members = {
  "action_interfaces__action",  // service namespace
  "Rovercontrol_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_service_type_support_handle = {
  0,
  &action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_SendGoal_Request__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Request_message_type_support_handle,
  &action_interfaces__action__Rovercontrol_SendGoal_Response__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Response_message_type_support_handle,
  &action_interfaces__action__Rovercontrol_SendGoal_Event__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    action_interfaces,
    action,
    Rovercontrol_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    action_interfaces,
    action,
    Rovercontrol_SendGoal
  ),
  &action_interfaces__action__Rovercontrol_SendGoal__get_type_hash,
  &action_interfaces__action__Rovercontrol_SendGoal__get_type_description,
  &action_interfaces__action__Rovercontrol_SendGoal__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal)() {
  if (!action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_service_type_support_handle.typesupport_identifier) {
    action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_SendGoal_Event)()->data;
  }

  return &action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


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

void action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_GetResult_Request__init(message_memory);
}

void action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_GetResult_Request),
  action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_GetResult_Request__get_type_hash,
  &action_interfaces__action__Rovercontrol_GetResult_Request__get_type_description,
  &action_interfaces__action__Rovercontrol_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Request)() {
  action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "action_interfaces/action/rovercontrol.h"
// Member `result`
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_GetResult_Response__init(message_memory);
}

void action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(action_interfaces__action__Rovercontrol_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_GetResult_Response),
  action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_GetResult_Response__get_type_hash,
  &action_interfaces__action__Rovercontrol_GetResult_Response__get_type_description,
  &action_interfaces__action__Rovercontrol_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Response)() {
  action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_Result)();
  if (!action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


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
// #include "action_interfaces/action/rovercontrol.h"
// Member `request`
// Member `response`
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_GetResult_Event__init(message_memory);
}

void action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_GetResult_Event__fini(message_memory);
}

size_t action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Rovercontrol_GetResult_Event__request(
  const void * untyped_member)
{
  const action_interfaces__action__Rovercontrol_GetResult_Request__Sequence * member =
    (const action_interfaces__action__Rovercontrol_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const action_interfaces__action__Rovercontrol_GetResult_Request__Sequence * member =
    (const action_interfaces__action__Rovercontrol_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  action_interfaces__action__Rovercontrol_GetResult_Request__Sequence * member =
    (action_interfaces__action__Rovercontrol_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const action_interfaces__action__Rovercontrol_GetResult_Request * item =
    ((const action_interfaces__action__Rovercontrol_GetResult_Request *)
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_GetResult_Event__request(untyped_member, index));
  action_interfaces__action__Rovercontrol_GetResult_Request * value =
    (action_interfaces__action__Rovercontrol_GetResult_Request *)(untyped_value);
  *value = *item;
}

void action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  action_interfaces__action__Rovercontrol_GetResult_Request * item =
    ((action_interfaces__action__Rovercontrol_GetResult_Request *)
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_GetResult_Event__request(untyped_member, index));
  const action_interfaces__action__Rovercontrol_GetResult_Request * value =
    (const action_interfaces__action__Rovercontrol_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  action_interfaces__action__Rovercontrol_GetResult_Request__Sequence * member =
    (action_interfaces__action__Rovercontrol_GetResult_Request__Sequence *)(untyped_member);
  action_interfaces__action__Rovercontrol_GetResult_Request__Sequence__fini(member);
  return action_interfaces__action__Rovercontrol_GetResult_Request__Sequence__init(member, size);
}

size_t action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Rovercontrol_GetResult_Event__response(
  const void * untyped_member)
{
  const action_interfaces__action__Rovercontrol_GetResult_Response__Sequence * member =
    (const action_interfaces__action__Rovercontrol_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const action_interfaces__action__Rovercontrol_GetResult_Response__Sequence * member =
    (const action_interfaces__action__Rovercontrol_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  action_interfaces__action__Rovercontrol_GetResult_Response__Sequence * member =
    (action_interfaces__action__Rovercontrol_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const action_interfaces__action__Rovercontrol_GetResult_Response * item =
    ((const action_interfaces__action__Rovercontrol_GetResult_Response *)
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_GetResult_Event__response(untyped_member, index));
  action_interfaces__action__Rovercontrol_GetResult_Response * value =
    (action_interfaces__action__Rovercontrol_GetResult_Response *)(untyped_value);
  *value = *item;
}

void action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  action_interfaces__action__Rovercontrol_GetResult_Response * item =
    ((action_interfaces__action__Rovercontrol_GetResult_Response *)
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_GetResult_Event__response(untyped_member, index));
  const action_interfaces__action__Rovercontrol_GetResult_Response * value =
    (const action_interfaces__action__Rovercontrol_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  action_interfaces__action__Rovercontrol_GetResult_Response__Sequence * member =
    (action_interfaces__action__Rovercontrol_GetResult_Response__Sequence *)(untyped_member);
  action_interfaces__action__Rovercontrol_GetResult_Response__Sequence__fini(member);
  return action_interfaces__action__Rovercontrol_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(action_interfaces__action__Rovercontrol_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Rovercontrol_GetResult_Event__request,  // size() function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_GetResult_Event__request,  // get_const(index) function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_GetResult_Event__request,  // get(index) function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_GetResult_Event__request,  // fetch(index, &value) function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_GetResult_Event__request,  // assign(index, value) function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Rovercontrol_GetResult_Event__response,  // size() function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Rovercontrol_GetResult_Event__response,  // get_const(index) function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Rovercontrol_GetResult_Event__response,  // get(index) function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Rovercontrol_GetResult_Event__response,  // fetch(index, &value) function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Rovercontrol_GetResult_Event__response,  // assign(index, value) function pointer
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Rovercontrol_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_GetResult_Event),
  action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_GetResult_Event__get_type_hash,
  &action_interfaces__action__Rovercontrol_GetResult_Event__get_type_description,
  &action_interfaces__action__Rovercontrol_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Event)() {
  action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Request)();
  action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Response)();
  if (!action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_service_members = {
  "action_interfaces__action",  // service namespace
  "Rovercontrol_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_service_type_support_handle = {
  0,
  &action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_service_members,
  get_service_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_GetResult_Request__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Request_message_type_support_handle,
  &action_interfaces__action__Rovercontrol_GetResult_Response__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Response_message_type_support_handle,
  &action_interfaces__action__Rovercontrol_GetResult_Event__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    action_interfaces,
    action,
    Rovercontrol_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    action_interfaces,
    action,
    Rovercontrol_GetResult
  ),
  &action_interfaces__action__Rovercontrol_GetResult__get_type_hash,
  &action_interfaces__action__Rovercontrol_GetResult__get_type_description,
  &action_interfaces__action__Rovercontrol_GetResult__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult)() {
  if (!action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_service_type_support_handle.typesupport_identifier) {
    action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_GetResult_Event)()->data;
  }

  return &action_interfaces__action__detail__rovercontrol__rosidl_typesupport_introspection_c__Rovercontrol_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__functions.h"
// already included above
// #include "action_interfaces/action/detail/rovercontrol__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "action_interfaces/action/rovercontrol.h"
// Member `feedback`
// already included above
// #include "action_interfaces/action/detail/rovercontrol__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Rovercontrol_FeedbackMessage__init(message_memory);
}

void action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_fini_function(void * message_memory)
{
  action_interfaces__action__Rovercontrol_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Rovercontrol_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(action_interfaces__action__Rovercontrol_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_members = {
  "action_interfaces__action",  // message namespace
  "Rovercontrol_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Rovercontrol_FeedbackMessage),
  action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_member_array,  // message members
  action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_type_support_handle = {
  0,
  &action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &action_interfaces__action__Rovercontrol_FeedbackMessage__get_type_hash,
  &action_interfaces__action__Rovercontrol_FeedbackMessage__get_type_description,
  &action_interfaces__action__Rovercontrol_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_FeedbackMessage)() {
  action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Rovercontrol_Feedback)();
  if (!action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_interfaces__action__Rovercontrol_FeedbackMessage__rosidl_typesupport_introspection_c__Rovercontrol_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
