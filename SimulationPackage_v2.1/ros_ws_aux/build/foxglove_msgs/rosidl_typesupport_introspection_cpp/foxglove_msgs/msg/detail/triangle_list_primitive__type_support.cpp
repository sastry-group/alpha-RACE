// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/TriangleListPrimitive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "foxglove_msgs/msg/detail/triangle_list_primitive__struct.hpp"
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

void TriangleListPrimitive_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) foxglove_msgs::msg::TriangleListPrimitive(_init);
}

void TriangleListPrimitive_fini_function(void * message_memory)
{
  auto typed_message = static_cast<foxglove_msgs::msg::TriangleListPrimitive *>(message_memory);
  typed_message->~TriangleListPrimitive();
}

size_t size_function__TriangleListPrimitive__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TriangleListPrimitive__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__TriangleListPrimitive__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__TriangleListPrimitive__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__TriangleListPrimitive__points(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__TriangleListPrimitive__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__TriangleListPrimitive__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__TriangleListPrimitive__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TriangleListPrimitive__colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::Color> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TriangleListPrimitive__colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::Color> *>(untyped_member);
  return &member[index];
}

void * get_function__TriangleListPrimitive__colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::Color> *>(untyped_member);
  return &member[index];
}

void fetch_function__TriangleListPrimitive__colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::Color *>(
    get_const_function__TriangleListPrimitive__colors(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::Color *>(untyped_value);
  value = item;
}

void assign_function__TriangleListPrimitive__colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::Color *>(
    get_function__TriangleListPrimitive__colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::Color *>(untyped_value);
  item = value;
}

void resize_function__TriangleListPrimitive__colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::Color> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TriangleListPrimitive__indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TriangleListPrimitive__indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TriangleListPrimitive__indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TriangleListPrimitive__indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__TriangleListPrimitive__indices(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__TriangleListPrimitive__indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__TriangleListPrimitive__indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__TriangleListPrimitive__indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TriangleListPrimitive_message_member_array[5] = {
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::TriangleListPrimitive, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::TriangleListPrimitive, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__TriangleListPrimitive__points,  // size() function pointer
    get_const_function__TriangleListPrimitive__points,  // get_const(index) function pointer
    get_function__TriangleListPrimitive__points,  // get(index) function pointer
    fetch_function__TriangleListPrimitive__points,  // fetch(index, &value) function pointer
    assign_function__TriangleListPrimitive__points,  // assign(index, value) function pointer
    resize_function__TriangleListPrimitive__points  // resize(index) function pointer
  },
  {
    "color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::Color>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::TriangleListPrimitive, color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "colors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::Color>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::TriangleListPrimitive, colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__TriangleListPrimitive__colors,  // size() function pointer
    get_const_function__TriangleListPrimitive__colors,  // get_const(index) function pointer
    get_function__TriangleListPrimitive__colors,  // get(index) function pointer
    fetch_function__TriangleListPrimitive__colors,  // fetch(index, &value) function pointer
    assign_function__TriangleListPrimitive__colors,  // assign(index, value) function pointer
    resize_function__TriangleListPrimitive__colors  // resize(index) function pointer
  },
  {
    "indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::TriangleListPrimitive, indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__TriangleListPrimitive__indices,  // size() function pointer
    get_const_function__TriangleListPrimitive__indices,  // get_const(index) function pointer
    get_function__TriangleListPrimitive__indices,  // get(index) function pointer
    fetch_function__TriangleListPrimitive__indices,  // fetch(index, &value) function pointer
    assign_function__TriangleListPrimitive__indices,  // assign(index, value) function pointer
    resize_function__TriangleListPrimitive__indices  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TriangleListPrimitive_message_members = {
  "foxglove_msgs::msg",  // message namespace
  "TriangleListPrimitive",  // message name
  5,  // number of fields
  sizeof(foxglove_msgs::msg::TriangleListPrimitive),
  TriangleListPrimitive_message_member_array,  // message members
  TriangleListPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  TriangleListPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TriangleListPrimitive_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TriangleListPrimitive_message_members,
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
get_message_type_support_handle<foxglove_msgs::msg::TriangleListPrimitive>()
{
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::TriangleListPrimitive_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, foxglove_msgs, msg, TriangleListPrimitive)() {
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::TriangleListPrimitive_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
