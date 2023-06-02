// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GoToGoal_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rpi_robot_action_interfaces::action::GoToGoal_Goal(_init);
}

void GoToGoal_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rpi_robot_action_interfaces::action::GoToGoal_Goal *>(message_memory);
  typed_message->~GoToGoal_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoToGoal_Goal_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_Goal, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_Goal, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoToGoal_Goal_message_members = {
  "rpi_robot_action_interfaces::action",  // message namespace
  "GoToGoal_Goal",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces::action::GoToGoal_Goal),
  GoToGoal_Goal_message_member_array,  // message members
  GoToGoal_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoToGoal_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_Goal>()
{
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_Goal)() {
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GoToGoal_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rpi_robot_action_interfaces::action::GoToGoal_Result(_init);
}

void GoToGoal_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rpi_robot_action_interfaces::action::GoToGoal_Result *>(message_memory);
  typed_message->~GoToGoal_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoToGoal_Result_message_member_array[1] = {
  {
    "goal_reached",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_Result, goal_reached),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoToGoal_Result_message_members = {
  "rpi_robot_action_interfaces::action",  // message namespace
  "GoToGoal_Result",  // message name
  1,  // number of fields
  sizeof(rpi_robot_action_interfaces::action::GoToGoal_Result),
  GoToGoal_Result_message_member_array,  // message members
  GoToGoal_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoToGoal_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_Result>()
{
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_Result)() {
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GoToGoal_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rpi_robot_action_interfaces::action::GoToGoal_Feedback(_init);
}

void GoToGoal_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rpi_robot_action_interfaces::action::GoToGoal_Feedback *>(message_memory);
  typed_message->~GoToGoal_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoToGoal_Feedback_message_member_array[3] = {
  {
    "current_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_Feedback, current_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_Feedback, current_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_Feedback, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoToGoal_Feedback_message_members = {
  "rpi_robot_action_interfaces::action",  // message namespace
  "GoToGoal_Feedback",  // message name
  3,  // number of fields
  sizeof(rpi_robot_action_interfaces::action::GoToGoal_Feedback),
  GoToGoal_Feedback_message_member_array,  // message members
  GoToGoal_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoToGoal_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_Feedback>()
{
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_Feedback)() {
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GoToGoal_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request(_init);
}

void GoToGoal_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request *>(message_memory);
  typed_message->~GoToGoal_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoToGoal_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoToGoal_SendGoal_Request_message_members = {
  "rpi_robot_action_interfaces::action",  // message namespace
  "GoToGoal_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request),
  GoToGoal_SendGoal_Request_message_member_array,  // message members
  GoToGoal_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoToGoal_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>()
{
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Request)() {
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GoToGoal_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response(_init);
}

void GoToGoal_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response *>(message_memory);
  typed_message->~GoToGoal_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoToGoal_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoToGoal_SendGoal_Response_message_members = {
  "rpi_robot_action_interfaces::action",  // message namespace
  "GoToGoal_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response),
  GoToGoal_SendGoal_Response_message_member_array,  // message members
  GoToGoal_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoToGoal_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>()
{
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Response)() {
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GoToGoal_SendGoal_service_members = {
  "rpi_robot_action_interfaces::action",  // service namespace
  "GoToGoal_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GoToGoal_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GoToGoal_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request(_init);
}

void GoToGoal_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request *>(message_memory);
  typed_message->~GoToGoal_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoToGoal_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoToGoal_GetResult_Request_message_members = {
  "rpi_robot_action_interfaces::action",  // message namespace
  "GoToGoal_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request),
  GoToGoal_GetResult_Request_message_member_array,  // message members
  GoToGoal_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoToGoal_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>()
{
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Request)() {
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GoToGoal_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response(_init);
}

void GoToGoal_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response *>(message_memory);
  typed_message->~GoToGoal_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoToGoal_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoToGoal_GetResult_Response_message_members = {
  "rpi_robot_action_interfaces::action",  // message namespace
  "GoToGoal_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response),
  GoToGoal_GetResult_Response_message_member_array,  // message members
  GoToGoal_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoToGoal_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>()
{
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Response)() {
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GoToGoal_GetResult_service_members = {
  "rpi_robot_action_interfaces::action",  // service namespace
  "GoToGoal_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GoToGoal_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rpi_robot_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GoToGoal_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage(_init);
}

void GoToGoal_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage *>(message_memory);
  typed_message->~GoToGoal_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoToGoal_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoToGoal_FeedbackMessage_message_members = {
  "rpi_robot_action_interfaces::action",  // message namespace
  "GoToGoal_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage),
  GoToGoal_FeedbackMessage_message_member_array,  // message members
  GoToGoal_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoToGoal_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoToGoal_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rpi_robot_action_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage>()
{
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_robot_action_interfaces, action, GoToGoal_FeedbackMessage)() {
  return &::rpi_robot_action_interfaces::action::rosidl_typesupport_introspection_cpp::GoToGoal_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
