// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_control_pkg:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_control_pkg/msg/sphere.h"


#ifndef TURTLE_CONTROL_PKG__MSG__DETAIL__SPHERE__STRUCT_H_
#define TURTLE_CONTROL_PKG__MSG__DETAIL__SPHERE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Sphere in the package turtle_control_pkg.
typedef struct turtle_control_pkg__msg__Sphere
{
  geometry_msgs__msg__Point center;
  double radius;
} turtle_control_pkg__msg__Sphere;

// Struct for a sequence of turtle_control_pkg__msg__Sphere.
typedef struct turtle_control_pkg__msg__Sphere__Sequence
{
  turtle_control_pkg__msg__Sphere * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_control_pkg__msg__Sphere__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CONTROL_PKG__MSG__DETAIL__SPHERE__STRUCT_H_
