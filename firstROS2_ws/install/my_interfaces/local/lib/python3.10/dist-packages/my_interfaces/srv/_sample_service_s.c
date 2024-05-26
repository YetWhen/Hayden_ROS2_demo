// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_interfaces:srv/SampleService.idl
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
#include "my_interfaces/srv/detail/sample_service__struct.h"
#include "my_interfaces/srv/detail/sample_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_interfaces__srv__sample_service__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("my_interfaces.srv._sample_service.SampleService_Request", full_classname_dest, 55) == 0);
  }
  my_interfaces__srv__SampleService_Request * ros_message = _ros_message;
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b
    PyObject * field = PyObject_GetAttrString(_pymsg, "b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c
    PyObject * field = PyObject_GetAttrString(_pymsg, "c");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->c = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // d
    PyObject * field = PyObject_GetAttrString(_pymsg, "d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->d = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // e
    PyObject * field = PyObject_GetAttrString(_pymsg, "e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->e = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // f
    PyObject * field = PyObject_GetAttrString(_pymsg, "f");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->f = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // g
    PyObject * field = PyObject_GetAttrString(_pymsg, "g");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->g = (Py_True == field);
    Py_DECREF(field);
  }
  {  // h
    PyObject * field = PyObject_GetAttrString(_pymsg, "h");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->h = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_interfaces__srv__sample_service__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SampleService_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_interfaces.srv._sample_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SampleService_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_interfaces__srv__SampleService_Request * ros_message = (my_interfaces__srv__SampleService_Request *)raw_ros_message;
  {  // a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->f, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "f", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // g
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->g ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "g", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "my_interfaces/srv/detail/sample_service__struct.h"
// already included above
// #include "my_interfaces/srv/detail/sample_service__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_interfaces__srv__sample_service__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("my_interfaces.srv._sample_service.SampleService_Response", full_classname_dest, 56) == 0);
  }
  my_interfaces__srv__SampleService_Response * ros_message = _ros_message;
  {  // i
    PyObject * field = PyObject_GetAttrString(_pymsg, "i");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // j
    PyObject * field = PyObject_GetAttrString(_pymsg, "j");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->j = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // k
    PyObject * field = PyObject_GetAttrString(_pymsg, "k");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->k = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // l
    PyObject * field = PyObject_GetAttrString(_pymsg, "l");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // m
    PyObject * field = PyObject_GetAttrString(_pymsg, "m");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->m, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_interfaces__srv__sample_service__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SampleService_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_interfaces.srv._sample_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SampleService_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_interfaces__srv__SampleService_Response * ros_message = (my_interfaces__srv__SampleService_Response *)raw_ros_message;
  {  // i
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->j);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->k);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->m.data,
      strlen(ros_message->m.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
