// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hapthexa_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hapthexa_msgs/msg/detail/attitude__rosidl_typesupport_introspection_c.h"
#include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hapthexa_msgs/msg/detail/attitude__functions.h"
#include "hapthexa_msgs/msg/detail/attitude__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__msg__Attitude__init(message_memory);
}

void hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_fini_function(void * message_memory)
{
  hapthexa_msgs__msg__Attitude__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_message_member_array[3] = {
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__Attitude, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__Attitude, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__Attitude, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_message_members = {
  "hapthexa_msgs__msg",  // message namespace
  "Attitude",  // message name
  3,  // number of fields
  sizeof(hapthexa_msgs__msg__Attitude),
  false,  // has_any_key_member_
  hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_message_member_array,  // message members
  hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_message_type_support_handle = {
  0,
  &hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__msg__Attitude__get_type_hash,
  &hapthexa_msgs__msg__Attitude__get_type_description,
  &hapthexa_msgs__msg__Attitude__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, msg, Attitude)() {
  if (!hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__msg__Attitude__rosidl_typesupport_introspection_c__Attitude_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
