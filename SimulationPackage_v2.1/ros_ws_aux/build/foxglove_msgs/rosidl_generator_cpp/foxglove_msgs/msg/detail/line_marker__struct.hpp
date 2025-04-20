// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/LineMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__LINE_MARKER__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__LINE_MARKER__STRUCT_HPP_

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
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'color'
// Member 'colors'
#include "foxglove_msgs/msg/detail/color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__LineMarker __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__LineMarker __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LineMarker_
{
  using Type = LineMarker_<ContainerAllocator>;

  explicit LineMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->thickness = 0.0;
      this->scale_invariant = false;
    }
  }

  explicit LineMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->thickness = 0.0;
      this->scale_invariant = false;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _thickness_type =
    double;
  _thickness_type thickness;
  using _scale_invariant_type =
    bool;
  _scale_invariant_type scale_invariant;
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;
  using _color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _color_type color;
  using _colors_type =
    std::vector<foxglove_msgs::msg::Color_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::Color_<ContainerAllocator>>>;
  _colors_type colors;
  using _indices_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _indices_type indices;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__thickness(
    const double & _arg)
  {
    this->thickness = _arg;
    return *this;
  }
  Type & set__scale_invariant(
    const bool & _arg)
  {
    this->scale_invariant = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__colors(
    const std::vector<foxglove_msgs::msg::Color_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::Color_<ContainerAllocator>>> & _arg)
  {
    this->colors = _arg;
    return *this;
  }
  Type & set__indices(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->indices = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LINE_STRIP =
    0u;
  static constexpr uint8_t LINE_LOOP =
    1u;
  static constexpr uint8_t LINE_LIST =
    2u;

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::LineMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::LineMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::LineMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::LineMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::LineMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::LineMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::LineMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::LineMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::LineMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::LineMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__LineMarker
    std::shared_ptr<foxglove_msgs::msg::LineMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__LineMarker
    std::shared_ptr<foxglove_msgs::msg::LineMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LineMarker_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->thickness != other.thickness) {
      return false;
    }
    if (this->scale_invariant != other.scale_invariant) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->colors != other.colors) {
      return false;
    }
    if (this->indices != other.indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const LineMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LineMarker_

// alias to use template instance with default allocator
using LineMarker =
  foxglove_msgs::msg::LineMarker_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LineMarker_<ContainerAllocator>::LINE_STRIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LineMarker_<ContainerAllocator>::LINE_LOOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LineMarker_<ContainerAllocator>::LINE_LIST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__LINE_MARKER__STRUCT_HPP_
