// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from hapthexa_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice
#ifndef HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hapthexa_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hapthexa_msgs/msg/detail/leg_position__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hapthexa_msgs
bool cdr_serialize_hapthexa_msgs__msg__LegPosition(
  const hapthexa_msgs__msg__LegPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hapthexa_msgs
bool cdr_deserialize_hapthexa_msgs__msg__LegPosition(
  eprosima::fastcdr::Cdr &,
  hapthexa_msgs__msg__LegPosition * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hapthexa_msgs
size_t get_serialized_size_hapthexa_msgs__msg__LegPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hapthexa_msgs
size_t max_serialized_size_hapthexa_msgs__msg__LegPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hapthexa_msgs
bool cdr_serialize_key_hapthexa_msgs__msg__LegPosition(
  const hapthexa_msgs__msg__LegPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hapthexa_msgs
size_t get_serialized_size_key_hapthexa_msgs__msg__LegPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hapthexa_msgs
size_t max_serialized_size_key_hapthexa_msgs__msg__LegPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hapthexa_msgs, msg, LegPosition)();

#ifdef __cplusplus
}
#endif

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
