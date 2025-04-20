// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/Grid.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__GRID__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_Grid_data
{
public:
  explicit Init_Grid_data(::foxglove_msgs::msg::Grid & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::Grid data(::foxglove_msgs::msg::Grid::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

class Init_Grid_fields
{
public:
  explicit Init_Grid_fields(::foxglove_msgs::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_data fields(::foxglove_msgs::msg::Grid::_fields_type arg)
  {
    msg_.fields = std::move(arg);
    return Init_Grid_data(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

class Init_Grid_cell_stride
{
public:
  explicit Init_Grid_cell_stride(::foxglove_msgs::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_fields cell_stride(::foxglove_msgs::msg::Grid::_cell_stride_type arg)
  {
    msg_.cell_stride = std::move(arg);
    return Init_Grid_fields(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

class Init_Grid_row_stride
{
public:
  explicit Init_Grid_row_stride(::foxglove_msgs::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_cell_stride row_stride(::foxglove_msgs::msg::Grid::_row_stride_type arg)
  {
    msg_.row_stride = std::move(arg);
    return Init_Grid_cell_stride(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

class Init_Grid_cell_size
{
public:
  explicit Init_Grid_cell_size(::foxglove_msgs::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_row_stride cell_size(::foxglove_msgs::msg::Grid::_cell_size_type arg)
  {
    msg_.cell_size = std::move(arg);
    return Init_Grid_row_stride(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

class Init_Grid_column_count
{
public:
  explicit Init_Grid_column_count(::foxglove_msgs::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_cell_size column_count(::foxglove_msgs::msg::Grid::_column_count_type arg)
  {
    msg_.column_count = std::move(arg);
    return Init_Grid_cell_size(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

class Init_Grid_pose
{
public:
  explicit Init_Grid_pose(::foxglove_msgs::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_column_count pose(::foxglove_msgs::msg::Grid::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Grid_column_count(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

class Init_Grid_frame_id
{
public:
  explicit Init_Grid_frame_id(::foxglove_msgs::msg::Grid & msg)
  : msg_(msg)
  {}
  Init_Grid_pose frame_id(::foxglove_msgs::msg::Grid::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_Grid_pose(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

class Init_Grid_timestamp
{
public:
  Init_Grid_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Grid_frame_id timestamp(::foxglove_msgs::msg::Grid::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Grid_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::Grid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::Grid>()
{
  return foxglove_msgs::msg::builder::Init_Grid_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__GRID__BUILDER_HPP_
