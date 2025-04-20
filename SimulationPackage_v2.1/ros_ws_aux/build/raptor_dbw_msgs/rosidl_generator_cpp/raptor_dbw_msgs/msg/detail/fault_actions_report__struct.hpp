// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__FaultActionsReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__FaultActionsReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaultActionsReport_
{
  using Type = FaultActionsReport_<ContainerAllocator>;

  explicit FaultActionsReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autonomous_disabled_no_brakes = false;
      this->autonomous_disabled_apply_brakes = false;
      this->can_gateway_disabled = false;
      this->inverter_contactor_disabled = false;
      this->prevent_enter_autonomous_mode = false;
      this->warn_driver_only = false;
    }
  }

  explicit FaultActionsReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autonomous_disabled_no_brakes = false;
      this->autonomous_disabled_apply_brakes = false;
      this->can_gateway_disabled = false;
      this->inverter_contactor_disabled = false;
      this->prevent_enter_autonomous_mode = false;
      this->warn_driver_only = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _autonomous_disabled_no_brakes_type =
    bool;
  _autonomous_disabled_no_brakes_type autonomous_disabled_no_brakes;
  using _autonomous_disabled_apply_brakes_type =
    bool;
  _autonomous_disabled_apply_brakes_type autonomous_disabled_apply_brakes;
  using _can_gateway_disabled_type =
    bool;
  _can_gateway_disabled_type can_gateway_disabled;
  using _inverter_contactor_disabled_type =
    bool;
  _inverter_contactor_disabled_type inverter_contactor_disabled;
  using _prevent_enter_autonomous_mode_type =
    bool;
  _prevent_enter_autonomous_mode_type prevent_enter_autonomous_mode;
  using _warn_driver_only_type =
    bool;
  _warn_driver_only_type warn_driver_only;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__autonomous_disabled_no_brakes(
    const bool & _arg)
  {
    this->autonomous_disabled_no_brakes = _arg;
    return *this;
  }
  Type & set__autonomous_disabled_apply_brakes(
    const bool & _arg)
  {
    this->autonomous_disabled_apply_brakes = _arg;
    return *this;
  }
  Type & set__can_gateway_disabled(
    const bool & _arg)
  {
    this->can_gateway_disabled = _arg;
    return *this;
  }
  Type & set__inverter_contactor_disabled(
    const bool & _arg)
  {
    this->inverter_contactor_disabled = _arg;
    return *this;
  }
  Type & set__prevent_enter_autonomous_mode(
    const bool & _arg)
  {
    this->prevent_enter_autonomous_mode = _arg;
    return *this;
  }
  Type & set__warn_driver_only(
    const bool & _arg)
  {
    this->warn_driver_only = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__FaultActionsReport
    std::shared_ptr<raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__FaultActionsReport
    std::shared_ptr<raptor_dbw_msgs::msg::FaultActionsReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaultActionsReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->autonomous_disabled_no_brakes != other.autonomous_disabled_no_brakes) {
      return false;
    }
    if (this->autonomous_disabled_apply_brakes != other.autonomous_disabled_apply_brakes) {
      return false;
    }
    if (this->can_gateway_disabled != other.can_gateway_disabled) {
      return false;
    }
    if (this->inverter_contactor_disabled != other.inverter_contactor_disabled) {
      return false;
    }
    if (this->prevent_enter_autonomous_mode != other.prevent_enter_autonomous_mode) {
      return false;
    }
    if (this->warn_driver_only != other.warn_driver_only) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaultActionsReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaultActionsReport_

// alias to use template instance with default allocator
using FaultActionsReport =
  raptor_dbw_msgs::msg::FaultActionsReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__STRUCT_HPP_
