// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hapthexa_msgs:srv/StopLeg.idl
// generated code does not contain a copyright notice

#include "hapthexa_msgs/srv/detail/stop_leg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__StopLeg__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x12, 0xc1, 0xd9, 0x44, 0xcb, 0x06, 0xa5,
      0xed, 0xdb, 0x13, 0x6e, 0xbf, 0x7a, 0x60, 0x9c,
      0x2d, 0x48, 0x9e, 0xaf, 0x8a, 0xfc, 0xcf, 0x1c,
      0x35, 0x71, 0xe2, 0x18, 0x54, 0x0c, 0xd7, 0x66,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__StopLeg_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x4f, 0x39, 0xb4, 0x0e, 0xb7, 0x54, 0xb9,
      0xc0, 0x62, 0xd6, 0xf0, 0x09, 0xee, 0x8f, 0x6b,
      0xa0, 0xd9, 0x53, 0xaa, 0xf5, 0x14, 0x30, 0xd1,
      0x40, 0x59, 0xb1, 0xce, 0x67, 0xd0, 0xb5, 0x20,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__StopLeg_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x23, 0xc7, 0xfe, 0x8b, 0x79, 0x12, 0xb3,
      0x3f, 0xc5, 0x9f, 0x1b, 0xbe, 0x6d, 0x24, 0x3b,
      0x1a, 0x57, 0xfe, 0xa8, 0x9f, 0xd6, 0xbc, 0x3a,
      0x17, 0x3a, 0xdb, 0x4f, 0x8f, 0x8c, 0x37, 0xac,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__srv__StopLeg_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0x62, 0xd4, 0x5e, 0xa0, 0x45, 0xb9, 0xdd,
      0x32, 0x6c, 0x31, 0x36, 0xf7, 0xa5, 0x0d, 0xf2,
      0x87, 0x15, 0x1c, 0xde, 0x6b, 0xc2, 0x1e, 0x8a,
      0xff, 0xc9, 0xdb, 0xfa, 0xb4, 0x90, 0x03, 0xc9,
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

static char hapthexa_msgs__srv__StopLeg__TYPE_NAME[] = "hapthexa_msgs/srv/StopLeg";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char hapthexa_msgs__srv__StopLeg_Event__TYPE_NAME[] = "hapthexa_msgs/srv/StopLeg_Event";
static char hapthexa_msgs__srv__StopLeg_Request__TYPE_NAME[] = "hapthexa_msgs/srv/StopLeg_Request";
static char hapthexa_msgs__srv__StopLeg_Response__TYPE_NAME[] = "hapthexa_msgs/srv/StopLeg_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char hapthexa_msgs__srv__StopLeg__FIELD_NAME__request_message[] = "request_message";
static char hapthexa_msgs__srv__StopLeg__FIELD_NAME__response_message[] = "response_message";
static char hapthexa_msgs__srv__StopLeg__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__StopLeg__FIELDS[] = {
  {
    {hapthexa_msgs__srv__StopLeg__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__StopLeg_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__StopLeg_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hapthexa_msgs__srv__StopLeg_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hapthexa_msgs__srv__StopLeg__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__srv__StopLeg__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__StopLeg__TYPE_NAME, 25, 25},
      {hapthexa_msgs__srv__StopLeg__FIELDS, 3, 3},
    },
    {hapthexa_msgs__srv__StopLeg__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = hapthexa_msgs__srv__StopLeg_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hapthexa_msgs__srv__StopLeg_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = hapthexa_msgs__srv__StopLeg_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__StopLeg_Request__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__StopLeg_Request__FIELDS[] = {
  {
    {hapthexa_msgs__srv__StopLeg_Request__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__srv__StopLeg_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__StopLeg_Request__TYPE_NAME, 33, 33},
      {hapthexa_msgs__srv__StopLeg_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__StopLeg_Response__FIELD_NAME__x[] = "x";
static char hapthexa_msgs__srv__StopLeg_Response__FIELD_NAME__y[] = "y";
static char hapthexa_msgs__srv__StopLeg_Response__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__StopLeg_Response__FIELDS[] = {
  {
    {hapthexa_msgs__srv__StopLeg_Response__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Response__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Response__FIELD_NAME__z, 1, 1},
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
hapthexa_msgs__srv__StopLeg_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__StopLeg_Response__TYPE_NAME, 34, 34},
      {hapthexa_msgs__srv__StopLeg_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hapthexa_msgs__srv__StopLeg_Event__FIELD_NAME__info[] = "info";
static char hapthexa_msgs__srv__StopLeg_Event__FIELD_NAME__request[] = "request";
static char hapthexa_msgs__srv__StopLeg_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__srv__StopLeg_Event__FIELDS[] = {
  {
    {hapthexa_msgs__srv__StopLeg_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hapthexa_msgs__srv__StopLeg_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hapthexa_msgs__srv__StopLeg_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hapthexa_msgs__srv__StopLeg_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__srv__StopLeg_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__srv__StopLeg_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__srv__StopLeg_Event__TYPE_NAME, 31, 31},
      {hapthexa_msgs__srv__StopLeg_Event__FIELDS, 3, 3},
    },
    {hapthexa_msgs__srv__StopLeg_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = hapthexa_msgs__srv__StopLeg_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hapthexa_msgs__srv__StopLeg_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num\n"
  "\n"
  "---\n"
  "\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__StopLeg__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__StopLeg__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__StopLeg_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__StopLeg_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__StopLeg_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__StopLeg_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__srv__StopLeg_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__srv__StopLeg_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__StopLeg__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__StopLeg__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hapthexa_msgs__srv__StopLeg_Event__get_individual_type_description_source(NULL);
    sources[3] = *hapthexa_msgs__srv__StopLeg_Request__get_individual_type_description_source(NULL);
    sources[4] = *hapthexa_msgs__srv__StopLeg_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__StopLeg_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__StopLeg_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__StopLeg_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__StopLeg_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__srv__StopLeg_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__srv__StopLeg_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hapthexa_msgs__srv__StopLeg_Request__get_individual_type_description_source(NULL);
    sources[3] = *hapthexa_msgs__srv__StopLeg_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
