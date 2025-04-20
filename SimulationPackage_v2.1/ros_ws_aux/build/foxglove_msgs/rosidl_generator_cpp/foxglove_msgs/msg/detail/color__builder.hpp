// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__COLOR__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_Color_a
{
public:
  explicit Init_Color_a(::foxglove_msgs::msg::Color & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::Color a(::foxglove_msgs::msg::Color::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::Color msg_;
};

class Init_Color_b
{
public:
  explicit Init_Color_b(::foxglove_msgs::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_a b(::foxglove_msgs::msg::Color::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Color_a(msg_);
  }

private:
  ::foxglove_msgs::msg::Color msg_;
};

class Init_Color_g
{
public:
  explicit Init_Color_g(::foxglove_msgs::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_b g(::foxglove_msgs::msg::Color::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Color_b(msg_);
  }

private:
  ::foxglove_msgs::msg::Color msg_;
};

class Init_Color_r
{
public:
  Init_Color_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Color_g r(::foxglove_msgs::msg::Color::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Color_g(msg_);
  }

private:
  ::foxglove_msgs::msg::Color msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::Color>()
{
  return foxglove_msgs::msg::builder::Init_Color_r();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__COLOR__BUILDER_HPP_
