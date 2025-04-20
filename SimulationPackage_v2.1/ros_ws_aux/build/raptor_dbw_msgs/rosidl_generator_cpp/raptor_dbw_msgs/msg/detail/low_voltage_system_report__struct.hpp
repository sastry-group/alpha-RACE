// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/LowVoltageSystemReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__LowVoltageSystemReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__LowVoltageSystemReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowVoltageSystemReport_
{
  using Type = LowVoltageSystemReport_<ContainerAllocator>;

  explicit LowVoltageSystemReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dbw_battery_volts = 0.0f;
      this->vehicle_battery_volts = 0.0f;
      this->vehicle_battery_current = 0.0f;
      this->vehicle_alternator_current = 0.0f;
      this->dcdc_current = 0.0f;
      this->alternator_current = 0.0f;
      this->aux_inverter_contactor = false;
    }
  }

  explicit LowVoltageSystemReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dbw_battery_volts = 0.0f;
      this->vehicle_battery_volts = 0.0f;
      this->vehicle_battery_current = 0.0f;
      this->vehicle_alternator_current = 0.0f;
      this->dcdc_current = 0.0f;
      this->alternator_current = 0.0f;
      this->aux_inverter_contactor = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dbw_battery_volts_type =
    float;
  _dbw_battery_volts_type dbw_battery_volts;
  using _vehicle_battery_volts_type =
    float;
  _vehicle_battery_volts_type vehicle_battery_volts;
  using _vehicle_battery_current_type =
    float;
  _vehicle_battery_current_type vehicle_battery_current;
  using _vehicle_alternator_current_type =
    float;
  _vehicle_alternator_current_type vehicle_alternator_current;
  using _dcdc_current_type =
    float;
  _dcdc_current_type dcdc_current;
  using _alternator_current_type =
    float;
  _alternator_current_type alternator_current;
  using _aux_inverter_contactor_type =
    bool;
  _aux_inverter_contactor_type aux_inverter_contactor;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dbw_battery_volts(
    const float & _arg)
  {
    this->dbw_battery_volts = _arg;
    return *this;
  }
  Type & set__vehicle_battery_volts(
    const float & _arg)
  {
    this->vehicle_battery_volts = _arg;
    return *this;
  }
  Type & set__vehicle_battery_current(
    const float & _arg)
  {
    this->vehicle_battery_current = _arg;
    return *this;
  }
  Type & set__vehicle_alternator_current(
    const float & _arg)
  {
    this->vehicle_alternator_current = _arg;
    return *this;
  }
  Type & set__dcdc_current(
    const float & _arg)
  {
    this->dcdc_current = _arg;
    return *this;
  }
  Type & set__alternator_current(
    const float & _arg)
  {
    this->alternator_current = _arg;
    return *this;
  }
  Type & set__aux_inverter_contactor(
    const bool & _arg)
  {
    this->aux_inverter_contactor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__LowVoltageSystemReport
    std::shared_ptr<raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__LowVoltageSystemReport
    std::shared_ptr<raptor_dbw_msgs::msg::LowVoltageSystemReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowVoltageSystemReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dbw_battery_volts != other.dbw_battery_volts) {
      return false;
    }
    if (this->vehicle_battery_volts != other.vehicle_battery_volts) {
      return false;
    }
    if (this->vehicle_battery_current != other.vehicle_battery_current) {
      return false;
    }
    if (this->vehicle_alternator_current != other.vehicle_alternator_current) {
      return false;
    }
    if (this->dcdc_current != other.dcdc_current) {
      return false;
    }
    if (this->alternator_current != other.alternator_current) {
      return false;
    }
    if (this->aux_inverter_contactor != other.aux_inverter_contactor) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowVoltageSystemReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowVoltageSystemReport_

// alias to use template instance with default allocator
using LowVoltageSystemReport =
  raptor_dbw_msgs::msg::LowVoltageSystemReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__STRUCT_HPP_
