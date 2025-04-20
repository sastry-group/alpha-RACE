// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/SceneEntityDeletion.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY_DELETION__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY_DELETION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/scene_entity_deletion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_SceneEntityDeletion_id
{
public:
  explicit Init_SceneEntityDeletion_id(::foxglove_msgs::msg::SceneEntityDeletion & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::SceneEntityDeletion id(::foxglove_msgs::msg::SceneEntityDeletion::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntityDeletion msg_;
};

class Init_SceneEntityDeletion_type
{
public:
  explicit Init_SceneEntityDeletion_type(::foxglove_msgs::msg::SceneEntityDeletion & msg)
  : msg_(msg)
  {}
  Init_SceneEntityDeletion_id type(::foxglove_msgs::msg::SceneEntityDeletion::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SceneEntityDeletion_id(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntityDeletion msg_;
};

class Init_SceneEntityDeletion_timestamp
{
public:
  Init_SceneEntityDeletion_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SceneEntityDeletion_type timestamp(::foxglove_msgs::msg::SceneEntityDeletion::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SceneEntityDeletion_type(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntityDeletion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::SceneEntityDeletion>()
{
  return foxglove_msgs::msg::builder::Init_SceneEntityDeletion_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY_DELETION__BUILDER_HPP_
