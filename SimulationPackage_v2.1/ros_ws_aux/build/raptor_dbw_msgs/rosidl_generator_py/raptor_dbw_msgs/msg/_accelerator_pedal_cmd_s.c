// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalCmd.idl
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
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_cmd__struct.h"
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_cmd__functions.h"

bool raptor_dbw_msgs__msg__actuator_control_mode__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__actuator_control_mode__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__accelerator_pedal_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("raptor_dbw_msgs.msg._accelerator_pedal_cmd.AcceleratorPedalCmd", full_classname_dest, 62) == 0);
  }
  raptor_dbw_msgs__msg__AcceleratorPedalCmd * ros_message = _ros_message;
  {  // pedal_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedal_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pedal_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // torque_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->torque_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ignore
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignore");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignore = (Py_True == field);
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
  {  // road_slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_slope");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->road_slope = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // control_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_type");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__actuator_control_mode__convert_from_py(field, &ros_message->control_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // accel_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_positive_jerk_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_positive_jerk_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_positive_jerk_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__accelerator_pedal_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AcceleratorPedalCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._accelerator_pedal_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AcceleratorPedalCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__AcceleratorPedalCmd * ros_message = (raptor_dbw_msgs__msg__AcceleratorPedalCmd *)raw_ros_message;
  {  // pedal_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pedal_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedal_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->torque_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignore
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignore ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignore", field);
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
  {  // road_slope
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->road_slope);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_slope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_type
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__actuator_control_mode__convert_to_py(&ros_message->control_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_positive_jerk_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_positive_jerk_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_positive_jerk_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
