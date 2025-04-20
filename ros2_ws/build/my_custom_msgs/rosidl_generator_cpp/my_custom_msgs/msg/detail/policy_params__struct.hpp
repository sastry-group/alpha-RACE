// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_msgs:msg/PolicyParams.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__STRUCT_HPP_
#define MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_msgs__msg__PolicyParams __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_msgs__msg__PolicyParams __declspec(deprecated)
#endif

namespace my_custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PolicyParams_
{
  using Type = PolicyParams_<ContainerAllocator>;

  explicit PolicyParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sf1 = 0.0f;
      this->sf2 = 0.0f;
      this->speed_factor = 0.0f;
      this->lookahead_factor = 0.0f;
      this->blocking_factor = 0.0f;
    }
  }

  explicit PolicyParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sf1 = 0.0f;
      this->sf2 = 0.0f;
      this->speed_factor = 0.0f;
      this->lookahead_factor = 0.0f;
      this->blocking_factor = 0.0f;
    }
  }

  // field types and members
  using _sf1_type =
    float;
  _sf1_type sf1;
  using _sf2_type =
    float;
  _sf2_type sf2;
  using _speed_factor_type =
    float;
  _speed_factor_type speed_factor;
  using _lookahead_factor_type =
    float;
  _lookahead_factor_type lookahead_factor;
  using _blocking_factor_type =
    float;
  _blocking_factor_type blocking_factor;

  // setters for named parameter idiom
  Type & set__sf1(
    const float & _arg)
  {
    this->sf1 = _arg;
    return *this;
  }
  Type & set__sf2(
    const float & _arg)
  {
    this->sf2 = _arg;
    return *this;
  }
  Type & set__speed_factor(
    const float & _arg)
  {
    this->speed_factor = _arg;
    return *this;
  }
  Type & set__lookahead_factor(
    const float & _arg)
  {
    this->lookahead_factor = _arg;
    return *this;
  }
  Type & set__blocking_factor(
    const float & _arg)
  {
    this->blocking_factor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_msgs::msg::PolicyParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_msgs::msg::PolicyParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_msgs::msg::PolicyParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_msgs::msg::PolicyParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_msgs::msg::PolicyParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_msgs::msg::PolicyParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_msgs::msg::PolicyParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_msgs::msg::PolicyParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_msgs::msg::PolicyParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_msgs::msg::PolicyParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_msgs__msg__PolicyParams
    std::shared_ptr<my_custom_msgs::msg::PolicyParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_msgs__msg__PolicyParams
    std::shared_ptr<my_custom_msgs::msg::PolicyParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PolicyParams_ & other) const
  {
    if (this->sf1 != other.sf1) {
      return false;
    }
    if (this->sf2 != other.sf2) {
      return false;
    }
    if (this->speed_factor != other.speed_factor) {
      return false;
    }
    if (this->lookahead_factor != other.lookahead_factor) {
      return false;
    }
    if (this->blocking_factor != other.blocking_factor) {
      return false;
    }
    return true;
  }
  bool operator!=(const PolicyParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PolicyParams_

// alias to use template instance with default allocator
using PolicyParams =
  my_custom_msgs::msg::PolicyParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_custom_msgs

#endif  // MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__STRUCT_HPP_
