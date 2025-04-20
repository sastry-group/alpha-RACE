// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'state'
#include "raptor_dbw_msgs/msg/detail/gear__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__GearReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__GearReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GearReport_
{
  using Type = GearReport_<ContainerAllocator>;

  explicit GearReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reject = false;
      this->driver_activity = false;
      this->enabled = false;
      this->gear_select_system_fault = false;
    }
  }

  explicit GearReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reject = false;
      this->driver_activity = false;
      this->enabled = false;
      this->gear_select_system_fault = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    raptor_dbw_msgs::msg::Gear_<ContainerAllocator>;
  _state_type state;
  using _reject_type =
    bool;
  _reject_type reject;
  using _driver_activity_type =
    bool;
  _driver_activity_type driver_activity;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _gear_select_system_fault_type =
    bool;
  _gear_select_system_fault_type gear_select_system_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const raptor_dbw_msgs::msg::Gear_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__reject(
    const bool & _arg)
  {
    this->reject = _arg;
    return *this;
  }
  Type & set__driver_activity(
    const bool & _arg)
  {
    this->driver_activity = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__gear_select_system_fault(
    const bool & _arg)
  {
    this->gear_select_system_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::GearReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::GearReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::GearReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::GearReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::GearReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::GearReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::GearReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::GearReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::GearReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::GearReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__GearReport
    std::shared_ptr<raptor_dbw_msgs::msg::GearReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__GearReport
    std::shared_ptr<raptor_dbw_msgs::msg::GearReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GearReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->reject != other.reject) {
      return false;
    }
    if (this->driver_activity != other.driver_activity) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->gear_select_system_fault != other.gear_select_system_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const GearReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GearReport_

// alias to use template instance with default allocator
using GearReport =
  raptor_dbw_msgs::msg::GearReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_HPP_
