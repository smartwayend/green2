// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
#include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rpi_robot_action_interfaces__action__GoToGoal_Goal__init(message_memory);
}

void GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_fini_function(void * message_memory)
{
  rpi_robot_action_interfaces__action__GoToGoal_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_Goal, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_Goal, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_message_members = {
  "rpi_robot_action_interfaces__action",  // message namespace
  "GoToGoal_Goal",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces__action__GoToGoal_Goal),
  GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_message_member_array,  // message members
  GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_message_type_support_handle = {
  0,
  &GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_Goal)() {
  if (!GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_message_type_support_handle.typesupport_identifier) {
    GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToGoal_Goal__rosidl_typesupport_introspection_c__GoToGoal_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rpi_robot_action_interfaces__action__GoToGoal_Result__init(message_memory);
}

void GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_fini_function(void * message_memory)
{
  rpi_robot_action_interfaces__action__GoToGoal_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_message_member_array[1] = {
  {
    "goal_reached",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_Result, goal_reached),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_message_members = {
  "rpi_robot_action_interfaces__action",  // message namespace
  "GoToGoal_Result",  // message name
  1,  // number of fields
  sizeof(rpi_robot_action_interfaces__action__GoToGoal_Result),
  GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_message_member_array,  // message members
  GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_message_type_support_handle = {
  0,
  &GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_Result)() {
  if (!GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_message_type_support_handle.typesupport_identifier) {
    GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToGoal_Result__rosidl_typesupport_introspection_c__GoToGoal_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rpi_robot_action_interfaces__action__GoToGoal_Feedback__init(message_memory);
}

void GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_fini_function(void * message_memory)
{
  rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_message_member_array[3] = {
  {
    "current_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_Feedback, current_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_Feedback, current_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_Feedback, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_message_members = {
  "rpi_robot_action_interfaces__action",  // message namespace
  "GoToGoal_Feedback",  // message name
  3,  // number of fields
  sizeof(rpi_robot_action_interfaces__action__GoToGoal_Feedback),
  GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_message_member_array,  // message members
  GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_message_type_support_handle = {
  0,
  &GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_Feedback)() {
  if (!GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_message_type_support_handle.typesupport_identifier) {
    GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToGoal_Feedback__rosidl_typesupport_introspection_c__GoToGoal_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "rpi_robot_action_interfaces/action/go_to_goal.h"
// Member `goal`
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__init(message_memory);
}

void GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_fini_function(void * message_memory)
{
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_members = {
  "rpi_robot_action_interfaces__action",  // message namespace
  "GoToGoal_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request),
  GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_member_array,  // message members
  GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_type_support_handle = {
  0,
  &GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Request)() {
  GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_Goal)();
  if (!GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__init(message_memory);
}

void GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_fini_function(void * message_memory)
{
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_members = {
  "rpi_robot_action_interfaces__action",  // message namespace
  "GoToGoal_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response),
  GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_member_array,  // message members
  GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_type_support_handle = {
  0,
  &GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Response)() {
  GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_service_members = {
  "rpi_robot_action_interfaces__action",  // service namespace
  "GoToGoal_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_service_type_support_handle = {
  0,
  &rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal)() {
  if (!rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_service_type_support_handle.typesupport_identifier) {
    rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Response)()->data;
  }

  return &rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__init(message_memory);
}

void GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_fini_function(void * message_memory)
{
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_members = {
  "rpi_robot_action_interfaces__action",  // message namespace
  "GoToGoal_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request),
  GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_member_array,  // message members
  GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_type_support_handle = {
  0,
  &GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Request)() {
  GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToGoal_GetResult_Request__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "rpi_robot_action_interfaces/action/go_to_goal.h"
// Member `result`
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__init(message_memory);
}

void GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_fini_function(void * message_memory)
{
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_members = {
  "rpi_robot_action_interfaces__action",  // message namespace
  "GoToGoal_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response),
  GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_member_array,  // message members
  GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_type_support_handle = {
  0,
  &GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Response)() {
  GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_Result)();
  if (!GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToGoal_GetResult_Response__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_service_members = {
  "rpi_robot_action_interfaces__action",  // service namespace
  "GoToGoal_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_service_type_support_handle = {
  0,
  &rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult)() {
  if (!rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_service_type_support_handle.typesupport_identifier) {
    rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Response)()->data;
  }

  return &rpi_robot_action_interfaces__action__detail__go_to_goal__rosidl_typesupport_introspection_c__GoToGoal_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "rpi_robot_action_interfaces/action/go_to_goal.h"
// Member `feedback`
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__init(message_memory);
}

void GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_fini_function(void * message_memory)
{
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_members = {
  "rpi_robot_action_interfaces__action",  // message namespace
  "GoToGoal_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage),
  GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_member_array,  // message members
  GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_type_support_handle = {
  0,
  &GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_FeedbackMessage)() {
  GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_robot_action_interfaces, action, GoToGoal_Feedback)();
  if (!GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__GoToGoal_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
