// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_Markers_models
{
public:
  explicit Init_Markers_models(::foxglove_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::Markers models(::foxglove_msgs::msg::Markers::_models_type arg)
  {
    msg_.models = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

class Init_Markers_texts
{
public:
  explicit Init_Markers_texts(::foxglove_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  Init_Markers_models texts(::foxglove_msgs::msg::Markers::_texts_type arg)
  {
    msg_.texts = std::move(arg);
    return Init_Markers_models(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

class Init_Markers_triangles
{
public:
  explicit Init_Markers_triangles(::foxglove_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  Init_Markers_texts triangles(::foxglove_msgs::msg::Markers::_triangles_type arg)
  {
    msg_.triangles = std::move(arg);
    return Init_Markers_texts(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

class Init_Markers_lines
{
public:
  explicit Init_Markers_lines(::foxglove_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  Init_Markers_triangles lines(::foxglove_msgs::msg::Markers::_lines_type arg)
  {
    msg_.lines = std::move(arg);
    return Init_Markers_triangles(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

class Init_Markers_cones
{
public:
  explicit Init_Markers_cones(::foxglove_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  Init_Markers_lines cones(::foxglove_msgs::msg::Markers::_cones_type arg)
  {
    msg_.cones = std::move(arg);
    return Init_Markers_lines(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

class Init_Markers_spheres
{
public:
  explicit Init_Markers_spheres(::foxglove_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  Init_Markers_cones spheres(::foxglove_msgs::msg::Markers::_spheres_type arg)
  {
    msg_.spheres = std::move(arg);
    return Init_Markers_cones(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

class Init_Markers_cubes
{
public:
  explicit Init_Markers_cubes(::foxglove_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  Init_Markers_spheres cubes(::foxglove_msgs::msg::Markers::_cubes_type arg)
  {
    msg_.cubes = std::move(arg);
    return Init_Markers_spheres(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

class Init_Markers_arrows
{
public:
  explicit Init_Markers_arrows(::foxglove_msgs::msg::Markers & msg)
  : msg_(msg)
  {}
  Init_Markers_cubes arrows(::foxglove_msgs::msg::Markers::_arrows_type arg)
  {
    msg_.arrows = std::move(arg);
    return Init_Markers_cubes(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

class Init_Markers_deletions
{
public:
  Init_Markers_deletions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Markers_arrows deletions(::foxglove_msgs::msg::Markers::_deletions_type arg)
  {
    msg_.deletions = std::move(arg);
    return Init_Markers_arrows(msg_);
  }

private:
  ::foxglove_msgs::msg::Markers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::Markers>()
{
  return foxglove_msgs::msg::builder::Init_Markers_deletions();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__BUILDER_HPP_
