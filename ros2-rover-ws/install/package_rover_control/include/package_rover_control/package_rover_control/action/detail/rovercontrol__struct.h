// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from package_rover_control:action/Rovercontrol.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__STRUCT_H_
#define PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__STRUCT_H_

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

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_Goal
{
  rosidl_runtime_c__String direction;
  int32_t timestop;
} package_rover_control__action__Rovercontrol_Goal;

// Struct for a sequence of package_rover_control__action__Rovercontrol_Goal.
typedef struct package_rover_control__action__Rovercontrol_Goal__Sequence
{
  package_rover_control__action__Rovercontrol_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_Result
{
  rosidl_runtime_c__String result_msg;
} package_rover_control__action__Rovercontrol_Result;

// Struct for a sequence of package_rover_control__action__Rovercontrol_Result.
typedef struct package_rover_control__action__Rovercontrol_Result__Sequence
{
  package_rover_control__action__Rovercontrol_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'time_remaining'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_Feedback
{
  rosidl_runtime_c__int32__Sequence time_remaining;
} package_rover_control__action__Rovercontrol_Feedback;

// Struct for a sequence of package_rover_control__action__Rovercontrol_Feedback.
typedef struct package_rover_control__action__Rovercontrol_Feedback__Sequence
{
  package_rover_control__action__Rovercontrol_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "package_rover_control/action/detail/rovercontrol__struct.h"

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  package_rover_control__action__Rovercontrol_Goal goal;
} package_rover_control__action__Rovercontrol_SendGoal_Request;

// Struct for a sequence of package_rover_control__action__Rovercontrol_SendGoal_Request.
typedef struct package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence
{
  package_rover_control__action__Rovercontrol_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} package_rover_control__action__Rovercontrol_SendGoal_Response;

// Struct for a sequence of package_rover_control__action__Rovercontrol_SendGoal_Response.
typedef struct package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence
{
  package_rover_control__action__Rovercontrol_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  package_rover_control__action__Rovercontrol_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  package_rover_control__action__Rovercontrol_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence request;
  package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence response;
} package_rover_control__action__Rovercontrol_SendGoal_Event;

// Struct for a sequence of package_rover_control__action__Rovercontrol_SendGoal_Event.
typedef struct package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence
{
  package_rover_control__action__Rovercontrol_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} package_rover_control__action__Rovercontrol_GetResult_Request;

// Struct for a sequence of package_rover_control__action__Rovercontrol_GetResult_Request.
typedef struct package_rover_control__action__Rovercontrol_GetResult_Request__Sequence
{
  package_rover_control__action__Rovercontrol_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "package_rover_control/action/detail/rovercontrol__struct.h"

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_GetResult_Response
{
  int8_t status;
  package_rover_control__action__Rovercontrol_Result result;
} package_rover_control__action__Rovercontrol_GetResult_Response;

// Struct for a sequence of package_rover_control__action__Rovercontrol_GetResult_Response.
typedef struct package_rover_control__action__Rovercontrol_GetResult_Response__Sequence
{
  package_rover_control__action__Rovercontrol_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  package_rover_control__action__Rovercontrol_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  package_rover_control__action__Rovercontrol_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  package_rover_control__action__Rovercontrol_GetResult_Request__Sequence request;
  package_rover_control__action__Rovercontrol_GetResult_Response__Sequence response;
} package_rover_control__action__Rovercontrol_GetResult_Event;

// Struct for a sequence of package_rover_control__action__Rovercontrol_GetResult_Event.
typedef struct package_rover_control__action__Rovercontrol_GetResult_Event__Sequence
{
  package_rover_control__action__Rovercontrol_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "package_rover_control/action/detail/rovercontrol__struct.h"

/// Struct defined in action/Rovercontrol in the package package_rover_control.
typedef struct package_rover_control__action__Rovercontrol_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  package_rover_control__action__Rovercontrol_Feedback feedback;
} package_rover_control__action__Rovercontrol_FeedbackMessage;

// Struct for a sequence of package_rover_control__action__Rovercontrol_FeedbackMessage.
typedef struct package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence
{
  package_rover_control__action__Rovercontrol_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__STRUCT_H_
