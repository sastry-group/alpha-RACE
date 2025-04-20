// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__MiscReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__MiscReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MiscReport_
{
  using Type = MiscReport_<ContainerAllocator>;

  explicit MiscReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fuel_level = 0.0f;
      this->drive_by_wire_enabled = false;
      this->vehicle_speed = 0.0f;
      this->software_build_number = 0;
      this->general_actuator_fault = false;
      this->by_wire_ready = false;
      this->general_driver_activity = false;
      this->comms_fault = false;
      this->ambient_temp = 0.0f;
    }
  }

  explicit MiscReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fuel_level = 0.0f;
      this->drive_by_wire_enabled = false;
      this->vehicle_speed = 0.0f;
      this->software_build_number = 0;
      this->general_actuator_fault = false;
      this->by_wire_ready = false;
      this->general_driver_activity = false;
      this->comms_fault = false;
      this->ambient_temp = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fuel_level_type =
    float;
  _fuel_level_type fuel_level;
  using _drive_by_wire_enabled_type =
    bool;
  _drive_by_wire_enabled_type drive_by_wire_enabled;
  using _vehicle_speed_type =
    float;
  _vehicle_speed_type vehicle_speed;
  using _software_build_number_type =
    uint16_t;
  _software_build_number_type software_build_number;
  using _general_actuator_fault_type =
    bool;
  _general_actuator_fault_type general_actuator_fault;
  using _by_wire_ready_type =
    bool;
  _by_wire_ready_type by_wire_ready;
  using _general_driver_activity_type =
    bool;
  _general_driver_activity_type general_driver_activity;
  using _comms_fault_type =
    bool;
  _comms_fault_type comms_fault;
  using _ambient_temp_type =
    float;
  _ambient_temp_type ambient_temp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fuel_level(
    const float & _arg)
  {
    this->fuel_level = _arg;
    return *this;
  }
  Type & set__drive_by_wire_enabled(
    const bool & _arg)
  {
    this->drive_by_wire_enabled = _arg;
    return *this;
  }
  Type & set__vehicle_speed(
    const float & _arg)
  {
    this->vehicle_speed = _arg;
    return *this;
  }
  Type & set__software_build_number(
    const uint16_t & _arg)
  {
    this->software_build_number = _arg;
    return *this;
  }
  Type & set__general_actuator_fault(
    const bool & _arg)
  {
    this->general_actuator_fault = _arg;
    return *this;
  }
  Type & set__by_wire_ready(
    const bool & _arg)
  {
    this->by_wire_ready = _arg;
    return *this;
  }
  Type & set__general_driver_activity(
    const bool & _arg)
  {
    this->general_driver_activity = _arg;
    return *this;
  }
  Type & set__comms_fault(
    const bool & _arg)
  {
    this->comms_fault = _arg;
    return *this;
  }
  Type & set__ambient_temp(
    const float & _arg)
  {
    this->ambient_temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__MiscReport
    std::shared_ptr<raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__MiscReport
    std::shared_ptr<raptor_dbw_msgs::msg::MiscReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MiscReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fuel_level != other.fuel_level) {
      return false;
    }
    if (this->drive_by_wire_enabled != other.drive_by_wire_enabled) {
      return false;
    }
    if (this->vehicle_speed != other.vehicle_speed) {
      return false;
    }
    if (this->software_build_number != other.software_build_number) {
      return false;
    }
    if (this->general_actuator_fault != other.general_actuator_fault) {
      return false;
    }
    if (this->by_wire_ready != other.by_wire_ready) {
      return false;
    }
    if (this->general_driver_activity != other.general_driver_activity) {
      return false;
    }
    if (this->comms_fault != other.comms_fault) {
      return false;
    }
    if (this->ambient_temp != other.ambient_temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MiscReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MiscReport_

// alias to use template instance with default allocator
using MiscReport =
  raptor_dbw_msgs::msg::MiscReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_HPP_
