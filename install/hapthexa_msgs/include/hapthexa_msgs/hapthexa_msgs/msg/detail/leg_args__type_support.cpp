// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hapthexa_msgs:msg/LegArgs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hapthexa_msgs/msg/detail/leg_args__functions.h"
#include "hapthexa_msgs/msg/detail/leg_args__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hapthexa_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LegArgs_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hapthexa_msgs::msg::LegArgs(_init);
}

void LegArgs_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hapthexa_msgs::msg::LegArgs *>(message_memory);
  typed_message->~LegArgs();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LegArgs_message_member_array[3] = {
  {
    "coxa_arg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs::msg::LegArgs, coxa_arg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "femur_arg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs::msg::LegArgs, femur_arg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tibia_arg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs::msg::LegArgs, tibia_arg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LegArgs_message_members = {
  "hapthexa_msgs::msg",  // message namespace
  "LegArgs",  // message name
  3,  // number of fields
  sizeof(hapthexa_msgs::msg::LegArgs),
  false,  // has_any_key_member_
  LegArgs_message_member_array,  // message members
  LegArgs_init_function,  // function to initialize message memory (memory has to be allocated)
  LegArgs_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LegArgs_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LegArgs_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__msg__LegArgs__get_type_hash,
  &hapthexa_msgs__msg__LegArgs__get_type_description,
  &hapthexa_msgs__msg__LegArgs__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hapthexa_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hapthexa_msgs::msg::LegArgs>()
{
  return &::hapthexa_msgs::msg::rosidl_typesupport_introspection_cpp::LegArgs_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hapthexa_msgs, msg, LegArgs)() {
  return &::hapthexa_msgs::msg::rosidl_typesupport_introspection_cpp::LegArgs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
