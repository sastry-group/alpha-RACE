// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/SteeringReport.idl
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
#include "raptor_dbw_msgs/msg/detail/steering_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/steering_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__actuator_control_mode__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__actuator_control_mode__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__steering_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("raptor_dbw_msgs.msg._steering_report.SteeringReport", full_classname_dest, 51) == 0);
  }
  raptor_dbw_msgs__msg__SteeringReport * ros_message = _ros_message;
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
  {  // steering_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_angle_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_angle_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_angle_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_wheel_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_wheel_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_wheel_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // driver_activity
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_activity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->driver_activity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_steering_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_steering_system");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_steering_system = (Py_True == field);
    Py_DECREF(field);
  }
  {  // overheat_prevention_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "overheat_prevention_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overheat_prevention_mode = (Py_True == field);
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
  {  // steering_overheat_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_overheat_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steering_overheat_warning = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__steering_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SteeringReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._steering_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SteeringReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__SteeringReport * ros_message = (raptor_dbw_msgs__msg__SteeringReport *)raw_ros_message;
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
  {  // steering_wheel_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_wheel_angle_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_angle_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_angle_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_wheel_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_wheel_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_wheel_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_activity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->driver_activity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_activity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_steering_system
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_steering_system ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_steering_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overheat_prevention_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overheat_prevention_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overheat_prevention_mode", field);
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
  {  // steering_overheat_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steering_overheat_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_overheat_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
