// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/surround_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_SurroundReport_parking_sonar_data_valid
{
public:
  explicit Init_SurroundReport_parking_sonar_data_valid(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::SurroundReport parking_sonar_data_valid(::raptor_dbw_msgs::msg::SurroundReport::_parking_sonar_data_valid_type arg)
  {
    msg_.parking_sonar_data_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_front_radar_distance_valid
{
public:
  explicit Init_SurroundReport_front_radar_distance_valid(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_parking_sonar_data_valid front_radar_distance_valid(::raptor_dbw_msgs::msg::SurroundReport::_front_radar_distance_valid_type arg)
  {
    msg_.front_radar_distance_valid = std::move(arg);
    return Init_SurroundReport_parking_sonar_data_valid(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_front_center
{
public:
  explicit Init_SurroundReport_front_center(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_front_radar_distance_valid front_center(::raptor_dbw_msgs::msg::SurroundReport::_front_center_type arg)
  {
    msg_.front_center = std::move(arg);
    return Init_SurroundReport_front_radar_distance_valid(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_front_left
{
public:
  explicit Init_SurroundReport_front_left(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_front_center front_left(::raptor_dbw_msgs::msg::SurroundReport::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_SurroundReport_front_center(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_front_right
{
public:
  explicit Init_SurroundReport_front_right(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_front_left front_right(::raptor_dbw_msgs::msg::SurroundReport::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_SurroundReport_front_left(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_rear_center
{
public:
  explicit Init_SurroundReport_rear_center(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_front_right rear_center(::raptor_dbw_msgs::msg::SurroundReport::_rear_center_type arg)
  {
    msg_.rear_center = std::move(arg);
    return Init_SurroundReport_front_right(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_rear_left
{
public:
  explicit Init_SurroundReport_rear_left(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_rear_center rear_left(::raptor_dbw_msgs::msg::SurroundReport::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_SurroundReport_rear_center(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_rear_right
{
public:
  explicit Init_SurroundReport_rear_right(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_rear_left rear_right(::raptor_dbw_msgs::msg::SurroundReport::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return Init_SurroundReport_rear_left(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_rear_radar_object_distance
{
public:
  explicit Init_SurroundReport_rear_radar_object_distance(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_rear_right rear_radar_object_distance(::raptor_dbw_msgs::msg::SurroundReport::_rear_radar_object_distance_type arg)
  {
    msg_.rear_radar_object_distance = std::move(arg);
    return Init_SurroundReport_rear_right(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_front_radar_object_distance
{
public:
  explicit Init_SurroundReport_front_radar_object_distance(::raptor_dbw_msgs::msg::SurroundReport & msg)
  : msg_(msg)
  {}
  Init_SurroundReport_rear_radar_object_distance front_radar_object_distance(::raptor_dbw_msgs::msg::SurroundReport::_front_radar_object_distance_type arg)
  {
    msg_.front_radar_object_distance = std::move(arg);
    return Init_SurroundReport_rear_radar_object_distance(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

class Init_SurroundReport_header
{
public:
  Init_SurroundReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SurroundReport_front_radar_object_distance header(::raptor_dbw_msgs::msg::SurroundReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SurroundReport_front_radar_object_distance(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::SurroundReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::SurroundReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_SurroundReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__BUILDER_HPP_
