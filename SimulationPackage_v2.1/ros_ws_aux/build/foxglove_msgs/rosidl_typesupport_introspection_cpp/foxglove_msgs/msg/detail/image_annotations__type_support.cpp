// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/ImageAnnotations.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "foxglove_msgs/msg/detail/image_annotations__struct.hpp"
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

void ImageAnnotations_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) foxglove_msgs::msg::ImageAnnotations(_init);
}

void ImageAnnotations_fini_function(void * message_memory)
{
  auto typed_message = static_cast<foxglove_msgs::msg::ImageAnnotations *>(message_memory);
  typed_message->~ImageAnnotations();
}

size_t size_function__ImageAnnotations__circles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::CircleAnnotation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImageAnnotations__circles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::CircleAnnotation> *>(untyped_member);
  return &member[index];
}

void * get_function__ImageAnnotations__circles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::CircleAnnotation> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImageAnnotations__circles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::CircleAnnotation *>(
    get_const_function__ImageAnnotations__circles(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::CircleAnnotation *>(untyped_value);
  value = item;
}

void assign_function__ImageAnnotations__circles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::CircleAnnotation *>(
    get_function__ImageAnnotations__circles(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::CircleAnnotation *>(untyped_value);
  item = value;
}

void resize_function__ImageAnnotations__circles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::CircleAnnotation> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImageAnnotations__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::PointsAnnotation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImageAnnotations__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::PointsAnnotation> *>(untyped_member);
  return &member[index];
}

void * get_function__ImageAnnotations__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::PointsAnnotation> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImageAnnotations__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::PointsAnnotation *>(
    get_const_function__ImageAnnotations__points(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::PointsAnnotation *>(untyped_value);
  value = item;
}

void assign_function__ImageAnnotations__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::PointsAnnotation *>(
    get_function__ImageAnnotations__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::PointsAnnotation *>(untyped_value);
  item = value;
}

void resize_function__ImageAnnotations__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::PointsAnnotation> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImageAnnotations__texts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<foxglove_msgs::msg::TextAnnotation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImageAnnotations__texts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<foxglove_msgs::msg::TextAnnotation> *>(untyped_member);
  return &member[index];
}

void * get_function__ImageAnnotations__texts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<foxglove_msgs::msg::TextAnnotation> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImageAnnotations__texts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const foxglove_msgs::msg::TextAnnotation *>(
    get_const_function__ImageAnnotations__texts(untyped_member, index));
  auto & value = *reinterpret_cast<foxglove_msgs::msg::TextAnnotation *>(untyped_value);
  value = item;
}

void assign_function__ImageAnnotations__texts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<foxglove_msgs::msg::TextAnnotation *>(
    get_function__ImageAnnotations__texts(untyped_member, index));
  const auto & value = *reinterpret_cast<const foxglove_msgs::msg::TextAnnotation *>(untyped_value);
  item = value;
}

void resize_function__ImageAnnotations__texts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<foxglove_msgs::msg::TextAnnotation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImageAnnotations_message_member_array[3] = {
  {
    "circles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::CircleAnnotation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::ImageAnnotations, circles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImageAnnotations__circles,  // size() function pointer
    get_const_function__ImageAnnotations__circles,  // get_const(index) function pointer
    get_function__ImageAnnotations__circles,  // get(index) function pointer
    fetch_function__ImageAnnotations__circles,  // fetch(index, &value) function pointer
    assign_function__ImageAnnotations__circles,  // assign(index, value) function pointer
    resize_function__ImageAnnotations__circles  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::PointsAnnotation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::ImageAnnotations, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImageAnnotations__points,  // size() function pointer
    get_const_function__ImageAnnotations__points,  // get_const(index) function pointer
    get_function__ImageAnnotations__points,  // get(index) function pointer
    fetch_function__ImageAnnotations__points,  // fetch(index, &value) function pointer
    assign_function__ImageAnnotations__points,  // assign(index, value) function pointer
    resize_function__ImageAnnotations__points  // resize(index) function pointer
  },
  {
    "texts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<foxglove_msgs::msg::TextAnnotation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs::msg::ImageAnnotations, texts),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImageAnnotations__texts,  // size() function pointer
    get_const_function__ImageAnnotations__texts,  // get_const(index) function pointer
    get_function__ImageAnnotations__texts,  // get(index) function pointer
    fetch_function__ImageAnnotations__texts,  // fetch(index, &value) function pointer
    assign_function__ImageAnnotations__texts,  // assign(index, value) function pointer
    resize_function__ImageAnnotations__texts  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImageAnnotations_message_members = {
  "foxglove_msgs::msg",  // message namespace
  "ImageAnnotations",  // message name
  3,  // number of fields
  sizeof(foxglove_msgs::msg::ImageAnnotations),
  ImageAnnotations_message_member_array,  // message members
  ImageAnnotations_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageAnnotations_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImageAnnotations_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImageAnnotations_message_members,
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
get_message_type_support_handle<foxglove_msgs::msg::ImageAnnotations>()
{
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::ImageAnnotations_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, foxglove_msgs, msg, ImageAnnotations)() {
  return &::foxglove_msgs::msg::rosidl_typesupport_introspection_cpp::ImageAnnotations_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
