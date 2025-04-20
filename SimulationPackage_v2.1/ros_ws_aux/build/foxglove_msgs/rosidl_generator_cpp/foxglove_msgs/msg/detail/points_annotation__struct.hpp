// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/PointsAnnotation.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__STRUCT_HPP_

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
// Member 'points'
#include "foxglove_msgs/msg/detail/point2__struct.hpp"
// Member 'outline_color'
// Member 'outline_colors'
// Member 'fill_color'
#include "foxglove_msgs/msg/detail/color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__PointsAnnotation __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__PointsAnnotation __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointsAnnotation_
{
  using Type = PointsAnnotation_<ContainerAllocator>;

  explicit PointsAnnotation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    outline_color(_init),
    fill_color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->thickness = 0.0;
    }
  }

  explicit PointsAnnotation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    outline_color(_alloc, _init),
    fill_color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->thickness = 0.0;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _type_type =
    uint8_t;
  _type_type type;
  using _points_type =
    std::vector<foxglove_msgs::msg::Point2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::Point2_<ContainerAllocator>>>;
  _points_type points;
  using _outline_color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _outline_color_type outline_color;
  using _outline_colors_type =
    std::vector<foxglove_msgs::msg::Color_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::Color_<ContainerAllocator>>>;
  _outline_colors_type outline_colors;
  using _fill_color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _fill_color_type fill_color;
  using _thickness_type =
    double;
  _thickness_type thickness;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<foxglove_msgs::msg::Point2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::Point2_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__outline_color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->outline_color = _arg;
    return *this;
  }
  Type & set__outline_colors(
    const std::vector<foxglove_msgs::msg::Color_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::Color_<ContainerAllocator>>> & _arg)
  {
    this->outline_colors = _arg;
    return *this;
  }
  Type & set__fill_color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->fill_color = _arg;
    return *this;
  }
  Type & set__thickness(
    const double & _arg)
  {
    this->thickness = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t POINTS =
    1u;
  static constexpr uint8_t LINE_LOOP =
    2u;
  static constexpr uint8_t LINE_STRIP =
    3u;
  static constexpr uint8_t LINE_LIST =
    4u;

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__PointsAnnotation
    std::shared_ptr<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__PointsAnnotation
    std::shared_ptr<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointsAnnotation_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->outline_color != other.outline_color) {
      return false;
    }
    if (this->outline_colors != other.outline_colors) {
      return false;
    }
    if (this->fill_color != other.fill_color) {
      return false;
    }
    if (this->thickness != other.thickness) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointsAnnotation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointsAnnotation_

// alias to use template instance with default allocator
using PointsAnnotation =
  foxglove_msgs::msg::PointsAnnotation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointsAnnotation_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointsAnnotation_<ContainerAllocator>::POINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointsAnnotation_<ContainerAllocator>::LINE_LOOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointsAnnotation_<ContainerAllocator>::LINE_STRIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PointsAnnotation_<ContainerAllocator>::LINE_LIST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__POINTS_ANNOTATION__STRUCT_HPP_
