// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hapthexa_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice

#include "hapthexa_msgs/msg/detail/leg_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__msg__LegPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0x5c, 0x73, 0x22, 0xd7, 0x8b, 0x8d, 0x3a,
      0xea, 0x2a, 0x7b, 0x41, 0xc4, 0x40, 0x6a, 0x51,
      0x86, 0xe1, 0xba, 0xe6, 0x61, 0x51, 0x25, 0xb1,
      0x03, 0xcf, 0xc9, 0x8c, 0x37, 0x8f, 0xb3, 0xf0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hapthexa_msgs__msg__LegPosition__TYPE_NAME[] = "hapthexa_msgs/msg/LegPosition";

// Define type names, field names, and default values
static char hapthexa_msgs__msg__LegPosition__FIELD_NAME__x[] = "x";
static char hapthexa_msgs__msg__LegPosition__FIELD_NAME__y[] = "y";
static char hapthexa_msgs__msg__LegPosition__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__msg__LegPosition__FIELDS[] = {
  {
    {hapthexa_msgs__msg__LegPosition__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__LegPosition__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__LegPosition__FIELD_NAME__z, 1, 1},
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
hapthexa_msgs__msg__LegPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__msg__LegPosition__TYPE_NAME, 29, 29},
      {hapthexa_msgs__msg__LegPosition__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__msg__LegPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__msg__LegPosition__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__msg__LegPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__msg__LegPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
