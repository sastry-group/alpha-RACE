// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autonoma_msgs:msg/GroundTruthArray.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__BUILDER_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autonoma_msgs/msg/detail/ground_truth_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autonoma_msgs
{

namespace msg
{

namespace builder
{

class Init_GroundTruthArray_vehicles
{
public:
  explicit Init_GroundTruthArray_vehicles(::autonoma_msgs::msg::GroundTruthArray & msg)
  : msg_(msg)
  {}
  ::autonoma_msgs::msg::GroundTruthArray vehicles(::autonoma_msgs::msg::GroundTruthArray::_vehicles_type arg)
  {
    msg_.vehicles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruthArray msg_;
};

class Init_GroundTruthArray_header
{
public:
  Init_GroundTruthArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroundTruthArray_vehicles header(::autonoma_msgs::msg::GroundTruthArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GroundTruthArray_vehicles(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruthArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autonoma_msgs::msg::GroundTruthArray>()
{
  return autonoma_msgs::msg::builder::Init_GroundTruthArray_header();
}

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__BUILDER_HPP_
