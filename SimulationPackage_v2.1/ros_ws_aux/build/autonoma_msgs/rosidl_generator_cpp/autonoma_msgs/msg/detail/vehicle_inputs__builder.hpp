// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autonoma_msgs:msg/VehicleInputs.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__BUILDER_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autonoma_msgs/msg/detail/vehicle_inputs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autonoma_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleInputs_gear_cmd
{
public:
  explicit Init_VehicleInputs_gear_cmd(::autonoma_msgs::msg::VehicleInputs & msg)
  : msg_(msg)
  {}
  ::autonoma_msgs::msg::VehicleInputs gear_cmd(::autonoma_msgs::msg::VehicleInputs::_gear_cmd_type arg)
  {
    msg_.gear_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleInputs msg_;
};

class Init_VehicleInputs_steering_cmd_count
{
public:
  explicit Init_VehicleInputs_steering_cmd_count(::autonoma_msgs::msg::VehicleInputs & msg)
  : msg_(msg)
  {}
  Init_VehicleInputs_gear_cmd steering_cmd_count(::autonoma_msgs::msg::VehicleInputs::_steering_cmd_count_type arg)
  {
    msg_.steering_cmd_count = std::move(arg);
    return Init_VehicleInputs_gear_cmd(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleInputs msg_;
};

class Init_VehicleInputs_steering_cmd
{
public:
  explicit Init_VehicleInputs_steering_cmd(::autonoma_msgs::msg::VehicleInputs & msg)
  : msg_(msg)
  {}
  Init_VehicleInputs_steering_cmd_count steering_cmd(::autonoma_msgs::msg::VehicleInputs::_steering_cmd_type arg)
  {
    msg_.steering_cmd = std::move(arg);
    return Init_VehicleInputs_steering_cmd_count(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleInputs msg_;
};

class Init_VehicleInputs_brake_cmd_count
{
public:
  explicit Init_VehicleInputs_brake_cmd_count(::autonoma_msgs::msg::VehicleInputs & msg)
  : msg_(msg)
  {}
  Init_VehicleInputs_steering_cmd brake_cmd_count(::autonoma_msgs::msg::VehicleInputs::_brake_cmd_count_type arg)
  {
    msg_.brake_cmd_count = std::move(arg);
    return Init_VehicleInputs_steering_cmd(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleInputs msg_;
};

class Init_VehicleInputs_brake_cmd
{
public:
  explicit Init_VehicleInputs_brake_cmd(::autonoma_msgs::msg::VehicleInputs & msg)
  : msg_(msg)
  {}
  Init_VehicleInputs_brake_cmd_count brake_cmd(::autonoma_msgs::msg::VehicleInputs::_brake_cmd_type arg)
  {
    msg_.brake_cmd = std::move(arg);
    return Init_VehicleInputs_brake_cmd_count(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleInputs msg_;
};

class Init_VehicleInputs_throttle_cmd_count
{
public:
  explicit Init_VehicleInputs_throttle_cmd_count(::autonoma_msgs::msg::VehicleInputs & msg)
  : msg_(msg)
  {}
  Init_VehicleInputs_brake_cmd throttle_cmd_count(::autonoma_msgs::msg::VehicleInputs::_throttle_cmd_count_type arg)
  {
    msg_.throttle_cmd_count = std::move(arg);
    return Init_VehicleInputs_brake_cmd(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleInputs msg_;
};

class Init_VehicleInputs_throttle_cmd
{
public:
  explicit Init_VehicleInputs_throttle_cmd(::autonoma_msgs::msg::VehicleInputs & msg)
  : msg_(msg)
  {}
  Init_VehicleInputs_throttle_cmd_count throttle_cmd(::autonoma_msgs::msg::VehicleInputs::_throttle_cmd_type arg)
  {
    msg_.throttle_cmd = std::move(arg);
    return Init_VehicleInputs_throttle_cmd_count(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleInputs msg_;
};

class Init_VehicleInputs_header
{
public:
  Init_VehicleInputs_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleInputs_throttle_cmd header(::autonoma_msgs::msg::VehicleInputs::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleInputs_throttle_cmd(msg_);
  }

private:
  ::autonoma_msgs::msg::VehicleInputs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autonoma_msgs::msg::VehicleInputs>()
{
  return autonoma_msgs::msg::builder::Init_VehicleInputs_header();
}

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__BUILDER_HPP_
