// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__STRUCT_HPP_

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
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__AcceleratorPedalReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__AcceleratorPedalReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcceleratorPedalReport_
{
  using Type = AcceleratorPedalReport_<ContainerAllocator>;

  explicit AcceleratorPedalReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    control_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_input = 0.0f;
      this->pedal_output = 0.0f;
      this->enabled = false;
      this->ignore_driver = false;
      this->driver_activity = false;
      this->fault_accel_pedal_system = false;
      this->fault_ch1 = false;
      this->fault_ch2 = false;
      this->rolling_counter = 0;
      this->torque_actual = 0.0f;
    }
  }

  explicit AcceleratorPedalReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    control_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_input = 0.0f;
      this->pedal_output = 0.0f;
      this->enabled = false;
      this->ignore_driver = false;
      this->driver_activity = false;
      this->fault_accel_pedal_system = false;
      this->fault_ch1 = false;
      this->fault_ch2 = false;
      this->rolling_counter = 0;
      this->torque_actual = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pedal_input_type =
    float;
  _pedal_input_type pedal_input;
  using _pedal_output_type =
    float;
  _pedal_output_type pedal_output;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _ignore_driver_type =
    bool;
  _ignore_driver_type ignore_driver;
  using _driver_activity_type =
    bool;
  _driver_activity_type driver_activity;
  using _fault_accel_pedal_system_type =
    bool;
  _fault_accel_pedal_system_type fault_accel_pedal_system;
  using _fault_ch1_type =
    bool;
  _fault_ch1_type fault_ch1;
  using _fault_ch2_type =
    bool;
  _fault_ch2_type fault_ch2;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;
  using _torque_actual_type =
    float;
  _torque_actual_type torque_actual;
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
  Type & set__pedal_input(
    const float & _arg)
  {
    this->pedal_input = _arg;
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
  Type & set__ignore_driver(
    const bool & _arg)
  {
    this->ignore_driver = _arg;
    return *this;
  }
  Type & set__driver_activity(
    const bool & _arg)
  {
    this->driver_activity = _arg;
    return *this;
  }
  Type & set__fault_accel_pedal_system(
    const bool & _arg)
  {
    this->fault_accel_pedal_system = _arg;
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
  Type & set__torque_actual(
    const float & _arg)
  {
    this->torque_actual = _arg;
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
    raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__AcceleratorPedalReport
    std::shared_ptr<raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__AcceleratorPedalReport
    std::shared_ptr<raptor_dbw_msgs::msg::AcceleratorPedalReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcceleratorPedalReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pedal_input != other.pedal_input) {
      return false;
    }
    if (this->pedal_output != other.pedal_output) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->ignore_driver != other.ignore_driver) {
      return false;
    }
    if (this->driver_activity != other.driver_activity) {
      return false;
    }
    if (this->fault_accel_pedal_system != other.fault_accel_pedal_system) {
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
    if (this->torque_actual != other.torque_actual) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcceleratorPedalReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcceleratorPedalReport_

// alias to use template instance with default allocator
using AcceleratorPedalReport =
  raptor_dbw_msgs::msg::AcceleratorPedalReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__STRUCT_HPP_
