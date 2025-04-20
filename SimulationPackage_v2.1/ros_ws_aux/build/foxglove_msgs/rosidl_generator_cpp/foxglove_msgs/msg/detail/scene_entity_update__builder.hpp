// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/SceneEntityUpdate.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY_UPDATE__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/scene_entity_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_SceneEntityUpdate_entities
{
public:
  explicit Init_SceneEntityUpdate_entities(::foxglove_msgs::msg::SceneEntityUpdate & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::SceneEntityUpdate entities(::foxglove_msgs::msg::SceneEntityUpdate::_entities_type arg)
  {
    msg_.entities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntityUpdate msg_;
};

class Init_SceneEntityUpdate_deletions
{
public:
  Init_SceneEntityUpdate_deletions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SceneEntityUpdate_entities deletions(::foxglove_msgs::msg::SceneEntityUpdate::_deletions_type arg)
  {
    msg_.deletions = std::move(arg);
    return Init_SceneEntityUpdate_entities(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntityUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::SceneEntityUpdate>()
{
  return foxglove_msgs::msg::builder::Init_SceneEntityUpdate_deletions();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY_UPDATE__BUILDER_HPP_
