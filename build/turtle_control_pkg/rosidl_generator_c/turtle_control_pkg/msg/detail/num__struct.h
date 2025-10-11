// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_control_pkg:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_control_pkg/msg/num.h"


#ifndef TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__STRUCT_H_
#define TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Num in the package turtle_control_pkg.
typedef struct turtle_control_pkg__msg__Num
{
  int64_t num;
} turtle_control_pkg__msg__Num;

// Struct for a sequence of turtle_control_pkg__msg__Num.
typedef struct turtle_control_pkg__msg__Num__Sequence
{
  turtle_control_pkg__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_control_pkg__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__STRUCT_H_
