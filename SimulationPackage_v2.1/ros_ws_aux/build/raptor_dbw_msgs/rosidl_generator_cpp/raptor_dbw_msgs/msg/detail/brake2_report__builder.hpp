// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/Brake2Report.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/brake2_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_Brake2Report_speed_set_point
{
public:
  explicit Init_Brake2Report_speed_set_point(::raptor_dbw_msgs::msg::Brake2Report & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::Brake2Report speed_set_point(::raptor_dbw_msgs::msg::Brake2Report::_speed_set_point_type arg)
  {
    msg_.speed_set_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Brake2Report msg_;
};

class Init_Brake2Report_estimated_road_slope
{
public:
  explicit Init_Brake2Report_estimated_road_slope(::raptor_dbw_msgs::msg::Brake2Report & msg)
  : msg_(msg)
  {}
  Init_Brake2Report_speed_set_point estimated_road_slope(::raptor_dbw_msgs::msg::Brake2Report::_estimated_road_slope_type arg)
  {
    msg_.estimated_road_slope = std::move(arg);
    return Init_Brake2Report_speed_set_point(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Brake2Report msg_;
};

class Init_Brake2Report_rolling_counter
{
public:
  explicit Init_Brake2Report_rolling_counter(::raptor_dbw_msgs::msg::Brake2Report & msg)
  : msg_(msg)
  {}
  Init_Brake2Report_estimated_road_slope rolling_counter(::raptor_dbw_msgs::msg::Brake2Report::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_Brake2Report_estimated_road_slope(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Brake2Report msg_;
};

class Init_Brake2Report_rear_brake_pressure
{
public:
  explicit Init_Brake2Report_rear_brake_pressure(::raptor_dbw_msgs::msg::Brake2Report & msg)
  : msg_(msg)
  {}
  Init_Brake2Report_rolling_counter rear_brake_pressure(::raptor_dbw_msgs::msg::Brake2Report::_rear_brake_pressure_type arg)
  {
    msg_.rear_brake_pressure = std::move(arg);
    return Init_Brake2Report_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Brake2Report msg_;
};

class Init_Brake2Report_front_brake_pressure
{
public:
  explicit Init_Brake2Report_front_brake_pressure(::raptor_dbw_msgs::msg::Brake2Report & msg)
  : msg_(msg)
  {}
  Init_Brake2Report_rear_brake_pressure front_brake_pressure(::raptor_dbw_msgs::msg::Brake2Report::_front_brake_pressure_type arg)
  {
    msg_.front_brake_pressure = std::move(arg);
    return Init_Brake2Report_rear_brake_pressure(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Brake2Report msg_;
};

class Init_Brake2Report_header
{
public:
  Init_Brake2Report_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Brake2Report_front_brake_pressure header(::raptor_dbw_msgs::msg::Brake2Report::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Brake2Report_front_brake_pressure(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::Brake2Report msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::Brake2Report>()
{
  return raptor_dbw_msgs::msg::builder::Init_Brake2Report_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__BUILDER_HPP_
