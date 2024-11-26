// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
// generated code does not contain a copyright notice

#include "hapthexa_msgs/msg/detail/force_sensor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__msg__ForceSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x6c, 0x20, 0x34, 0x84, 0x54, 0xb4, 0xcc,
      0x3e, 0xa3, 0x19, 0x17, 0x28, 0x90, 0xcf, 0x71,
      0x9c, 0xe4, 0xd3, 0xb4, 0x5d, 0x7c, 0x42, 0xd4,
      0x6d, 0x77, 0x91, 0x27, 0xae, 0xaa, 0xe9, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hapthexa_msgs__msg__ForceSensor__TYPE_NAME[] = "hapthexa_msgs/msg/ForceSensor";

// Define type names, field names, and default values
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__loadcell1[] = "loadcell1";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__loadcell2[] = "loadcell2";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__piezo[] = "piezo";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__radial_direction[] = "radial_direction";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__radial_magnitude[] = "radial_magnitude";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__loadcell1_raw[] = "loadcell1_raw";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__loadcell2_raw[] = "loadcell2_raw";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__piezo_raw[] = "piezo_raw";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__x[] = "x";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__y[] = "y";
static char hapthexa_msgs__msg__ForceSensor__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__msg__ForceSensor__FIELDS[] = {
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__loadcell1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__loadcell2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__piezo, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__radial_direction, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__radial_magnitude, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__loadcell1_raw, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__loadcell2_raw, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__piezo_raw, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__ForceSensor__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hapthexa_msgs__msg__ForceSensor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__msg__ForceSensor__TYPE_NAME, 29, 29},
      {hapthexa_msgs__msg__ForceSensor__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 loadcell1\n"
  "float64 loadcell2\n"
  "float64 piezo\n"
  "\n"
  "float64 radial_direction\n"
  "float64 radial_magnitude\n"
  "\n"
  "int64 loadcell1_raw\n"
  "int64 loadcell2_raw\n"
  "int64 piezo_raw\n"
  "\n"
  "bool x\n"
  "bool y\n"
  "bool z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__msg__ForceSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__msg__ForceSensor__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 179, 179},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__msg__ForceSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__msg__ForceSensor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
