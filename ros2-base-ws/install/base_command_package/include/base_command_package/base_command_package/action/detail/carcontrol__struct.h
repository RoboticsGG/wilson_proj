// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_command_package:action/Carcontrol.idl
// generated code does not contain a copyright notice

#ifndef BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_H_
#define BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Carcontrol in the package base_command_package.
typedef struct base_command_package__action__Carcontrol_Goal
{
  rosidl_runtime_c__String direction;
  int32_t timestop;
} base_command_package__action__Carcontrol_Goal;

// Struct for a sequence of base_command_package__action__Carcontrol_Goal.
typedef struct base_command_package__action__Carcontrol_Goal__Sequence
{
  base_command_package__action__Carcontrol_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_command_package__action__Carcontrol_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Carcontrol in the package base_command_package.
typedef struct base_command_package__action__Carcontrol_Result
{
  rosidl_runtime_c__String result_msg;
} base_command_package__action__Carcontrol_Result;

// Struct for a sequence of base_command_package__action__Carcontrol_Result.
typedef struct base_command_package__action__Carcontrol_Result__Sequence
{
  base_command_package__action__Carcontrol_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_command_package__action__Carcontrol_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'time_remaining'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Carcontrol in the package base_command_package.
typedef struct base_command_package__action__Carcontrol_Feedback
{
  rosidl_runtime_c__int32__Sequence time_remaining;
} base_command_package__action__Carcontrol_Feedback;

// Struct for a sequence of base_command_package__action__Carcontrol_Feedback.
typedef struct base_command_package__action__Carcontrol_Feedback__Sequence
{
  base_command_package__action__Carcontrol_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_command_package__action__Carcontrol_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "base_command_package/action/detail/carcontrol__struct.h"

/// Struct defined in action/Carcontrol in the package base_command_package.
typedef struct base_command_package__action__Carcontrol_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_command_package__action__Carcontrol_Goal goal;
} base_command_package__action__Carcontrol_SendGoal_Request;

// Struct for a sequence of base_command_package__action__Carcontrol_SendGoal_Request.
typedef struct base_command_package__action__Carcontrol_SendGoal_Request__Sequence
{
  base_command_package__action__Carcontrol_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_command_package__action__Carcontrol_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Carcontrol in the package base_command_package.
typedef struct base_command_package__action__Carcontrol_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} base_command_package__action__Carcontrol_SendGoal_Response;

// Struct for a sequence of base_command_package__action__Carcontrol_SendGoal_Response.
typedef struct base_command_package__action__Carcontrol_SendGoal_Response__Sequence
{
  base_command_package__action__Carcontrol_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_command_package__action__Carcontrol_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Carcontrol in the package base_command_package.
typedef struct base_command_package__action__Carcontrol_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} base_command_package__action__Carcontrol_GetResult_Request;

// Struct for a sequence of base_command_package__action__Carcontrol_GetResult_Request.
typedef struct base_command_package__action__Carcontrol_GetResult_Request__Sequence
{
  base_command_package__action__Carcontrol_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_command_package__action__Carcontrol_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "base_command_package/action/detail/carcontrol__struct.h"

/// Struct defined in action/Carcontrol in the package base_command_package.
typedef struct base_command_package__action__Carcontrol_GetResult_Response
{
  int8_t status;
  base_command_package__action__Carcontrol_Result result;
} base_command_package__action__Carcontrol_GetResult_Response;

// Struct for a sequence of base_command_package__action__Carcontrol_GetResult_Response.
typedef struct base_command_package__action__Carcontrol_GetResult_Response__Sequence
{
  base_command_package__action__Carcontrol_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_command_package__action__Carcontrol_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "base_command_package/action/detail/carcontrol__struct.h"

/// Struct defined in action/Carcontrol in the package base_command_package.
typedef struct base_command_package__action__Carcontrol_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_command_package__action__Carcontrol_Feedback feedback;
} base_command_package__action__Carcontrol_FeedbackMessage;

// Struct for a sequence of base_command_package__action__Carcontrol_FeedbackMessage.
typedef struct base_command_package__action__Carcontrol_FeedbackMessage__Sequence
{
  base_command_package__action__Carcontrol_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_command_package__action__Carcontrol_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_H_
