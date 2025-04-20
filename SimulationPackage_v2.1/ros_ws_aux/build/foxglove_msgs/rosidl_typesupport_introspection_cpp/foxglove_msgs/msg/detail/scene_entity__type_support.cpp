// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/SceneEntity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "foxglove_msgs/msg/detail/scene_entity__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace foxglove_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SceneEntity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) foxglove_msgs::msg::SceneEntity(_init);
}

void SceneEntity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<foxglove_msgs::msg::SceneEntity *>(message_memory);
  typed_message->~SceneEntity();
}

size_t size_function__SceneEntity__metadata(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::KeyValuePair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__metadata(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::KeyValuePair> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__metadata(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::KeyValuePair> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__metadata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::KeyValuePair *>(
    get_const_function__SceneEntity__metadata(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::KeyValuePair *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__metadata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::KeyValuePair *>(
    get_function__SceneEntity__metadata(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::KeyValuePair *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__metadata(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::KeyValuePair> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneEntity__arrows(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::ArrowPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__arrows(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::ArrowPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__arrows(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::ArrowPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__arrows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::ArrowPrimitive *>(
    get_const_function__SceneEntity__arrows(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::ArrowPrimitive *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__arrows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::ArrowPrimitive *>(
    get_function__SceneEntity__arrows(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::ArrowPrimitive *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__arrows(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::ArrowPrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneEntity__cubes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::CubePrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__cubes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::CubePrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__cubes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::CubePrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__cubes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::CubePrimitive *>(
    get_const_function__SceneEntity__cubes(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::CubePrimitive *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__cubes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::CubePrimitive *>(
    get_function__SceneEntity__cubes(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::CubePrimitive *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__cubes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::CubePrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneEntity__spheres(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::SpherePrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__spheres(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::SpherePrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__spheres(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::SpherePrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__spheres(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::SpherePrimitive *>(
    get_const_function__SceneEntity__spheres(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::SpherePrimitive *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__spheres(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::SpherePrimitive *>(
    get_function__SceneEntity__spheres(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::SpherePrimitive *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__spheres(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::SpherePrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneEntity__cylinders(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::CylinderPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__cylinders(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::CylinderPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__cylinders(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::CylinderPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__cylinders(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::CylinderPrimitive *>(
    get_const_function__SceneEntity__cylinders(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::CylinderPrimitive *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__cylinders(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::CylinderPrimitive *>(
    get_function__SceneEntity__cylinders(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::CylinderPrimitive *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__cylinders(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::CylinderPrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneEntity__lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::LinePrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::LinePrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::LinePrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::LinePrimitive *>(
    get_const_function__SceneEntity__lines(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::LinePrimitive *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::LinePrimitive *>(
    get_function__SceneEntity__lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::LinePrimitive *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::LinePrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneEntity__triangles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::TriangleListPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__triangles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::TriangleListPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__triangles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::TriangleListPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__triangles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::TriangleListPrimitive *>(
    get_const_function__SceneEntity__triangles(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::TriangleListPrimitive *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__triangles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::TriangleListPrimitive *>(
    get_function__SceneEntity__triangles(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::TriangleListPrimitive *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__triangles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::TriangleListPrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneEntity__texts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::TextPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__texts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::TextPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__texts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::TextPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__texts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::TextPrimitive *>(
    get_const_function__SceneEntity__texts(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::TextPrimitive *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__texts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::TextPrimitive *>(
    get_function__SceneEntity__texts(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::TextPrimitive *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__texts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::TextPrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneEntity__models(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::ModelPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneEntity__models(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::ModelPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneEntity__models(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::ModelPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneEntity__models(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::ModelPrimitive *>(
    get_const_function__SceneEntity__models(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::ModelPrimitive *>(untyped_value);
  value = item;
}

void assign_function__SceneEntity__models(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::ModelPrimitive *>(
    get_function__SceneEntity__models(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::ModelPrimitive *>(untyped_value);
  item = value;
}

void resize_function__SceneEntity__models(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::ModelPrimitive> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SceneEntity_message_member_array[14] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lifetime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, lifetime),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "frame_locked",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, frame_locked),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "metadata",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::KeyValuePair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, metadata),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__metadata,  // size() function pointer
    get_const_function__SceneEntity__metadata,  // get_const(index) function pointer
    get_function__SceneEntity__metadata,  // get(index) function pointer
    fetch_function__SceneEntity__metadata,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__metadata,  // assign(index, value) function pointer
    resize_function__SceneEntity__metadata  // resize(index) function pointer
  },
  {
    "arrows",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::ArrowPrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, arrows),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__arrows,  // size() function pointer
    get_const_function__SceneEntity__arrows,  // get_const(index) function pointer
    get_function__SceneEntity__arrows,  // get(index) function pointer
    fetch_function__SceneEntity__arrows,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__arrows,  // assign(index, value) function pointer
    resize_function__SceneEntity__arrows  // resize(index) function pointer
  },
  {
    "cubes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::CubePrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, cubes),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__cubes,  // size() function pointer
    get_const_function__SceneEntity__cubes,  // get_const(index) function pointer
    get_function__SceneEntity__cubes,  // get(index) function pointer
    fetch_function__SceneEntity__cubes,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__cubes,  // assign(index, value) function pointer
    resize_function__SceneEntity__cubes  // resize(index) function pointer
  },
  {
    "spheres",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::SpherePrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, spheres),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__spheres,  // size() function pointer
    get_const_function__SceneEntity__spheres,  // get_const(index) function pointer
    get_function__SceneEntity__spheres,  // get(index) function pointer
    fetch_function__SceneEntity__spheres,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__spheres,  // assign(index, value) function pointer
    resize_function__SceneEntity__spheres  // resize(index) function pointer
  },
  {
    "cylinders",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::CylinderPrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, cylinders),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__cylinders,  // size() function pointer
    get_const_function__SceneEntity__cylinders,  // get_const(index) function pointer
    get_function__SceneEntity__cylinders,  // get(index) function pointer
    fetch_function__SceneEntity__cylinders,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__cylinders,  // assign(index, value) function pointer
    resize_function__SceneEntity__cylinders  // resize(index) function pointer
  },
  {
    "lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::LinePrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__lines,  // size() function pointer
    get_const_function__SceneEntity__lines,  // get_const(index) function pointer
    get_function__SceneEntity__lines,  // get(index) function pointer
    fetch_function__SceneEntity__lines,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__lines,  // assign(index, value) function pointer
    resize_function__SceneEntity__lines  // resize(index) function pointer
  },
  {
    "triangles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::TriangleListPrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, triangles),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__triangles,  // size() function pointer
    get_const_function__SceneEntity__triangles,  // get_const(index) function pointer
    get_function__SceneEntity__triangles,  // get(index) function pointer
    fetch_function__SceneEntity__triangles,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__triangles,  // assign(index, value) function pointer
    resize_function__SceneEntity__triangles  // resize(index) function pointer
  },
  {
    "texts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::TextPrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, texts),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__texts,  // size() function pointer
    get_const_function__SceneEntity__texts,  // get_const(index) function pointer
    get_function__SceneEntity__texts,  // get(index) function pointer
    fetch_function__SceneEntity__texts,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__texts,  // assign(index, value) function pointer
    resize_function__SceneEntity__texts  // resize(index) function pointer
  },
  {
    "models",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::ModelPrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneEntity, models),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneEntity__models,  // size() function pointer
    get_const_function__SceneEntity__models,  // get_const(index) function pointer
    get_function__SceneEntity__models,  // get(index) function pointer
    fetch_function__SceneEntity__models,  // fetch(index, &value) function pointer
    assign_function__SceneEntity__models,  // assign(index, value) function pointer
    resize_function__SceneEntity__models  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SceneEntity_message_members = {
  "foxglove_msgs::msg",  // message namespace
  "SceneEntity",  // message name
  14,  // number of fields
  sizeof(foxglove_msgs::msg::SceneEntity),
  SceneEntity_message_member_array,  // message members
  SceneEntity_init_function,  // function to initialize message memory (memory has to be allocated)
  SceneEntity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SceneEntity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SceneEntity_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace foxglove_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<foxglove_msgs::msg::SceneEntity>()
{
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::SceneEntity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, foxglove_msgs, msg, SceneEntity)() {
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::SceneEntity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
