// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/force_sensor.h"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__STRUCT_H_
#define HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ForceSensor in the package hapthexa_msgs.
typedef struct hapthexa_msgs__msg__ForceSensor
{
  double loadcell1;
  double loadcell2;
  double piezo;
  double radial_direction;
  double radial_magnitude;
  int64_t loadcell1_raw;
  int64_t loadcell2_raw;
  int64_t piezo_raw;
  bool x;
  bool y;
  bool z;
} hapthexa_msgs__msg__ForceSensor;

// Struct for a sequence of hapthexa_msgs__msg__ForceSensor.
typedef struct hapthexa_msgs__msg__ForceSensor__Sequence
{
  hapthexa_msgs__msg__ForceSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hapthexa_msgs__msg__ForceSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__STRUCT_H_
