// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from npc_controller_msgs:msg/NPCDebug.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "npc_controller_msgs/msg/detail/npc_debug__struct.h"
#include "npc_controller_msgs/msg/detail/npc_debug__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool npc_controller_msgs__msg__npc_debug__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("npc_controller_msgs.msg._npc_debug.NPCDebug", full_classname_dest, 43) == 0);
  }
  npc_controller_msgs__msg__NPCDebug * ros_message = _ros_message;
  {  // desired_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // desired_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_throttle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_brake = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_p = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_i
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_i");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_i = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_d = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thr_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "thr_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thr_p = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thr_i
    PyObject * field = PyObject_GetAttrString(_pymsg, "thr_i");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thr_i = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thr_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "thr_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thr_d = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brk_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brk_p = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brk_i
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_i");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brk_i = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brk_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brk_d = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_deadband
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_deadband");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_deadband = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_deadband
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_deadband");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_deadband = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_throttle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ct_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "ct_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ct_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lap_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "lap_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lap_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_loc
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_loc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_loc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // center_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pit_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "pit_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pit_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sys_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sys_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sys_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * npc_controller_msgs__msg__npc_debug__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NPCDebug */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("npc_controller_msgs.msg._npc_debug");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NPCDebug");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  npc_controller_msgs__msg__NPCDebug * ros_message = (npc_controller_msgs__msg__NPCDebug *)raw_ros_message;
  {  // desired_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_i
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thr_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thr_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thr_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thr_i
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thr_i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thr_i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thr_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thr_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thr_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brk_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_i
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brk_i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brk_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_deadband
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_deadband);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_deadband", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_deadband
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_deadband);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_deadband", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ct_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ct_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ct_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lap_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lap_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lap_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_loc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_loc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_loc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pit_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pit_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pit_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sys_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sys_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sys_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
