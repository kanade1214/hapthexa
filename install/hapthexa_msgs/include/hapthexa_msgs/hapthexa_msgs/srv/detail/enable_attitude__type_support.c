// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hapthexa_msgs:srv/EnableAttitude.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hapthexa_msgs/srv/detail/enable_attitude__rosidl_typesupport_introspection_c.h"
#include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hapthexa_msgs/srv/detail/enable_attitude__functions.h"
#include "hapthexa_msgs/srv/detail/enable_attitude__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__srv__EnableAttitude_Request__init(message_memory);
}

void hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_fini_function(void * message_memory)
{
  hapthexa_msgs__srv__EnableAttitude_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_member_array[1] = {
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__srv__EnableAttitude_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_members = {
  "hapthexa_msgs__srv",  // message namespace
  "EnableAttitude_Request",  // message name
  1,  // number of fields
  sizeof(hapthexa_msgs__srv__EnableAttitude_Request),
  false,  // has_any_key_member_
  hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_member_array,  // message members
  hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_type_support_handle = {
  0,
  &hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__srv__EnableAttitude_Request__get_type_hash,
  &hapthexa_msgs__srv__EnableAttitude_Request__get_type_description,
  &hapthexa_msgs__srv__EnableAttitude_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Request)() {
  if (!hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__functions.h"
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__srv__EnableAttitude_Response__init(message_memory);
}

void hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_fini_function(void * message_memory)
{
  hapthexa_msgs__srv__EnableAttitude_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__srv__EnableAttitude_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_members = {
  "hapthexa_msgs__srv",  // message namespace
  "EnableAttitude_Response",  // message name
  1,  // number of fields
  sizeof(hapthexa_msgs__srv__EnableAttitude_Response),
  false,  // has_any_key_member_
  hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_member_array,  // message members
  hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_type_support_handle = {
  0,
  &hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__srv__EnableAttitude_Response__get_type_hash,
  &hapthexa_msgs__srv__EnableAttitude_Response__get_type_description,
  &hapthexa_msgs__srv__EnableAttitude_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Response)() {
  if (!hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__functions.h"
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "hapthexa_msgs/srv/enable_attitude.h"
// Member `request`
// Member `response`
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__srv__EnableAttitude_Event__init(message_memory);
}

void hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_fini_function(void * message_memory)
{
  hapthexa_msgs__srv__EnableAttitude_Event__fini(message_memory);
}

size_t hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__size_function__EnableAttitude_Event__request(
  const void * untyped_member)
{
  const hapthexa_msgs__srv__EnableAttitude_Request__Sequence * member =
    (const hapthexa_msgs__srv__EnableAttitude_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_const_function__EnableAttitude_Event__request(
  const void * untyped_member, size_t index)
{
  const hapthexa_msgs__srv__EnableAttitude_Request__Sequence * member =
    (const hapthexa_msgs__srv__EnableAttitude_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_function__EnableAttitude_Event__request(
  void * untyped_member, size_t index)
{
  hapthexa_msgs__srv__EnableAttitude_Request__Sequence * member =
    (hapthexa_msgs__srv__EnableAttitude_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__fetch_function__EnableAttitude_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hapthexa_msgs__srv__EnableAttitude_Request * item =
    ((const hapthexa_msgs__srv__EnableAttitude_Request *)
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_const_function__EnableAttitude_Event__request(untyped_member, index));
  hapthexa_msgs__srv__EnableAttitude_Request * value =
    (hapthexa_msgs__srv__EnableAttitude_Request *)(untyped_value);
  *value = *item;
}

void hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__assign_function__EnableAttitude_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hapthexa_msgs__srv__EnableAttitude_Request * item =
    ((hapthexa_msgs__srv__EnableAttitude_Request *)
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_function__EnableAttitude_Event__request(untyped_member, index));
  const hapthexa_msgs__srv__EnableAttitude_Request * value =
    (const hapthexa_msgs__srv__EnableAttitude_Request *)(untyped_value);
  *item = *value;
}

bool hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__resize_function__EnableAttitude_Event__request(
  void * untyped_member, size_t size)
{
  hapthexa_msgs__srv__EnableAttitude_Request__Sequence * member =
    (hapthexa_msgs__srv__EnableAttitude_Request__Sequence *)(untyped_member);
  hapthexa_msgs__srv__EnableAttitude_Request__Sequence__fini(member);
  return hapthexa_msgs__srv__EnableAttitude_Request__Sequence__init(member, size);
}

size_t hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__size_function__EnableAttitude_Event__response(
  const void * untyped_member)
{
  const hapthexa_msgs__srv__EnableAttitude_Response__Sequence * member =
    (const hapthexa_msgs__srv__EnableAttitude_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_const_function__EnableAttitude_Event__response(
  const void * untyped_member, size_t index)
{
  const hapthexa_msgs__srv__EnableAttitude_Response__Sequence * member =
    (const hapthexa_msgs__srv__EnableAttitude_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_function__EnableAttitude_Event__response(
  void * untyped_member, size_t index)
{
  hapthexa_msgs__srv__EnableAttitude_Response__Sequence * member =
    (hapthexa_msgs__srv__EnableAttitude_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__fetch_function__EnableAttitude_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hapthexa_msgs__srv__EnableAttitude_Response * item =
    ((const hapthexa_msgs__srv__EnableAttitude_Response *)
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_const_function__EnableAttitude_Event__response(untyped_member, index));
  hapthexa_msgs__srv__EnableAttitude_Response * value =
    (hapthexa_msgs__srv__EnableAttitude_Response *)(untyped_value);
  *value = *item;
}

void hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__assign_function__EnableAttitude_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hapthexa_msgs__srv__EnableAttitude_Response * item =
    ((hapthexa_msgs__srv__EnableAttitude_Response *)
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_function__EnableAttitude_Event__response(untyped_member, index));
  const hapthexa_msgs__srv__EnableAttitude_Response * value =
    (const hapthexa_msgs__srv__EnableAttitude_Response *)(untyped_value);
  *item = *value;
}

bool hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__resize_function__EnableAttitude_Event__response(
  void * untyped_member, size_t size)
{
  hapthexa_msgs__srv__EnableAttitude_Response__Sequence * member =
    (hapthexa_msgs__srv__EnableAttitude_Response__Sequence *)(untyped_member);
  hapthexa_msgs__srv__EnableAttitude_Response__Sequence__fini(member);
  return hapthexa_msgs__srv__EnableAttitude_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__srv__EnableAttitude_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hapthexa_msgs__srv__EnableAttitude_Event, request),  // bytes offset in struct
    NULL,  // default value
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__size_function__EnableAttitude_Event__request,  // size() function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_const_function__EnableAttitude_Event__request,  // get_const(index) function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_function__EnableAttitude_Event__request,  // get(index) function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__fetch_function__EnableAttitude_Event__request,  // fetch(index, &value) function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__assign_function__EnableAttitude_Event__request,  // assign(index, value) function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__resize_function__EnableAttitude_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hapthexa_msgs__srv__EnableAttitude_Event, response),  // bytes offset in struct
    NULL,  // default value
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__size_function__EnableAttitude_Event__response,  // size() function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_const_function__EnableAttitude_Event__response,  // get_const(index) function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__get_function__EnableAttitude_Event__response,  // get(index) function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__fetch_function__EnableAttitude_Event__response,  // fetch(index, &value) function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__assign_function__EnableAttitude_Event__response,  // assign(index, value) function pointer
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__resize_function__EnableAttitude_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_members = {
  "hapthexa_msgs__srv",  // message namespace
  "EnableAttitude_Event",  // message name
  3,  // number of fields
  sizeof(hapthexa_msgs__srv__EnableAttitude_Event),
  false,  // has_any_key_member_
  hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_member_array,  // message members
  hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_type_support_handle = {
  0,
  &hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__srv__EnableAttitude_Event__get_type_hash,
  &hapthexa_msgs__srv__EnableAttitude_Event__get_type_description,
  &hapthexa_msgs__srv__EnableAttitude_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Event)() {
  hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Request)();
  hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Response)();
  if (!hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_service_members = {
  "hapthexa_msgs__srv",  // service namespace
  "EnableAttitude",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_type_support_handle,
  NULL,  // response message
  // hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_type_support_handle
  NULL  // event_message
  // hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_type_support_handle
};


static rosidl_service_type_support_t hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_service_type_support_handle = {
  0,
  &hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_service_members,
  get_service_typesupport_handle_function,
  &hapthexa_msgs__srv__EnableAttitude_Request__rosidl_typesupport_introspection_c__EnableAttitude_Request_message_type_support_handle,
  &hapthexa_msgs__srv__EnableAttitude_Response__rosidl_typesupport_introspection_c__EnableAttitude_Response_message_type_support_handle,
  &hapthexa_msgs__srv__EnableAttitude_Event__rosidl_typesupport_introspection_c__EnableAttitude_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hapthexa_msgs,
    srv,
    EnableAttitude
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hapthexa_msgs,
    srv,
    EnableAttitude
  ),
  &hapthexa_msgs__srv__EnableAttitude__get_type_hash,
  &hapthexa_msgs__srv__EnableAttitude__get_type_description,
  &hapthexa_msgs__srv__EnableAttitude__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude)(void) {
  if (!hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_service_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, srv, EnableAttitude_Event)()->data;
  }

  return &hapthexa_msgs__srv__detail__enable_attitude__rosidl_typesupport_introspection_c__EnableAttitude_service_type_support_handle;
}
