// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__TwistCmd __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__TwistCmd __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwistCmd_
{
  using Type = TwistCmd_<ContainerAllocator>;

  explicit TwistCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_limit = 0.0f;
      this->decel_limit = 0.0f;
    }
  }

  explicit TwistCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_limit = 0.0f;
      this->decel_limit = 0.0f;
    }
  }

  // field types and members
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _accel_limit_type =
    float;
  _accel_limit_type accel_limit;
  using _decel_limit_type =
    float;
  _decel_limit_type decel_limit;

  // setters for named parameter idiom
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__accel_limit(
    const float & _arg)
  {
    this->accel_limit = _arg;
    return *this;
  }
  Type & set__decel_limit(
    const float & _arg)
  {
    this->decel_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__TwistCmd
    std::shared_ptr<raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__TwistCmd
    std::shared_ptr<raptor_dbw_msgs::msg::TwistCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwistCmd_ & other) const
  {
    if (this->twist != other.twist) {
      return false;
    }
    if (this->accel_limit != other.accel_limit) {
      return false;
    }
    if (this->decel_limit != other.decel_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwistCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwistCmd_

// alias to use template instance with default allocator
using TwistCmd =
  raptor_dbw_msgs::msg::TwistCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_HPP_
