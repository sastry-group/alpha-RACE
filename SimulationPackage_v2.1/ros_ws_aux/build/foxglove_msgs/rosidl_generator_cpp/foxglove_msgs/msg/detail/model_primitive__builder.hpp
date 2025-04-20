// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/ModelPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/model_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_ModelPrimitive_data
{
public:
  explicit Init_ModelPrimitive_data(::foxglove_msgs::msg::ModelPrimitive & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::ModelPrimitive data(::foxglove_msgs::msg::ModelPrimitive::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelPrimitive msg_;
};

class Init_ModelPrimitive_media_type
{
public:
  explicit Init_ModelPrimitive_media_type(::foxglove_msgs::msg::ModelPrimitive & msg)
  : msg_(msg)
  {}
  Init_ModelPrimitive_data media_type(::foxglove_msgs::msg::ModelPrimitive::_media_type_type arg)
  {
    msg_.media_type = std::move(arg);
    return Init_ModelPrimitive_data(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelPrimitive msg_;
};

class Init_ModelPrimitive_url
{
public:
  explicit Init_ModelPrimitive_url(::foxglove_msgs::msg::ModelPrimitive & msg)
  : msg_(msg)
  {}
  Init_ModelPrimitive_media_type url(::foxglove_msgs::msg::ModelPrimitive::_url_type arg)
  {
    msg_.url = std::move(arg);
    return Init_ModelPrimitive_media_type(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelPrimitive msg_;
};

class Init_ModelPrimitive_override_color
{
public:
  explicit Init_ModelPrimitive_override_color(::foxglove_msgs::msg::ModelPrimitive & msg)
  : msg_(msg)
  {}
  Init_ModelPrimitive_url override_color(::foxglove_msgs::msg::ModelPrimitive::_override_color_type arg)
  {
    msg_.override_color = std::move(arg);
    return Init_ModelPrimitive_url(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelPrimitive msg_;
};

class Init_ModelPrimitive_color
{
public:
  explicit Init_ModelPrimitive_color(::foxglove_msgs::msg::ModelPrimitive & msg)
  : msg_(msg)
  {}
  Init_ModelPrimitive_override_color color(::foxglove_msgs::msg::ModelPrimitive::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_ModelPrimitive_override_color(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelPrimitive msg_;
};

class Init_ModelPrimitive_scale
{
public:
  explicit Init_ModelPrimitive_scale(::foxglove_msgs::msg::ModelPrimitive & msg)
  : msg_(msg)
  {}
  Init_ModelPrimitive_color scale(::foxglove_msgs::msg::ModelPrimitive::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_ModelPrimitive_color(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelPrimitive msg_;
};

class Init_ModelPrimitive_pose
{
public:
  Init_ModelPrimitive_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModelPrimitive_scale pose(::foxglove_msgs::msg::ModelPrimitive::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ModelPrimitive_scale(msg_);
  }

private:
  ::foxglove_msgs::msg::ModelPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::ModelPrimitive>()
{
  return foxglove_msgs::msg::builder::Init_ModelPrimitive_pose();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__BUILDER_HPP_
