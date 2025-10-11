// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_control_pkg:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_control_pkg/srv/add_three_ints.hpp"


#ifndef TURTLE_CONTROL_PKG__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define TURTLE_CONTROL_PKG__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_control_pkg/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_control_pkg
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::turtle_control_pkg::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::turtle_control_pkg::srv::AddThreeInts_Request c(::turtle_control_pkg::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_control_pkg::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::turtle_control_pkg::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::turtle_control_pkg::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::turtle_control_pkg::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::turtle_control_pkg::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::turtle_control_pkg::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_control_pkg::srv::AddThreeInts_Request>()
{
  return turtle_control_pkg::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace turtle_control_pkg


namespace turtle_control_pkg
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_control_pkg::srv::AddThreeInts_Response sum(::turtle_control_pkg::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_control_pkg::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_control_pkg::srv::AddThreeInts_Response>()
{
  return turtle_control_pkg::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace turtle_control_pkg


namespace turtle_control_pkg
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Event_response
{
public:
  explicit Init_AddThreeInts_Event_response(::turtle_control_pkg::srv::AddThreeInts_Event & msg)
  : msg_(msg)
  {}
  ::turtle_control_pkg::srv::AddThreeInts_Event response(::turtle_control_pkg::srv::AddThreeInts_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_control_pkg::srv::AddThreeInts_Event msg_;
};

class Init_AddThreeInts_Event_request
{
public:
  explicit Init_AddThreeInts_Event_request(::turtle_control_pkg::srv::AddThreeInts_Event & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Event_response request(::turtle_control_pkg::srv::AddThreeInts_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddThreeInts_Event_response(msg_);
  }

private:
  ::turtle_control_pkg::srv::AddThreeInts_Event msg_;
};

class Init_AddThreeInts_Event_info
{
public:
  Init_AddThreeInts_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Event_request info(::turtle_control_pkg::srv::AddThreeInts_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddThreeInts_Event_request(msg_);
  }

private:
  ::turtle_control_pkg::srv::AddThreeInts_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_control_pkg::srv::AddThreeInts_Event>()
{
  return turtle_control_pkg::srv::builder::Init_AddThreeInts_Event_info();
}

}  // namespace turtle_control_pkg

#endif  // TURTLE_CONTROL_PKG__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
