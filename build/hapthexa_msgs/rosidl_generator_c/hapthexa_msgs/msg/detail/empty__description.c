// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hapthexa_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

#include "hapthexa_msgs/msg/detail/empty__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hapthexa_msgs
const rosidl_type_hash_t *
hapthexa_msgs__msg__Empty__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x6f, 0xab, 0x78, 0x5c, 0xef, 0xd1, 0xbd,
      0x2e, 0x44, 0xcf, 0x0b, 0xd4, 0x4d, 0xd7, 0x15,
      0x0a, 0xa9, 0x14, 0x97, 0x46, 0x46, 0xd3, 0x0d,
      0x48, 0x8c, 0x8f, 0x92, 0x88, 0x18, 0x98, 0xd1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hapthexa_msgs__msg__Empty__TYPE_NAME[] = "hapthexa_msgs/msg/Empty";

// Define type names, field names, and default values
static char hapthexa_msgs__msg__Empty__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field hapthexa_msgs__msg__Empty__FIELDS[] = {
  {
    {hapthexa_msgs__msg__Empty__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
hapthexa_msgs__msg__Empty__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hapthexa_msgs__msg__Empty__TYPE_NAME, 23, 23},
      {hapthexa_msgs__msg__Empty__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}


static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hapthexa_msgs__msg__Empty__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hapthexa_msgs__msg__Empty__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hapthexa_msgs__msg__Empty__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hapthexa_msgs__msg__Empty__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
