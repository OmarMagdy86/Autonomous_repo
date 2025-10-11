// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtle_control_pkg:msg/Num.idl
// generated code does not contain a copyright notice

#include "turtle_control_pkg/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtle_control_pkg
const rosidl_type_hash_t *
turtle_control_pkg__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xad, 0x89, 0x70, 0x77, 0x5a, 0x6e, 0x54,
      0x80, 0x45, 0x8b, 0x1a, 0x36, 0x45, 0x11, 0xc4,
      0x1d, 0x0a, 0x51, 0xfb, 0xaf, 0x8c, 0x29, 0x99,
      0x0b, 0x4b, 0xb7, 0xbd, 0xd8, 0x22, 0xbd, 0x43,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char turtle_control_pkg__msg__Num__TYPE_NAME[] = "turtle_control_pkg/msg/Num";

// Define type names, field names, and default values
static char turtle_control_pkg__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field turtle_control_pkg__msg__Num__FIELDS[] = {
  {
    {turtle_control_pkg__msg__Num__FIELD_NAME__num, 3, 3},
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
turtle_control_pkg__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_control_pkg__msg__Num__TYPE_NAME, 26, 26},
      {turtle_control_pkg__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtle_control_pkg__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_control_pkg__msg__Num__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 9, 9},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_control_pkg__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_control_pkg__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
