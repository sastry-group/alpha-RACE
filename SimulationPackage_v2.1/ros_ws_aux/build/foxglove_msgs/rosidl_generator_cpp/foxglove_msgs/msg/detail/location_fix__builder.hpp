// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/LocationFix.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__LOCATION_FIX__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__LOCATION_FIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/location_fix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_LocationFix_position_covariance_type
{
public:
  explicit Init_LocationFix_position_covariance_type(::foxglove_msgs::msg::LocationFix & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::LocationFix position_covariance_type(::foxglove_msgs::msg::LocationFix::_position_covariance_type_type arg)
  {
    msg_.position_covariance_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::LocationFix msg_;
};

class Init_LocationFix_position_covariance
{
public:
  explicit Init_LocationFix_position_covariance(::foxglove_msgs::msg::LocationFix & msg)
  : msg_(msg)
  {}
  Init_LocationFix_position_covariance_type position_covariance(::foxglove_msgs::msg::LocationFix::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_LocationFix_position_covariance_type(msg_);
  }

private:
  ::foxglove_msgs::msg::LocationFix msg_;
};

class Init_LocationFix_altitude
{
public:
  explicit Init_LocationFix_altitude(::foxglove_msgs::msg::LocationFix & msg)
  : msg_(msg)
  {}
  Init_LocationFix_position_covariance altitude(::foxglove_msgs::msg::LocationFix::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_LocationFix_position_covariance(msg_);
  }

private:
  ::foxglove_msgs::msg::LocationFix msg_;
};

class Init_LocationFix_longitude
{
public:
  explicit Init_LocationFix_longitude(::foxglove_msgs::msg::LocationFix & msg)
  : msg_(msg)
  {}
  Init_LocationFix_altitude longitude(::foxglove_msgs::msg::LocationFix::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_LocationFix_altitude(msg_);
  }

private:
  ::foxglove_msgs::msg::LocationFix msg_;
};

class Init_LocationFix_latitude
{
public:
  explicit Init_LocationFix_latitude(::foxglove_msgs::msg::LocationFix & msg)
  : msg_(msg)
  {}
  Init_LocationFix_longitude latitude(::foxglove_msgs::msg::LocationFix::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_LocationFix_longitude(msg_);
  }

private:
  ::foxglove_msgs::msg::LocationFix msg_;
};

class Init_LocationFix_frame_id
{
public:
  explicit Init_LocationFix_frame_id(::foxglove_msgs::msg::LocationFix & msg)
  : msg_(msg)
  {}
  Init_LocationFix_latitude frame_id(::foxglove_msgs::msg::LocationFix::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_LocationFix_latitude(msg_);
  }

private:
  ::foxglove_msgs::msg::LocationFix msg_;
};

class Init_LocationFix_timestamp
{
public:
  Init_LocationFix_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationFix_frame_id timestamp(::foxglove_msgs::msg::LocationFix::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LocationFix_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::LocationFix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::LocationFix>()
{
  return foxglove_msgs::msg::builder::Init_LocationFix_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__LOCATION_FIX__BUILDER_HPP_
