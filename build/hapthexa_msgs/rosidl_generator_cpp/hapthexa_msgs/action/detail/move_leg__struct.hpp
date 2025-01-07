// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hapthexa_msgs:action/MoveLeg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/action/move_leg.hpp"


#ifndef HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG__STRUCT_HPP_
#define HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_Goal __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_Goal __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_Goal_
{
  using Type = MoveLeg_Goal_<ContainerAllocator>;

  explicit MoveLeg_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->abort_if_forcesensor_z_detect_contact = false;
      this->relative_mode = false;
    }
  }

  explicit MoveLeg_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->abort_if_forcesensor_z_detect_contact = false;
      this->relative_mode = false;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _abort_if_forcesensor_z_detect_contact_type =
    bool;
  _abort_if_forcesensor_z_detect_contact_type abort_if_forcesensor_z_detect_contact;
  using _relative_mode_type =
    bool;
  _relative_mode_type relative_mode;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__abort_if_forcesensor_z_detect_contact(
    const bool & _arg)
  {
    this->abort_if_forcesensor_z_detect_contact = _arg;
    return *this;
  }
  Type & set__relative_mode(
    const bool & _arg)
  {
    this->relative_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_Goal
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_Goal
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->abort_if_forcesensor_z_detect_contact != other.abort_if_forcesensor_z_detect_contact) {
      return false;
    }
    if (this->relative_mode != other.relative_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveLeg_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_Goal_

// alias to use template instance with default allocator
using MoveLeg_Goal =
  hapthexa_msgs::action::MoveLeg_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_Result __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_Result __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_Result_
{
  using Type = MoveLeg_Result_<ContainerAllocator>;

  explicit MoveLeg_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit MoveLeg_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_Result
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_Result
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_Result_ & other) const
  {
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
  bool operator!=(const MoveLeg_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_Result_

// alias to use template instance with default allocator
using MoveLeg_Result =
  hapthexa_msgs::action::MoveLeg_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs


#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_Feedback __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_Feedback_
{
  using Type = MoveLeg_Feedback_<ContainerAllocator>;

  explicit MoveLeg_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loadcell1 = 0.0;
      this->loadcell2 = 0.0;
      this->piezo = 0.0;
    }
  }

  explicit MoveLeg_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loadcell1 = 0.0;
      this->loadcell2 = 0.0;
      this->piezo = 0.0;
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

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_Feedback
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_Feedback
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_Feedback_ & other) const
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
    return true;
  }
  bool operator!=(const MoveLeg_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_Feedback_

// alias to use template instance with default allocator
using MoveLeg_Feedback =
  hapthexa_msgs::action::MoveLeg_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "hapthexa_msgs/action/detail/move_leg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Request __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_SendGoal_Request_
{
  using Type = MoveLeg_SendGoal_Request_<ContainerAllocator>;

  explicit MoveLeg_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveLeg_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const hapthexa_msgs::action::MoveLeg_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Request
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Request
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveLeg_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_SendGoal_Request_

// alias to use template instance with default allocator
using MoveLeg_SendGoal_Request =
  hapthexa_msgs::action::MoveLeg_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Response __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_SendGoal_Response_
{
  using Type = MoveLeg_SendGoal_Response_<ContainerAllocator>;

  explicit MoveLeg_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveLeg_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Response
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Response
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveLeg_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_SendGoal_Response_

// alias to use template instance with default allocator
using MoveLeg_SendGoal_Response =
  hapthexa_msgs::action::MoveLeg_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Event __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_SendGoal_Event_
{
  using Type = MoveLeg_SendGoal_Event_<ContainerAllocator>;

  explicit MoveLeg_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveLeg_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::action::MoveLeg_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::action::MoveLeg_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Event
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_SendGoal_Event
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_SendGoal_Event_ & other) const
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
  bool operator!=(const MoveLeg_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_SendGoal_Event_

// alias to use template instance with default allocator
using MoveLeg_SendGoal_Event =
  hapthexa_msgs::action::MoveLeg_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs

namespace hapthexa_msgs
{

namespace action
{

struct MoveLeg_SendGoal
{
  using Request = hapthexa_msgs::action::MoveLeg_SendGoal_Request;
  using Response = hapthexa_msgs::action::MoveLeg_SendGoal_Response;
  using Event = hapthexa_msgs::action::MoveLeg_SendGoal_Event;
};

}  // namespace action

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Request __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_GetResult_Request_
{
  using Type = MoveLeg_GetResult_Request_<ContainerAllocator>;

  explicit MoveLeg_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveLeg_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Request
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Request
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveLeg_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_GetResult_Request_

// alias to use template instance with default allocator
using MoveLeg_GetResult_Request =
  hapthexa_msgs::action::MoveLeg_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "hapthexa_msgs/action/detail/move_leg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Response __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_GetResult_Response_
{
  using Type = MoveLeg_GetResult_Response_<ContainerAllocator>;

  explicit MoveLeg_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveLeg_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const hapthexa_msgs::action::MoveLeg_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Response
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Response
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveLeg_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_GetResult_Response_

// alias to use template instance with default allocator
using MoveLeg_GetResult_Response =
  hapthexa_msgs::action::MoveLeg_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Event __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_GetResult_Event_
{
  using Type = MoveLeg_GetResult_Event_<ContainerAllocator>;

  explicit MoveLeg_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveLeg_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::action::MoveLeg_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hapthexa_msgs::action::MoveLeg_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Event
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_GetResult_Event
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_GetResult_Event_ & other) const
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
  bool operator!=(const MoveLeg_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_GetResult_Event_

// alias to use template instance with default allocator
using MoveLeg_GetResult_Event =
  hapthexa_msgs::action::MoveLeg_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs

namespace hapthexa_msgs
{

namespace action
{

struct MoveLeg_GetResult
{
  using Request = hapthexa_msgs::action::MoveLeg_GetResult_Request;
  using Response = hapthexa_msgs::action::MoveLeg_GetResult_Response;
  using Event = hapthexa_msgs::action::MoveLeg_GetResult_Event;
};

}  // namespace action

}  // namespace hapthexa_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "hapthexa_msgs/action/detail/move_leg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__hapthexa_msgs__action__MoveLeg_FeedbackMessage __declspec(deprecated)
#endif

namespace hapthexa_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveLeg_FeedbackMessage_
{
  using Type = MoveLeg_FeedbackMessage_<ContainerAllocator>;

  explicit MoveLeg_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveLeg_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const hapthexa_msgs::action::MoveLeg_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_FeedbackMessage
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hapthexa_msgs__action__MoveLeg_FeedbackMessage
    std::shared_ptr<hapthexa_msgs::action::MoveLeg_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveLeg_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveLeg_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveLeg_FeedbackMessage_

// alias to use template instance with default allocator
using MoveLeg_FeedbackMessage =
  hapthexa_msgs::action::MoveLeg_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hapthexa_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace hapthexa_msgs
{

namespace action
{

struct MoveLeg
{
  /// The goal message defined in the action definition.
  using Goal = hapthexa_msgs::action::MoveLeg_Goal;
  /// The result message defined in the action definition.
  using Result = hapthexa_msgs::action::MoveLeg_Result;
  /// The feedback message defined in the action definition.
  using Feedback = hapthexa_msgs::action::MoveLeg_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = hapthexa_msgs::action::MoveLeg_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = hapthexa_msgs::action::MoveLeg_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = hapthexa_msgs::action::MoveLeg_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveLeg MoveLeg;

}  // namespace action

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG__STRUCT_HPP_
