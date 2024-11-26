// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hapthexa_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/attitude.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__msg__Attitude __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__msg__Attitude __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Attitude_
{
  using Type = Attitude_<ContainerAllocator>;

  explicit Attitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit Attitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::msg::Attitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::msg::Attitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::msg::Attitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::msg::Attitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::msg::Attitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::msg::Attitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::msg::Attitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::msg::Attitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::msg::Attitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::msg::Attitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__msg__Attitude
    std::shared_ptr<hapthexa_msgs::msg::Attitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__msg__Attitude
    std::shared_ptr<hapthexa_msgs::msg::Attitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attitude_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attitude_

// alias to use template instance with default allocator
using Attitude =
  hapthexa_msgs::msg::Attitude_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_HPP_