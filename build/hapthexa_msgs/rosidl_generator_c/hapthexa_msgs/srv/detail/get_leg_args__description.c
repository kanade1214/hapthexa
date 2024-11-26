// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hapthexa_msgs:srv/GetLegArgs.idl
// generated code does not contain a copyright notice

#include "hapthexa_msgs/srv/detail/get_leg_args__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__GetLegArgs__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0xa1, 0x1d, 0xa8, 0xe5, 0xe2, 0x39, 0xc5,
      0xe0, 0xc2, 0x00, 0x43, 0x13, 0x2f, 0x1a, 0xa1,
      0x10, 0xb9, 0x73, 0xb8, 0x81, 0x31, 0x12, 0x19,
      0x6a, 0xcc, 0x18, 0x05, 0x73, 0x3a, 0x1f, 0x9e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__GetLegArgs_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x79, 0xac, 0x07, 0xec, 0x6e, 0x76, 0x4b,
      0x2a, 0x81, 0xb1, 0x9d, 0x50, 0x37, 0x9b, 0x93,
      0x7a, 0xda, 0x73, 0xd2, 0x6f, 0xd7, 0x85, 0x70,
      0x27, 0x58, 0x82, 0xab, 0x36, 0x61, 0xa4, 0x18,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__GetLegArgs_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x68, 0xba, 0x55, 0xde, 0xfe, 0x76, 0xe6,
      0xf6, 0x91, 0x32, 0xa6, 0xe8, 0x73, 0x17, 0x88,
      0x55, 0x12, 0x0f, 0xfb, 0xb0, 0x73, 0xc3, 0x81,
      0xfc, 0x40, 0x48, 0xd1, 0x85, 0xf3, 0x33, 0x46,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__GetLegArgs_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0x19, 0x90, 0x70, 0x8d, 0x1b, 0xb2, 0x94,
      0xd1, 0x18, 0x63, 0x46, 0x75, 0xc7, 0xff, 0x88,
      0x68, 0xc1, 0xbd, 0x13, 0xec, 0xa5, 0x18, 0x17,
      0x28, 0x1a, 0x69, 0xab, 0x8c, 0x57, 0xba, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char hapthexa_msgs__srv__GetLegArgs__TYPE_NAME[] = "hapthexa_msgs/srv/GetLegArgs";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char hapthexa_msgs__srv__GetLegArgs_Event__TYPE_NAME[] = "hapthexa_msgs/srv/GetLegArgs_Event";
static char hapthexa_msgs__srv__GetLegArgs_Request__TYPE_NAME[] = "hapthexa_msgs/srv/GetLegArgs_Request";
static char hapthexa_msgs__srv__GetLegArgs_Response__TYPE_NAME[] = "hapthexa_msgs/srv/GetLegArgs_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char hapthexa_msgs__srv__GetLegArgs__FIELD_NAME__request_message[] = "request_message";
static char hapthexa_msgs__srv__GetLegArgs__FIELD_NAME__response_message[] = "response_message";
static char hapthexa_msgs__srv__GetLegArgs__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__GetLegArgs__FIELDS[] = {
  {
    {hapthexa_msgs__srv__GetLegArgs__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__GetLegArgs_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__GetLegArgs_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__GetLegArgs_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hapthexa_msgs__srv__GetLegArgs__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__srv__GetLegArgs__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__GetLegArgs__TYPE_NAME, 28, 28},
      {hapthexa_msgs__srv__GetLegArgs__FIELDS, 3, 3},
    },
    {hapthexa_msgs__srv__GetLegArgs__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = hapthexa_msgs__srv__GetLegArgs_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hapthexa_msgs__srv__GetLegArgs_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = hapthexa_msgs__srv__GetLegArgs_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__GetLegArgs_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__GetLegArgs_Request__FIELDS[] = {
  {
    {hapthexa_msgs__srv__GetLegArgs_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
hapthexa_msgs__srv__GetLegArgs_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__GetLegArgs_Request__TYPE_NAME, 36, 36},
      {hapthexa_msgs__srv__GetLegArgs_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__GetLegArgs_Response__FIELD_NAME__coxa_arg[] = "coxa_arg";
static char hapthexa_msgs__srv__GetLegArgs_Response__FIELD_NAME__femur_arg[] = "femur_arg";
static char hapthexa_msgs__srv__GetLegArgs_Response__FIELD_NAME__tibia_arg[] = "tibia_arg";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__GetLegArgs_Response__FIELDS[] = {
  {
    {hapthexa_msgs__srv__GetLegArgs_Response__FIELD_NAME__coxa_arg, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Response__FIELD_NAME__femur_arg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Response__FIELD_NAME__tibia_arg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__srv__GetLegArgs_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__GetLegArgs_Response__TYPE_NAME, 37, 37},
      {hapthexa_msgs__srv__GetLegArgs_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__GetLegArgs_Event__FIELD_NAME__info[] = "info";
static char hapthexa_msgs__srv__GetLegArgs_Event__FIELD_NAME__request[] = "request";
static char hapthexa_msgs__srv__GetLegArgs_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__GetLegArgs_Event__FIELDS[] = {
  {
    {hapthexa_msgs__srv__GetLegArgs_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hapthexa_msgs__srv__GetLegArgs_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hapthexa_msgs__srv__GetLegArgs_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hapthexa_msgs__srv__GetLegArgs_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegArgs_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__srv__GetLegArgs_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__GetLegArgs_Event__TYPE_NAME, 34, 34},
      {hapthexa_msgs__srv__GetLegArgs_Event__FIELDS, 3, 3},
    },
    {hapthexa_msgs__srv__GetLegArgs_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = hapthexa_msgs__srv__GetLegArgs_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hapthexa_msgs__srv__GetLegArgs_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "float64 coxa_arg\n"
  "float64 femur_arg\n"
  "float64 tibia_arg";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__GetLegArgs__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__GetLegArgs__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__GetLegArgs_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__GetLegArgs_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__GetLegArgs_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__GetLegArgs_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__GetLegArgs_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__GetLegArgs_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__GetLegArgs__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__GetLegArgs__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hapthexa_msgs__srv__GetLegArgs_Event__get_individual_type_description_source(NULL);
    sources[3] = *hapthexa_msgs__srv__GetLegArgs_Request__get_individual_type_description_source(NULL);
    sources[4] = *hapthexa_msgs__srv__GetLegArgs_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__GetLegArgs_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__GetLegArgs_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__GetLegArgs_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__GetLegArgs_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__GetLegArgs_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__GetLegArgs_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hapthexa_msgs__srv__GetLegArgs_Request__get_individual_type_description_source(NULL);
    sources[3] = *hapthexa_msgs__srv__GetLegArgs_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
