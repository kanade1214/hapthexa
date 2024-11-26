// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hapthexa_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hapthexa_msgs/msg/detail/leg_position__functions.h"
#include "hapthexa_msgs/msg/detail/leg_position__struct.hpp"
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

void LegPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hapthexa_msgs::msg::LegPosition(_init);
}

void LegPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hapthexa_msgs::msg::LegPosition *>(message_memory);
  typed_message->~LegPosition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LegPosition_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs::msg::LegPosition, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs::msg::LegPosition, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs::msg::LegPosition, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LegPosition_message_members = {
  "hapthexa_msgs::msg",  // message namespace
  "LegPosition",  // message name
  3,  // number of fields
  sizeof(hapthexa_msgs::msg::LegPosition),
  false,  // has_any_key_member_
  LegPosition_message_member_array,  // message members
  LegPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  LegPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LegPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LegPosition_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__msg__LegPosition__get_type_hash,
  &hapthexa_msgs__msg__LegPosition__get_type_description,
  &hapthexa_msgs__msg__LegPosition__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hapthexa_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hapthexa_msgs::msg::LegPosition>()
{
  return &::hapthexa_msgs::msg::rosidl_typesupport_introspection_cpp::LegPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hapthexa_msgs, msg, LegPosition)() {
  return &::hapthexa_msgs::msg::rosidl_typesupport_introspection_cpp::LegPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
