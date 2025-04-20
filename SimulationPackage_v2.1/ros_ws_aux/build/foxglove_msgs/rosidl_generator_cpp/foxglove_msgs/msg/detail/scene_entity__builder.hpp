// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/SceneEntity.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/scene_entity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_SceneEntity_models
{
public:
  explicit Init_SceneEntity_models(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::SceneEntity models(::foxglove_msgs::msg::SceneEntity::_models_type arg)
  {
    msg_.models = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_texts
{
public:
  explicit Init_SceneEntity_texts(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_models texts(::foxglove_msgs::msg::SceneEntity::_texts_type arg)
  {
    msg_.texts = std::move(arg);
    return Init_SceneEntity_models(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_triangles
{
public:
  explicit Init_SceneEntity_triangles(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_texts triangles(::foxglove_msgs::msg::SceneEntity::_triangles_type arg)
  {
    msg_.triangles = std::move(arg);
    return Init_SceneEntity_texts(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_lines
{
public:
  explicit Init_SceneEntity_lines(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_triangles lines(::foxglove_msgs::msg::SceneEntity::_lines_type arg)
  {
    msg_.lines = std::move(arg);
    return Init_SceneEntity_triangles(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_cylinders
{
public:
  explicit Init_SceneEntity_cylinders(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_lines cylinders(::foxglove_msgs::msg::SceneEntity::_cylinders_type arg)
  {
    msg_.cylinders = std::move(arg);
    return Init_SceneEntity_lines(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_spheres
{
public:
  explicit Init_SceneEntity_spheres(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_cylinders spheres(::foxglove_msgs::msg::SceneEntity::_spheres_type arg)
  {
    msg_.spheres = std::move(arg);
    return Init_SceneEntity_cylinders(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_cubes
{
public:
  explicit Init_SceneEntity_cubes(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_spheres cubes(::foxglove_msgs::msg::SceneEntity::_cubes_type arg)
  {
    msg_.cubes = std::move(arg);
    return Init_SceneEntity_spheres(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_arrows
{
public:
  explicit Init_SceneEntity_arrows(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_cubes arrows(::foxglove_msgs::msg::SceneEntity::_arrows_type arg)
  {
    msg_.arrows = std::move(arg);
    return Init_SceneEntity_cubes(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_metadata
{
public:
  explicit Init_SceneEntity_metadata(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_arrows metadata(::foxglove_msgs::msg::SceneEntity::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_SceneEntity_arrows(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_frame_locked
{
public:
  explicit Init_SceneEntity_frame_locked(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_metadata frame_locked(::foxglove_msgs::msg::SceneEntity::_frame_locked_type arg)
  {
    msg_.frame_locked = std::move(arg);
    return Init_SceneEntity_metadata(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_lifetime
{
public:
  explicit Init_SceneEntity_lifetime(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_frame_locked lifetime(::foxglove_msgs::msg::SceneEntity::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_SceneEntity_frame_locked(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_id
{
public:
  explicit Init_SceneEntity_id(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_lifetime id(::foxglove_msgs::msg::SceneEntity::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SceneEntity_lifetime(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_frame_id
{
public:
  explicit Init_SceneEntity_frame_id(::foxglove_msgs::msg::SceneEntity & msg)
  : msg_(msg)
  {}
  Init_SceneEntity_id frame_id(::foxglove_msgs::msg::SceneEntity::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_SceneEntity_id(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

class Init_SceneEntity_timestamp
{
public:
  Init_SceneEntity_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SceneEntity_frame_id timestamp(::foxglove_msgs::msg::SceneEntity::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SceneEntity_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::SceneEntity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::SceneEntity>()
{
  return foxglove_msgs::msg::builder::Init_SceneEntity_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__BUILDER_HPP_
