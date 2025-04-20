// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__DiagnosticReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__DiagnosticReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticReport_
{
  using Type = DiagnosticReport_<ContainerAllocator>;

  explicit DiagnosticReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sd_system_warning = false;
      this->sd_system_failure = false;
      this->sd_brake_warning1 = false;
      this->sd_brake_warning2 = false;
      this->sd_brake_warning3 = false;
      this->sd_steer_warning1 = false;
      this->sd_steer_warning2 = false;
      this->sd_steer_warning3 = false;
      this->motec_warning = 0;
      this->front_brk_failure = false;
      this->rear_brk_failure = false;
      this->low_eng_speed = false;
      this->sd_comms_loss = false;
      this->motec_comms_loss = false;
      this->sd_ebrake = false;
      this->adlink_hb_lost = false;
      this->rc_lost = false;
    }
  }

  explicit DiagnosticReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sd_system_warning = false;
      this->sd_system_failure = false;
      this->sd_brake_warning1 = false;
      this->sd_brake_warning2 = false;
      this->sd_brake_warning3 = false;
      this->sd_steer_warning1 = false;
      this->sd_steer_warning2 = false;
      this->sd_steer_warning3 = false;
      this->motec_warning = 0;
      this->front_brk_failure = false;
      this->rear_brk_failure = false;
      this->low_eng_speed = false;
      this->sd_comms_loss = false;
      this->motec_comms_loss = false;
      this->sd_ebrake = false;
      this->adlink_hb_lost = false;
      this->rc_lost = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sd_system_warning_type =
    bool;
  _sd_system_warning_type sd_system_warning;
  using _sd_system_failure_type =
    bool;
  _sd_system_failure_type sd_system_failure;
  using _sd_brake_warning1_type =
    bool;
  _sd_brake_warning1_type sd_brake_warning1;
  using _sd_brake_warning2_type =
    bool;
  _sd_brake_warning2_type sd_brake_warning2;
  using _sd_brake_warning3_type =
    bool;
  _sd_brake_warning3_type sd_brake_warning3;
  using _sd_steer_warning1_type =
    bool;
  _sd_steer_warning1_type sd_steer_warning1;
  using _sd_steer_warning2_type =
    bool;
  _sd_steer_warning2_type sd_steer_warning2;
  using _sd_steer_warning3_type =
    bool;
  _sd_steer_warning3_type sd_steer_warning3;
  using _motec_warning_type =
    int8_t;
  _motec_warning_type motec_warning;
  using _front_brk_failure_type =
    bool;
  _front_brk_failure_type front_brk_failure;
  using _rear_brk_failure_type =
    bool;
  _rear_brk_failure_type rear_brk_failure;
  using _low_eng_speed_type =
    bool;
  _low_eng_speed_type low_eng_speed;
  using _sd_comms_loss_type =
    bool;
  _sd_comms_loss_type sd_comms_loss;
  using _motec_comms_loss_type =
    bool;
  _motec_comms_loss_type motec_comms_loss;
  using _sd_ebrake_type =
    bool;
  _sd_ebrake_type sd_ebrake;
  using _adlink_hb_lost_type =
    bool;
  _adlink_hb_lost_type adlink_hb_lost;
  using _rc_lost_type =
    bool;
  _rc_lost_type rc_lost;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sd_system_warning(
    const bool & _arg)
  {
    this->sd_system_warning = _arg;
    return *this;
  }
  Type & set__sd_system_failure(
    const bool & _arg)
  {
    this->sd_system_failure = _arg;
    return *this;
  }
  Type & set__sd_brake_warning1(
    const bool & _arg)
  {
    this->sd_brake_warning1 = _arg;
    return *this;
  }
  Type & set__sd_brake_warning2(
    const bool & _arg)
  {
    this->sd_brake_warning2 = _arg;
    return *this;
  }
  Type & set__sd_brake_warning3(
    const bool & _arg)
  {
    this->sd_brake_warning3 = _arg;
    return *this;
  }
  Type & set__sd_steer_warning1(
    const bool & _arg)
  {
    this->sd_steer_warning1 = _arg;
    return *this;
  }
  Type & set__sd_steer_warning2(
    const bool & _arg)
  {
    this->sd_steer_warning2 = _arg;
    return *this;
  }
  Type & set__sd_steer_warning3(
    const bool & _arg)
  {
    this->sd_steer_warning3 = _arg;
    return *this;
  }
  Type & set__motec_warning(
    const int8_t & _arg)
  {
    this->motec_warning = _arg;
    return *this;
  }
  Type & set__front_brk_failure(
    const bool & _arg)
  {
    this->front_brk_failure = _arg;
    return *this;
  }
  Type & set__rear_brk_failure(
    const bool & _arg)
  {
    this->rear_brk_failure = _arg;
    return *this;
  }
  Type & set__low_eng_speed(
    const bool & _arg)
  {
    this->low_eng_speed = _arg;
    return *this;
  }
  Type & set__sd_comms_loss(
    const bool & _arg)
  {
    this->sd_comms_loss = _arg;
    return *this;
  }
  Type & set__motec_comms_loss(
    const bool & _arg)
  {
    this->motec_comms_loss = _arg;
    return *this;
  }
  Type & set__sd_ebrake(
    const bool & _arg)
  {
    this->sd_ebrake = _arg;
    return *this;
  }
  Type & set__adlink_hb_lost(
    const bool & _arg)
  {
    this->adlink_hb_lost = _arg;
    return *this;
  }
  Type & set__rc_lost(
    const bool & _arg)
  {
    this->rc_lost = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__DiagnosticReport
    std::shared_ptr<raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__DiagnosticReport
    std::shared_ptr<raptor_dbw_msgs::msg::DiagnosticReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sd_system_warning != other.sd_system_warning) {
      return false;
    }
    if (this->sd_system_failure != other.sd_system_failure) {
      return false;
    }
    if (this->sd_brake_warning1 != other.sd_brake_warning1) {
      return false;
    }
    if (this->sd_brake_warning2 != other.sd_brake_warning2) {
      return false;
    }
    if (this->sd_brake_warning3 != other.sd_brake_warning3) {
      return false;
    }
    if (this->sd_steer_warning1 != other.sd_steer_warning1) {
      return false;
    }
    if (this->sd_steer_warning2 != other.sd_steer_warning2) {
      return false;
    }
    if (this->sd_steer_warning3 != other.sd_steer_warning3) {
      return false;
    }
    if (this->motec_warning != other.motec_warning) {
      return false;
    }
    if (this->front_brk_failure != other.front_brk_failure) {
      return false;
    }
    if (this->rear_brk_failure != other.rear_brk_failure) {
      return false;
    }
    if (this->low_eng_speed != other.low_eng_speed) {
      return false;
    }
    if (this->sd_comms_loss != other.sd_comms_loss) {
      return false;
    }
    if (this->motec_comms_loss != other.motec_comms_loss) {
      return false;
    }
    if (this->sd_ebrake != other.sd_ebrake) {
      return false;
    }
    if (this->adlink_hb_lost != other.adlink_hb_lost) {
      return false;
    }
    if (this->rc_lost != other.rc_lost) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticReport_

// alias to use template instance with default allocator
using DiagnosticReport =
  raptor_dbw_msgs::msg::DiagnosticReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_HPP_
