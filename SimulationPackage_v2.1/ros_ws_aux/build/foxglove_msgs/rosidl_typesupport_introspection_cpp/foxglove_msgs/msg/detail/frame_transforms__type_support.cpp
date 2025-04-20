// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/FrameTransforms.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "foxglove_msgs/msg/detail/frame_transforms__struct.hpp"
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

void FrameTransforms_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) foxglove_msgs::msg::FrameTransforms(_init);
}

void FrameTransforms_fini_function(void * message_memory)
{
  auto typed_message = static_cast<foxglove_msgs::msg::FrameTransforms *>(message_memory);
  typed_message->~FrameTransforms();
}

size_t size_function__FrameTransforms__transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::FrameTransform> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FrameTransforms__transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::FrameTransform> *>(untyped_member);
  return &member[index];
}

void * get_function__FrameTransforms__transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::FrameTransform> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrameTransforms__transforms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::FrameTransform *>(
    get_const_function__FrameTransforms__transforms(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::FrameTransform *>(untyped_value);
  value = item;
}

void assign_function__FrameTransforms__transforms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::FrameTransform *>(
    get_function__FrameTransforms__transforms(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::FrameTransform *>(untyped_value);
  item = value;
}

void resize_function__FrameTransforms__transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::FrameTransform> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FrameTransforms_message_member_array[1] = {
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::FrameTransform>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::FrameTransforms, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrameTransforms__transforms,  // size() function pointer
    get_const_function__FrameTransforms__transforms,  // get_const(index) function pointer
    get_function__FrameTransforms__transforms,  // get(index) function pointer
    fetch_function__FrameTransforms__transforms,  // fetch(index, &value) function pointer
    assign_function__FrameTransforms__transforms,  // assign(index, value) function pointer
    resize_function__FrameTransforms__transforms  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FrameTransforms_message_members = {
  "foxglove_msgs::msg",  // message namespace
  "FrameTransforms",  // message name
  1,  // number of fields
  sizeof(foxglove_msgs::msg::FrameTransforms),
  FrameTransforms_message_member_array,  // message members
  FrameTransforms_init_function,  // function to initialize message memory (memory has to be allocated)
  FrameTransforms_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FrameTransforms_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FrameTransforms_message_members,
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
get_message_type_support_handle<foxglove_msgs::msg::FrameTransforms>()
{
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::FrameTransforms_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, foxglove_msgs, msg, FrameTransforms)() {
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::FrameTransforms_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
