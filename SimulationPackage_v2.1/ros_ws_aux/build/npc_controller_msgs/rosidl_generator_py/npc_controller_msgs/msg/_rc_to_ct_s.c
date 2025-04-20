// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from npc_controller_msgs:msg/RcToCt.idl
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
#include "npc_controller_msgs/msg/detail/rc_to_ct__struct.h"
#include "npc_controller_msgs/msg/detail/rc_to_ct__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool npc_controller_msgs__msg__rc_to_ct__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("npc_controller_msgs.msg._rc_to_ct.RcToCt", full_classname_dest, 40) == 0);
  }
  npc_controller_msgs__msg__RcToCt * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
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
    assert(PyLong_Check(field));
    ros_message->lap_distance = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rolling_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * npc_controller_msgs__msg__rc_to_ct__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RcToCt */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("npc_controller_msgs.msg._rc_to_ct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RcToCt");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  npc_controller_msgs__msg__RcToCt * ros_message = (npc_controller_msgs__msg__RcToCt *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
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
    field = PyLong_FromUnsignedLong(ros_message->lap_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lap_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolling_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rolling_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
