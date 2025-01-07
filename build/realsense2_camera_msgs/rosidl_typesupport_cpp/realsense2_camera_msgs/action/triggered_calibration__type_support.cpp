// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from realsense2_camera_msgs:action/TriggeredCalibration.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
#include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_Goal_type_support_ids_t;

static const _TriggeredCalibration_Goal_type_support_ids_t _TriggeredCalibration_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_Goal_type_support_symbol_names_t _TriggeredCalibration_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Goal)),
  }
};

typedef struct _TriggeredCalibration_Goal_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_Goal_type_support_data_t;

static _TriggeredCalibration_Goal_type_support_data_t _TriggeredCalibration_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_Goal_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_Goal__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_Goal__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_Goal>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Goal)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_Goal>();
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
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_Result_type_support_ids_t;

static const _TriggeredCalibration_Result_type_support_ids_t _TriggeredCalibration_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_Result_type_support_symbol_names_t _TriggeredCalibration_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Result)),
  }
};

typedef struct _TriggeredCalibration_Result_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_Result_type_support_data_t;

static _TriggeredCalibration_Result_type_support_data_t _TriggeredCalibration_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_Result_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_Result_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_Result_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_Result__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_Result__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_Result>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Result)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_Result>();
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
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_Feedback_type_support_ids_t;

static const _TriggeredCalibration_Feedback_type_support_ids_t _TriggeredCalibration_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_Feedback_type_support_symbol_names_t _TriggeredCalibration_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Feedback)),
  }
};

typedef struct _TriggeredCalibration_Feedback_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_Feedback_type_support_data_t;

static _TriggeredCalibration_Feedback_type_support_data_t _TriggeredCalibration_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_Feedback_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_Feedback__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_Feedback__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_Feedback>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_Feedback)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_Feedback>();
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
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_SendGoal_Request_type_support_ids_t;

static const _TriggeredCalibration_SendGoal_Request_type_support_ids_t _TriggeredCalibration_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_SendGoal_Request_type_support_symbol_names_t _TriggeredCalibration_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Request)),
  }
};

typedef struct _TriggeredCalibration_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_SendGoal_Request_type_support_data_t;

static _TriggeredCalibration_SendGoal_Request_type_support_data_t _TriggeredCalibration_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_SendGoal_Request_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Request__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Request__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Request>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Request)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Request>();
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
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_SendGoal_Response_type_support_ids_t;

static const _TriggeredCalibration_SendGoal_Response_type_support_ids_t _TriggeredCalibration_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_SendGoal_Response_type_support_symbol_names_t _TriggeredCalibration_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Response)),
  }
};

typedef struct _TriggeredCalibration_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_SendGoal_Response_type_support_data_t;

static _TriggeredCalibration_SendGoal_Response_type_support_data_t _TriggeredCalibration_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_SendGoal_Response_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Response__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Response__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Response>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Response)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Response>();
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
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_SendGoal_Event_type_support_ids_t;

static const _TriggeredCalibration_SendGoal_Event_type_support_ids_t _TriggeredCalibration_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_SendGoal_Event_type_support_symbol_names_t _TriggeredCalibration_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Event)),
  }
};

typedef struct _TriggeredCalibration_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_SendGoal_Event_type_support_data_t;

static _TriggeredCalibration_SendGoal_Event_type_support_data_t _TriggeredCalibration_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_SendGoal_Event_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Event__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Event__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Event>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal_Event)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Event>();
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
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_SendGoal_type_support_ids_t;

static const _TriggeredCalibration_SendGoal_type_support_ids_t _TriggeredCalibration_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_SendGoal_type_support_symbol_names_t _TriggeredCalibration_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal)),
  }
};

typedef struct _TriggeredCalibration_SendGoal_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_SendGoal_type_support_data_t;

static _TriggeredCalibration_SendGoal_type_support_data_t _TriggeredCalibration_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_SendGoal_service_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TriggeredCalibration_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal>,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_GetResult_Request_type_support_ids_t;

static const _TriggeredCalibration_GetResult_Request_type_support_ids_t _TriggeredCalibration_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_GetResult_Request_type_support_symbol_names_t _TriggeredCalibration_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Request)),
  }
};

typedef struct _TriggeredCalibration_GetResult_Request_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_GetResult_Request_type_support_data_t;

static _TriggeredCalibration_GetResult_Request_type_support_data_t _TriggeredCalibration_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_GetResult_Request_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Request__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Request__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Request>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Request)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Request>();
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
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_GetResult_Response_type_support_ids_t;

