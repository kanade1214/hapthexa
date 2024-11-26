// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hapthexa_msgs:srv/GetLegArgs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/get_leg_args.hpp"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_ARGS__STRUCT_HPP_
#define HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_ARGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Request __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Request __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLegArgs_Request_
{
  using Type = GetLegArgs_Request_<ContainerAllocator>;

  explicit GetLegArgs_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetLegArgs_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Request
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Request
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLegArgs_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLegArgs_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLegArgs_Request_

// alias to use template instance with default allocator
using GetLegArgs_Request =
  hapthexa_msgs::srv::GetLegArgs_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hapthexa_msgs


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Response __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Response __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLegArgs_Response_
{
  using Type = GetLegArgs_Response_<ContainerAllocator>;

  explicit GetLegArgs_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coxa_arg = 0.0;
      this->femur_arg = 0.0;
      this->tibia_arg = 0.0;
    }
  }

  explicit GetLegArgs_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Response
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Response
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLegArgs_Response_ & other) const
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
  bool operator!=(const GetLegArgs_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLegArgs_Response_

// alias to use template instance with default allocator
using GetLegArgs_Response =
  hapthexa_msgs::srv::GetLegArgs_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Event __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Event __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLegArgs_Event_
{
  using Type = GetLegArgs_Event_<ContainerAllocator>;

  explicit GetLegArgs_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetLegArgs_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::srv::GetLegArgs_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::srv::GetLegArgs_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Event
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__srv__GetLegArgs_Event
    std::shared_ptr<hapthexa_msgs::srv::GetLegArgs_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLegArgs_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLegArgs_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLegArgs_Event_

// alias to use template instance with default allocator
using GetLegArgs_Event =
  hapthexa_msgs::srv::GetLegArgs_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hapthexa_msgs

namespace hapthexa_msgs
{

namespace srv
{

struct GetLegArgs
{
  using Request = hapthexa_msgs::srv::GetLegArgs_Request;
  using Response = hapthexa_msgs::srv::GetLegArgs_Response;
  using Event = hapthexa_msgs::srv::GetLegArgs_Event;
};

}  // namespace srv

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_ARGS__STRUCT_HPP_
