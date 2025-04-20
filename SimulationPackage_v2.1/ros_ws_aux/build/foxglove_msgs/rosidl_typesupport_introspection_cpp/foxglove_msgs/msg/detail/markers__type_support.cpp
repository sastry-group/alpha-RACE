// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "foxglove_msgs/msg/detail/markers__struct.hpp"
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

void Markers_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) foxglove_msgs::msg::Markers(_init);
}

void Markers_fini_function(void * message_memory)
{
  auto typed_message = static_cast<foxglove_msgs::msg::Markers *>(message_memory);
  typed_message->~Markers();
}

size_t size_function__Markers__deletions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::MarkerDeletion> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__deletions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::MarkerDeletion> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__deletions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::MarkerDeletion> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__deletions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::MarkerDeletion *>(
    get_const_function__Markers__deletions(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::MarkerDeletion *>(untyped_value);
  value = item;
}

void assign_function__Markers__deletions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::MarkerDeletion *>(
    get_function__Markers__deletions(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::MarkerDeletion *>(untyped_value);
  item = value;
}

void resize_function__Markers__deletions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::MarkerDeletion> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Markers__arrows(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::ArrowMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__arrows(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::ArrowMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__arrows(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::ArrowMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__arrows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::ArrowMarker *>(
    get_const_function__Markers__arrows(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::ArrowMarker *>(untyped_value);
  value = item;
}

void assign_function__Markers__arrows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::ArrowMarker *>(
    get_function__Markers__arrows(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::ArrowMarker *>(untyped_value);
  item = value;
}

void resize_function__Markers__arrows(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::ArrowMarker> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Markers__cubes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::CubeListMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__cubes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::CubeListMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__cubes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::CubeListMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__cubes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::CubeListMarker *>(
    get_const_function__Markers__cubes(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::CubeListMarker *>(untyped_value);
  value = item;
}

void assign_function__Markers__cubes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::CubeListMarker *>(
    get_function__Markers__cubes(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::CubeListMarker *>(untyped_value);
  item = value;
}

void resize_function__Markers__cubes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::CubeListMarker> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Markers__spheres(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::SphereListMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__spheres(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::SphereListMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__spheres(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::SphereListMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__spheres(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::SphereListMarker *>(
    get_const_function__Markers__spheres(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::SphereListMarker *>(untyped_value);
  value = item;
}

void assign_function__Markers__spheres(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::SphereListMarker *>(
    get_function__Markers__spheres(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::SphereListMarker *>(untyped_value);
  item = value;
}

void resize_function__Markers__spheres(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::SphereListMarker> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Markers__cones(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::ConeListMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__cones(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::ConeListMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__cones(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::ConeListMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__cones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::ConeListMarker *>(
    get_const_function__Markers__cones(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::ConeListMarker *>(untyped_value);
  value = item;
}

void assign_function__Markers__cones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::ConeListMarker *>(
    get_function__Markers__cones(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::ConeListMarker *>(untyped_value);
  item = value;
}

void resize_function__Markers__cones(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::ConeListMarker> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Markers__lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::LineMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::LineMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::LineMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::LineMarker *>(
    get_const_function__Markers__lines(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::LineMarker *>(untyped_value);
  value = item;
}

void assign_function__Markers__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::LineMarker *>(
    get_function__Markers__lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::LineMarker *>(untyped_value);
  item = value;
}

void resize_function__Markers__lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::LineMarker> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Markers__triangles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::TriangleListMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__triangles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::TriangleListMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__triangles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::TriangleListMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__triangles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::TriangleListMarker *>(
    get_const_function__Markers__triangles(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::TriangleListMarker *>(untyped_value);
  value = item;
}

void assign_function__Markers__triangles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::TriangleListMarker *>(
    get_function__Markers__triangles(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::TriangleListMarker *>(untyped_value);
  item = value;
}

void resize_function__Markers__triangles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::TriangleListMarker> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Markers__texts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::TextMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__texts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::TextMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__texts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::TextMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__texts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::TextMarker *>(
    get_const_function__Markers__texts(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::TextMarker *>(untyped_value);
  value = item;
}

void assign_function__Markers__texts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::TextMarker *>(
    get_function__Markers__texts(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::TextMarker *>(untyped_value);
  item = value;
}

void resize_function__Markers__texts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::TextMarker> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Markers__models(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::ModelMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Markers__models(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::ModelMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Markers__models(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::ModelMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Markers__models(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::ModelMarker *>(
    get_const_function__Markers__models(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::ModelMarker *>(untyped_value);
  value = item;
}

void assign_function__Markers__models(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::ModelMarker *>(
    get_function__Markers__models(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::ModelMarker *>(untyped_value);
  item = value;
}

void resize_function__Markers__models(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::ModelMarker> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Markers_message_member_array[9] = {
  {
    "deletions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::MarkerDeletion>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, deletions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__deletions,  // size() function pointer
    get_const_function__Markers__deletions,  // get_const(index) function pointer
    get_function__Markers__deletions,  // get(index) function pointer
    fetch_function__Markers__deletions,  // fetch(index, &value) function pointer
    assign_function__Markers__deletions,  // assign(index, value) function pointer
    resize_function__Markers__deletions  // resize(index) function pointer
  },
  {
    "arrows",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::ArrowMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, arrows),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__arrows,  // size() function pointer
    get_const_function__Markers__arrows,  // get_const(index) function pointer
    get_function__Markers__arrows,  // get(index) function pointer
    fetch_function__Markers__arrows,  // fetch(index, &value) function pointer
    assign_function__Markers__arrows,  // assign(index, value) function pointer
    resize_function__Markers__arrows  // resize(index) function pointer
  },
  {
    "cubes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::CubeListMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, cubes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__cubes,  // size() function pointer
    get_const_function__Markers__cubes,  // get_const(index) function pointer
    get_function__Markers__cubes,  // get(index) function pointer
    fetch_function__Markers__cubes,  // fetch(index, &value) function pointer
    assign_function__Markers__cubes,  // assign(index, value) function pointer
    resize_function__Markers__cubes  // resize(index) function pointer
  },
  {
    "spheres",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::SphereListMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, spheres),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__spheres,  // size() function pointer
    get_const_function__Markers__spheres,  // get_const(index) function pointer
    get_function__Markers__spheres,  // get(index) function pointer
    fetch_function__Markers__spheres,  // fetch(index, &value) function pointer
    assign_function__Markers__spheres,  // assign(index, value) function pointer
    resize_function__Markers__spheres  // resize(index) function pointer
  },
  {
    "cones",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::ConeListMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, cones),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__cones,  // size() function pointer
    get_const_function__Markers__cones,  // get_const(index) function pointer
    get_function__Markers__cones,  // get(index) function pointer
    fetch_function__Markers__cones,  // fetch(index, &value) function pointer
    assign_function__Markers__cones,  // assign(index, value) function pointer
    resize_function__Markers__cones  // resize(index) function pointer
  },
  {
    "lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::LineMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__lines,  // size() function pointer
    get_const_function__Markers__lines,  // get_const(index) function pointer
    get_function__Markers__lines,  // get(index) function pointer
    fetch_function__Markers__lines,  // fetch(index, &value) function pointer
    assign_function__Markers__lines,  // assign(index, value) function pointer
    resize_function__Markers__lines  // resize(index) function pointer
  },
  {
    "triangles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::TriangleListMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, triangles),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__triangles,  // size() function pointer
    get_const_function__Markers__triangles,  // get_const(index) function pointer
    get_function__Markers__triangles,  // get(index) function pointer
    fetch_function__Markers__triangles,  // fetch(index, &value) function pointer
    assign_function__Markers__triangles,  // assign(index, value) function pointer
    resize_function__Markers__triangles  // resize(index) function pointer
  },
  {
    "texts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::TextMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, texts),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__texts,  // size() function pointer
    get_const_function__Markers__texts,  // get_const(index) function pointer
    get_function__Markers__texts,  // get(index) function pointer
    fetch_function__Markers__texts,  // fetch(index, &value) function pointer
    assign_function__Markers__texts,  // assign(index, value) function pointer
    resize_function__Markers__texts  // resize(index) function pointer
  },
  {
    "models",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::ModelMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::Markers, models),  // bytes offset in struct
    nullptr,  // default value
    size_function__Markers__models,  // size() function pointer
    get_const_function__Markers__models,  // get_const(index) function pointer
    get_function__Markers__models,  // get(index) function pointer
    fetch_function__Markers__models,  // fetch(index, &value) function pointer
    assign_function__Markers__models,  // assign(index, value) function pointer
    resize_function__Markers__models  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Markers_message_members = {
  "foxglove_msgs::msg",  // message namespace
  "Markers",  // message name
  9,  // number of fields
  sizeof(foxglove_msgs::msg::Markers),
  Markers_message_member_array,  // message members
  Markers_init_function,  // function to initialize message memory (memory has to be allocated)
  Markers_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Markers_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Markers_message_members,
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
get_message_type_support_handle<foxglove_msgs::msg::Markers>()
{
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::Markers_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, foxglove_msgs, msg, Markers)() {
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::Markers_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
