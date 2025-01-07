// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hapthexa_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

#include "hapthexa_msgs/msg/detail/attitude__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__msg__Attitude__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0xda, 0x05, 0x9f, 0x4d, 0x8d, 0x01, 0x3d,
      0x3b, 0xe1, 0xf6, 0x5b, 0xbb, 0x87, 0xba, 0xd2,
      0x26, 0x04, 0xfb, 0x2a, 0x7b, 0x55, 0x40, 0xe6,
      0x0c, 0xea, 0x95, 0x46, 0x05, 0x9a, 0xa8, 0xe0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hapthexa_msgs__msg__Attitude__TYPE_NAME[] = "hapthexa_msgs/msg/Attitude";

// Define type names, field names, and default values
static char hapthexa_msgs__msg__Attitude__FIELD_NAME__roll[] = "roll";
static char hapthexa_msgs__msg__Attitude__FIELD_NAME__pitch[] = "pitch";
static char hapthexa_msgs__msg__Attitude__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__msg__Attitude__FIELDS[] = {
  {
    {hapthexa_msgs__msg__Attitude__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__Attitude__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hapthexa_msgs__msg__Attitude__FIELD_NAME__yaw, 3, 3},
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
hapthexa_msgs__msg__Attitude__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__msg__Attitude__TYPE_NAME, 26, 26},
      {hapthexa_msgs__msg__Attitude__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 roll\n"
  "float64 pitch\n"
  "float64 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__msg__Attitude__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__msg__Attitude__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__msg__Attitude__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__msg__Attitude__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
