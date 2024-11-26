// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hapthexa_msgs:msg/LegArgs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/leg_args.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__LEG_ARGS__STRUCT_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__LEG_ARGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__msg__LegArgs __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__msg__LegArgs __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegArgs_
{
  using Type = LegArgs_<ContainerAllocator>;

  explicit LegArgs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coxa_arg = 0.0;
      this->femur_arg = 0.0;
      this->tibia_arg = 0.0;
    }
  }

  explicit LegArgs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coxa_arg = 0.0;
      this->femur_arg = 0.0;
      this->tibia_arg = 0.0;
    }
  }

  // field types and members
  using _coxa_arg_type =
    double;
  _coxa_arg_type coxa_arg;
  using _femur_arg_type =
    double;
  _femur_arg_type femur_arg;
  using _tibia_arg_type =
    double;
  _tibia_arg_type tibia_arg;

  // setters for named parameter idiom
  Type & set__coxa_arg(
    const double & _arg)
  {
    this->coxa_arg = _arg;
    return *this;
  }
  Type & set__femur_arg(
    const double & _arg)
  {
    this->femur_arg = _arg;
    return *this;
  }
  Type & set__tibia_arg(
    const double & _arg)
  {
    this->tibia_arg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::msg::LegArgs_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::msg::LegArgs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::msg::LegArgs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::msg::LegArgs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::msg::LegArgs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::msg::LegArgs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::msg::LegArgs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::msg::LegArgs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::msg::LegArgs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::msg::LegArgs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__msg__LegArgs
    std::shared_ptr<hapthexa_msgs::msg::LegArgs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__msg__LegArgs
    std::shared_ptr<hapthexa_msgs::msg::LegArgs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegArgs_ & other) const
  {
    if (this->coxa_arg != other.coxa_arg) {
      return false;
    }
    if (this->femur_arg != other.femur_arg) {
      return false;
    }
    if (this->tibia_arg != other.tibia_arg) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegArgs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegArgs_

// alias to use template instance with default allocator
using LegArgs =
  hapthexa_msgs::msg::LegArgs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__LEG_ARGS__STRUCT_HPP_
