// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__COLOR__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__Color __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__Color __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Color_
{
  using Type = Color_<ContainerAllocator>;

  explicit Color_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0.0;
      this->g = 0.0;
      this->b = 0.0;
      this->a = 0.0;
    }
  }

  explicit Color_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0.0;
      this->g = 0.0;
      this->b = 0.0;
      this->a = 0.0;
    }
  }

  // field types and members
  using _r_type =
    double;
  _r_type r;
  using _g_type =
    double;
  _g_type g;
  using _b_type =
    double;
  _b_type b;
  using _a_type =
    double;
  _a_type a;

  // setters for named parameter idiom
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const double & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::Color_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::Color_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::Color_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::Color_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::Color_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::Color_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::Color_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::Color_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::Color_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::Color_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__Color
    std::shared_ptr<foxglove_msgs::msg::Color_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__Color
    std::shared_ptr<foxglove_msgs::msg::Color_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Color_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    return true;
  }
  bool operator!=(const Color_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Color_

// alias to use template instance with default allocator
using Color =
  foxglove_msgs::msg::Color_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__COLOR__STRUCT_HPP_
