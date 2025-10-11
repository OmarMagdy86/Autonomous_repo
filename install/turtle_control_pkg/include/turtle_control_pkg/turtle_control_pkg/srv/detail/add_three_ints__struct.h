// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_control_pkg:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_control_pkg/srv/add_three_ints.h"


#ifndef TURTLE_CONTROL_PKG__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define TURTLE_CONTROL_PKG__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package turtle_control_pkg.
typedef struct turtle_control_pkg__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} turtle_control_pkg__srv__AddThreeInts_Request;

// Struct for a sequence of turtle_control_pkg__srv__AddThreeInts_Request.
typedef struct turtle_control_pkg__srv__AddThreeInts_Request__Sequence
{
  turtle_control_pkg__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_control_pkg__srv__AddThreeInts_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package turtle_control_pkg.
typedef struct turtle_control_pkg__srv__AddThreeInts_Response
{
  int64_t sum;
} turtle_control_pkg__srv__AddThreeInts_Response;

// Struct for a sequence of turtle_control_pkg__srv__AddThreeInts_Response.
typedef struct turtle_control_pkg__srv__AddThreeInts_Response__Sequence
{
  turtle_control_pkg__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_control_pkg__srv__AddThreeInts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtle_control_pkg__srv__AddThreeInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtle_control_pkg__srv__AddThreeInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddThreeInts in the package turtle_control_pkg.
typedef struct turtle_control_pkg__srv__AddThreeInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtle_control_pkg__srv__AddThreeInts_Request__Sequence request;
  turtle_control_pkg__srv__AddThreeInts_Response__Sequence response;
} turtle_control_pkg__srv__AddThreeInts_Event;

// Struct for a sequence of turtle_control_pkg__srv__AddThreeInts_Event.
typedef struct turtle_control_pkg__srv__AddThreeInts_Event__Sequence
{
  turtle_control_pkg__srv__AddThreeInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_control_pkg__srv__AddThreeInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CONTROL_PKG__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
