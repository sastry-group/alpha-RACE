// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autonoma_msgs:msg/PowertrainData.idl
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
#include "autonoma_msgs/msg/detail/powertrain_data__struct.h"
#include "autonoma_msgs/msg/detail/powertrain_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autonoma_msgs__msg__powertrain_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("autonoma_msgs.msg._powertrain_data.PowertrainData", full_classname_dest, 49) == 0);
  }
  autonoma_msgs__msg__PowertrainData * ros_message = _ros_message;
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
  {  // map_sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_sensor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->map_sensor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lambda_sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "lambda_sensor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lambda_sensor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_oil_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_oil_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_oil_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_oil_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_oil_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_oil_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_coolant_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_coolant_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_coolant_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_coolant_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_coolant_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_coolant_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_on_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_on_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->engine_on_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // engine_run_switch_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_run_switch_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->engine_run_switch_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // throttle_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_gear = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_shift_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_shift_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_shift_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // transmission_oil_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmission_oil_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->transmission_oil_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // transmission_accumulator_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmission_accumulator_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->transmission_accumulator_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // transmission_oil_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmission_oil_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->transmission_oil_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_speed_kmph
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed_kmph");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_speed_kmph = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // torque_wheels_nm
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_wheels_nm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->torque_wheels_nm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autonoma_msgs__msg__powertrain_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PowertrainData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autonoma_msgs.msg._powertrain_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PowertrainData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autonoma_msgs__msg__PowertrainData * ros_message = (autonoma_msgs__msg__PowertrainData *)raw_ros_message;
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
  {  // map_sensor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->map_sensor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lambda_sensor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lambda_sensor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lambda_sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_oil_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_oil_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_oil_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_oil_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_oil_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_oil_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_coolant_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_coolant_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_coolant_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_coolant_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_coolant_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_coolant_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_on_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->engine_on_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_on_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_run_switch_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->engine_run_switch_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_run_switch_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_gear
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_shift_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_shift_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_shift_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmission_oil_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->transmission_oil_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmission_oil_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmission_accumulator_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->transmission_accumulator_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmission_accumulator_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmission_oil_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->transmission_oil_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmission_oil_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed_kmph
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_speed_kmph);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed_kmph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque_wheels_nm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->torque_wheels_nm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_wheels_nm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
