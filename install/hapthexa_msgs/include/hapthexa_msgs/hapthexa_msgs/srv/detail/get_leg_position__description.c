// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hapthexa_msgs:srv/GetLegPosition.idl
// generated code does not contain a copyright notice

#include "hapthexa_msgs/srv/detail/get_leg_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__GetLegPosition__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0xb0, 0x8d, 0x2d, 0x7f, 0x2b, 0xb1, 0xa7,
      0xca, 0xff, 0x7f, 0x95, 0x14, 0x9b, 0xfb, 0xaa,
      0xeb, 0xe4, 0xe3, 0x1b, 0x0c, 0x5f, 0xcf, 0xf9,
      0xf6, 0xb6, 0x4f, 0xd5, 0x30, 0x19, 0x02, 0xe9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__GetLegPosition_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x6b, 0x5e, 0x35, 0xb3, 0x97, 0xb7, 0x2c,
      0x8e, 0xad, 0x91, 0x73, 0xe9, 0x80, 0x23, 0x3b,
      0x4e, 0xa6, 0x3f, 0x17, 0x64, 0xef, 0x04, 0x40,
      0xb3, 0x69, 0x35, 0x9a, 0x50, 0x2d, 0xa1, 0x84,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__GetLegPosition_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x6f, 0x98, 0x14, 0x11, 0x25, 0xbd, 0x83,
      0xa4, 0x40, 0x48, 0xd7, 0x2f, 0xc6, 0xfb, 0x9b,
      0x8e, 0xe3, 0xfa, 0xb5, 0x74, 0x0a, 0xa6, 0x0d,
      0x96, 0x51, 0xe8, 0x28, 0xa1, 0x63, 0x8a, 0xd6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__GetLegPosition_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x19, 0x50, 0xcc, 0x7f, 0x31, 0x56, 0x41,
      0x37, 0x4d, 0xec, 0xb8, 0xc7, 0xf9, 0x35, 0x7e,
      0xc9, 0xed, 0x48, 0xe0, 0x80, 0xe4, 0x70, 0x8d,
      0x9d, 0x8e, 0x51, 0x39, 0x59, 0x6e, 0x8c, 0x95,
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

static char hapthexa_msgs__srv__GetLegPosition__TYPE_NAME[] = "hapthexa_msgs/srv/GetLegPosition";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char hapthexa_msgs__srv__GetLegPosition_Event__TYPE_NAME[] = "hapthexa_msgs/srv/GetLegPosition_Event";
static char hapthexa_msgs__srv__GetLegPosition_Request__TYPE_NAME[] = "hapthexa_msgs/srv/GetLegPosition_Request";
static char hapthexa_msgs__srv__GetLegPosition_Response__TYPE_NAME[] = "hapthexa_msgs/srv/GetLegPosition_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char hapthexa_msgs__srv__GetLegPosition__FIELD_NAME__request_message[] = "request_message";
static char hapthexa_msgs__srv__GetLegPosition__FIELD_NAME__response_message[] = "response_message";
static char hapthexa_msgs__srv__GetLegPosition__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__GetLegPosition__FIELDS[] = {
  {
    {hapthexa_msgs__srv__GetLegPosition__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__GetLegPosition_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__GetLegPosition_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__GetLegPosition_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hapthexa_msgs__srv__GetLegPosition__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__srv__GetLegPosition__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__GetLegPosition__TYPE_NAME, 32, 32},
      {hapthexa_msgs__srv__GetLegPosition__FIELDS, 3, 3},
    },
    {hapthexa_msgs__srv__GetLegPosition__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = hapthexa_msgs__srv__GetLegPosition_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hapthexa_msgs__srv__GetLegPosition_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = hapthexa_msgs__srv__GetLegPosition_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__GetLegPosition_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__GetLegPosition_Request__FIELDS[] = {
  {
    {hapthexa_msgs__srv__GetLegPosition_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
hapthexa_msgs__srv__GetLegPosition_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__GetLegPosition_Request__TYPE_NAME, 40, 40},
      {hapthexa_msgs__srv__GetLegPosition_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__GetLegPosition_Response__FIELD_NAME__x[] = "x";
static char hapthexa_msgs__srv__GetLegPosition_Response__FIELD_NAME__y[] = "y";
static char hapthexa_msgs__srv__GetLegPosition_Response__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__GetLegPosition_Response__FIELDS[] = {
  {
    {hapthexa_msgs__srv__GetLegPosition_Response__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Response__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Response__FIELD_NAME__z, 1, 1},
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
hapthexa_msgs__srv__GetLegPosition_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__GetLegPosition_Response__TYPE_NAME, 41, 41},
      {hapthexa_msgs__srv__GetLegPosition_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__GetLegPosition_Event__FIELD_NAME__info[] = "info";
static char hapthexa_msgs__srv__GetLegPosition_Event__FIELD_NAME__request[] = "request";
static char hapthexa_msgs__srv__GetLegPosition_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__GetLegPosition_Event__FIELDS[] = {
  {
    {hapthexa_msgs__srv__GetLegPosition_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hapthexa_msgs__srv__GetLegPosition_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hapthexa_msgs__srv__GetLegPosition_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hapthexa_msgs__srv__GetLegPosition_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__GetLegPosition_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__srv__GetLegPosition_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__GetLegPosition_Event__TYPE_NAME, 38, 38},
      {hapthexa_msgs__srv__GetLegPosition_Event__FIELDS, 3, 3},
    },
    {hapthexa_msgs__srv__GetLegPosition_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = hapthexa_msgs__srv__GetLegPosition_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hapthexa_msgs__srv__GetLegPosition_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__GetLegPosition__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__GetLegPosition__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__GetLegPosition_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__GetLegPosition_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__GetLegPosition_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__GetLegPosition_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__GetLegPosition_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__GetLegPosition_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__GetLegPosition__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__GetLegPosition__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hapthexa_msgs__srv__GetLegPosition_Event__get_individual_type_description_source(NULL);
    sources[3] = *hapthexa_msgs__srv__GetLegPosition_Request__get_individual_type_description_source(NULL);
    sources[4] = *hapthexa_msgs__srv__GetLegPosition_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__GetLegPosition_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__GetLegPosition_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__GetLegPosition_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__GetLegPosition_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__GetLegPosition_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__GetLegPosition_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hapthexa_msgs__srv__GetLegPosition_Request__get_individual_type_description_source(NULL);
    sources[3] = *hapthexa_msgs__srv__GetLegPosition_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
