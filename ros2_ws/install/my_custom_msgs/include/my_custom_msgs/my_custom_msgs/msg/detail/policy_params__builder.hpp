// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_msgs:msg/PolicyParams.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__BUILDER_HPP_
#define MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_msgs/msg/detail/policy_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_PolicyParams_blocking_factor
{
public:
  explicit Init_PolicyParams_blocking_factor(::my_custom_msgs::msg::PolicyParams & msg)
  : msg_(msg)
  {}
  ::my_custom_msgs::msg::PolicyParams blocking_factor(::my_custom_msgs::msg::PolicyParams::_blocking_factor_type arg)
  {
    msg_.blocking_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_msgs::msg::PolicyParams msg_;
};

class Init_PolicyParams_lookahead_factor
{
public:
  explicit Init_PolicyParams_lookahead_factor(::my_custom_msgs::msg::PolicyParams & msg)
  : msg_(msg)
  {}
  Init_PolicyParams_blocking_factor lookahead_factor(::my_custom_msgs::msg::PolicyParams::_lookahead_factor_type arg)
  {
    msg_.lookahead_factor = std::move(arg);
    return Init_PolicyParams_blocking_factor(msg_);
  }

private:
  ::my_custom_msgs::msg::PolicyParams msg_;
};

class Init_PolicyParams_speed_factor
{
public:
  explicit Init_PolicyParams_speed_factor(::my_custom_msgs::msg::PolicyParams & msg)
  : msg_(msg)
  {}
  Init_PolicyParams_lookahead_factor speed_factor(::my_custom_msgs::msg::PolicyParams::_speed_factor_type arg)
  {
    msg_.speed_factor = std::move(arg);
    return Init_PolicyParams_lookahead_factor(msg_);
  }

private:
  ::my_custom_msgs::msg::PolicyParams msg_;
};

class Init_PolicyParams_sf2
{
public:
  explicit Init_PolicyParams_sf2(::my_custom_msgs::msg::PolicyParams & msg)
  : msg_(msg)
  {}
  Init_PolicyParams_speed_factor sf2(::my_custom_msgs::msg::PolicyParams::_sf2_type arg)
  {
    msg_.sf2 = std::move(arg);
    return Init_PolicyParams_speed_factor(msg_);
  }

private:
  ::my_custom_msgs::msg::PolicyParams msg_;
};

class Init_PolicyParams_sf1
{
public:
  Init_PolicyParams_sf1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PolicyParams_sf2 sf1(::my_custom_msgs::msg::PolicyParams::_sf1_type arg)
  {
    msg_.sf1 = std::move(arg);
    return Init_PolicyParams_sf2(msg_);
  }

private:
  ::my_custom_msgs::msg::PolicyParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_msgs::msg::PolicyParams>()
{
  return my_custom_msgs::msg::builder::Init_PolicyParams_sf1();
}

}  // namespace my_custom_msgs

#endif  // MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__BUILDER_HPP_
