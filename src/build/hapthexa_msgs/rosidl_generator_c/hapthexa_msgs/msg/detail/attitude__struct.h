// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hapthexa_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/attitude.h"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_H_
#define HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Attitude in the package hapthexa_msgs.
typedef struct hapthexa_msgs__msg__Attitude
{
  double roll;
  double pitch;
  double yaw;
} hapthexa_msgs__msg__Attitude;

// Struct for a sequence of hapthexa_msgs__msg__Attitude.
typedef struct hapthexa_msgs__msg__Attitude__Sequence
{
  hapthexa_msgs__msg__Attitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__msg__Attitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_H_
