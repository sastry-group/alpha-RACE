// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/SonarArcNum.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__SONAR_ARC_NUM__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__SONAR_ARC_NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/sonar_arc_num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_SonarArcNum_status
{
public:
  Init_SonarArcNum_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raptor_dbw_msgs::msg::SonarArcNum status(::raptor_dbw_msgs::msg::SonarArcNum::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SonarArcNum msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::SonarArcNum>()
{
  return raptor_dbw_msgs::msg::builder::Init_SonarArcNum_status();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__SONAR_ARC_NUM__BUILDER_HPP_
