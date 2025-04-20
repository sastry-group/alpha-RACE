// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/ArrowMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__ARROW_MARKER__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__ARROW_MARKER__STRUCT_HPP_

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
# define DEPRECATED__foxglove_msgs__msg__ArrowMarker __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__ArrowMarker __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArrowMarker_
{
  using Type = ArrowMarker_<ContainerAllocator>;

  explicit ArrowMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->shaft_diameter = 0.0;
      this->head_diameter = 0.0;
      this->head_length = 0.0;
    }
  }

  explicit ArrowMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->shaft_diameter = 0.0;
      this->head_diameter = 0.0;
      this->head_length = 0.0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _length_type =
    double;
  _length_type length;
  using _shaft_diameter_type =
    double;
  _shaft_diameter_type shaft_diameter;
  using _head_diameter_type =
    double;
  _head_diameter_type head_diameter;
  using _head_length_type =
    double;
  _head_length_type head_length;
  using _color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__shaft_diameter(
    const double & _arg)
  {
    this->shaft_diameter = _arg;
    return *this;
  }
  Type & set__head_diameter(
    const double & _arg)
  {
    this->head_diameter = _arg;
    return *this;
  }
  Type & set__head_length(
    const double & _arg)
  {
    this->head_length = _arg;
    return *this;
  }
  Type & set__color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::ArrowMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::ArrowMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__ArrowMarker
    std::shared_ptr<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__ArrowMarker
    std::shared_ptr<foxglove_msgs::msg::ArrowMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArrowMarker_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->shaft_diameter != other.shaft_diameter) {
      return false;
    }
    if (this->head_diameter != other.head_diameter) {
      return false;
    }
    if (this->head_length != other.head_length) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArrowMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArrowMarker_

// alias to use template instance with default allocator
using ArrowMarker =
  foxglove_msgs::msg::ArrowMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__ARROW_MARKER__STRUCT_HPP_
