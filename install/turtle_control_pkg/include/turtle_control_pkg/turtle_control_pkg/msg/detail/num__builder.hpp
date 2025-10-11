// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_control_pkg:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_control_pkg/msg/num.hpp"


#ifndef TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__BUILDER_HPP_
#define TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_control_pkg/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_control_pkg
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_control_pkg::msg::Num num(::turtle_control_pkg::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_control_pkg::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_control_pkg::msg::Num>()
{
  return turtle_control_pkg::msg::builder::Init_Num_num();
}

}  // namespace turtle_control_pkg

#endif  // TURTLE_CONTROL_PKG__MSG__DETAIL__NUM__BUILDER_HPP_
