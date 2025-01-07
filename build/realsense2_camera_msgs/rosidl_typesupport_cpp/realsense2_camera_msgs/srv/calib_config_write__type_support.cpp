// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from realsense2_camera_msgs:srv/CalibConfigWrite.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "realsense2_camera_msgs/srv/detail/calib_config_write__functions.h"
#include "realsense2_camera_msgs/srv/detail/calib_config_write__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalibConfigWrite_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalibConfigWrite_Request_type_support_ids_t;

static const _CalibConfigWrite_Request_type_support_ids_t _CalibConfigWrite_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalibConfigWrite_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalibConfigWrite_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalibConfigWrite_Request_type_support_symbol_names_t _CalibConfigWrite_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Request)),
  }
};

typedef struct _CalibConfigWrite_Request_type_support_data_t
{
  void * data[2];
} _CalibConfigWrite_Request_type_support_data_t;

static _CalibConfigWrite_Request_type_support_data_t _CalibConfigWrite_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalibConfigWrite_Request_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_CalibConfigWrite_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CalibConfigWrite_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CalibConfigWrite_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalibConfigWrite_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalibConfigWrite_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Request__get_type_hash,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Request__get_type_description,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Request>()
{
  return &::realsense2_camera_msgs::srv::rosidl_typesupport_cpp::CalibConfigWrite_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Request)() {
  return get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__functions.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalibConfigWrite_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalibConfigWrite_Response_type_support_ids_t;

static const _CalibConfigWrite_Response_type_support_ids_t _CalibConfigWrite_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalibConfigWrite_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalibConfigWrite_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalibConfigWrite_Response_type_support_symbol_names_t _CalibConfigWrite_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Response)),
  }
};

typedef struct _CalibConfigWrite_Response_type_support_data_t
{
  void * data[2];
} _CalibConfigWrite_Response_type_support_data_t;

static _CalibConfigWrite_Response_type_support_data_t _CalibConfigWrite_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalibConfigWrite_Response_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_CalibConfigWrite_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CalibConfigWrite_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CalibConfigWrite_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalibConfigWrite_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalibConfigWrite_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Response__get_type_hash,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Response__get_type_description,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Response>()
{
  return &::realsense2_camera_msgs::srv::rosidl_typesupport_cpp::CalibConfigWrite_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Response)() {
  return get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__functions.h"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalibConfigWrite_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalibConfigWrite_Event_type_support_ids_t;

static const _CalibConfigWrite_Event_type_support_ids_t _CalibConfigWrite_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalibConfigWrite_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalibConfigWrite_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalibConfigWrite_Event_type_support_symbol_names_t _CalibConfigWrite_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Event)),
  }
};

typedef struct _CalibConfigWrite_Event_type_support_data_t
{
  void * data[2];
} _CalibConfigWrite_Event_type_support_data_t;

static _CalibConfigWrite_Event_type_support_data_t _CalibConfigWrite_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalibConfigWrite_Event_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_CalibConfigWrite_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CalibConfigWrite_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CalibConfigWrite_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalibConfigWrite_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalibConfigWrite_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Event__get_type_hash,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Event__get_type_description,
  &realsense2_camera_msgs__srv__CalibConfigWrite_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Event>()
{
  return &::realsense2_camera_msgs::srv::rosidl_typesupport_cpp::CalibConfigWrite_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, srv, CalibConfigWrite_Event)() {
  return get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "realsense2_camera_msgs/srv/detail/calib_config_write__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalibConfigWrite_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalibConfigWrite_type_support_ids_t;

static const _CalibConfigWrite_type_support_ids_t _CalibConfigWrite_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalibConfigWrite_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalibConfigWrite_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalibConfigWrite_type_support_symbol_names_t _CalibConfigWrite_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, srv, CalibConfigWrite)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, srv, CalibConfigWrite)),
  }
};

typedef struct _CalibConfigWrite_type_support_data_t
{
  void * data[2];
} _CalibConfigWrite_type_support_data_t;

static _CalibConfigWrite_type_support_data_t _CalibConfigWrite_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalibConfigWrite_service_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_CalibConfigWrite_service_typesupport_ids.typesupport_identifier[0],
  &_CalibConfigWrite_service_typesupport_symbol_names.symbol_name[0],
  &_CalibConfigWrite_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CalibConfigWrite_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalibConfigWrite_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<realsense2_camera_msgs::srv::CalibConfigWrite>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<realsense2_camera_msgs::srv::CalibConfigWrite>,
  &realsense2_camera_msgs__srv__CalibConfigWrite__get_type_hash,
  &realsense2_camera_msgs__srv__CalibConfigWrite__get_type_description,
  &realsense2_camera_msgs__srv__CalibConfigWrite__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite>()
{
  return &::realsense2_camera_msgs::srv::rosidl_typesupport_cpp::CalibConfigWrite_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, srv, CalibConfigWrite)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<realsense2_camera_msgs::srv::CalibConfigWrite>();
}

#ifdef __cplusplus
}
#endif