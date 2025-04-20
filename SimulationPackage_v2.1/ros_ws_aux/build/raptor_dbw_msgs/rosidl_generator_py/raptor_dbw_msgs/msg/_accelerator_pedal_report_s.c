// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
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
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__actuator_control_mode__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__actuator_control_mode__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__accelerator_pedal_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("raptor_dbw_msgs.msg._accelerator_pedal_report.AcceleratorPedalReport", full_classname_dest, 68) == 0);
  }
  raptor_dbw_msgs__msg__AcceleratorPedalReport * ros_message = _ros_message;
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
  {  // pedal_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedal_input");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pedal_input = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pedal_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedal_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pedal_output = (float)PyFloat_AS_DOUBLE(field);
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
  {  // ignore_driver
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignore_driver");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignore_driver = (Py_True == field);
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
  {  // fault_accel_pedal_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_accel_pedal_system");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_accel_pedal_system = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_ch1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_ch1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_ch1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_ch2
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_ch2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_ch2 = (Py_True == field);
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
  {  // torque_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_actual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->torque_actual = (float)PyFloat_AS_DOUBLE(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__accelerator_pedal_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AcceleratorPedalReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._accelerator_pedal_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AcceleratorPedalReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__AcceleratorPedalReport * ros_message = (raptor_dbw_msgs__msg__AcceleratorPedalReport *)raw_ros_message;
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
  {  // pedal_input
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pedal_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedal_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pedal_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pedal_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedal_output", field);
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
  {  // ignore_driver
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignore_driver ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignore_driver", field);
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
  {  // fault_accel_pedal_system
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_accel_pedal_system ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_accel_pedal_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_ch1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_ch1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_ch1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_ch2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_ch2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_ch2", field);
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
  {  // torque_actual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->torque_actual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_actual", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
