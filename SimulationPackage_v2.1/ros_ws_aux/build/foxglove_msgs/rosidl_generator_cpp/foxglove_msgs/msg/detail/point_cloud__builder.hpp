// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloud_data
{
public:
  explicit Init_PointCloud_data(::foxglove_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::PointCloud data(::foxglove_msgs::msg::PointCloud::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_fields
{
public:
  explicit Init_PointCloud_fields(::foxglove_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_data fields(::foxglove_msgs::msg::PointCloud::_fields_type arg)
  {
    msg_.fields = std::move(arg);
    return Init_PointCloud_data(msg_);
  }

private:
  ::foxglove_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_point_stride
{
public:
  explicit Init_PointCloud_point_stride(::foxglove_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_fields point_stride(::foxglove_msgs::msg::PointCloud::_point_stride_type arg)
  {
    msg_.point_stride = std::move(arg);
    return Init_PointCloud_fields(msg_);
  }

private:
  ::foxglove_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_pose
{
public:
  explicit Init_PointCloud_pose(::foxglove_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_point_stride pose(::foxglove_msgs::msg::PointCloud::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PointCloud_point_stride(msg_);
  }

private:
  ::foxglove_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_frame_id
{
public:
  explicit Init_PointCloud_frame_id(::foxglove_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_pose frame_id(::foxglove_msgs::msg::PointCloud::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_PointCloud_pose(msg_);
  }

private:
  ::foxglove_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_timestamp
{
public:
  Init_PointCloud_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloud_frame_id timestamp(::foxglove_msgs::msg::PointCloud::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PointCloud_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::PointCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::PointCloud>()
{
  return foxglove_msgs::msg::builder::Init_PointCloud_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
