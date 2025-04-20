// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autonoma_msgs:msg/VehicleData.idl
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
#include "autonoma_msgs/msg/detail/vehicle_data__struct.h"
#include "autonoma_msgs/msg/detail/vehicle_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autonoma_msgs__msg__vehicle_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("autonoma_msgs.msg._vehicle_data.VehicleData", full_classname_dest, 43) == 0);
  }
  autonoma_msgs__msg__VehicleData * ros_message = _ros_message;
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
  {  // fl_tire_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_tire_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_tire_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_damper_linear_potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_damper_linear_potentiometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_damper_linear_potentiometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_tire_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_tire_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_tire_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_tire_pressure_gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_tire_pressure_gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_tire_pressure_gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_wheel_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_wheel_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_wheel_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_tire_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_tire_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_tire_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_damper_linear_potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_damper_linear_potentiometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_damper_linear_potentiometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_tire_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_tire_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_tire_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_tire_pressure_gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_tire_pressure_gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_tire_pressure_gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_wheel_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_wheel_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_wheel_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_tire_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_tire_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_tire_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_damper_linear_potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_damper_linear_potentiometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_damper_linear_potentiometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_tire_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_tire_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_tire_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_tire_pressure_gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_tire_pressure_gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_tire_pressure_gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_wheel_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_wheel_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_wheel_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_tire_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_tire_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_tire_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_damper_linear_potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_damper_linear_potentiometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_damper_linear_potentiometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_tire_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_tire_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_tire_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_tire_pressure_gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_tire_pressure_gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_tire_pressure_gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_wheel_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_wheel_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_wheel_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_brake_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_brake_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_brake_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_brake_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_brake_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_brake_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_brake_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_brake_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_brake_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_brake_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_brake_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_brake_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // safety_switch_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_switch_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safety_switch_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_switch_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_switch_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_switch_state = (Py_True == field);
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
  {  // accel_pedal_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_pedal_input");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_pedal_input = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_pedal_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_pedal_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_pedal_output = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_brake_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_brake_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_brake_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_brake_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_brake_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_brake_pressure = (float)PyFloat_AS_DOUBLE(field);
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
  {  // ws_front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "ws_front_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ws_front_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ws_front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "ws_front_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ws_front_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ws_rear_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "ws_rear_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ws_rear_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ws_rear_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "ws_rear_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ws_rear_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autonoma_msgs__msg__vehicle_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autonoma_msgs.msg._vehicle_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autonoma_msgs__msg__VehicleData * ros_message = (autonoma_msgs__msg__VehicleData *)raw_ros_message;
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
  {  // fl_tire_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_tire_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_tire_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_damper_linear_potentiometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_damper_linear_potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_damper_linear_potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_tire_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_tire_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_tire_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_tire_pressure_gauge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_tire_pressure_gauge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_tire_pressure_gauge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_wheel_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_wheel_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_wheel_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_tire_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_tire_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_tire_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_damper_linear_potentiometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_damper_linear_potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_damper_linear_potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_tire_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_tire_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_tire_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_tire_pressure_gauge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_tire_pressure_gauge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_tire_pressure_gauge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_wheel_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_wheel_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_wheel_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_tire_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_tire_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_tire_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_damper_linear_potentiometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_damper_linear_potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_damper_linear_potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_tire_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_tire_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_tire_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_tire_pressure_gauge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_tire_pressure_gauge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_tire_pressure_gauge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_wheel_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_wheel_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_wheel_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_tire_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_tire_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_tire_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_damper_linear_potentiometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_damper_linear_potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_damper_linear_potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_tire_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_tire_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_tire_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_tire_pressure_gauge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_tire_pressure_gauge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_tire_pressure_gauge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_wheel_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_wheel_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_wheel_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_brake_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_brake_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_brake_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_brake_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_brake_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_brake_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_brake_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_brake_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_brake_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_brake_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_brake_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_brake_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_switch_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safety_switch_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_switch_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_switch_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_switch_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_switch_state", field);
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
  {  // accel_pedal_input
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_pedal_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_pedal_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_pedal_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_pedal_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_pedal_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_brake_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_brake_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_brake_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_brake_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_brake_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_brake_pressure", field);
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
  {  // ws_front_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ws_front_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ws_front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ws_front_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ws_front_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ws_front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ws_rear_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ws_rear_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ws_rear_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ws_rear_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ws_rear_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ws_rear_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
