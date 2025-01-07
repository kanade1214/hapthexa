// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from realsense2_camera_msgs:msg/IMUInfo.idl
// generated code does not contain a copyright notice
#ifndef REALSENSE2_CAMERA_MSGS__MSG__DETAIL__IMU_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define REALSENSE2_CAMERA_MSGS__MSG__DETAIL__IMU_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "realsense2_camera_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "realsense2_camera_msgs/msg/detail/imu_info__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_realsense2_camera_msgs
bool cdr_serialize_realsense2_camera_msgs__msg__IMUInfo(
  const realsense2_camera_msgs__msg__IMUInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_realsense2_camera_msgs
bool cdr_deserialize_realsense2_camera_msgs__msg__IMUInfo(
  eprosima::fastcdr::Cdr &,
  realsense2_camera_msgs__msg__IMUInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_realsense2_camera_msgs
size_t get_serialized_size_realsense2_camera_msgs__msg__IMUInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_realsense2_camera_msgs
size_t max_serialized_size_realsense2_camera_msgs__msg__IMUInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_realsense2_camera_msgs
bool cdr_serialize_key_realsense2_camera_msgs__msg__IMUInfo(
  const realsense2_camera_msgs__msg__IMUInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_realsense2_camera_msgs
size_t get_serialized_size_key_realsense2_camera_msgs__msg__IMUInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_realsense2_camera_msgs
size_t max_serialized_size_key_realsense2_camera_msgs__msg__IMUInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_realsense2_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, realsense2_camera_msgs, msg, IMUInfo)();

#ifdef __cplusplus
}
#endif

#endif  // REALSENSE2_CAMERA_MSGS__MSG__DETAIL__IMU_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_