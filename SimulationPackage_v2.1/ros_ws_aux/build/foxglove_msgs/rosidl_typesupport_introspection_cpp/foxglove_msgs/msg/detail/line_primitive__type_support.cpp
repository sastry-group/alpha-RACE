// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/LinePrimitive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "foxglove_msgs/msg/detail/line_primitive__struct.hpp"
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

void LinePrimitive_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) foxglove_msgs::msg::LinePrimitive(_init);
}

void LinePrimitive_fini_function(void * message_memory)
{
  auto typed_message = static_cast<foxglove_msgs::msg::LinePrimitive *>(message_memory);
  typed_message->~LinePrimitive();
}

size_t size_function__LinePrimitive__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LinePrimitive__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__LinePrimitive__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__LinePrimitive__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__LinePrimitive__points(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__LinePrimitive__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__LinePrimitive__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__LinePrimitive__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LinePrimitive__colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::Color> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LinePrimitive__colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::Color> *>(untyped_member);
  return &member[index];
}

void * get_function__LinePrimitive__colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::Color> *>(untyped_member);
  return &member[index];
}

void fetch_function__LinePrimitive__colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::Color *>(
    get_const_function__LinePrimitive__colors(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::Color *>(untyped_value);
  value = item;
}

void assign_function__LinePrimitive__colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::Color *>(
    get_function__LinePrimitive__colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::Color *>(untyped_value);
  item = value;
}

void resize_function__LinePrimitive__colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::Color> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LinePrimitive__indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LinePrimitive__indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LinePrimitive__indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LinePrimitive__indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__LinePrimitive__indices(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__LinePrimitive__indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__LinePrimitive__indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__LinePrimitive__indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LinePrimitive_message_member_array[8] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::LinePrimitive, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::LinePrimitive, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "thickness",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::LinePrimitive, thickness),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scale_invariant",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::LinePrimitive, scale_invariant),  // bytes offset in struct
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
    offsetof(foxglove_msgs::msg::LinePrimitive, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__LinePrimitive__points,  // size() function pointer
    get_const_function__LinePrimitive__points,  // get_const(index) function pointer
    get_function__LinePrimitive__points,  // get(index) function pointer
    fetch_function__LinePrimitive__points,  // fetch(index, &value) function pointer
    assign_function__LinePrimitive__points,  // assign(index, value) function pointer
    resize_function__LinePrimitive__points  // resize(index) function pointer
  },
  {
    "color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::Color>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::LinePrimitive, color),  // bytes offset in struct
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
    offsetof(foxglove_msgs::msg::LinePrimitive, colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__LinePrimitive__colors,  // size() function pointer
    get_const_function__LinePrimitive__colors,  // get_const(index) function pointer
    get_function__LinePrimitive__colors,  // get(index) function pointer
    fetch_function__LinePrimitive__colors,  // fetch(index, &value) function pointer
    assign_function__LinePrimitive__colors,  // assign(index, value) function pointer
    resize_function__LinePrimitive__colors  // resize(index) function pointer
  },
  {
    "indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::LinePrimitive, indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__LinePrimitive__indices,  // size() function pointer
    get_const_function__LinePrimitive__indices,  // get_const(index) function pointer
    get_function__LinePrimitive__indices,  // get(index) function pointer
    fetch_function__LinePrimitive__indices,  // fetch(index, &value) function pointer
    assign_function__LinePrimitive__indices,  // assign(index, value) function pointer
    resize_function__LinePrimitive__indices  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LinePrimitive_message_members = {
  "foxglove_msgs::msg",  // message namespace
  "LinePrimitive",  // message name
  8,  // number of fields
  sizeof(foxglove_msgs::msg::LinePrimitive),
  LinePrimitive_message_member_array,  // message members
  LinePrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  LinePrimitive_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LinePrimitive_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LinePrimitive_message_members,
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
get_message_type_support_handle<foxglove_msgs::msg::LinePrimitive>()
{
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::LinePrimitive_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, foxglove_msgs, msg, LinePrimitive)() {
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::LinePrimitive_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
