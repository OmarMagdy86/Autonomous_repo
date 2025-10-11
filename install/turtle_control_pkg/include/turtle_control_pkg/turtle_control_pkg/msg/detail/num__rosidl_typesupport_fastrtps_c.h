// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from turtle_control_pkg:msg/Num.idl
// generated code does not contain a copyright notice
#ifndef TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtle_control_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_control_pkg/msg/detail/num__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_control_pkg
bool cdr_serialize_turtle_control_pkg__msg__Num(
  const turtle_control_pkg__msg__Num * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_control_pkg
bool cdr_deserialize_turtle_control_pkg__msg__Num(
  eprosima::fastcdr::Cdr &,
  turtle_control_pkg__msg__Num * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_control_pkg
size_t get_serialized_size_turtle_control_pkg__msg__Num(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_control_pkg
size_t max_serialized_size_turtle_control_pkg__msg__Num(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_control_pkg
bool cdr_serialize_key_turtle_control_pkg__msg__Num(
  const turtle_control_pkg__msg__Num * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_control_pkg
size_t get_serialized_size_key_turtle_control_pkg__msg__Num(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_control_pkg
size_t max_serialized_size_key_turtle_control_pkg__msg__Num(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_control_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_control_pkg, msg, Num)();

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
