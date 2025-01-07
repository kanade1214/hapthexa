// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hapthexa_msgs:action/Gait.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
#include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hapthexa_msgs/action/detail/gait__functions.h"
#include "hapthexa_msgs/action/detail/gait__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_Goal__init(message_memory);
}

void hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_message_member_array[8] = {
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Goal, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Goal, h),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hmax",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Goal, hmax),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hmin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Goal, hmin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Goal, z_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_swingleg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Goal, is_swingleg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_firsttime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Goal, is_firsttime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Goal, phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_Goal",  // message name
  8,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_Goal),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_message_member_array,  // message members
  hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_Goal__get_type_hash,
  &hapthexa_msgs__action__Gait_Goal__get_type_description,
  &hapthexa_msgs__action__Gait_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_Goal)() {
  if (!hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_Goal__rosidl_typesupport_introspection_c__Gait_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_Result__init(message_memory);
}

void hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Result, x),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Result, y),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Result, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_Result",  // message name
  3,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_Result),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_message_member_array,  // message members
  hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_Result__get_type_hash,
  &hapthexa_msgs__action__Gait_Result__get_type_description,
  &hapthexa_msgs__action__Gait_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_Result)() {
  if (!hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_Result__rosidl_typesupport_introspection_c__Gait_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_Feedback__init(message_memory);
}

void hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_Feedback",  // message name
  1,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_Feedback),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_message_member_array,  // message members
  hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_Feedback__get_type_hash,
  &hapthexa_msgs__action__Gait_Feedback__get_type_description,
  &hapthexa_msgs__action__Gait_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_Feedback)() {
  if (!hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_Feedback__rosidl_typesupport_introspection_c__Gait_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "hapthexa_msgs/action/gait.h"
// Member `goal`
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_SendGoal_Request__init(message_memory);
}

void hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_SendGoal_Request),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_member_array,  // message members
  hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_SendGoal_Request__get_type_hash,
  &hapthexa_msgs__action__Gait_SendGoal_Request__get_type_description,
  &hapthexa_msgs__action__Gait_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Request)() {
  hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_Goal)();
  if (!hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_SendGoal_Response__init(message_memory);
}

void hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_SendGoal_Response),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_member_array,  // message members
  hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_SendGoal_Response__get_type_hash,
  &hapthexa_msgs__action__Gait_SendGoal_Response__get_type_description,
  &hapthexa_msgs__action__Gait_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Response)() {
  hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "hapthexa_msgs/action/gait.h"
// Member `request`
// Member `response`
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_SendGoal_Event__init(message_memory);
}

void hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_SendGoal_Event__fini(message_memory);
}

