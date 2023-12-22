// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from solution_interfaces:msg/WorldItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "solution_interfaces/msg/detail/world_item__rosidl_typesupport_introspection_c.h"
#include "solution_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "solution_interfaces/msg/detail/world_item__functions.h"
#include "solution_interfaces/msg/detail/world_item__struct.h"


// Include directives for member types
// Member `colour`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  solution_interfaces__msg__WorldItem__init(message_memory);
}

void solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_fini_function(void * message_memory)
{
  solution_interfaces__msg__WorldItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(solution_interfaces__msg__WorldItem, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(solution_interfaces__msg__WorldItem, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "colour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(solution_interfaces__msg__WorldItem, colour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_message_members = {
  "solution_interfaces__msg",  // message namespace
  "WorldItem",  // message name
  3,  // number of fields
  sizeof(solution_interfaces__msg__WorldItem),
  solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_message_member_array,  // message members
  solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_init_function,  // function to initialize message memory (memory has to be allocated)
  solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_message_type_support_handle = {
  0,
  &solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_solution_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, solution_interfaces, msg, WorldItem)() {
  if (!solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_message_type_support_handle.typesupport_identifier) {
    solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &solution_interfaces__msg__WorldItem__rosidl_typesupport_introspection_c__WorldItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
