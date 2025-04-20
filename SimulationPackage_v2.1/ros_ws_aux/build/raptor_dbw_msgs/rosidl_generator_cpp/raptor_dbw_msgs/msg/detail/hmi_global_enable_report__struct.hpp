// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/HmiGlobalEnableReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__HmiGlobalEnableReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__HmiGlobalEnableReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HmiGlobalEnableReport_
{
  using Type = HmiGlobalEnableReport_<ContainerAllocator>;

  explicit HmiGlobalEnableReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_request = false;
      this->disable_request = false;
      this->checksum = 0;
      this->ecu_build_number = 0;
      this->rolling_counter = 0;
    }
  }

  explicit HmiGlobalEnableReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_request = false;
      this->disable_request = false;
      this->checksum = 0;
      this->ecu_build_number = 0;
      this->rolling_counter = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _enable_request_type =
    bool;
  _enable_request_type enable_request;
  using _disable_request_type =
    bool;
  _disable_request_type disable_request;
  using _checksum_type =
    uint8_t;
  _checksum_type checksum;
  using _ecu_build_number_type =
    uint16_t;
  _ecu_build_number_type ecu_build_number;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__enable_request(
    const bool & _arg)
  {
    this->enable_request = _arg;
    return *this;
  }
  Type & set__disable_request(
    const bool & _arg)
  {
    this->disable_request = _arg;
    return *this;
  }
  Type & set__checksum(
    const uint8_t & _arg)
  {
    this->checksum = _arg;
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
    raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__HmiGlobalEnableReport
    std::shared_ptr<raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__HmiGlobalEnableReport
    std::shared_ptr<raptor_dbw_msgs::msg::HmiGlobalEnableReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HmiGlobalEnableReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->enable_request != other.enable_request) {
      return false;
    }
    if (this->disable_request != other.disable_request) {
      return false;
    }
    if (this->checksum != other.checksum) {
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
  bool operator!=(const HmiGlobalEnableReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HmiGlobalEnableReport_

// alias to use template instance with default allocator
using HmiGlobalEnableReport =
  raptor_dbw_msgs::msg::HmiGlobalEnableReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__STRUCT_HPP_
