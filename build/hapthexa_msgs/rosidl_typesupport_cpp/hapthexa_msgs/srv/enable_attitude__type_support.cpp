// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from hapthexa_msgs:srv/EnableAttitude.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hapthexa_msgs/srv/detail/enable_attitude__functions.h"
#include "hapthexa_msgs/srv/detail/enable_attitude__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hapthexa_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _EnableAttitude_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EnableAttitude_Request_type_support_ids_t;

static const _EnableAttitude_Request_type_support_ids_t _EnableAttitude_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EnableAttitude_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EnableAttitude_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EnableAttitude_Request_type_support_symbol_names_t _EnableAttitude_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hapthexa_msgs, srv, EnableAttitude_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hapthexa_msgs, srv, EnableAttitude_Request)),
  }
};

typedef struct _EnableAttitude_Request_type_support_data_t
{
  void * data[2];
} _EnableAttitude_Request_type_support_data_t;

static _EnableAttitude_Request_type_support_data_t _EnableAttitude_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EnableAttitude_Request_message_typesupport_map = {
  2,
  "hapthexa_msgs",
  &_EnableAttitude_Request_message_typesupport_ids.typesupport_identifier[0],
  &_EnableAttitude_Request_message_typesupport_symbol_names.symbol_name[0],
  &_EnableAttitude_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EnableAttitude_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EnableAttitude_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hapthexa_msgs__srv__EnableAttitude_Request__get_type_hash,
  &hapthexa_msgs__srv__EnableAttitude_Request__get_type_description,
  &hapthexa_msgs__srv__EnableAttitude_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hapthexa_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Request>()
{
  return &::hapthexa_msgs::srv::rosidl_typesupport_cpp::EnableAttitude_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hapthexa_msgs, srv, EnableAttitude_Request)() {
  return get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Request>();
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
// #include "hapthexa_msgs/srv/detail/enable_attitude__functions.h"
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__struct.hpp"
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

namespace hapthexa_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _EnableAttitude_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EnableAttitude_Response_type_support_ids_t;

static const _EnableAttitude_Response_type_support_ids_t _EnableAttitude_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EnableAttitude_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EnableAttitude_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EnableAttitude_Response_type_support_symbol_names_t _EnableAttitude_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hapthexa_msgs, srv, EnableAttitude_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hapthexa_msgs, srv, EnableAttitude_Response)),
  }
};

typedef struct _EnableAttitude_Response_type_support_data_t
{
  void * data[2];
} _EnableAttitude_Response_type_support_data_t;

static _EnableAttitude_Response_type_support_data_t _EnableAttitude_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EnableAttitude_Response_message_typesupport_map = {
  2,
  "hapthexa_msgs",
  &_EnableAttitude_Response_message_typesupport_ids.typesupport_identifier[0],
  &_EnableAttitude_Response_message_typesupport_symbol_names.symbol_name[0],
  &_EnableAttitude_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EnableAttitude_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EnableAttitude_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hapthexa_msgs__srv__EnableAttitude_Response__get_type_hash,
  &hapthexa_msgs__srv__EnableAttitude_Response__get_type_description,
  &hapthexa_msgs__srv__EnableAttitude_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hapthexa_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Response>()
{
  return &::hapthexa_msgs::srv::rosidl_typesupport_cpp::EnableAttitude_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hapthexa_msgs, srv, EnableAttitude_Response)() {
  return get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Response>();
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
// #include "hapthexa_msgs/srv/detail/enable_attitude__functions.h"
// already included above
// #include "hapthexa_msgs/srv/detail/enable_attitude__struct.hpp"
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

namespace hapthexa_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _EnableAttitude_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EnableAttitude_Event_type_support_ids_t;

static const _EnableAttitude_Event_type_support_ids_t _EnableAttitude_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EnableAttitude_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EnableAttitude_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EnableAttitude_Event_type_support_symbol_names_t _EnableAttitude_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hapthexa_msgs, srv, EnableAttitude_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hapthexa_msgs, srv, EnableAttitude_Event)),
  }
};

typedef struct _EnableAttitude_Event_type_support_data_t
{
  void * data[2];
} _EnableAttitude_Event_type_support_data_t;

static _EnableAttitude_Event_type_support_data_t _EnableAttitude_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EnableAttitude_Event_message_typesupport_map = {
  2,
  "hapthexa_msgs",
  &_EnableAttitude_Event_message_typesupport_ids.typesupport_identifier[0],
  &_EnableAttitude_Event_message_typesupport_symbol_names.symbol_name[0],
  &_EnableAttitude_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EnableAttitude_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EnableAttitude_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hapthexa_msgs__srv__EnableAttitude_Event__get_type_hash,
  &hapthexa_msgs__srv__EnableAttitude_Event__get_type_description,
  &hapthexa_msgs__srv__EnableAttitude_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hapthexa_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Event>()
{
  return &::hapthexa_msgs::srv::rosidl_typesupport_cpp::EnableAttitude_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hapthexa_msgs, srv, EnableAttitude_Event)() {
  return get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Event>();
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
// #include "hapthexa_msgs/srv/detail/enable_attitude__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hapthexa_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _EnableAttitude_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EnableAttitude_type_support_ids_t;

static const _EnableAttitude_type_support_ids_t _EnableAttitude_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EnableAttitude_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EnableAttitude_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EnableAttitude_type_support_symbol_names_t _EnableAttitude_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hapthexa_msgs, srv, EnableAttitude)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hapthexa_msgs, srv, EnableAttitude)),
  }
};

typedef struct _EnableAttitude_type_support_data_t
{
  void * data[2];
} _EnableAttitude_type_support_data_t;

static _EnableAttitude_type_support_data_t _EnableAttitude_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EnableAttitude_service_typesupport_map = {
  2,
  "hapthexa_msgs",
  &_EnableAttitude_service_typesupport_ids.typesupport_identifier[0],
  &_EnableAttitude_service_typesupport_symbol_names.symbol_name[0],
  &_EnableAttitude_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t EnableAttitude_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EnableAttitude_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hapthexa_msgs::srv::EnableAttitude_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<hapthexa_msgs::srv::EnableAttitude>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<hapthexa_msgs::srv::EnableAttitude>,
  &hapthexa_msgs__srv__EnableAttitude__get_type_hash,
  &hapthexa_msgs__srv__EnableAttitude__get_type_description,
  &hapthexa_msgs__srv__EnableAttitude__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hapthexa_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hapthexa_msgs::srv::EnableAttitude>()
{
  return &::hapthexa_msgs::srv::rosidl_typesupport_cpp::EnableAttitude_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, hapthexa_msgs, srv, EnableAttitude)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<hapthexa_msgs::srv::EnableAttitude>();
}

#ifdef __cplusplus
}
#endif
