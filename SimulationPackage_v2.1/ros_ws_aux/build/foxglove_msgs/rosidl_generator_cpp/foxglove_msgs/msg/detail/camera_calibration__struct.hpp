// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/CameraCalibration.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CAMERA_CALIBRATION__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CAMERA_CALIBRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__CameraCalibration __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__CameraCalibration __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraCalibration_
{
  using Type = CameraCalibration_<ContainerAllocator>;

  explicit CameraCalibration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->width = 0ul;
      this->height = 0ul;
      this->distortion_model = "";
      std::fill<typename std::array<double, 9>::iterator, double>(this->k.begin(), this->k.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->r.begin(), this->r.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->p.begin(), this->p.end(), 0.0);
    }
  }

  explicit CameraCalibration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    frame_id(_alloc),
    distortion_model(_alloc),
    k(_alloc),
    r(_alloc),
    p(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->width = 0ul;
      this->height = 0ul;
      this->distortion_model = "";
      std::fill<typename std::array<double, 9>::iterator, double>(this->k.begin(), this->k.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->r.begin(), this->r.end(), 0.0);
      std::fill<typename std::array<double, 12>::iterator, double>(this->p.begin(), this->p.end(), 0.0);
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;
  using _distortion_model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _distortion_model_type distortion_model;
  using _d_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _d_type d;
  using _k_type =
    std::array<double, 9>;
  _k_type k;
  using _r_type =
    std::array<double, 9>;
  _r_type r;
  using _p_type =
    std::array<double, 12>;
  _p_type p;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__distortion_model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->distortion_model = _arg;
    return *this;
  }
  Type & set__d(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__k(
    const std::array<double, 9> & _arg)
  {
    this->k = _arg;
    return *this;
  }
  Type & set__r(
    const std::array<double, 9> & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__p(
    const std::array<double, 12> & _arg)
  {
    this->p = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::CameraCalibration_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::CameraCalibration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::CameraCalibration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::CameraCalibration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::CameraCalibration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::CameraCalibration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::CameraCalibration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::CameraCalibration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::CameraCalibration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::CameraCalibration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__CameraCalibration
    std::shared_ptr<foxglove_msgs::msg::CameraCalibration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__CameraCalibration
    std::shared_ptr<foxglove_msgs::msg::CameraCalibration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCalibration_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->distortion_model != other.distortion_model) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraCalibration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCalibration_

// alias to use template instance with default allocator
using CameraCalibration =
  foxglove_msgs::msg::CameraCalibration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CAMERA_CALIBRATION__STRUCT_HPP_
