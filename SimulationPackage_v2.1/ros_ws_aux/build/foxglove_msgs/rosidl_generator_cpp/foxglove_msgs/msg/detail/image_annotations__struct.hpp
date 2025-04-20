// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/ImageAnnotations.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'circles'
#include "foxglove_msgs/msg/detail/circle_annotation__struct.hpp"
// Member 'points'
#include "foxglove_msgs/msg/detail/points_annotation__struct.hpp"
// Member 'texts'
#include "foxglove_msgs/msg/detail/text_annotation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__ImageAnnotations __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__ImageAnnotations __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageAnnotations_
{
  using Type = ImageAnnotations_<ContainerAllocator>;

  explicit ImageAnnotations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ImageAnnotations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _circles_type =
    std::vector<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>>>;
  _circles_type circles;
  using _points_type =
    std::vector<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>>>;
  _points_type points;
  using _texts_type =
    std::vector<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>>>;
  _texts_type texts;

  // setters for named parameter idiom
  Type & set__circles(
    const std::vector<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CircleAnnotation_<ContainerAllocator>>> & _arg)
  {
    this->circles = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::PointsAnnotation_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__texts(
    const std::vector<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TextAnnotation_<ContainerAllocator>>> & _arg)
  {
    this->texts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__ImageAnnotations
    std::shared_ptr<foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__ImageAnnotations
    std::shared_ptr<foxglove_msgs::msg::ImageAnnotations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageAnnotations_ & other) const
  {
    if (this->circles != other.circles) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->texts != other.texts) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageAnnotations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageAnnotations_

// alias to use template instance with default allocator
using ImageAnnotations =
  foxglove_msgs::msg::ImageAnnotations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_ANNOTATIONS__STRUCT_HPP_
