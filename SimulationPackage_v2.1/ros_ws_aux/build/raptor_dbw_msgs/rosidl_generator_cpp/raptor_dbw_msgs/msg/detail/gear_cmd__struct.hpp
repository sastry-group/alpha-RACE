// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/GearCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cmd'
#include "raptor_dbw_msgs/msg/detail/gear__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__GearCmd __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__GearCmd __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GearCmd_
{
  using Type = GearCmd_<ContainerAllocator>;

  explicit GearCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->rolling_counter = 0;
    }
  }

  explicit GearCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->rolling_counter = 0;
    }
  }

  // field types and members
  using _cmd_type =
    raptor_dbw_msgs::msg::Gear_<ContainerAllocator>;
  _cmd_type cmd;
  using _enable_type =
    bool;
  _enable_type enable;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;

  // setters for named parameter idiom
  Type & set__cmd(
    const raptor_dbw_msgs::msg::Gear_<ContainerAllocator> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__rolling_counter(
    const uint8_t & _arg)
  {
    this->rolling_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__GearCmd
    std::shared_ptr<raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__GearCmd
    std::shared_ptr<raptor_dbw_msgs::msg::GearCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GearCmd_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const GearCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GearCmd_

// alias to use template instance with default allocator
using GearCmd =
  raptor_dbw_msgs::msg::GearCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_HPP_
