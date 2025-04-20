// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/TextAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'position'
#include "foxglove_msgs/msg/detail/point2__struct.hpp"
// Member 'text_color'
// Member 'background_color'
#include "foxglove_msgs/msg/detail/color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__TextAnnotation __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__TextAnnotation __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TextAnnotation_
{
  using Type = TextAnnotation_<ContainerAllocator>;

  explicit TextAnnotation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    position(_init),
    text_color(_init),
    background_color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->font_size = 0.0;
    }
  }

  explicit TextAnnotation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    position(_alloc, _init),
    text(_alloc),
    text_color(_alloc, _init),
    background_color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->font_size = 0.0;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _position_type =
    foxglove_msgs::msg::Point2_<ContainerAllocator>;
  _position_type position;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _font_size_type =
    double;
  _font_size_type font_size;
  using _text_color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _text_color_type text_color;
  using _background_color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _background_color_type background_color;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__position(
    const foxglove_msgs::msg::Point2_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__font_size(
    const double & _arg)
  {
    this->font_size = _arg;
    return *this;
  }
  Type & set__text_color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->text_color = _arg;
    return *this;
  }
  Type & set__background_color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->background_color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::TextAnnotation_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::TextAnnotation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__TextAnnotation
    std::shared_ptr<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__TextAnnotation
    std::shared_ptr<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TextAnnotation_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->font_size != other.font_size) {
      return false;
    }
    if (this->text_color != other.text_color) {
      return false;
    }
    if (this->background_color != other.background_color) {
      return false;
    }
    return true;
  }
  bool operator!=(const TextAnnotation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TextAnnotation_

// alias to use template instance with default allocator
using TextAnnotation =
  foxglove_msgs::msg::TextAnnotation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TEXT_ANNOTATION__STRUCT_HPP_
