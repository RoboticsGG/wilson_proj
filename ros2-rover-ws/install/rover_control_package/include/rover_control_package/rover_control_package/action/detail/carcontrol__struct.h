// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rover_control_package:action/Carcontrol.idl
// generated code does not contain a copyright notice

#ifndef ROVER_CONTROL_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_H_
#define ROVER_CONTROL_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_H_

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

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_Goal
{
  rosidl_runtime_c__String direction;
  int32_t timestop;
} rover_control_package__action__Carcontrol_Goal;

// Struct for a sequence of rover_control_package__action__Carcontrol_Goal.
typedef struct rover_control_package__action__Carcontrol_Goal__Sequence
{
  rover_control_package__action__Carcontrol_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_Result
{
  rosidl_runtime_c__String result_msg;
} rover_control_package__action__Carcontrol_Result;

// Struct for a sequence of rover_control_package__action__Carcontrol_Result.
typedef struct rover_control_package__action__Carcontrol_Result__Sequence
{
  rover_control_package__action__Carcontrol_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'time_remaining'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_Feedback
{
  rosidl_runtime_c__int32__Sequence time_remaining;
} rover_control_package__action__Carcontrol_Feedback;

// Struct for a sequence of rover_control_package__action__Carcontrol_Feedback.
typedef struct rover_control_package__action__Carcontrol_Feedback__Sequence
{
  rover_control_package__action__Carcontrol_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rover_control_package/action/detail/carcontrol__struct.h"

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rover_control_package__action__Carcontrol_Goal goal;
} rover_control_package__action__Carcontrol_SendGoal_Request;

// Struct for a sequence of rover_control_package__action__Carcontrol_SendGoal_Request.
typedef struct rover_control_package__action__Carcontrol_SendGoal_Request__Sequence
{
  rover_control_package__action__Carcontrol_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rover_control_package__action__Carcontrol_SendGoal_Response;

// Struct for a sequence of rover_control_package__action__Carcontrol_SendGoal_Response.
typedef struct rover_control_package__action__Carcontrol_SendGoal_Response__Sequence
{
  rover_control_package__action__Carcontrol_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rover_control_package__action__Carcontrol_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rover_control_package__action__Carcontrol_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rover_control_package__action__Carcontrol_SendGoal_Request__Sequence request;
  rover_control_package__action__Carcontrol_SendGoal_Response__Sequence response;
} rover_control_package__action__Carcontrol_SendGoal_Event;

// Struct for a sequence of rover_control_package__action__Carcontrol_SendGoal_Event.
typedef struct rover_control_package__action__Carcontrol_SendGoal_Event__Sequence
{
  rover_control_package__action__Carcontrol_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rover_control_package__action__Carcontrol_GetResult_Request;

// Struct for a sequence of rover_control_package__action__Carcontrol_GetResult_Request.
typedef struct rover_control_package__action__Carcontrol_GetResult_Request__Sequence
{
  rover_control_package__action__Carcontrol_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_GetResult_Response
{
  int8_t status;
  rover_control_package__action__Carcontrol_Result result;
} rover_control_package__action__Carcontrol_GetResult_Response;

// Struct for a sequence of rover_control_package__action__Carcontrol_GetResult_Response.
typedef struct rover_control_package__action__Carcontrol_GetResult_Response__Sequence
{
  rover_control_package__action__Carcontrol_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rover_control_package__action__Carcontrol_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rover_control_package__action__Carcontrol_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rover_control_package__action__Carcontrol_GetResult_Request__Sequence request;
  rover_control_package__action__Carcontrol_GetResult_Response__Sequence response;
} rover_control_package__action__Carcontrol_GetResult_Event;

// Struct for a sequence of rover_control_package__action__Carcontrol_GetResult_Event.
typedef struct rover_control_package__action__Carcontrol_GetResult_Event__Sequence
{
  rover_control_package__action__Carcontrol_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rover_control_package/action/detail/carcontrol__struct.h"

/// Struct defined in action/Carcontrol in the package rover_control_package.
typedef struct rover_control_package__action__Carcontrol_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rover_control_package__action__Carcontrol_Feedback feedback;
} rover_control_package__action__Carcontrol_FeedbackMessage;

// Struct for a sequence of rover_control_package__action__Carcontrol_FeedbackMessage.
typedef struct rover_control_package__action__Carcontrol_FeedbackMessage__Sequence
{
  rover_control_package__action__Carcontrol_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_control_package__action__Carcontrol_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVER_CONTROL_PACKAGE__ACTION__DETAIL__CARCONTROL__STRUCT_H_
