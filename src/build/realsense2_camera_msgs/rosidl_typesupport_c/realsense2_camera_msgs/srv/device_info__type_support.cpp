// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from realsense2_camera_msgs:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "realsense2_camera_msgs/srv/detail/device_info__struct.h"
#include "realsense2_camera_msgs/srv/detail/device_info__type_support.h"
#include "realsense2_camera_msgs/srv/detail/device_info__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DeviceInfo_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeviceInfo_Request_type_support_ids_t;

static const _DeviceInfo_Request_type_support_ids_t _DeviceInfo_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeviceInfo_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeviceInfo_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeviceInfo_Request_type_support_symbol_names_t _DeviceInfo_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, realsense2_camera_msgs, srv, DeviceInfo_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, DeviceInfo_Request)),
  }
};

typedef struct _DeviceInfo_Request_type_support_data_t
{
  void * data[2];
} _DeviceInfo_Request_type_support_data_t;

static _DeviceInfo_Request_type_support_data_t _DeviceInfo_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeviceInfo_Request_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_DeviceInfo_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DeviceInfo_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DeviceInfo_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeviceInfo_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeviceInfo_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__DeviceInfo_Request__get_type_hash,
  &realsense2_camera_msgs__srv__DeviceInfo_Request__get_type_description,
  &realsense2_camera_msgs__srv__DeviceInfo_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace realsense2_camera_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, realsense2_camera_msgs, srv, DeviceInfo_Request)() {
  return &::realsense2_camera_msgs::srv::rosidl_typesupport_c::DeviceInfo_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/device_info__struct.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/device_info__type_support.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/device_info__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DeviceInfo_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeviceInfo_Response_type_support_ids_t;

static const _DeviceInfo_Response_type_support_ids_t _DeviceInfo_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeviceInfo_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeviceInfo_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeviceInfo_Response_type_support_symbol_names_t _DeviceInfo_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, realsense2_camera_msgs, srv, DeviceInfo_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, DeviceInfo_Response)),
  }
};

typedef struct _DeviceInfo_Response_type_support_data_t
{
  void * data[2];
} _DeviceInfo_Response_type_support_data_t;

static _DeviceInfo_Response_type_support_data_t _DeviceInfo_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeviceInfo_Response_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_DeviceInfo_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DeviceInfo_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DeviceInfo_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeviceInfo_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeviceInfo_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__DeviceInfo_Response__get_type_hash,
  &realsense2_camera_msgs__srv__DeviceInfo_Response__get_type_description,
  &realsense2_camera_msgs__srv__DeviceInfo_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace realsense2_camera_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, realsense2_camera_msgs, srv, DeviceInfo_Response)() {
  return &::realsense2_camera_msgs::srv::rosidl_typesupport_c::DeviceInfo_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/device_info__struct.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/device_info__type_support.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/device_info__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DeviceInfo_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeviceInfo_Event_type_support_ids_t;

static const _DeviceInfo_Event_type_support_ids_t _DeviceInfo_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeviceInfo_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeviceInfo_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeviceInfo_Event_type_support_symbol_names_t _DeviceInfo_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, realsense2_camera_msgs, srv, DeviceInfo_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, DeviceInfo_Event)),
  }
};

typedef struct _DeviceInfo_Event_type_support_data_t
{
  void * data[2];
} _DeviceInfo_Event_type_support_data_t;

static _DeviceInfo_Event_type_support_data_t _DeviceInfo_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeviceInfo_Event_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_DeviceInfo_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DeviceInfo_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DeviceInfo_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeviceInfo_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeviceInfo_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__DeviceInfo_Event__get_type_hash,
  &realsense2_camera_msgs__srv__DeviceInfo_Event__get_type_description,
  &realsense2_camera_msgs__srv__DeviceInfo_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace realsense2_camera_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, realsense2_camera_msgs, srv, DeviceInfo_Event)() {
  return &::realsense2_camera_msgs::srv::rosidl_typesupport_c::DeviceInfo_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/device_info__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace realsense2_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _DeviceInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeviceInfo_type_support_ids_t;

static const _DeviceInfo_type_support_ids_t _DeviceInfo_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeviceInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeviceInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeviceInfo_type_support_symbol_names_t _DeviceInfo_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, realsense2_camera_msgs, srv, DeviceInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, realsense2_camera_msgs, srv, DeviceInfo)),
  }
};

typedef struct _DeviceInfo_type_support_data_t
{
  void * data[2];
} _DeviceInfo_type_support_data_t;

static _DeviceInfo_type_support_data_t _DeviceInfo_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeviceInfo_service_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_DeviceInfo_service_typesupport_ids.typesupport_identifier[0],
  &_DeviceInfo_service_typesupport_symbol_names.symbol_name[0],
  &_DeviceInfo_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DeviceInfo_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeviceInfo_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DeviceInfo_Request_message_type_support_handle,
  &DeviceInfo_Response_message_type_support_handle,
  &DeviceInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    realsense2_camera_msgs,
    srv,
    DeviceInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    realsense2_camera_msgs,
    srv,
    DeviceInfo
  ),
  &realsense2_camera_msgs__srv__DeviceInfo__get_type_hash,
  &realsense2_camera_msgs__srv__DeviceInfo__get_type_description,
  &realsense2_camera_msgs__srv__DeviceInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace realsense2_camera_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, realsense2_camera_msgs, srv, DeviceInfo)() {
  return &::realsense2_camera_msgs::srv::rosidl_typesupport_c::DeviceInfo_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
