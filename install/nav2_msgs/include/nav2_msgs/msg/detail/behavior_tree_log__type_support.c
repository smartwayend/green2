// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/msg/detail/behavior_tree_log__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/msg/detail/behavior_tree_log__functions.h"
#include "nav2_msgs/msg/detail/behavior_tree_log__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `event_log`
#include "nav2_msgs/msg/behavior_tree_status_change.h"
// Member `event_log`
#include "nav2_msgs/msg/detail/behavior_tree_status_change__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__msg__BehaviorTreeLog__init(message_memory);
}

void BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_fini_function(void * message_memory)
{
  nav2_msgs__msg__BehaviorTreeLog__fini(message_memory);
}

size_t BehaviorTreeLog__rosidl_typesupport_introspection_c__size_function__BehaviorTreeStatusChange__event_log(
  const void * untyped_member)
{
  const nav2_msgs__msg__BehaviorTreeStatusChange__Sequence * member =
    (const nav2_msgs__msg__BehaviorTreeStatusChange__Sequence *)(untyped_member);
  return member->size;
}

const void * BehaviorTreeLog__rosidl_typesupport_introspection_c__get_const_function__BehaviorTreeStatusChange__event_log(
  const void * untyped_member, size_t index)
{
  const nav2_msgs__msg__BehaviorTreeStatusChange__Sequence * member =
    (const nav2_msgs__msg__BehaviorTreeStatusChange__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BehaviorTreeLog__rosidl_typesupport_introspection_c__get_function__BehaviorTreeStatusChange__event_log(
  void * untyped_member, size_t index)
{
  nav2_msgs__msg__BehaviorTreeStatusChange__Sequence * member =
    (nav2_msgs__msg__BehaviorTreeStatusChange__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BehaviorTreeLog__rosidl_typesupport_introspection_c__resize_function__BehaviorTreeStatusChange__event_log(
  void * untyped_member, size_t size)
{
  nav2_msgs__msg__BehaviorTreeStatusChange__Sequence * member =
    (nav2_msgs__msg__BehaviorTreeStatusChange__Sequence *)(untyped_member);
  nav2_msgs__msg__BehaviorTreeStatusChange__Sequence__fini(member);
  return nav2_msgs__msg__BehaviorTreeStatusChange__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_member_array[2] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__BehaviorTreeLog, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event_log",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__BehaviorTreeLog, event_log),  // bytes offset in struct
    NULL,  // default value
    BehaviorTreeLog__rosidl_typesupport_introspection_c__size_function__BehaviorTreeStatusChange__event_log,  // size() function pointer
    BehaviorTreeLog__rosidl_typesupport_introspection_c__get_const_function__BehaviorTreeStatusChange__event_log,  // get_const(index) function pointer
    BehaviorTreeLog__rosidl_typesupport_introspection_c__get_function__BehaviorTreeStatusChange__event_log,  // get(index) function pointer
    BehaviorTreeLog__rosidl_typesupport_introspection_c__resize_function__BehaviorTreeStatusChange__event_log  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_members = {
  "nav2_msgs__msg",  // message namespace
  "BehaviorTreeLog",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__msg__BehaviorTreeLog),
  BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_member_array,  // message members
  BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_type_support_handle = {
  0,
  &BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, BehaviorTreeLog)() {
  BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, BehaviorTreeStatusChange)();
  if (!BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_type_support_handle.typesupport_identifier) {
    BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BehaviorTreeLog__rosidl_typesupport_introspection_c__BehaviorTreeLog_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
