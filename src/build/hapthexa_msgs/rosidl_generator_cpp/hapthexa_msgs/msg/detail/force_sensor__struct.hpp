// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/force_sensor.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__STRUCT_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__msg__ForceSensor __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__msg__ForceSensor __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ForceSensor_
{
  using Type = ForceSensor_<ContainerAllocator>;

  explicit ForceSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loadcell1 = 0.0;
      this->loadcell2 = 0.0;
      this->piezo = 0.0;
      this->radial_direction = 0.0;
      this->radial_magnitude = 0.0;
      this->loadcell1_raw = 0ll;
      this->loadcell2_raw = 0ll;
      this->piezo_raw = 0ll;
      this->x = false;
      this->y = false;
      this->z = false;
    }
  }

  explicit ForceSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loadcell1 = 0.0;
      this->loadcell2 = 0.0;
      this->piezo = 0.0;
      this->radial_direction = 0.0;
      this->radial_magnitude = 0.0;
      this->loadcell1_raw = 0ll;
      this->loadcell2_raw = 0ll;
      this->piezo_raw = 0ll;
      this->x = false;
      this->y = false;
      this->z = false;
    }
  }

  // field types and members
  using _loadcell1_type =
    double;
  _loadcell1_type loadcell1;
  using _loadcell2_type =
    double;
  _loadcell2_type loadcell2;
  using _piezo_type =
    double;
  _piezo_type piezo;
  using _radial_direction_type =
    double;
  _radial_direction_type radial_direction;
  using _radial_magnitude_type =
    double;
  _radial_magnitude_type radial_magnitude;
  using _loadcell1_raw_type =
    int64_t;
  _loadcell1_raw_type loadcell1_raw;
  using _loadcell2_raw_type =
    int64_t;
  _loadcell2_raw_type loadcell2_raw;
  using _piezo_raw_type =
    int64_t;
  _piezo_raw_type piezo_raw;
  using _x_type =
    bool;
  _x_type x;
  using _y_type =
    bool;
  _y_type y;
  using _z_type =
    bool;
  _z_type z;

  // setters for named parameter idiom
  Type & set__loadcell1(
    const double & _arg)
  {
    this->loadcell1 = _arg;
    return *this;
  }
  Type & set__loadcell2(
    const double & _arg)
  {
    this->loadcell2 = _arg;
    return *this;
  }
  Type & set__piezo(
    const double & _arg)
  {
    this->piezo = _arg;
    return *this;
  }
  Type & set__radial_direction(
    const double & _arg)
  {
    this->radial_direction = _arg;
    return *this;
  }
  Type & set__radial_magnitude(
    const double & _arg)
  {
    this->radial_magnitude = _arg;
    return *this;
  }
  Type & set__loadcell1_raw(
    const int64_t & _arg)
  {
    this->loadcell1_raw = _arg;
    return *this;
  }
  Type & set__loadcell2_raw(
    const int64_t & _arg)
  {
    this->loadcell2_raw = _arg;
    return *this;
  }
  Type & set__piezo_raw(
    const int64_t & _arg)
  {
    this->piezo_raw = _arg;
    return *this;
  }
  Type & set__x(
    const bool & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const bool & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const bool & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::msg::ForceSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::msg::ForceSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::msg::ForceSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::msg::ForceSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::msg::ForceSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::msg::ForceSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::msg::ForceSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::msg::ForceSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::msg::ForceSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::msg::ForceSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__msg__ForceSensor
    std::shared_ptr<hapthexa_msgs::msg::ForceSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__msg__ForceSensor
    std::shared_ptr<hapthexa_msgs::msg::ForceSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ForceSensor_ & other) const
  {
    if (this->loadcell1 != other.loadcell1) {
      return false;
    }
    if (this->loadcell2 != other.loadcell2) {
      return false;
    }
    if (this->piezo != other.piezo) {
      return false;
    }
    if (this->radial_direction != other.radial_direction) {
      return false;
    }
    if (this->radial_magnitude != other.radial_magnitude) {
      return false;
    }
    if (this->loadcell1_raw != other.loadcell1_raw) {
      return false;
    }
    if (this->loadcell2_raw != other.loadcell2_raw) {
      return false;
    }
    if (this->piezo_raw != other.piezo_raw) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const ForceSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ForceSensor_

// alias to use template instance with default allocator
using ForceSensor =
  hapthexa_msgs::msg::ForceSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__STRUCT_HPP_
