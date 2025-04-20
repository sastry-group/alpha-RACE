// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/SceneEntities.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITIES__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/scene_entities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_SceneEntities_entities
{
public:
  explicit Init_SceneEntities_entities(::foxglove_msgs::msg::SceneEntities & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::SceneEntities entities(::foxglove_msgs::msg::SceneEntities::_entities_type arg)
  {
    msg_.entities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntities msg_;
};

class Init_SceneEntities_deletions
{
public:
  Init_SceneEntities_deletions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SceneEntities_entities deletions(::foxglove_msgs::msg::SceneEntities::_deletions_type arg)
  {
    msg_.deletions = std::move(arg);
    return Init_SceneEntities_entities(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::SceneEntities>()
{
  return foxglove_msgs::msg::builder::Init_SceneEntities_deletions();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITIES__BUILDER_HPP_
