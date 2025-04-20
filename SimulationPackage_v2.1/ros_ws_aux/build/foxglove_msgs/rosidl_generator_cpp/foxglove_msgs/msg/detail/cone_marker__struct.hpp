// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/ConeMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__STRUCT_HPP_

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
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'color'
#include "foxglove_msgs/msg/detail/color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__ConeMarker __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__ConeMarker __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConeMarker_
{
  using Type = ConeMarker_<ContainerAllocator>;

  explicit ConeMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    size(_init),
    color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bottom_scale = 0.0;
      this->top_scale = 0.0;
    }
  }

  explicit ConeMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    size(_alloc, _init),
    color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bottom_scale = 0.0;
      this->top_scale = 0.0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_type size;
  using _bottom_scale_type =
    double;
  _bottom_scale_type bottom_scale;
  using _top_scale_type =
    double;
  _top_scale_type top_scale;
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
  Type & set__size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__bottom_scale(
    const double & _arg)
  {
    this->bottom_scale = _arg;
    return *this;
  }
  Type & set__top_scale(
    const double & _arg)
  {
    this->top_scale = _arg;
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
    foxglove_msgs::msg::ConeMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::ConeMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::ConeMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::ConeMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::ConeMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::ConeMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::ConeMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::ConeMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::ConeMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::ConeMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__ConeMarker
    std::shared_ptr<foxglove_msgs::msg::ConeMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__ConeMarker
    std::shared_ptr<foxglove_msgs::msg::ConeMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConeMarker_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->bottom_scale != other.bottom_scale) {
      return false;
    }
    if (this->top_scale != other.top_scale) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConeMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConeMarker_

// alias to use template instance with default allocator
using ConeMarker =
  foxglove_msgs::msg::ConeMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CONE_MARKER__STRUCT_HPP_
