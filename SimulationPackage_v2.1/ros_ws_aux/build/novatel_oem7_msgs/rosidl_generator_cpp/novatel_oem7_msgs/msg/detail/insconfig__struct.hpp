// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/INSCONFIG.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__STRUCT_HPP_

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
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.hpp"
// Member 'alignment_mode'
#include "novatel_oem7_msgs/msg/detail/ins_alignment_mode__struct.hpp"
// Member 'relative_ins_output_frame'
#include "novatel_oem7_msgs/msg/detail/ins_output_frame__struct.hpp"
// Member 'ins_receiver_status'
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__struct.hpp"
// Member 'translations'
#include "novatel_oem7_msgs/msg/detail/translation__struct.hpp"
// Member 'rotations'
#include "novatel_oem7_msgs/msg/detail/rotation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__INSCONFIG __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__INSCONFIG __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSCONFIG_
{
  using Type = INSCONFIG_<ContainerAllocator>;

  explicit INSCONFIG_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    nov_header(_init),
    alignment_mode(_init),
    relative_ins_output_frame(_init),
    ins_receiver_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_type = 0ul;
      this->mapping = 0;
      this->initial_alignment_velocity = 0;
      this->heave_window = 0;
      this->profile = 0ul;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->enabled_updates.begin(), this->enabled_updates.end(), 0);
      this->relative_ins_output_direction = false;
      this->ins_seed_enabled = 0;
      this->ins_seed_validation = 0;
      this->reserved_1 = 0;
      this->reserved_2 = 0ul;
      this->reserved_3 = 0ul;
      this->reserved_4 = 0ul;
      this->reserved_5 = 0ul;
      this->reserved_6 = 0ul;
      this->reserved_7 = 0ul;
      this->number_of_translations = 0ul;
      this->number_of_rotations = 0ul;
    }
  }

  explicit INSCONFIG_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    nov_header(_alloc, _init),
    enabled_updates(_alloc),
    alignment_mode(_alloc, _init),
    relative_ins_output_frame(_alloc, _init),
    ins_receiver_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_type = 0ul;
      this->mapping = 0;
      this->initial_alignment_velocity = 0;
      this->heave_window = 0;
      this->profile = 0ul;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->enabled_updates.begin(), this->enabled_updates.end(), 0);
      this->relative_ins_output_direction = false;
      this->ins_seed_enabled = 0;
      this->ins_seed_validation = 0;
      this->reserved_1 = 0;
      this->reserved_2 = 0ul;
      this->reserved_3 = 0ul;
      this->reserved_4 = 0ul;
      this->reserved_5 = 0ul;
      this->reserved_6 = 0ul;
      this->reserved_7 = 0ul;
      this->number_of_translations = 0ul;
      this->number_of_rotations = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nov_header_type =
    novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>;
  _nov_header_type nov_header;
  using _imu_type_type =
    uint32_t;
  _imu_type_type imu_type;
  using _mapping_type =
    uint8_t;
  _mapping_type mapping;
  using _initial_alignment_velocity_type =
    uint8_t;
  _initial_alignment_velocity_type initial_alignment_velocity;
  using _heave_window_type =
    uint16_t;
  _heave_window_type heave_window;
  using _profile_type =
    uint32_t;
  _profile_type profile;
  using _enabled_updates_type =
    std::array<uint8_t, 4>;
  _enabled_updates_type enabled_updates;
  using _alignment_mode_type =
    novatel_oem7_msgs::msg::INSAlignmentMode_<ContainerAllocator>;
  _alignment_mode_type alignment_mode;
  using _relative_ins_output_frame_type =
    novatel_oem7_msgs::msg::INSOutputFrame_<ContainerAllocator>;
  _relative_ins_output_frame_type relative_ins_output_frame;
  using _relative_ins_output_direction_type =
    bool;
  _relative_ins_output_direction_type relative_ins_output_direction;
  using _ins_receiver_status_type =
    novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator>;
  _ins_receiver_status_type ins_receiver_status;
  using _ins_seed_enabled_type =
    uint8_t;
  _ins_seed_enabled_type ins_seed_enabled;
  using _ins_seed_validation_type =
    uint8_t;
  _ins_seed_validation_type ins_seed_validation;
  using _reserved_1_type =
    uint16_t;
  _reserved_1_type reserved_1;
  using _reserved_2_type =
    uint32_t;
  _reserved_2_type reserved_2;
  using _reserved_3_type =
    uint32_t;
  _reserved_3_type reserved_3;
  using _reserved_4_type =
    uint32_t;
  _reserved_4_type reserved_4;
  using _reserved_5_type =
    uint32_t;
  _reserved_5_type reserved_5;
  using _reserved_6_type =
    uint32_t;
  _reserved_6_type reserved_6;
  using _reserved_7_type =
    uint32_t;
  _reserved_7_type reserved_7;
  using _number_of_translations_type =
    uint32_t;
  _number_of_translations_type number_of_translations;
  using _translations_type =
    std::vector<novatel_oem7_msgs::msg::Translation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<novatel_oem7_msgs::msg::Translation_<ContainerAllocator>>>;
  _translations_type translations;
  using _number_of_rotations_type =
    uint32_t;
  _number_of_rotations_type number_of_rotations;
  using _rotations_type =
    std::vector<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>>>;
  _rotations_type rotations;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__nov_header(
    const novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> & _arg)
  {
    this->nov_header = _arg;
    return *this;
  }
  Type & set__imu_type(
    const uint32_t & _arg)
  {
    this->imu_type = _arg;
    return *this;
  }
  Type & set__mapping(
    const uint8_t & _arg)
  {
    this->mapping = _arg;
    return *this;
  }
  Type & set__initial_alignment_velocity(
    const uint8_t & _arg)
  {
    this->initial_alignment_velocity = _arg;
    return *this;
  }
  Type & set__heave_window(
    const uint16_t & _arg)
  {
    this->heave_window = _arg;
    return *this;
  }
  Type & set__profile(
    const uint32_t & _arg)
  {
    this->profile = _arg;
    return *this;
  }
  Type & set__enabled_updates(
    const std::array<uint8_t, 4> & _arg)
  {
    this->enabled_updates = _arg;
    return *this;
  }
  Type & set__alignment_mode(
    const novatel_oem7_msgs::msg::INSAlignmentMode_<ContainerAllocator> & _arg)
  {
    this->alignment_mode = _arg;
    return *this;
  }
  Type & set__relative_ins_output_frame(
    const novatel_oem7_msgs::msg::INSOutputFrame_<ContainerAllocator> & _arg)
  {
    this->relative_ins_output_frame = _arg;
    return *this;
  }
  Type & set__relative_ins_output_direction(
    const bool & _arg)
  {
    this->relative_ins_output_direction = _arg;
    return *this;
  }
  Type & set__ins_receiver_status(
    const novatel_oem7_msgs::msg::INSReceiverStatus_<ContainerAllocator> & _arg)
  {
    this->ins_receiver_status = _arg;
    return *this;
  }
  Type & set__ins_seed_enabled(
    const uint8_t & _arg)
  {
    this->ins_seed_enabled = _arg;
    return *this;
  }
  Type & set__ins_seed_validation(
    const uint8_t & _arg)
  {
    this->ins_seed_validation = _arg;
    return *this;
  }
  Type & set__reserved_1(
    const uint16_t & _arg)
  {
    this->reserved_1 = _arg;
    return *this;
  }
  Type & set__reserved_2(
    const uint32_t & _arg)
  {
    this->reserved_2 = _arg;
    return *this;
  }
  Type & set__reserved_3(
    const uint32_t & _arg)
  {
    this->reserved_3 = _arg;
    return *this;
  }
  Type & set__reserved_4(
    const uint32_t & _arg)
  {
    this->reserved_4 = _arg;
    return *this;
  }
  Type & set__reserved_5(
    const uint32_t & _arg)
  {
    this->reserved_5 = _arg;
    return *this;
  }
  Type & set__reserved_6(
    const uint32_t & _arg)
  {
    this->reserved_6 = _arg;
    return *this;
  }
  Type & set__reserved_7(
    const uint32_t & _arg)
  {
    this->reserved_7 = _arg;
    return *this;
  }
  Type & set__number_of_translations(
    const uint32_t & _arg)
  {
    this->number_of_translations = _arg;
    return *this;
  }
  Type & set__translations(
    const std::vector<novatel_oem7_msgs::msg::Translation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<novatel_oem7_msgs::msg::Translation_<ContainerAllocator>>> & _arg)
  {
    this->translations = _arg;
    return *this;
  }
  Type & set__number_of_rotations(
    const uint32_t & _arg)
  {
    this->number_of_rotations = _arg;
    return *this;
  }
  Type & set__rotations(
    const std::vector<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<novatel_oem7_msgs::msg::Rotation_<ContainerAllocator>>> & _arg)
  {
    this->rotations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSCONFIG
    std::shared_ptr<novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSCONFIG
    std::shared_ptr<novatel_oem7_msgs::msg::INSCONFIG_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSCONFIG_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nov_header != other.nov_header) {
      return false;
    }
    if (this->imu_type != other.imu_type) {
      return false;
    }
    if (this->mapping != other.mapping) {
      return false;
    }
    if (this->initial_alignment_velocity != other.initial_alignment_velocity) {
      return false;
    }
    if (this->heave_window != other.heave_window) {
      return false;
    }
    if (this->profile != other.profile) {
      return false;
    }
    if (this->enabled_updates != other.enabled_updates) {
      return false;
    }
    if (this->alignment_mode != other.alignment_mode) {
      return false;
    }
    if (this->relative_ins_output_frame != other.relative_ins_output_frame) {
      return false;
    }
    if (this->relative_ins_output_direction != other.relative_ins_output_direction) {
      return false;
    }
    if (this->ins_receiver_status != other.ins_receiver_status) {
      return false;
    }
    if (this->ins_seed_enabled != other.ins_seed_enabled) {
      return false;
    }
    if (this->ins_seed_validation != other.ins_seed_validation) {
      return false;
    }
    if (this->reserved_1 != other.reserved_1) {
      return false;
    }
    if (this->reserved_2 != other.reserved_2) {
      return false;
    }
    if (this->reserved_3 != other.reserved_3) {
      return false;
    }
    if (this->reserved_4 != other.reserved_4) {
      return false;
    }
    if (this->reserved_5 != other.reserved_5) {
      return false;
    }
    if (this->reserved_6 != other.reserved_6) {
      return false;
    }
    if (this->reserved_7 != other.reserved_7) {
      return false;
    }
    if (this->number_of_translations != other.number_of_translations) {
      return false;
    }
    if (this->translations != other.translations) {
      return false;
    }
    if (this->number_of_rotations != other.number_of_rotations) {
      return false;
    }
    if (this->rotations != other.rotations) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSCONFIG_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSCONFIG_

// alias to use template instance with default allocator
using INSCONFIG =
  novatel_oem7_msgs::msg::INSCONFIG_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__STRUCT_HPP_