size_t hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Gait_SendGoal_Event__request(
  const void * untyped_member)
{
  const hapthexa_msgs__action__Gait_SendGoal_Request__Sequence * member =
    (const hapthexa_msgs__action__Gait_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const hapthexa_msgs__action__Gait_SendGoal_Request__Sequence * member =
    (const hapthexa_msgs__action__Gait_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Gait_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  hapthexa_msgs__action__Gait_SendGoal_Request__Sequence * member =
    (hapthexa_msgs__action__Gait_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Gait_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hapthexa_msgs__action__Gait_SendGoal_Request * item =
    ((const hapthexa_msgs__action__Gait_SendGoal_Request *)
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_SendGoal_Event__request(untyped_member, index));
  hapthexa_msgs__action__Gait_SendGoal_Request * value =
    (hapthexa_msgs__action__Gait_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Gait_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hapthexa_msgs__action__Gait_SendGoal_Request * item =
    ((hapthexa_msgs__action__Gait_SendGoal_Request *)
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Gait_SendGoal_Event__request(untyped_member, index));
  const hapthexa_msgs__action__Gait_SendGoal_Request * value =
    (const hapthexa_msgs__action__Gait_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Gait_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  hapthexa_msgs__action__Gait_SendGoal_Request__Sequence * member =
    (hapthexa_msgs__action__Gait_SendGoal_Request__Sequence *)(untyped_member);
  hapthexa_msgs__action__Gait_SendGoal_Request__Sequence__fini(member);
  return hapthexa_msgs__action__Gait_SendGoal_Request__Sequence__init(member, size);
}

size_t hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Gait_SendGoal_Event__response(
  const void * untyped_member)
{
  const hapthexa_msgs__action__Gait_SendGoal_Response__Sequence * member =
    (const hapthexa_msgs__action__Gait_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const hapthexa_msgs__action__Gait_SendGoal_Response__Sequence * member =
    (const hapthexa_msgs__action__Gait_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Gait_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  hapthexa_msgs__action__Gait_SendGoal_Response__Sequence * member =
    (hapthexa_msgs__action__Gait_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Gait_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hapthexa_msgs__action__Gait_SendGoal_Response * item =
    ((const hapthexa_msgs__action__Gait_SendGoal_Response *)
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_SendGoal_Event__response(untyped_member, index));
  hapthexa_msgs__action__Gait_SendGoal_Response * value =
    (hapthexa_msgs__action__Gait_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Gait_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hapthexa_msgs__action__Gait_SendGoal_Response * item =
    ((hapthexa_msgs__action__Gait_SendGoal_Response *)
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Gait_SendGoal_Event__response(untyped_member, index));
  const hapthexa_msgs__action__Gait_SendGoal_Response * value =
    (const hapthexa_msgs__action__Gait_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Gait_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  hapthexa_msgs__action__Gait_SendGoal_Response__Sequence * member =
    (hapthexa_msgs__action__Gait_SendGoal_Response__Sequence *)(untyped_member);
  hapthexa_msgs__action__Gait_SendGoal_Response__Sequence__fini(member);
  return hapthexa_msgs__action__Gait_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(hapthexa_msgs__action__Gait_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Gait_SendGoal_Event__request,  // size() function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_SendGoal_Event__request,  // get_const(index) function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Gait_SendGoal_Event__request,  // get(index) function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Gait_SendGoal_Event__request,  // fetch(index, &value) function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Gait_SendGoal_Event__request,  // assign(index, value) function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Gait_SendGoal_Event__request  // resize(index) function pointer
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
    offsetof(hapthexa_msgs__action__Gait_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Gait_SendGoal_Event__response,  // size() function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_SendGoal_Event__response,  // get_const(index) function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Gait_SendGoal_Event__response,  // get(index) function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Gait_SendGoal_Event__response,  // fetch(index, &value) function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Gait_SendGoal_Event__response,  // assign(index, value) function pointer
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Gait_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_SendGoal_Event),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_member_array,  // message members
  hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_SendGoal_Event__get_type_hash,
  &hapthexa_msgs__action__Gait_SendGoal_Event__get_type_description,
  &hapthexa_msgs__action__Gait_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Event)() {
  hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Request)();
  hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Response)();
  if (!hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_service_members = {
  "hapthexa_msgs__action",  // service namespace
  "Gait_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_service_type_support_handle = {
  0,
  &hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_SendGoal_Request__rosidl_typesupport_introspection_c__Gait_SendGoal_Request_message_type_support_handle,
  &hapthexa_msgs__action__Gait_SendGoal_Response__rosidl_typesupport_introspection_c__Gait_SendGoal_Response_message_type_support_handle,
  &hapthexa_msgs__action__Gait_SendGoal_Event__rosidl_typesupport_introspection_c__Gait_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hapthexa_msgs,
    action,
    Gait_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hapthexa_msgs,
    action,
    Gait_SendGoal
  ),
  &hapthexa_msgs__action__Gait_SendGoal__get_type_hash,
  &hapthexa_msgs__action__Gait_SendGoal__get_type_description,
  &hapthexa_msgs__action__Gait_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal)(void) {
  if (!hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_service_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_SendGoal_Event)()->data;
  }

  return &hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_GetResult_Request__init(message_memory);
}

void hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_GetResult_Request),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_member_array,  // message members
  hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_GetResult_Request__get_type_hash,
  &hapthexa_msgs__action__Gait_GetResult_Request__get_type_description,
  &hapthexa_msgs__action__Gait_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Request)() {
  hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "hapthexa_msgs/action/gait.h"
// Member `result`
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_GetResult_Response__init(message_memory);
}

void hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_GetResult_Response),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_member_array,  // message members
  hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_GetResult_Response__get_type_hash,
  &hapthexa_msgs__action__Gait_GetResult_Response__get_type_description,
  &hapthexa_msgs__action__Gait_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Response)() {
  hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_Result)();
  if (!hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "hapthexa_msgs/action/gait.h"
// Member `request`
// Member `response`
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_GetResult_Event__init(message_memory);
}

void hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_GetResult_Event__fini(message_memory);
}

size_t hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Gait_GetResult_Event__request(
  const void * untyped_member)
{
  const hapthexa_msgs__action__Gait_GetResult_Request__Sequence * member =
    (const hapthexa_msgs__action__Gait_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const hapthexa_msgs__action__Gait_GetResult_Request__Sequence * member =
    (const hapthexa_msgs__action__Gait_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Gait_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  hapthexa_msgs__action__Gait_GetResult_Request__Sequence * member =
    (hapthexa_msgs__action__Gait_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Gait_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hapthexa_msgs__action__Gait_GetResult_Request * item =
    ((const hapthexa_msgs__action__Gait_GetResult_Request *)
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_GetResult_Event__request(untyped_member, index));
  hapthexa_msgs__action__Gait_GetResult_Request * value =
    (hapthexa_msgs__action__Gait_GetResult_Request *)(untyped_value);
  *value = *item;
}

void hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Gait_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hapthexa_msgs__action__Gait_GetResult_Request * item =
    ((hapthexa_msgs__action__Gait_GetResult_Request *)
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Gait_GetResult_Event__request(untyped_member, index));
  const hapthexa_msgs__action__Gait_GetResult_Request * value =
    (const hapthexa_msgs__action__Gait_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Gait_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  hapthexa_msgs__action__Gait_GetResult_Request__Sequence * member =
    (hapthexa_msgs__action__Gait_GetResult_Request__Sequence *)(untyped_member);
  hapthexa_msgs__action__Gait_GetResult_Request__Sequence__fini(member);
  return hapthexa_msgs__action__Gait_GetResult_Request__Sequence__init(member, size);
}

size_t hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Gait_GetResult_Event__response(
  const void * untyped_member)
{
  const hapthexa_msgs__action__Gait_GetResult_Response__Sequence * member =
    (const hapthexa_msgs__action__Gait_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const hapthexa_msgs__action__Gait_GetResult_Response__Sequence * member =
    (const hapthexa_msgs__action__Gait_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Gait_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  hapthexa_msgs__action__Gait_GetResult_Response__Sequence * member =
    (hapthexa_msgs__action__Gait_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Gait_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hapthexa_msgs__action__Gait_GetResult_Response * item =
    ((const hapthexa_msgs__action__Gait_GetResult_Response *)
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_GetResult_Event__response(untyped_member, index));
  hapthexa_msgs__action__Gait_GetResult_Response * value =
    (hapthexa_msgs__action__Gait_GetResult_Response *)(untyped_value);
  *value = *item;
}

void hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Gait_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hapthexa_msgs__action__Gait_GetResult_Response * item =
    ((hapthexa_msgs__action__Gait_GetResult_Response *)
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Gait_GetResult_Event__response(untyped_member, index));
  const hapthexa_msgs__action__Gait_GetResult_Response * value =
    (const hapthexa_msgs__action__Gait_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Gait_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  hapthexa_msgs__action__Gait_GetResult_Response__Sequence * member =
    (hapthexa_msgs__action__Gait_GetResult_Response__Sequence *)(untyped_member);
  hapthexa_msgs__action__Gait_GetResult_Response__Sequence__fini(member);
  return hapthexa_msgs__action__Gait_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(hapthexa_msgs__action__Gait_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Gait_GetResult_Event__request,  // size() function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_GetResult_Event__request,  // get_const(index) function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Gait_GetResult_Event__request,  // get(index) function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Gait_GetResult_Event__request,  // fetch(index, &value) function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Gait_GetResult_Event__request,  // assign(index, value) function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Gait_GetResult_Event__request  // resize(index) function pointer
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
    offsetof(hapthexa_msgs__action__Gait_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Gait_GetResult_Event__response,  // size() function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Gait_GetResult_Event__response,  // get_const(index) function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Gait_GetResult_Event__response,  // get(index) function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Gait_GetResult_Event__response,  // fetch(index, &value) function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Gait_GetResult_Event__response,  // assign(index, value) function pointer
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Gait_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_GetResult_Event),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_member_array,  // message members
  hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_GetResult_Event__get_type_hash,
  &hapthexa_msgs__action__Gait_GetResult_Event__get_type_description,
  &hapthexa_msgs__action__Gait_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Event)() {
  hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Request)();
  hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Response)();
  if (!hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_service_members = {
  "hapthexa_msgs__action",  // service namespace
  "Gait_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_service_type_support_handle = {
  0,
  &hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_service_members,
  get_service_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_GetResult_Request__rosidl_typesupport_introspection_c__Gait_GetResult_Request_message_type_support_handle,
  &hapthexa_msgs__action__Gait_GetResult_Response__rosidl_typesupport_introspection_c__Gait_GetResult_Response_message_type_support_handle,
  &hapthexa_msgs__action__Gait_GetResult_Event__rosidl_typesupport_introspection_c__Gait_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hapthexa_msgs,
    action,
    Gait_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hapthexa_msgs,
    action,
    Gait_GetResult
  ),
  &hapthexa_msgs__action__Gait_GetResult__get_type_hash,
  &hapthexa_msgs__action__Gait_GetResult__get_type_description,
  &hapthexa_msgs__action__Gait_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult)(void) {
  if (!hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_service_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_GetResult_Event)()->data;
  }

  return &hapthexa_msgs__action__detail__gait__rosidl_typesupport_introspection_c__Gait_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hapthexa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__functions.h"
// already included above
// #include "hapthexa_msgs/action/detail/gait__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "hapthexa_msgs/action/gait.h"
// Member `feedback`
// already included above
// #include "hapthexa_msgs/action/detail/gait__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hapthexa_msgs__action__Gait_FeedbackMessage__init(message_memory);
}

void hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_fini_function(void * message_memory)
{
  hapthexa_msgs__action__Gait_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hapthexa_msgs__action__Gait_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_members = {
  "hapthexa_msgs__action",  // message namespace
  "Gait_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(hapthexa_msgs__action__Gait_FeedbackMessage),
  false,  // has_any_key_member_
  hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_member_array,  // message members
  hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_type_support_handle = {
  0,
  &hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__action__Gait_FeedbackMessage__get_type_hash,
  &hapthexa_msgs__action__Gait_FeedbackMessage__get_type_description,
  &hapthexa_msgs__action__Gait_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_FeedbackMessage)() {
  hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hapthexa_msgs, action, Gait_Feedback)();
  if (!hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hapthexa_msgs__action__Gait_FeedbackMessage__rosidl_typesupport_introspection_c__Gait_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
