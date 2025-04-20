// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/TextMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'color'
#include "foxglove_msgs/msg/detail/color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__TextMarker __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__TextMarker __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TextMarker_
{
  using Type = TextMarker_<ContainerAllocator>;

  explicit TextMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->billboard = false;
      this->font_size = 0.0;
      this->scale_invariant = false;
      this->text = "";
    }
  }

  explicit TextMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    color(_alloc, _init),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->billboard = false;
      this->font_size = 0.0;
      this->scale_invariant = false;
      this->text = "";
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _billboard_type =
    bool;
  _billboard_type billboard;
  using _font_size_type =
    double;
  _font_size_type font_size;
  using _scale_invariant_type =
    bool;
  _scale_invariant_type scale_invariant;
  using _color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _color_type color;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__billboard(
    const bool & _arg)
  {
    this->billboard = _arg;
    return *this;
  }
  Type & set__font_size(
    const double & _arg)
  {
    this->font_size = _arg;
    return *this;
  }
  Type & set__scale_invariant(
    const bool & _arg)
  {
    this->scale_invariant = _arg;
    return *this;
  }
  Type & set__color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::TextMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::TextMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::TextMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::TextMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::TextMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::TextMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::TextMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::TextMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::TextMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::TextMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__TextMarker
    std::shared_ptr<foxglove_msgs::msg::TextMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__TextMarker
    std::shared_ptr<foxglove_msgs::msg::TextMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TextMarker_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->billboard != other.billboard) {
      return false;
    }
    if (this->font_size != other.font_size) {
      return false;
    }
    if (this->scale_invariant != other.scale_invariant) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const TextMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TextMarker_

// alias to use template instance with default allocator
using TextMarker =
  foxglove_msgs::msg::TextMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TEXT_MARKER__STRUCT_HPP_
