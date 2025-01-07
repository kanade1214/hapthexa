// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from hapthexa_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hapthexa_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "hapthexa_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace hapthexa_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
cdr_serialize(
  const hapthexa_msgs::msg::Empty & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hapthexa_msgs::msg::Empty & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
get_serialized_size(
  const hapthexa_msgs::msg::Empty & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
max_serialized_size_Empty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
cdr_serialize_key(
  const hapthexa_msgs::msg::Empty & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
get_serialized_size_key(
  const hapthexa_msgs::msg::Empty & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
max_serialized_size_key_Empty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hapthexa_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hapthexa_msgs, msg, Empty)();

#ifdef __cplusplus
}
#endif

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
