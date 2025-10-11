// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_control_pkg:msg/Sphere.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_control_pkg/msg/detail/sphere__rosidl_typesupport_introspection_c.h"
#include "turtle_control_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_control_pkg/msg/detail/sphere__functions.h"
#include "turtle_control_pkg/msg/detail/sphere__struct.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/point.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_control_pkg__msg__Sphere__init(message_memory);
}

void turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_fini_function(void * message_memory)
{
  turtle_control_pkg__msg__Sphere__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_member_array[2] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_control_pkg__msg__Sphere, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_control_pkg__msg__Sphere, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_members = {
  "turtle_control_pkg__msg",  // message namespace
  "Sphere",  // message name
  2,  // number of fields
  sizeof(turtle_control_pkg__msg__Sphere),
  false,  // has_any_key_member_
  turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_member_array,  // message members
  turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_init_function,  // function to initialize message memory (memory has to be allocated)
  turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_type_support_handle = {
  0,
  &turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_members,
  get_message_typesupport_handle_function,
  &turtle_control_pkg__msg__Sphere__get_type_hash,
  &turtle_control_pkg__msg__Sphere__get_type_description,
  &turtle_control_pkg__msg__Sphere__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_control_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_control_pkg, msg, Sphere)() {
  turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_type_support_handle.typesupport_identifier) {
    turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtle_control_pkg__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
