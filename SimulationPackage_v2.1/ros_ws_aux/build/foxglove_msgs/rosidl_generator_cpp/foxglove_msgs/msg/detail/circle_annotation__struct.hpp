// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/CircleAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__STRUCT_HPP_

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
// Member 'fill_color'
// Member 'outline_color'
#include "foxglove_msgs/msg/detail/color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__CircleAnnotation __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__CircleAnnotation __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CircleAnnotation_
{
  using Type = CircleAnnotation_<ContainerAllocator>;

  explicit CircleAnnotation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    position(_init),
    fill_color(_init),
    outline_color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->diameter = 0.0;
      this->thickness = 0.0;
    }
  }

  explicit CircleAnnotation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    position(_alloc, _init),
    fill_color(_alloc, _init),
    outline_color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->diameter = 0.0;
      this->thickness = 0.0;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _position_type =
    foxglove_msgs::msg::Point2_<ContainerAllocator>;
  _position_type position;
  using _diameter_type =
    double;
  _diameter_type diameter;
  using _thickness_type =
    double;
  _thickness_type thickness;
  using _fill_color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _fill_color_type fill_color;
  using _outline_color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _outline_color_type outline_color;

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
  Type & set__diameter(
    const double & _arg)
  {
    this->diameter = _arg;
    return *this;
  }
  Type & set__thickness(
    const double & _arg)
  {
    this->thickness = _arg;
    return *this;
  }
  Type & set__fill_color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->fill_color = _arg;
    return *this;
  }
  Type & set__outline_color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->outline_color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__CircleAnnotation
    std::shared_ptr<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__CircleAnnotation
    std::shared_ptr<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CircleAnnotation_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->diameter != other.diameter) {
      return false;
    }
    if (this->thickness != other.thickness) {
      return false;
    }
    if (this->fill_color != other.fill_color) {
      return false;
    }
    if (this->outline_color != other.outline_color) {
      return false;
    }
    return true;
  }
  bool operator!=(const CircleAnnotation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CircleAnnotation_

// alias to use template instance with default allocator
using CircleAnnotation =
  foxglove_msgs::msg::CircleAnnotation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CIRCLE_ANNOTATION__STRUCT_HPP_
