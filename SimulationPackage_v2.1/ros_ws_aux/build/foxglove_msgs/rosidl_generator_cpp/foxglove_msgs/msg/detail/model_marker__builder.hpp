// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ModelMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__MODEL_MARKER__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__MODEL_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/model_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ModelMarker_data
{
public:
  explicit Init_ModelMarker_data(::foxglove_msgs::msg::ModelMarker & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::ModelMarker data(::foxglove_msgs::msg::ModelMarker::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelMarker msg_;
};

class Init_ModelMarker_mime_type
{
public:
  explicit Init_ModelMarker_mime_type(::foxglove_msgs::msg::ModelMarker & msg)
  : msg_(msg)
  {}
  Init_ModelMarker_data mime_type(::foxglove_msgs::msg::ModelMarker::_mime_type_type arg)
  {
    msg_.mime_type = std::move(arg);
    return Init_ModelMarker_data(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelMarker msg_;
};

class Init_ModelMarker_url
{
public:
  explicit Init_ModelMarker_url(::foxglove_msgs::msg::ModelMarker & msg)
  : msg_(msg)
  {}
  Init_ModelMarker_mime_type url(::foxglove_msgs::msg::ModelMarker::_url_type arg)
  {
    msg_.url = std::move(arg);
    return Init_ModelMarker_mime_type(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelMarker msg_;
};

class Init_ModelMarker_use_embedded_materials
{
public:
  explicit Init_ModelMarker_use_embedded_materials(::foxglove_msgs::msg::ModelMarker & msg)
  : msg_(msg)
  {}
  Init_ModelMarker_url use_embedded_materials(::foxglove_msgs::msg::ModelMarker::_use_embedded_materials_type arg)
  {
    msg_.use_embedded_materials = std::move(arg);
    return Init_ModelMarker_url(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelMarker msg_;
};

class Init_ModelMarker_color
{
public:
  explicit Init_ModelMarker_color(::foxglove_msgs::msg::ModelMarker & msg)
  : msg_(msg)
  {}
  Init_ModelMarker_use_embedded_materials color(::foxglove_msgs::msg::ModelMarker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_ModelMarker_use_embedded_materials(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelMarker msg_;
};

class Init_ModelMarker_scale
{
public:
  explicit Init_ModelMarker_scale(::foxglove_msgs::msg::ModelMarker & msg)
  : msg_(msg)
  {}
  Init_ModelMarker_color scale(::foxglove_msgs::msg::ModelMarker::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_ModelMarker_color(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelMarker msg_;
};

class Init_ModelMarker_pose
{
public:
  Init_ModelMarker_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModelMarker_scale pose(::foxglove_msgs::msg::ModelMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ModelMarker_scale(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ModelMarker>()
{
  return foxglove_msgs::msg::builder::Init_ModelMarker_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__MODEL_MARKER__BUILDER_HPP_
