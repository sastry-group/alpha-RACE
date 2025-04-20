// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/LaserScan.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__LASER_SCAN__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__LASER_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/laser_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_LaserScan_intensities
{
public:
  explicit Init_LaserScan_intensities(::foxglove_msgs::msg::LaserScan & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::LaserScan intensities(::foxglove_msgs::msg::LaserScan::_intensities_type arg)
  {
    msg_.intensities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::LaserScan msg_;
};

class Init_LaserScan_ranges
{
public:
  explicit Init_LaserScan_ranges(::foxglove_msgs::msg::LaserScan & msg)
  : msg_(msg)
  {}
  Init_LaserScan_intensities ranges(::foxglove_msgs::msg::LaserScan::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_LaserScan_intensities(msg_);
  }

private:
  ::foxglove_msgs::msg::LaserScan msg_;
};

class Init_LaserScan_end_angle
{
public:
  explicit Init_LaserScan_end_angle(::foxglove_msgs::msg::LaserScan & msg)
  : msg_(msg)
  {}
  Init_LaserScan_ranges end_angle(::foxglove_msgs::msg::LaserScan::_end_angle_type arg)
  {
    msg_.end_angle = std::move(arg);
    return Init_LaserScan_ranges(msg_);
  }

private:
  ::foxglove_msgs::msg::LaserScan msg_;
};

class Init_LaserScan_start_angle
{
public:
  explicit Init_LaserScan_start_angle(::foxglove_msgs::msg::LaserScan & msg)
  : msg_(msg)
  {}
  Init_LaserScan_end_angle start_angle(::foxglove_msgs::msg::LaserScan::_start_angle_type arg)
  {
    msg_.start_angle = std::move(arg);
    return Init_LaserScan_end_angle(msg_);
  }

private:
  ::foxglove_msgs::msg::LaserScan msg_;
};

class Init_LaserScan_pose
{
public:
  explicit Init_LaserScan_pose(::foxglove_msgs::msg::LaserScan & msg)
  : msg_(msg)
  {}
  Init_LaserScan_start_angle pose(::foxglove_msgs::msg::LaserScan::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LaserScan_start_angle(msg_);
  }

private:
  ::foxglove_msgs::msg::LaserScan msg_;
};

class Init_LaserScan_frame_id
{
public:
  explicit Init_LaserScan_frame_id(::foxglove_msgs::msg::LaserScan & msg)
  : msg_(msg)
  {}
  Init_LaserScan_pose frame_id(::foxglove_msgs::msg::LaserScan::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_LaserScan_pose(msg_);
  }

private:
  ::foxglove_msgs::msg::LaserScan msg_;
};

class Init_LaserScan_timestamp
{
public:
  Init_LaserScan_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaserScan_frame_id timestamp(::foxglove_msgs::msg::LaserScan::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LaserScan_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::LaserScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::LaserScan>()
{
  return foxglove_msgs::msg::builder::Init_LaserScan_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__LASER_SCAN__BUILDER_HPP_
