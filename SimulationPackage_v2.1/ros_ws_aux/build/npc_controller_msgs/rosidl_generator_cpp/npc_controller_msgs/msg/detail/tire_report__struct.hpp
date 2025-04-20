// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from npc_controller_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__STRUCT_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__npc_controller_msgs__msg__TireReport __attribute__((deprecated))
#else
# define DEPRECATED__npc_controller_msgs__msg__TireReport __declspec(deprecated)
#endif

namespace npc_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TireReport_
{
  using Type = TireReport_<ContainerAllocator>;

  explicit TireReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_damper_linear_potentiometer = 0.0f;
      this->fl_tire_pressure = 0.0f;
      this->fl_tire_pressure_gauge = 0.0f;
      this->fl_wheel_load = 0.0f;
      this->fr_damper_linear_potentiometer = 0.0f;
      this->fr_tire_pressure = 0.0f;
      this->fr_tire_pressure_gauge = 0.0f;
      this->fr_wheel_load = 0.0f;
      this->rl_damper_linear_potentiometer = 0.0f;
      this->rl_tire_pressure = 0.0f;
      this->rl_tire_pressure_gauge = 0.0f;
      this->rl_wheel_load = 0.0f;
      this->rr_damper_linear_potentiometer = 0.0f;
      this->rr_tire_pressure = 0.0f;
      this->rr_tire_pressure_gauge = 0.0f;
      this->rr_wheel_load = 0.0f;
    }
  }

  explicit TireReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_damper_linear_potentiometer = 0.0f;
      this->fl_tire_pressure = 0.0f;
      this->fl_tire_pressure_gauge = 0.0f;
      this->fl_wheel_load = 0.0f;
      this->fr_damper_linear_potentiometer = 0.0f;
      this->fr_tire_pressure = 0.0f;
      this->fr_tire_pressure_gauge = 0.0f;
      this->fr_wheel_load = 0.0f;
      this->rl_damper_linear_potentiometer = 0.0f;
      this->rl_tire_pressure = 0.0f;
      this->rl_tire_pressure_gauge = 0.0f;
      this->rl_wheel_load = 0.0f;
      this->rr_damper_linear_potentiometer = 0.0f;
      this->rr_tire_pressure = 0.0f;
      this->rr_tire_pressure_gauge = 0.0f;
      this->rr_wheel_load = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _fl_tire_temperature_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _fl_tire_temperature_type fl_tire_temperature;
  using _fl_damper_linear_potentiometer_type =
    float;
  _fl_damper_linear_potentiometer_type fl_damper_linear_potentiometer;
  using _fl_tire_pressure_type =
    float;
  _fl_tire_pressure_type fl_tire_pressure;
  using _fl_tire_pressure_gauge_type =
    float;
  _fl_tire_pressure_gauge_type fl_tire_pressure_gauge;
  using _fl_wheel_load_type =
    float;
  _fl_wheel_load_type fl_wheel_load;
  using _fr_tire_temperature_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _fr_tire_temperature_type fr_tire_temperature;
  using _fr_damper_linear_potentiometer_type =
    float;
  _fr_damper_linear_potentiometer_type fr_damper_linear_potentiometer;
  using _fr_tire_pressure_type =
    float;
  _fr_tire_pressure_type fr_tire_pressure;
  using _fr_tire_pressure_gauge_type =
    float;
  _fr_tire_pressure_gauge_type fr_tire_pressure_gauge;
  using _fr_wheel_load_type =
    float;
  _fr_wheel_load_type fr_wheel_load;
  using _rl_tire_temperature_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rl_tire_temperature_type rl_tire_temperature;
  using _rl_damper_linear_potentiometer_type =
    float;
  _rl_damper_linear_potentiometer_type rl_damper_linear_potentiometer;
  using _rl_tire_pressure_type =
    float;
  _rl_tire_pressure_type rl_tire_pressure;
  using _rl_tire_pressure_gauge_type =
    float;
  _rl_tire_pressure_gauge_type rl_tire_pressure_gauge;
  using _rl_wheel_load_type =
    float;
  _rl_wheel_load_type rl_wheel_load;
  using _rr_tire_temperature_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rr_tire_temperature_type rr_tire_temperature;
  using _rr_damper_linear_potentiometer_type =
    float;
  _rr_damper_linear_potentiometer_type rr_damper_linear_potentiometer;
  using _rr_tire_pressure_type =
    float;
  _rr_tire_pressure_type rr_tire_pressure;
  using _rr_tire_pressure_gauge_type =
    float;
  _rr_tire_pressure_gauge_type rr_tire_pressure_gauge;
  using _rr_wheel_load_type =
    float;
  _rr_wheel_load_type rr_wheel_load;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__fl_tire_temperature(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->fl_tire_temperature = _arg;
    return *this;
  }
  Type & set__fl_damper_linear_potentiometer(
    const float & _arg)
  {
    this->fl_damper_linear_potentiometer = _arg;
    return *this;
  }
  Type & set__fl_tire_pressure(
    const float & _arg)
  {
    this->fl_tire_pressure = _arg;
    return *this;
  }
  Type & set__fl_tire_pressure_gauge(
    const float & _arg)
  {
    this->fl_tire_pressure_gauge = _arg;
    return *this;
  }
  Type & set__fl_wheel_load(
    const float & _arg)
  {
    this->fl_wheel_load = _arg;
    return *this;
  }
  Type & set__fr_tire_temperature(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->fr_tire_temperature = _arg;
    return *this;
  }
  Type & set__fr_damper_linear_potentiometer(
    const float & _arg)
  {
    this->fr_damper_linear_potentiometer = _arg;
    return *this;
  }
  Type & set__fr_tire_pressure(
    const float & _arg)
  {
    this->fr_tire_pressure = _arg;
    return *this;
  }
  Type & set__fr_tire_pressure_gauge(
    const float & _arg)
  {
    this->fr_tire_pressure_gauge = _arg;
    return *this;
  }
  Type & set__fr_wheel_load(
    const float & _arg)
  {
    this->fr_wheel_load = _arg;
    return *this;
  }
  Type & set__rl_tire_temperature(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->rl_tire_temperature = _arg;
    return *this;
  }
  Type & set__rl_damper_linear_potentiometer(
    const float & _arg)
  {
    this->rl_damper_linear_potentiometer = _arg;
    return *this;
  }
  Type & set__rl_tire_pressure(
    const float & _arg)
  {
    this->rl_tire_pressure = _arg;
    return *this;
  }
  Type & set__rl_tire_pressure_gauge(
    const float & _arg)
  {
    this->rl_tire_pressure_gauge = _arg;
    return *this;
  }
  Type & set__rl_wheel_load(
    const float & _arg)
  {
    this->rl_wheel_load = _arg;
    return *this;
  }
  Type & set__rr_tire_temperature(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->rr_tire_temperature = _arg;
    return *this;
  }
  Type & set__rr_damper_linear_potentiometer(
    const float & _arg)
  {
    this->rr_damper_linear_potentiometer = _arg;
    return *this;
  }
  Type & set__rr_tire_pressure(
    const float & _arg)
  {
    this->rr_tire_pressure = _arg;
    return *this;
  }
  Type & set__rr_tire_pressure_gauge(
    const float & _arg)
  {
    this->rr_tire_pressure_gauge = _arg;
    return *this;
  }
  Type & set__rr_wheel_load(
    const float & _arg)
  {
    this->rr_wheel_load = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    npc_controller_msgs::msg::TireReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const npc_controller_msgs::msg::TireReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::TireReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<npc_controller_msgs::msg::TireReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::TireReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::TireReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      npc_controller_msgs::msg::TireReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<npc_controller_msgs::msg::TireReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::TireReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<npc_controller_msgs::msg::TireReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__npc_controller_msgs__msg__TireReport
    std::shared_ptr<npc_controller_msgs::msg::TireReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__npc_controller_msgs__msg__TireReport
    std::shared_ptr<npc_controller_msgs::msg::TireReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TireReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->fl_tire_temperature != other.fl_tire_temperature) {
      return false;
    }
    if (this->fl_damper_linear_potentiometer != other.fl_damper_linear_potentiometer) {
      return false;
    }
    if (this->fl_tire_pressure != other.fl_tire_pressure) {
      return false;
    }
    if (this->fl_tire_pressure_gauge != other.fl_tire_pressure_gauge) {
      return false;
    }
    if (this->fl_wheel_load != other.fl_wheel_load) {
      return false;
    }
    if (this->fr_tire_temperature != other.fr_tire_temperature) {
      return false;
    }
    if (this->fr_damper_linear_potentiometer != other.fr_damper_linear_potentiometer) {
      return false;
    }
    if (this->fr_tire_pressure != other.fr_tire_pressure) {
      return false;
    }
    if (this->fr_tire_pressure_gauge != other.fr_tire_pressure_gauge) {
      return false;
    }
    if (this->fr_wheel_load != other.fr_wheel_load) {
      return false;
    }
    if (this->rl_tire_temperature != other.rl_tire_temperature) {
      return false;
    }
    if (this->rl_damper_linear_potentiometer != other.rl_damper_linear_potentiometer) {
      return false;
    }
    if (this->rl_tire_pressure != other.rl_tire_pressure) {
      return false;
    }
    if (this->rl_tire_pressure_gauge != other.rl_tire_pressure_gauge) {
      return false;
    }
    if (this->rl_wheel_load != other.rl_wheel_load) {
      return false;
    }
    if (this->rr_tire_temperature != other.rr_tire_temperature) {
      return false;
    }
    if (this->rr_damper_linear_potentiometer != other.rr_damper_linear_potentiometer) {
      return false;
    }
    if (this->rr_tire_pressure != other.rr_tire_pressure) {
      return false;
    }
    if (this->rr_tire_pressure_gauge != other.rr_tire_pressure_gauge) {
      return false;
    }
    if (this->rr_wheel_load != other.rr_wheel_load) {
      return false;
    }
    return true;
  }
  bool operator!=(const TireReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TireReport_

// alias to use template instance with default allocator
using TireReport =
  npc_controller_msgs::msg::TireReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__STRUCT_HPP_
