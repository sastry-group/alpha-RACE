// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/CubeListMarker.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "foxglove_msgs/msg/detail/cube_list_marker__struct.hpp"
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

void CubeListMarker_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) foxglove_msgs::msg::CubeListMarker(_init);
}

void CubeListMarker_fini_function(void * message_memory)
{
  auto typed_message = static_cast<foxglove_msgs::msg::CubeListMarker *>(message_memory);
  typed_message->~CubeListMarker();
}

size_t size_function__CubeListMarker__metadata(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::KeyValuePair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CubeListMarker__metadata(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::KeyValuePair> *>(untyped_member);
  return &member[index];
}

void * get_function__CubeListMarker__metadata(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::KeyValuePair> *>(untyped_member);
  return &member[index];
}

void fetch_function__CubeListMarker__metadata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::KeyValuePair *>(
    get_const_function__CubeListMarker__metadata(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::KeyValuePair *>(untyped_value);
  value = item;
}

void assign_function__CubeListMarker__metadata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::KeyValuePair *>(
    get_function__CubeListMarker__metadata(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::KeyValuePair *>(untyped_value);
  item = value;
}

void resize_function__CubeListMarker__metadata(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::KeyValuePair> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CubeListMarker__attributes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::CubeAttributes> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CubeListMarker__attributes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::CubeAttributes> *>(untyped_member);
  return &member[index];
}

void * get_function__CubeListMarker__attributes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::CubeAttributes> *>(untyped_member);
  return &member[index];
}

void fetch_function__CubeListMarker__attributes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::CubeAttributes *>(
    get_const_function__CubeListMarker__attributes(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::CubeAttributes *>(untyped_value);
  value = item;
}

void assign_function__CubeListMarker__attributes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::CubeAttributes *>(
    get_function__CubeListMarker__attributes(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::CubeAttributes *>(untyped_value);
  item = value;
}

void resize_function__CubeListMarker__attributes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::CubeAttributes> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CubeListMarker_message_member_array[7] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::CubeListMarker, timestamp),  // bytes offset in struct
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
    offsetof(foxglove_msgs::msg::CubeListMarker, frame_id),  // bytes offset in struct
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
    offsetof(foxglove_msgs::msg::CubeListMarker, id),  // bytes offset in struct
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
    offsetof(foxglove_msgs::msg::CubeListMarker, lifetime),  // bytes offset in struct
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
    offsetof(foxglove_msgs::msg::CubeListMarker, frame_locked),  // bytes offset in struct
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
    offsetof(foxglove_msgs::msg::CubeListMarker, metadata),  // bytes offset in struct
    nullptr,  // default value
    size_function__CubeListMarker__metadata,  // size() function pointer
    get_const_function__CubeListMarker__metadata,  // get_const(index) function pointer
    get_function__CubeListMarker__metadata,  // get(index) function pointer
    fetch_function__CubeListMarker__metadata,  // fetch(index, &value) function pointer
    assign_function__CubeListMarker__metadata,  // assign(index, value) function pointer
    resize_function__CubeListMarker__metadata  // resize(index) function pointer
  },
  {
    "attributes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::CubeAttributes>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::CubeListMarker, attributes),  // bytes offset in struct
    nullptr,  // default value
    size_function__CubeListMarker__attributes,  // size() function pointer
    get_const_function__CubeListMarker__attributes,  // get_const(index) function pointer
    get_function__CubeListMarker__attributes,  // get(index) function pointer
    fetch_function__CubeListMarker__attributes,  // fetch(index, &value) function pointer
    assign_function__CubeListMarker__attributes,  // assign(index, value) function pointer
    resize_function__CubeListMarker__attributes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CubeListMarker_message_members = {
  "foxglove_msgs::msg",  // message namespace
  "CubeListMarker",  // message name
  7,  // number of fields
  sizeof(foxglove_msgs::msg::CubeListMarker),
  CubeListMarker_message_member_array,  // message members
  CubeListMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  CubeListMarker_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CubeListMarker_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CubeListMarker_message_members,
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
get_message_type_support_handle<foxglove_msgs::msg::CubeListMarker>()
{
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::CubeListMarker_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, foxglove_msgs, msg, CubeListMarker)() {
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::CubeListMarker_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
