// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from realsense2_camera_msgs:srv/CalibConfigWrite.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "realsense2_camera_msgs/srv/detail/calib_config_write__rosidl_typesupport_introspection_c.h"
#include "realsense2_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "realsense2_camera_msgs/srv/detail/calib_config_write__functions.h"
#include "realsense2_camera_msgs/srv/detail/calib_config_write__struct.h"


// Include directives for member types
// Member `calib_config`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  realsense2_camera_msgs__srv__CalibConfigWrite_Request__init(message_memory);
}

void realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_fini_function(void * message_memory)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_member_array[1] = {
  {
    "calib_config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(realsense2_camera_msgs__srv__CalibConfigWrite_Request, calib_config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_members = {
  "realsense2_camera_msgs__srv",  // message namespace
  "CalibConfigWrite_Request",  // message name
  1,  // number of fields
  sizeof(realsense2_camera_msgs__srv__CalibConfigWrite_Request),
  false,  // has_any_key_member_
  realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_member_array,  // message members
  realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_type_support_handle = {
  0,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_members,
  get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Request__get_type_hash,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Request__get_type_description,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_realsense2_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Request)() {
  if (!realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_type_support_handle.typesupport_identifier) {
    realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__rosidl_typesupport_introspection_c.h"
// already included above
// #include "realsense2_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__functions.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__struct.h"


// Include directives for member types
// Member `error_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  realsense2_camera_msgs__srv__CalibConfigWrite_Response__init(message_memory);
}

void realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_fini_function(void * message_memory)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(realsense2_camera_msgs__srv__CalibConfigWrite_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(realsense2_camera_msgs__srv__CalibConfigWrite_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_members = {
  "realsense2_camera_msgs__srv",  // message namespace
  "CalibConfigWrite_Response",  // message name
  2,  // number of fields
  sizeof(realsense2_camera_msgs__srv__CalibConfigWrite_Response),
  false,  // has_any_key_member_
  realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_member_array,  // message members
  realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_type_support_handle = {
  0,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_members,
  get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Response__get_type_hash,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Response__get_type_description,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_realsense2_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Response)() {
  if (!realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_type_support_handle.typesupport_identifier) {
    realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__rosidl_typesupport_introspection_c.h"
// already included above
// #include "realsense2_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__functions.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "realsense2_camera_msgs/srv/calib_config_write.h"
// Member `request`
// Member `response`
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  realsense2_camera_msgs__srv__CalibConfigWrite_Event__init(message_memory);
}

void realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_fini_function(void * message_memory)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Event__fini(message_memory);
}

size_t realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__size_function__CalibConfigWrite_Event__request(
  const void * untyped_member)
{
  const realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence * member =
    (const realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_const_function__CalibConfigWrite_Event__request(
  const void * untyped_member, size_t index)
{
  const realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence * member =
    (const realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_function__CalibConfigWrite_Event__request(
  void * untyped_member, size_t index)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence * member =
    (realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__fetch_function__CalibConfigWrite_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const realsense2_camera_msgs__srv__CalibConfigWrite_Request * item =
    ((const realsense2_camera_msgs__srv__CalibConfigWrite_Request *)
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_const_function__CalibConfigWrite_Event__request(untyped_member, index));
  realsense2_camera_msgs__srv__CalibConfigWrite_Request * value =
    (realsense2_camera_msgs__srv__CalibConfigWrite_Request *)(untyped_value);
  *value = *item;
}

void realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__assign_function__CalibConfigWrite_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Request * item =
    ((realsense2_camera_msgs__srv__CalibConfigWrite_Request *)
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_function__CalibConfigWrite_Event__request(untyped_member, index));
  const realsense2_camera_msgs__srv__CalibConfigWrite_Request * value =
    (const realsense2_camera_msgs__srv__CalibConfigWrite_Request *)(untyped_value);
  *item = *value;
}

bool realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__resize_function__CalibConfigWrite_Event__request(
  void * untyped_member, size_t size)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence * member =
    (realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence *)(untyped_member);
  realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence__fini(member);
  return realsense2_camera_msgs__srv__CalibConfigWrite_Request__Sequence__init(member, size);
}

size_t realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__size_function__CalibConfigWrite_Event__response(
  const void * untyped_member)
{
  const realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence * member =
    (const realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_const_function__CalibConfigWrite_Event__response(
  const void * untyped_member, size_t index)
{
  const realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence * member =
    (const realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_function__CalibConfigWrite_Event__response(
  void * untyped_member, size_t index)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence * member =
    (realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__fetch_function__CalibConfigWrite_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const realsense2_camera_msgs__srv__CalibConfigWrite_Response * item =
    ((const realsense2_camera_msgs__srv__CalibConfigWrite_Response *)
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_const_function__CalibConfigWrite_Event__response(untyped_member, index));
  realsense2_camera_msgs__srv__CalibConfigWrite_Response * value =
    (realsense2_camera_msgs__srv__CalibConfigWrite_Response *)(untyped_value);
  *value = *item;
}

void realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__assign_function__CalibConfigWrite_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Response * item =
    ((realsense2_camera_msgs__srv__CalibConfigWrite_Response *)
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_function__CalibConfigWrite_Event__response(untyped_member, index));
  const realsense2_camera_msgs__srv__CalibConfigWrite_Response * value =
    (const realsense2_camera_msgs__srv__CalibConfigWrite_Response *)(untyped_value);
  *item = *value;
}

bool realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__resize_function__CalibConfigWrite_Event__response(
  void * untyped_member, size_t size)
{
  realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence * member =
    (realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence *)(untyped_member);
  realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence__fini(member);
  return realsense2_camera_msgs__srv__CalibConfigWrite_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(realsense2_camera_msgs__srv__CalibConfigWrite_Event, info),  // bytes offset in struct
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
    offsetof(realsense2_camera_msgs__srv__CalibConfigWrite_Event, request),  // bytes offset in struct
    NULL,  // default value
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__size_function__CalibConfigWrite_Event__request,  // size() function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_const_function__CalibConfigWrite_Event__request,  // get_const(index) function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_function__CalibConfigWrite_Event__request,  // get(index) function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__fetch_function__CalibConfigWrite_Event__request,  // fetch(index, &value) function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__assign_function__CalibConfigWrite_Event__request,  // assign(index, value) function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__resize_function__CalibConfigWrite_Event__request  // resize(index) function pointer
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
    offsetof(realsense2_camera_msgs__srv__CalibConfigWrite_Event, response),  // bytes offset in struct
    NULL,  // default value
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__size_function__CalibConfigWrite_Event__response,  // size() function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_const_function__CalibConfigWrite_Event__response,  // get_const(index) function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__get_function__CalibConfigWrite_Event__response,  // get(index) function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__fetch_function__CalibConfigWrite_Event__response,  // fetch(index, &value) function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__assign_function__CalibConfigWrite_Event__response,  // assign(index, value) function pointer
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__resize_function__CalibConfigWrite_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_members = {
  "realsense2_camera_msgs__srv",  // message namespace
  "CalibConfigWrite_Event",  // message name
  3,  // number of fields
  sizeof(realsense2_camera_msgs__srv__CalibConfigWrite_Event),
  false,  // has_any_key_member_
  realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_member_array,  // message members
  realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_type_support_handle = {
  0,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_members,
  get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Event__get_type_hash,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Event__get_type_description,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_realsense2_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Event)() {
  realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Request)();
  realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Response)();
  if (!realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_type_support_handle.typesupport_identifier) {
    realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "realsense2_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_service_members = {
  "realsense2_camera_msgs__srv",  // service namespace
  "CalibConfigWrite",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_type_support_handle,
  NULL,  // response message
  // realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_type_support_handle
  NULL  // event_message
  // realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_type_support_handle
};


static rosidl_service_type_support_t realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_service_type_support_handle = {
  0,
  &realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_service_members,
  get_service_typesupport_handle_function,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Request__rosidl_typesupport_introspection_c__CalibConfigWrite_Request_message_type_support_handle,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Response__rosidl_typesupport_introspection_c__CalibConfigWrite_Response_message_type_support_handle,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Event__rosidl_typesupport_introspection_c__CalibConfigWrite_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    realsense2_camera_msgs,
    srv,
    CalibConfigWrite
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    realsense2_camera_msgs,
    srv,
    CalibConfigWrite
  ),
  &realsense2_camera_msgs__srv__CalibConfigWrite__get_type_hash,
  &realsense2_camera_msgs__srv__CalibConfigWrite__get_type_description,
  &realsense2_camera_msgs__srv__CalibConfigWrite__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_realsense2_camera_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite)(void) {
  if (!realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_service_type_support_handle.typesupport_identifier) {
    realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, CalibConfigWrite_Event)()->data;
  }

  return &realsense2_camera_msgs__srv__detail__calib_config_write__rosidl_typesupport_introspection_c__CalibConfigWrite_service_type_support_handle;
}
