// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hapthexa_msgs:action/MoveLegArgs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/action/move_leg_args.h"


#ifndef HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG_ARGS__STRUCT_H_
#define HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG_ARGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_Goal
{
  double coxa_arg;
  double femur_arg;
  double tibia_arg;
} hapthexa_msgs__action__MoveLegArgs_Goal;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_Goal.
typedef struct hapthexa_msgs__action__MoveLegArgs_Goal__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_Result
{
  double coxa_arg;
  double femur_arg;
  double tibia_arg;
} hapthexa_msgs__action__MoveLegArgs_Result;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_Result.
typedef struct hapthexa_msgs__action__MoveLegArgs_Result__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_Feedback
{
  double remaining;
} hapthexa_msgs__action__MoveLegArgs_Feedback;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_Feedback.
typedef struct hapthexa_msgs__action__MoveLegArgs_Feedback__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hapthexa_msgs/action/detail/move_leg_args__struct.h"

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hapthexa_msgs__action__MoveLegArgs_Goal goal;
} hapthexa_msgs__action__MoveLegArgs_SendGoal_Request;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_SendGoal_Request.
typedef struct hapthexa_msgs__action__MoveLegArgs_SendGoal_Request__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hapthexa_msgs__action__MoveLegArgs_SendGoal_Response;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_SendGoal_Response.
typedef struct hapthexa_msgs__action__MoveLegArgs_SendGoal_Response__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hapthexa_msgs__action__MoveLegArgs_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hapthexa_msgs__action__MoveLegArgs_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hapthexa_msgs__action__MoveLegArgs_SendGoal_Request__Sequence request;
  hapthexa_msgs__action__MoveLegArgs_SendGoal_Response__Sequence response;
} hapthexa_msgs__action__MoveLegArgs_SendGoal_Event;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_SendGoal_Event.
typedef struct hapthexa_msgs__action__MoveLegArgs_SendGoal_Event__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hapthexa_msgs__action__MoveLegArgs_GetResult_Request;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_GetResult_Request.
typedef struct hapthexa_msgs__action__MoveLegArgs_GetResult_Request__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hapthexa_msgs/action/detail/move_leg_args__struct.h"

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_GetResult_Response
{
  int8_t status;
  hapthexa_msgs__action__MoveLegArgs_Result result;
} hapthexa_msgs__action__MoveLegArgs_GetResult_Response;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_GetResult_Response.
typedef struct hapthexa_msgs__action__MoveLegArgs_GetResult_Response__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hapthexa_msgs__action__MoveLegArgs_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hapthexa_msgs__action__MoveLegArgs_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hapthexa_msgs__action__MoveLegArgs_GetResult_Request__Sequence request;
  hapthexa_msgs__action__MoveLegArgs_GetResult_Response__Sequence response;
} hapthexa_msgs__action__MoveLegArgs_GetResult_Event;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_GetResult_Event.
typedef struct hapthexa_msgs__action__MoveLegArgs_GetResult_Event__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hapthexa_msgs/action/detail/move_leg_args__struct.h"

/// Struct defined in action/MoveLegArgs in the package hapthexa_msgs.
typedef struct hapthexa_msgs__action__MoveLegArgs_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hapthexa_msgs__action__MoveLegArgs_Feedback feedback;
} hapthexa_msgs__action__MoveLegArgs_FeedbackMessage;

// Struct for a sequence of hapthexa_msgs__action__MoveLegArgs_FeedbackMessage.
typedef struct hapthexa_msgs__action__MoveLegArgs_FeedbackMessage__Sequence
{
  hapthexa_msgs__action__MoveLegArgs_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__action__MoveLegArgs_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG_ARGS__STRUCT_H_
