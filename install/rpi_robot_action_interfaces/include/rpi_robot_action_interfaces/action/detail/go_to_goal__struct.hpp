// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice

#ifndef RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__STRUCT_HPP_
#define RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Goal __attribute__((deprecated))
#else
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Goal __declspec(deprecated)
#endif

namespace rpi_robot_action_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToGoal_Goal_
{
  using Type = GoToGoal_Goal_<ContainerAllocator>;

  explicit GoToGoal_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit GoToGoal_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Goal
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Goal
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToGoal_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToGoal_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToGoal_Goal_

// alias to use template instance with default allocator
using GoToGoal_Goal =
  rpi_robot_action_interfaces::action::GoToGoal_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rpi_robot_action_interfaces


#ifndef _WIN32
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Result __attribute__((deprecated))
#else
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Result __declspec(deprecated)
#endif

namespace rpi_robot_action_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToGoal_Result_
{
  using Type = GoToGoal_Result_<ContainerAllocator>;

  explicit GoToGoal_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_reached = false;
    }
  }

  explicit GoToGoal_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_reached = false;
    }
  }

  // field types and members
  using _goal_reached_type =
    bool;
  _goal_reached_type goal_reached;

  // setters for named parameter idiom
  Type & set__goal_reached(
    const bool & _arg)
  {
    this->goal_reached = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Result
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Result
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToGoal_Result_ & other) const
  {
    if (this->goal_reached != other.goal_reached) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToGoal_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToGoal_Result_

// alias to use template instance with default allocator
using GoToGoal_Result =
  rpi_robot_action_interfaces::action::GoToGoal_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rpi_robot_action_interfaces


#ifndef _WIN32
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Feedback __declspec(deprecated)
#endif

namespace rpi_robot_action_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToGoal_Feedback_
{
  using Type = GoToGoal_Feedback_<ContainerAllocator>;

  explicit GoToGoal_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0f;
      this->current_y = 0.0f;
      this->distance = 0.0f;
    }
  }

  explicit GoToGoal_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0f;
      this->current_y = 0.0f;
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _current_x_type =
    float;
  _current_x_type current_x;
  using _current_y_type =
    float;
  _current_y_type current_y;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__current_x(
    const float & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const float & _arg)
  {
    this->current_y = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Feedback
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_Feedback
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToGoal_Feedback_ & other) const
  {
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToGoal_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToGoal_Feedback_

// alias to use template instance with default allocator
using GoToGoal_Feedback =
  rpi_robot_action_interfaces::action::GoToGoal_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rpi_robot_action_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request __declspec(deprecated)
#endif

namespace rpi_robot_action_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToGoal_SendGoal_Request_
{
  using Type = GoToGoal_SendGoal_Request_<ContainerAllocator>;

  explicit GoToGoal_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GoToGoal_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const rpi_robot_action_interfaces::action::GoToGoal_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToGoal_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToGoal_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToGoal_SendGoal_Request_

// alias to use template instance with default allocator
using GoToGoal_SendGoal_Request =
  rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rpi_robot_action_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response __declspec(deprecated)
#endif

namespace rpi_robot_action_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToGoal_SendGoal_Response_
{
  using Type = GoToGoal_SendGoal_Response_<ContainerAllocator>;

  explicit GoToGoal_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GoToGoal_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToGoal_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToGoal_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToGoal_SendGoal_Response_

// alias to use template instance with default allocator
using GoToGoal_SendGoal_Response =
  rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rpi_robot_action_interfaces

namespace rpi_robot_action_interfaces
{

namespace action
{

struct GoToGoal_SendGoal
{
  using Request = rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request;
  using Response = rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response;
};

}  // namespace action

}  // namespace rpi_robot_action_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request __declspec(deprecated)
#endif

namespace rpi_robot_action_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToGoal_GetResult_Request_
{
  using Type = GoToGoal_GetResult_Request_<ContainerAllocator>;

  explicit GoToGoal_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GoToGoal_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToGoal_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToGoal_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToGoal_GetResult_Request_

// alias to use template instance with default allocator
using GoToGoal_GetResult_Request =
  rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rpi_robot_action_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response __declspec(deprecated)
#endif

namespace rpi_robot_action_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToGoal_GetResult_Response_
{
  using Type = GoToGoal_GetResult_Response_<ContainerAllocator>;

  explicit GoToGoal_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GoToGoal_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const rpi_robot_action_interfaces::action::GoToGoal_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToGoal_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToGoal_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToGoal_GetResult_Response_

// alias to use template instance with default allocator
using GoToGoal_GetResult_Response =
  rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rpi_robot_action_interfaces

namespace rpi_robot_action_interfaces
{

namespace action
{

struct GoToGoal_GetResult
{
  using Request = rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request;
  using Response = rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response;
};

}  // namespace action

}  // namespace rpi_robot_action_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage __declspec(deprecated)
#endif

namespace rpi_robot_action_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToGoal_FeedbackMessage_
{
  using Type = GoToGoal_FeedbackMessage_<ContainerAllocator>;

  explicit GoToGoal_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GoToGoal_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const rpi_robot_action_interfaces::action::GoToGoal_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage
    std::shared_ptr<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToGoal_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToGoal_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToGoal_FeedbackMessage_

// alias to use template instance with default allocator
using GoToGoal_FeedbackMessage =
  rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rpi_robot_action_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace rpi_robot_action_interfaces
{

namespace action
{

struct GoToGoal
{
  /// The goal message defined in the action definition.
  using Goal = rpi_robot_action_interfaces::action::GoToGoal_Goal;
  /// The result message defined in the action definition.
  using Result = rpi_robot_action_interfaces::action::GoToGoal_Result;
  /// The feedback message defined in the action definition.
  using Feedback = rpi_robot_action_interfaces::action::GoToGoal_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = rpi_robot_action_interfaces::action::GoToGoal_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = rpi_robot_action_interfaces::action::GoToGoal_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GoToGoal GoToGoal;

}  // namespace action

}  // namespace rpi_robot_action_interfaces

#endif  // RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__STRUCT_HPP_
