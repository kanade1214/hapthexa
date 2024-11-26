// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/force_sensor.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__BUILDER_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/msg/detail/force_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace msg
{

namespace builder
{

class Init_ForceSensor_z
{
public:
  explicit Init_ForceSensor_z(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::msg::ForceSensor z(::hapthexa_msgs::msg::ForceSensor::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_y
{
public:
  explicit Init_ForceSensor_y(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_z y(::hapthexa_msgs::msg::ForceSensor::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ForceSensor_z(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_x
{
public:
  explicit Init_ForceSensor_x(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_y x(::hapthexa_msgs::msg::ForceSensor::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ForceSensor_y(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_piezo_raw
{
public:
  explicit Init_ForceSensor_piezo_raw(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_x piezo_raw(::hapthexa_msgs::msg::ForceSensor::_piezo_raw_type arg)
  {
    msg_.piezo_raw = std::move(arg);
    return Init_ForceSensor_x(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_loadcell2_raw
{
public:
  explicit Init_ForceSensor_loadcell2_raw(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_piezo_raw loadcell2_raw(::hapthexa_msgs::msg::ForceSensor::_loadcell2_raw_type arg)
  {
    msg_.loadcell2_raw = std::move(arg);
    return Init_ForceSensor_piezo_raw(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_loadcell1_raw
{
public:
  explicit Init_ForceSensor_loadcell1_raw(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_loadcell2_raw loadcell1_raw(::hapthexa_msgs::msg::ForceSensor::_loadcell1_raw_type arg)
  {
    msg_.loadcell1_raw = std::move(arg);
    return Init_ForceSensor_loadcell2_raw(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_radial_magnitude
{
public:
  explicit Init_ForceSensor_radial_magnitude(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_loadcell1_raw radial_magnitude(::hapthexa_msgs::msg::ForceSensor::_radial_magnitude_type arg)
  {
    msg_.radial_magnitude = std::move(arg);
    return Init_ForceSensor_loadcell1_raw(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_radial_direction
{
public:
  explicit Init_ForceSensor_radial_direction(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_radial_magnitude radial_direction(::hapthexa_msgs::msg::ForceSensor::_radial_direction_type arg)
  {
    msg_.radial_direction = std::move(arg);
    return Init_ForceSensor_radial_magnitude(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_piezo
{
public:
  explicit Init_ForceSensor_piezo(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_radial_direction piezo(::hapthexa_msgs::msg::ForceSensor::_piezo_type arg)
  {
    msg_.piezo = std::move(arg);
    return Init_ForceSensor_radial_direction(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_loadcell2
{
public:
  explicit Init_ForceSensor_loadcell2(::hapthexa_msgs::msg::ForceSensor & msg)
  : msg_(msg)
  {}
  Init_ForceSensor_piezo loadcell2(::hapthexa_msgs::msg::ForceSensor::_loadcell2_type arg)
  {
    msg_.loadcell2 = std::move(arg);
    return Init_ForceSensor_piezo(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

class Init_ForceSensor_loadcell1
{
public:
  Init_ForceSensor_loadcell1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ForceSensor_loadcell2 loadcell1(::hapthexa_msgs::msg::ForceSensor::_loadcell1_type arg)
  {
    msg_.loadcell1 = std::move(arg);
    return Init_ForceSensor_loadcell2(msg_);
  }

private:
  ::hapthexa_msgs::msg::ForceSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::msg::ForceSensor>()
{
  return hapthexa_msgs::msg::builder::Init_ForceSensor_loadcell1();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__BUILDER_HPP_
