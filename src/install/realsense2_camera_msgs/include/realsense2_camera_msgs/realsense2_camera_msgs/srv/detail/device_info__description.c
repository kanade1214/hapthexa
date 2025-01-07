// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from realsense2_camera_msgs:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

#include "realsense2_camera_msgs/srv/detail/device_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
const rosidl_type_hash_t *
realsense2_camera_msgs__srv__DeviceInfo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x8f, 0x2e, 0xd7, 0xcf, 0x09, 0xd2, 0xa4,
      0x7e, 0xb2, 0x69, 0xbb, 0xb1, 0x98, 0x0b, 0x1d,
      0x41, 0xde, 0x0b, 0x3d, 0x95, 0x0b, 0xee, 0xea,
      0xd0, 0xe7, 0x38, 0xea, 0xd0, 0xc6, 0x62, 0xee,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
const rosidl_type_hash_t *
realsense2_camera_msgs__srv__DeviceInfo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x2e, 0x9f, 0xde, 0x45, 0x4b, 0xfa, 0x74,
      0x06, 0x43, 0xd9, 0xc3, 0xcb, 0x0d, 0x4b, 0xef,
      0xbc, 0x50, 0xc9, 0x1a, 0xcf, 0xfc, 0x0b, 0x59,
      0xeb, 0x9d, 0xd6, 0xca, 0x35, 0xa4, 0xac, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
const rosidl_type_hash_t *
realsense2_camera_msgs__srv__DeviceInfo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0x10, 0x0f, 0xb1, 0x56, 0x4c, 0x4d, 0x76,
      0x43, 0xea, 0x47, 0x95, 0xb2, 0x01, 0xab, 0x2c,
      0xcb, 0xe2, 0x97, 0x08, 0x96, 0x77, 0x8a, 0xdb,
      0xcc, 0x9c, 0x74, 0x2c, 0xb2, 0xa9, 0x68, 0x08,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
const rosidl_type_hash_t *
realsense2_camera_msgs__srv__DeviceInfo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x49, 0x5e, 0x20, 0xd0, 0xc7, 0xc7, 0x0a,
      0x1d, 0x94, 0x4b, 0xab, 0x0c, 0x7c, 0x98, 0xcd,
      0x43, 0xe5, 0xfc, 0xe5, 0x94, 0xb3, 0xbe, 0x3f,
      0x61, 0x51, 0x92, 0xc9, 0x1f, 0x0f, 0x03, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char realsense2_camera_msgs__srv__DeviceInfo__TYPE_NAME[] = "realsense2_camera_msgs/srv/DeviceInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char realsense2_camera_msgs__srv__DeviceInfo_Event__TYPE_NAME[] = "realsense2_camera_msgs/srv/DeviceInfo_Event";
