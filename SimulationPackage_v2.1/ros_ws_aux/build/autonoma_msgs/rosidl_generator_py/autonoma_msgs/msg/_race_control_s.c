// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autonoma_msgs:msg/RaceControl.idl
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
#include "autonoma_msgs/msg/detail/race_control__struct.h"
#include "autonoma_msgs/msg/detail/race_control__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autonoma_msgs__msg__race_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("autonoma_msgs.msg._race_control.RaceControl", full_classname_dest, 43) == 0);
  }
  autonoma_msgs__msg__RaceControl * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // base_to_car_heartbeat
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_to_car_heartbeat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_to_car_heartbeat = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // veh_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_rank
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_rank");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_rank = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // lap_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "lap_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lap_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lap_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "lap_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lap_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // round_target_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "round_target_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->round_target_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // laps
    PyObject * field = PyObject_GetAttrString(_pymsg, "laps");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laps = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lap_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "lap_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lap_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_stamp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autonoma_msgs__msg__race_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RaceControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autonoma_msgs.msg._race_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RaceControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autonoma_msgs__msg__RaceControl * ros_message = (autonoma_msgs__msg__RaceControl *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_to_car_heartbeat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->base_to_car_heartbeat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_to_car_heartbeat", field);
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
  {  // veh_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_rank
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_rank);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_rank", field);
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
  {  // lap_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lap_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lap_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lap_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lap_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lap_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // round_target_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->round_target_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "round_target_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laps
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->laps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lap_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lap_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lap_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_stamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
