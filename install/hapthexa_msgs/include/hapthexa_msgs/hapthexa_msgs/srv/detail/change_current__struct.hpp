// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hapthexa_msgs:srv/ChangeCurrent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/change_current.hpp"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__STRUCT_HPP_
#define HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Request __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Request __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeCurrent_Request_
{
  using Type = ChangeCurrent_Request_<ContainerAllocator>;

  explicit ChangeCurrent_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
      this->current_coxa = 0ll;
      this->current_femur = 0ll;
      this->current_tibia = 0ll;
    }
  }

  explicit ChangeCurrent_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
      this->current_coxa = 0ll;
      this->current_femur = 0ll;
      this->current_tibia = 0ll;
    }
  }

  // field types and members
  using _num_type =
    int64_t;
  _num_type num;
  using _current_coxa_type =
    int64_t;
  _current_coxa_type current_coxa;
  using _current_femur_type =
    int64_t;
  _current_femur_type current_femur;
  using _current_tibia_type =
    int64_t;
  _current_tibia_type current_tibia;

  // setters for named parameter idiom
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__current_coxa(
    const int64_t & _arg)
  {
    this->current_coxa = _arg;
    return *this;
  }
  Type & set__current_femur(
    const int64_t & _arg)
  {
    this->current_femur = _arg;
    return *this;
  }
  Type & set__current_tibia(
    const int64_t & _arg)
  {
    this->current_tibia = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Request
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Request
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeCurrent_Request_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    if (this->current_coxa != other.current_coxa) {
      return false;
    }
    if (this->current_femur != other.current_femur) {
      return false;
    }
    if (this->current_tibia != other.current_tibia) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeCurrent_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeCurrent_Request_

// alias to use template instance with default allocator
using ChangeCurrent_Request =
  hapthexa_msgs::srv::ChangeCurrent_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hapthexa_msgs


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Response __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Response __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeCurrent_Response_
{
  using Type = ChangeCurrent_Response_<ContainerAllocator>;

  explicit ChangeCurrent_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ChangeCurrent_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Response
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Response
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeCurrent_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeCurrent_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeCurrent_Response_

// alias to use template instance with default allocator
using ChangeCurrent_Response =
  hapthexa_msgs::srv::ChangeCurrent_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Event __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Event __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeCurrent_Event_
{
  using Type = ChangeCurrent_Event_<ContainerAllocator>;

  explicit ChangeCurrent_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ChangeCurrent_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::srv::ChangeCurrent_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::srv::ChangeCurrent_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Event
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__srv__ChangeCurrent_Event
    std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeCurrent_Event_ & other) const
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
  bool operator!=(const ChangeCurrent_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeCurrent_Event_

// alias to use template instance with default allocator
using ChangeCurrent_Event =
  hapthexa_msgs::srv::ChangeCurrent_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hapthexa_msgs

namespace hapthexa_msgs
{

namespace srv
{

struct ChangeCurrent
{
  using Request = hapthexa_msgs::srv::ChangeCurrent_Request;
  using Response = hapthexa_msgs::srv::ChangeCurrent_Response;
  using Event = hapthexa_msgs::srv::ChangeCurrent_Event;
};

}  // namespace srv

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__CHANGE_CURRENT__STRUCT_HPP_
