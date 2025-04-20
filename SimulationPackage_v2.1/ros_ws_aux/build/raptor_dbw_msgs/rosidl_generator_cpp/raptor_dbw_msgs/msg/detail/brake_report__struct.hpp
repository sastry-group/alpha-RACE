// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_HPP_

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
// Member 'parking_brake'
#include "raptor_dbw_msgs/msg/detail/parking_brake__struct.hpp"
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__BrakeReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__BrakeReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeReport_
{
  using Type = BrakeReport_<ContainerAllocator>;

  explicit BrakeReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    parking_brake(_init),
    control_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_position = 0.0f;
      this->pedal_output = 0.0f;
      this->enabled = false;
      this->driver_activity = false;
      this->fault_brake_system = false;
      this->fault_ch1 = false;
      this->fault_ch2 = false;
      this->rolling_counter = 0;
      this->brake_torque_actual = 0.0f;
      this->intervention_active = false;
      this->intervention_ready = false;
    }
  }

  explicit BrakeReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    parking_brake(_alloc, _init),
    control_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_position = 0.0f;
      this->pedal_output = 0.0f;
      this->enabled = false;
      this->driver_activity = false;
      this->fault_brake_system = false;
      this->fault_ch1 = false;
      this->fault_ch2 = false;
      this->rolling_counter = 0;
      this->brake_torque_actual = 0.0f;
      this->intervention_active = false;
      this->intervention_ready = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pedal_position_type =
    float;
  _pedal_position_type pedal_position;
  using _pedal_output_type =
    float;
  _pedal_output_type pedal_output;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _driver_activity_type =
    bool;
  _driver_activity_type driver_activity;
  using _fault_brake_system_type =
    bool;
  _fault_brake_system_type fault_brake_system;
  using _fault_ch1_type =
    bool;
  _fault_ch1_type fault_ch1;
  using _fault_ch2_type =
    bool;
  _fault_ch2_type fault_ch2;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;
  using _brake_torque_actual_type =
    float;
  _brake_torque_actual_type brake_torque_actual;
  using _intervention_active_type =
    bool;
  _intervention_active_type intervention_active;
  using _intervention_ready_type =
    bool;
  _intervention_ready_type intervention_ready;
  using _parking_brake_type =
    raptor_dbw_msgs::msg::ParkingBrake_<ContainerAllocator>;
  _parking_brake_type parking_brake;
  using _control_type_type =
    raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator>;
  _control_type_type control_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pedal_position(
    const float & _arg)
  {
    this->pedal_position = _arg;
    return *this;
  }
  Type & set__pedal_output(
    const float & _arg)
  {
    this->pedal_output = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__driver_activity(
    const bool & _arg)
  {
    this->driver_activity = _arg;
    return *this;
  }
  Type & set__fault_brake_system(
    const bool & _arg)
  {
    this->fault_brake_system = _arg;
    return *this;
  }
  Type & set__fault_ch1(
    const bool & _arg)
  {
    this->fault_ch1 = _arg;
    return *this;
  }
  Type & set__fault_ch2(
    const bool & _arg)
  {
    this->fault_ch2 = _arg;
    return *this;
  }
  Type & set__rolling_counter(
    const uint8_t & _arg)
  {
    this->rolling_counter = _arg;
    return *this;
  }
  Type & set__brake_torque_actual(
    const float & _arg)
  {
    this->brake_torque_actual = _arg;
    return *this;
  }
  Type & set__intervention_active(
    const bool & _arg)
  {
    this->intervention_active = _arg;
    return *this;
  }
  Type & set__intervention_ready(
    const bool & _arg)
  {
    this->intervention_ready = _arg;
    return *this;
  }
  Type & set__parking_brake(
    const raptor_dbw_msgs::msg::ParkingBrake_<ContainerAllocator> & _arg)
  {
    this->parking_brake = _arg;
    return *this;
  }
  Type & set__control_type(
    const raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator> & _arg)
  {
    this->control_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__BrakeReport
    std::shared_ptr<raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__BrakeReport
    std::shared_ptr<raptor_dbw_msgs::msg::BrakeReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pedal_position != other.pedal_position) {
      return false;
    }
    if (this->pedal_output != other.pedal_output) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->driver_activity != other.driver_activity) {
      return false;
    }
    if (this->fault_brake_system != other.fault_brake_system) {
      return false;
    }
    if (this->fault_ch1 != other.fault_ch1) {
      return false;
    }
    if (this->fault_ch2 != other.fault_ch2) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    if (this->brake_torque_actual != other.brake_torque_actual) {
      return false;
    }
    if (this->intervention_active != other.intervention_active) {
      return false;
    }
    if (this->intervention_ready != other.intervention_ready) {
      return false;
    }
    if (this->parking_brake != other.parking_brake) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeReport_

// alias to use template instance with default allocator
using BrakeReport =
  raptor_dbw_msgs::msg::BrakeReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_HPP_
