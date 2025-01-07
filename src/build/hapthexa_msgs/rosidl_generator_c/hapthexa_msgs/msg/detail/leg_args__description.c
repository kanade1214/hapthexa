// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hapthexa_msgs:msg/LegArgs.idl
// generated code does not contain a copyright notice

#include "hapthexa_msgs/msg/detail/leg_args__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__msg__LegArgs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x4a, 0xd0, 0x8c, 0x6d, 0xac, 0xd9, 0x78,
      0x99, 0xcb, 0x25, 0x49, 0xf4, 0xd1, 0x17, 0x1c,
      0xf9, 0x18, 0xae, 0xed, 0x28, 0x56, 0xa7, 0xc6,
      0x51, 0x1c, 0x7e, 0xfa, 0x2a, 0x05, 0x0d, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hapthexa_msgs__msg__LegArgs__TYPE_NAME[] = "hapthexa_msgs/msg/LegArgs";

// Define type names, field names, and default values
static char hapthexa_msgs__msg__LegArgs__FIELD_NAME__coxa_arg[] = "coxa_arg";
static char hapthexa_msgs__msg__LegArgs__FIELD_NAME__femur_arg[] = "femur_arg";
static char hapthexa_msgs__msg__LegArgs__FIELD_NAME__tibia_arg[] = "tibia_arg";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__msg__LegArgs__FIELDS[] = {
  {
    {hapthexa_msgs__msg__LegArgs__FIELD_NAME__coxa_arg, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__LegArgs__FIELD_NAME__femur_arg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__LegArgs__FIELD_NAME__tibia_arg, 9, 9},
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
hapthexa_msgs__msg__LegArgs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__msg__LegArgs__TYPE_NAME, 25, 25},
      {hapthexa_msgs__msg__LegArgs__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 coxa_arg\n"
  "float64 femur_arg\n"
  "float64 tibia_arg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__msg__LegArgs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__msg__LegArgs__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__msg__LegArgs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__msg__LegArgs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
