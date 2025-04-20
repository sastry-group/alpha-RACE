// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/GlobalEnableCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__GlobalEnableCmd __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__GlobalEnableCmd __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalEnableCmd_
{
  using Type = GlobalEnableCmd_<ContainerAllocator>;

  explicit GlobalEnableCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_enable = false;
      this->enable_joystick_limits = false;
      this->ecu_build_number = 0;
      this->rolling_counter = 0;
    }
  }

  explicit GlobalEnableCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_enable = false;
      this->enable_joystick_limits = false;
      this->ecu_build_number = 0;
      this->rolling_counter = 0;
    }
  }

  // field types and members
  using _global_enable_type =
    bool;
  _global_enable_type global_enable;
  using _enable_joystick_limits_type =
    bool;
  _enable_joystick_limits_type enable_joystick_limits;
  using _ecu_build_number_type =
    uint16_t;
  _ecu_build_number_type ecu_build_number;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;

  // setters for named parameter idiom
  Type & set__global_enable(
    const bool & _arg)
  {
    this->global_enable = _arg;
    return *this;
  }
  Type & set__enable_joystick_limits(
    const bool & _arg)
  {
    this->enable_joystick_limits = _arg;
    return *this;
  }
  Type & set__ecu_build_number(
    const uint16_t & _arg)
  {
    this->ecu_build_number = _arg;
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
    raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__GlobalEnableCmd
    std::shared_ptr<raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__GlobalEnableCmd
    std::shared_ptr<raptor_dbw_msgs::msg::GlobalEnableCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalEnableCmd_ & other) const
  {
    if (this->global_enable != other.global_enable) {
      return false;
    }
    if (this->enable_joystick_limits != other.enable_joystick_limits) {
      return false;
    }
    if (this->ecu_build_number != other.ecu_build_number) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalEnableCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalEnableCmd_

// alias to use template instance with default allocator
using GlobalEnableCmd =
  raptor_dbw_msgs::msg::GlobalEnableCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__STRUCT_HPP_