static const _TriggeredCalibration_GetResult_Response_type_support_ids_t _TriggeredCalibration_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_GetResult_Response_type_support_symbol_names_t _TriggeredCalibration_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Response)),
  }
};

typedef struct _TriggeredCalibration_GetResult_Response_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_GetResult_Response_type_support_data_t;

static _TriggeredCalibration_GetResult_Response_type_support_data_t _TriggeredCalibration_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_GetResult_Response_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Response__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Response__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Response>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Response)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Response>();
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
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_GetResult_Event_type_support_ids_t;

static const _TriggeredCalibration_GetResult_Event_type_support_ids_t _TriggeredCalibration_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_GetResult_Event_type_support_symbol_names_t _TriggeredCalibration_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Event)),
  }
};

typedef struct _TriggeredCalibration_GetResult_Event_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_GetResult_Event_type_support_data_t;

static _TriggeredCalibration_GetResult_Event_type_support_data_t _TriggeredCalibration_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_GetResult_Event_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Event__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Event__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Event>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult_Event)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace realsense2_camera_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_GetResult_type_support_ids_t;

static const _TriggeredCalibration_GetResult_type_support_ids_t _TriggeredCalibration_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_GetResult_type_support_symbol_names_t _TriggeredCalibration_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult)),
  }
};

typedef struct _TriggeredCalibration_GetResult_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_GetResult_type_support_data_t;

static _TriggeredCalibration_GetResult_type_support_data_t _TriggeredCalibration_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_GetResult_service_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TriggeredCalibration_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<realsense2_camera_msgs::action::TriggeredCalibration_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<realsense2_camera_msgs::action::TriggeredCalibration_GetResult>,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__functions.h"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TriggeredCalibration_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggeredCalibration_FeedbackMessage_type_support_ids_t;

static const _TriggeredCalibration_FeedbackMessage_type_support_ids_t _TriggeredCalibration_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TriggeredCalibration_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggeredCalibration_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggeredCalibration_FeedbackMessage_type_support_symbol_names_t _TriggeredCalibration_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, realsense2_camera_msgs, action, TriggeredCalibration_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, realsense2_camera_msgs, action, TriggeredCalibration_FeedbackMessage)),
  }
};

typedef struct _TriggeredCalibration_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _TriggeredCalibration_FeedbackMessage_type_support_data_t;

static _TriggeredCalibration_FeedbackMessage_type_support_data_t _TriggeredCalibration_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggeredCalibration_FeedbackMessage_message_typesupport_map = {
  2,
  "realsense2_camera_msgs",
  &_TriggeredCalibration_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_TriggeredCalibration_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_TriggeredCalibration_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggeredCalibration_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggeredCalibration_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &realsense2_camera_msgs__action__TriggeredCalibration_FeedbackMessage__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration_FeedbackMessage__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_FeedbackMessage>()
{
  return &::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration_FeedbackMessage)() {
  return get_message_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "realsense2_camera_msgs/action/detail/triggered_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace realsense2_camera_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t TriggeredCalibration_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &realsense2_camera_msgs__action__TriggeredCalibration__get_type_hash,
  &realsense2_camera_msgs__action__TriggeredCalibration__get_type_description,
  &realsense2_camera_msgs__action__TriggeredCalibration__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace realsense2_camera_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration>()
{
  using ::realsense2_camera_msgs::action::rosidl_typesupport_cpp::TriggeredCalibration_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  TriggeredCalibration_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::realsense2_camera_msgs::action::TriggeredCalibration::Impl::SendGoalService>();
  TriggeredCalibration_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::realsense2_camera_msgs::action::TriggeredCalibration::Impl::GetResultService>();
  TriggeredCalibration_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::realsense2_camera_msgs::action::TriggeredCalibration::Impl::CancelGoalService>();
  TriggeredCalibration_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::realsense2_camera_msgs::action::TriggeredCalibration::Impl::FeedbackMessage>();
  TriggeredCalibration_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::realsense2_camera_msgs::action::TriggeredCalibration::Impl::GoalStatusMessage>();
  return &TriggeredCalibration_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, realsense2_camera_msgs, action, TriggeredCalibration)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<realsense2_camera_msgs::action::TriggeredCalibration>();
}

#ifdef __cplusplus
}
#endif
