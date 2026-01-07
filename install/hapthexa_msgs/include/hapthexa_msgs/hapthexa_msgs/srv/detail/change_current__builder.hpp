// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:srv/ChangeCurrent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/change_current.hpp"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__BUILDER_HPP_
#define HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/srv/detail/change_current__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeCurrent_Request_current_tibia
{
public:
  explicit Init_ChangeCurrent_Request_current_tibia(::hapthexa_msgs::srv::ChangeCurrent_Request & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::srv::ChangeCurrent_Request current_tibia(::hapthexa_msgs::srv::ChangeCurrent_Request::_current_tibia_type arg)
  {
    msg_.current_tibia = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::ChangeCurrent_Request msg_;
};

class Init_ChangeCurrent_Request_current_femur
{
public:
  explicit Init_ChangeCurrent_Request_current_femur(::hapthexa_msgs::srv::ChangeCurrent_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeCurrent_Request_current_tibia current_femur(::hapthexa_msgs::srv::ChangeCurrent_Request::_current_femur_type arg)
  {
    msg_.current_femur = std::move(arg);
    return Init_ChangeCurrent_Request_current_tibia(msg_);
  }

private:
  ::hapthexa_msgs::srv::ChangeCurrent_Request msg_;
};

class Init_ChangeCurrent_Request_current_coxa
{
public:
  explicit Init_ChangeCurrent_Request_current_coxa(::hapthexa_msgs::srv::ChangeCurrent_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeCurrent_Request_current_femur current_coxa(::hapthexa_msgs::srv::ChangeCurrent_Request::_current_coxa_type arg)
  {
    msg_.current_coxa = std::move(arg);
    return Init_ChangeCurrent_Request_current_femur(msg_);
  }

private:
  ::hapthexa_msgs::srv::ChangeCurrent_Request msg_;
};

class Init_ChangeCurrent_Request_num
{
public:
  Init_ChangeCurrent_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeCurrent_Request_current_coxa num(::hapthexa_msgs::srv::ChangeCurrent_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_ChangeCurrent_Request_current_coxa(msg_);
  }

private:
  ::hapthexa_msgs::srv::ChangeCurrent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::ChangeCurrent_Request>()
{
  return hapthexa_msgs::srv::builder::Init_ChangeCurrent_Request_num();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::ChangeCurrent_Response>()
{
  return ::hapthexa_msgs::srv::ChangeCurrent_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeCurrent_Event_response
{
public:
  explicit Init_ChangeCurrent_Event_response(::hapthexa_msgs::srv::ChangeCurrent_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::srv::ChangeCurrent_Event response(::hapthexa_msgs::srv::ChangeCurrent_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::ChangeCurrent_Event msg_;
};

class Init_ChangeCurrent_Event_request
{
public:
  explicit Init_ChangeCurrent_Event_request(::hapthexa_msgs::srv::ChangeCurrent_Event & msg)
  : msg_(msg)
  {}
  Init_ChangeCurrent_Event_response request(::hapthexa_msgs::srv::ChangeCurrent_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChangeCurrent_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::srv::ChangeCurrent_Event msg_;
};

class Init_ChangeCurrent_Event_info
{
public:
  Init_ChangeCurrent_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeCurrent_Event_request info(::hapthexa_msgs::srv::ChangeCurrent_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChangeCurrent_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::srv::ChangeCurrent_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::ChangeCurrent_Event>()
{
  return hapthexa_msgs::srv::builder::Init_ChangeCurrent_Event_info();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__BUILDER_HPP_
