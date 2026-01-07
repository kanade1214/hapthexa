// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from hapthexa_msgs:srv/ChangeCurrent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/change_current.h"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__TYPE_SUPPORT_H_
#define HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "hapthexa_msgs/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  hapthexa_msgs,
  srv,
  ChangeCurrent_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  hapthexa_msgs,
  srv,
  ChangeCurrent_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  hapthexa_msgs,
  srv,
  ChangeCurrent_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  hapthexa_msgs,
  srv,
  ChangeCurrent
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  hapthexa_msgs,
  srv,
  ChangeCurrent
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  hapthexa_msgs,
  srv,
  ChangeCurrent
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__TYPE_SUPPORT_H_
