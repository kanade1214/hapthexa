// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hapthexa_msgs/msg/detail/force_sensor__rosidl_typesupport_introspection_c.h"
#include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hapthexa_msgs/msg/detail/force_sensor__functions.h"
#include "hapthexa_msgs/msg/detail/force_sensor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__msg__ForceSensor__init(message_memory);
}

void hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_fini_function(void * message_memory)
{
  hapthexa_msgs__msg__ForceSensor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_message_member_array[11] = {
  {
    "loadcell1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, loadcell1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loadcell2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, loadcell2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "piezo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, piezo),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radial_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, radial_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radial_magnitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, radial_magnitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loadcell1_raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, loadcell1_raw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loadcell2_raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, loadcell2_raw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "piezo_raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, piezo_raw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__msg__ForceSensor, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_message_members = {
  "hapthexa_msgs__msg",  // message namespace
  "ForceSensor",  // message name
  11,  // number of fields
  sizeof(hapthexa_msgs__msg__ForceSensor),
  false,  // has_any_key_member_
  hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_message_member_array,  // message members
  hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_message_type_support_handle = {
  0,
  &hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__msg__ForceSensor__get_type_hash,
  &hapthexa_msgs__msg__ForceSensor__get_type_description,
  &hapthexa_msgs__msg__ForceSensor__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, msg, ForceSensor)() {
  if (!hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__msg__ForceSensor__rosidl_typesupport_introspection_c__ForceSensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