static char realsense2_camera_msgs__srv__DeviceInfo_Request__TYPE_NAME[] = "realsense2_camera_msgs/srv/DeviceInfo_Request";
static char realsense2_camera_msgs__srv__DeviceInfo_Response__TYPE_NAME[] = "realsense2_camera_msgs/srv/DeviceInfo_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char realsense2_camera_msgs__srv__DeviceInfo__FIELD_NAME__request_message[] = "request_message";
static char realsense2_camera_msgs__srv__DeviceInfo__FIELD_NAME__response_message[] = "response_message";
static char realsense2_camera_msgs__srv__DeviceInfo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field realsense2_camera_msgs__srv__DeviceInfo__FIELDS[] = {
  {
    {realsense2_camera_msgs__srv__DeviceInfo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {realsense2_camera_msgs__srv__DeviceInfo_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {realsense2_camera_msgs__srv__DeviceInfo_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {realsense2_camera_msgs__srv__DeviceInfo_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription realsense2_camera_msgs__srv__DeviceInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
realsense2_camera_msgs__srv__DeviceInfo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {realsense2_camera_msgs__srv__DeviceInfo__TYPE_NAME, 37, 37},
      {realsense2_camera_msgs__srv__DeviceInfo__FIELDS, 3, 3},
    },
    {realsense2_camera_msgs__srv__DeviceInfo__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = realsense2_camera_msgs__srv__DeviceInfo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = realsense2_camera_msgs__srv__DeviceInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = realsense2_camera_msgs__srv__DeviceInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char realsense2_camera_msgs__srv__DeviceInfo_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field realsense2_camera_msgs__srv__DeviceInfo_Request__FIELDS[] = {
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
realsense2_camera_msgs__srv__DeviceInfo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {realsense2_camera_msgs__srv__DeviceInfo_Request__TYPE_NAME, 45, 45},
      {realsense2_camera_msgs__srv__DeviceInfo_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__device_name[] = "device_name";
static char realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__serial_number[] = "serial_number";
static char realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__firmware_version[] = "firmware_version";
static char realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__usb_type_descriptor[] = "usb_type_descriptor";
static char realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__firmware_update_id[] = "firmware_update_id";
static char realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__sensors[] = "sensors";
static char realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__physical_port[] = "physical_port";

static rosidl_runtime_c__type_description__Field realsense2_camera_msgs__srv__DeviceInfo_Response__FIELDS[] = {
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__device_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__serial_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__usb_type_descriptor, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__firmware_update_id, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__sensors, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__FIELD_NAME__physical_port, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
realsense2_camera_msgs__srv__DeviceInfo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {realsense2_camera_msgs__srv__DeviceInfo_Response__TYPE_NAME, 46, 46},
      {realsense2_camera_msgs__srv__DeviceInfo_Response__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char realsense2_camera_msgs__srv__DeviceInfo_Event__FIELD_NAME__info[] = "info";
static char realsense2_camera_msgs__srv__DeviceInfo_Event__FIELD_NAME__request[] = "request";
static char realsense2_camera_msgs__srv__DeviceInfo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field realsense2_camera_msgs__srv__DeviceInfo_Event__FIELDS[] = {
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {realsense2_camera_msgs__srv__DeviceInfo_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {realsense2_camera_msgs__srv__DeviceInfo_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription realsense2_camera_msgs__srv__DeviceInfo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
realsense2_camera_msgs__srv__DeviceInfo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {realsense2_camera_msgs__srv__DeviceInfo_Event__TYPE_NAME, 43, 43},
      {realsense2_camera_msgs__srv__DeviceInfo_Event__FIELDS, 3, 3},
    },
    {realsense2_camera_msgs__srv__DeviceInfo_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = realsense2_camera_msgs__srv__DeviceInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = realsense2_camera_msgs__srv__DeviceInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "string device_name\n"
  "string serial_number\n"
  "string firmware_version\n"
  "string usb_type_descriptor\n"
  "string firmware_update_id\n"
  "string sensors\n"
  "string physical_port";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
realsense2_camera_msgs__srv__DeviceInfo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {realsense2_camera_msgs__srv__DeviceInfo__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 157, 157},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
realsense2_camera_msgs__srv__DeviceInfo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {realsense2_camera_msgs__srv__DeviceInfo_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
realsense2_camera_msgs__srv__DeviceInfo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {realsense2_camera_msgs__srv__DeviceInfo_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
realsense2_camera_msgs__srv__DeviceInfo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {realsense2_camera_msgs__srv__DeviceInfo_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
realsense2_camera_msgs__srv__DeviceInfo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *realsense2_camera_msgs__srv__DeviceInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *realsense2_camera_msgs__srv__DeviceInfo_Event__get_individual_type_description_source(NULL);
    sources[3] = *realsense2_camera_msgs__srv__DeviceInfo_Request__get_individual_type_description_source(NULL);
    sources[4] = *realsense2_camera_msgs__srv__DeviceInfo_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
realsense2_camera_msgs__srv__DeviceInfo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *realsense2_camera_msgs__srv__DeviceInfo_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
realsense2_camera_msgs__srv__DeviceInfo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *realsense2_camera_msgs__srv__DeviceInfo_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
realsense2_camera_msgs__srv__DeviceInfo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *realsense2_camera_msgs__srv__DeviceInfo_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *realsense2_camera_msgs__srv__DeviceInfo_Request__get_individual_type_description_source(NULL);
    sources[3] = *realsense2_camera_msgs__srv__DeviceInfo_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}