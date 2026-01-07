// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hapthexa_msgs:srv/ChangeCurrent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/change_current.h"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__STRUCT_H_
#define HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChangeCurrent in the package hapthexa_msgs.
typedef struct hapthexa_msgs__srv__ChangeCurrent_Request
{
  int64_t num;
  int64_t current_coxa;
  int64_t current_femur;
  int64_t current_tibia;
} hapthexa_msgs__srv__ChangeCurrent_Request;

// Struct for a sequence of hapthexa_msgs__srv__ChangeCurrent_Request.
typedef struct hapthexa_msgs__srv__ChangeCurrent_Request__Sequence
{
  hapthexa_msgs__srv__ChangeCurrent_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__srv__ChangeCurrent_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ChangeCurrent in the package hapthexa_msgs.
typedef struct hapthexa_msgs__srv__ChangeCurrent_Response
{
  uint8_t structure_needs_at_least_one_member;
} hapthexa_msgs__srv__ChangeCurrent_Response;

// Struct for a sequence of hapthexa_msgs__srv__ChangeCurrent_Response.
typedef struct hapthexa_msgs__srv__ChangeCurrent_Response__Sequence
{
  hapthexa_msgs__srv__ChangeCurrent_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__srv__ChangeCurrent_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hapthexa_msgs__srv__ChangeCurrent_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hapthexa_msgs__srv__ChangeCurrent_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ChangeCurrent in the package hapthexa_msgs.
typedef struct hapthexa_msgs__srv__ChangeCurrent_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hapthexa_msgs__srv__ChangeCurrent_Request__Sequence request;
  hapthexa_msgs__srv__ChangeCurrent_Response__Sequence response;
} hapthexa_msgs__srv__ChangeCurrent_Event;

// Struct for a sequence of hapthexa_msgs__srv__ChangeCurrent_Event.
typedef struct hapthexa_msgs__srv__ChangeCurrent_Event__Sequence
{
  hapthexa_msgs__srv__ChangeCurrent_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__srv__ChangeCurrent_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__STRUCT_H_
