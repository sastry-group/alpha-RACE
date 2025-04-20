// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/SceneUpdate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "foxglove_msgs/msg/detail/scene_update__struct.hpp"
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

void SceneUpdate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) foxglove_msgs::msg::SceneUpdate(_init);
}

void SceneUpdate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<foxglove_msgs::msg::SceneUpdate *>(message_memory);
  typed_message->~SceneUpdate();
}

size_t size_function__SceneUpdate__deletions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::SceneEntityDeletion> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneUpdate__deletions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::SceneEntityDeletion> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneUpdate__deletions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::SceneEntityDeletion> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneUpdate__deletions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::SceneEntityDeletion *>(
    get_const_function__SceneUpdate__deletions(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::SceneEntityDeletion *>(untyped_value);
  value = item;
}

void assign_function__SceneUpdate__deletions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::SceneEntityDeletion *>(
    get_function__SceneUpdate__deletions(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::SceneEntityDeletion *>(untyped_value);
  item = value;
}

void resize_function__SceneUpdate__deletions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::SceneEntityDeletion> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneUpdate__entities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::SceneEntity> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneUpdate__entities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::SceneEntity> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneUpdate__entities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::SceneEntity> *>(untyped_member);
  return &member[index];
}

void fetch_function__SceneUpdate__entities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::SceneEntity *>(
    get_const_function__SceneUpdate__entities(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::SceneEntity *>(untyped_value);
  value = item;
}

void assign_function__SceneUpdate__entities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::SceneEntity *>(
    get_function__SceneUpdate__entities(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::SceneEntity *>(untyped_value);
  item = value;
}

void resize_function__SceneUpdate__entities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::SceneEntity> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SceneUpdate_message_member_array[2] = {
  {
    "deletions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::SceneEntityDeletion>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneUpdate, deletions),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneUpdate__deletions,  // size() function pointer
    get_const_function__SceneUpdate__deletions,  // get_const(index) function pointer
    get_function__SceneUpdate__deletions,  // get(index) function pointer
    fetch_function__SceneUpdate__deletions,  // fetch(index, &value) function pointer
    assign_function__SceneUpdate__deletions,  // assign(index, value) function pointer
    resize_function__SceneUpdate__deletions  // resize(index) function pointer
  },
  {
    "entities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::SceneEntity>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::SceneUpdate, entities),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneUpdate__entities,  // size() function pointer
    get_const_function__SceneUpdate__entities,  // get_const(index) function pointer
    get_function__SceneUpdate__entities,  // get(index) function pointer
    fetch_function__SceneUpdate__entities,  // fetch(index, &value) function pointer
    assign_function__SceneUpdate__entities,  // assign(index, value) function pointer
    resize_function__SceneUpdate__entities  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SceneUpdate_message_members = {
  "foxglove_msgs::msg",  // message namespace
  "SceneUpdate",  // message name
  2,  // number of fields
  sizeof(foxglove_msgs::msg::SceneUpdate),
  SceneUpdate_message_member_array,  // message members
  SceneUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  SceneUpdate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SceneUpdate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SceneUpdate_message_members,
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
get_message_type_support_handle<foxglove_msgs::msg::SceneUpdate>()
{
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::SceneUpdate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, foxglove_msgs, msg, SceneUpdate)() {
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::SceneUpdate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
