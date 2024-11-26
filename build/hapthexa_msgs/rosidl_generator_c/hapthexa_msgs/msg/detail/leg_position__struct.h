// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hapthexa_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/leg_position.h"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_H_
#define HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LegPosition in the package hapthexa_msgs.
typedef struct hapthexa_msgs__msg__LegPosition
{
  double x;
  double y;
  double z;
} hapthexa_msgs__msg__LegPosition;

// Struct for a sequence of hapthexa_msgs__msg__LegPosition.
typedef struct hapthexa_msgs__msg__LegPosition__Sequence
{
  hapthexa_msgs__msg__LegPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__msg__LegPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_H_
