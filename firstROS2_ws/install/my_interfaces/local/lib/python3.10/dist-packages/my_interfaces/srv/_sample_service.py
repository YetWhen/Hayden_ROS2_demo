# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_interfaces:srv/SampleService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SampleService_Request(type):
    """Metaclass of message 'SampleService_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interfaces.srv.SampleService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sample_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sample_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sample_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sample_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sample_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SampleService_Request(metaclass=Metaclass_SampleService_Request):
    """Message class 'SampleService_Request'."""

    __slots__ = [
        '_a',
        '_b',
        '_c',
        '_d',
        '_e',
        '_f',
        '_g',
        '_h',
    ]

    _fields_and_field_types = {
        'a': 'double',
        'b': 'float',
        'c': 'int8',
        'd': 'int16',
        'e': 'int64',
        'f': 'octet',
        'g': 'boolean',
        'h': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a = kwargs.get('a', float())
        self.b = kwargs.get('b', float())
        self.c = kwargs.get('c', int())
        self.d = kwargs.get('d', int())
        self.e = kwargs.get('e', int())
        self.f = kwargs.get('f', bytes([0]))
        self.g = kwargs.get('g', bool())
        self.h = kwargs.get('h', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        if self.c != other.c:
            return False
        if self.d != other.d:
            return False
        if self.e != other.e:
            return False
        if self.f != other.f:
            return False
        if self.g != other.g:
            return False
        if self.h != other.h:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a = value

    @builtins.property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'b' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._b = value

    @builtins.property
    def c(self):
        """Message field 'c'."""
        return self._c

    @c.setter
    def c(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'c' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'c' field must be an integer in [-128, 127]"
        self._c = value

    @builtins.property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'd' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'd' field must be an integer in [-32768, 32767]"
        self._d = value

    @builtins.property
    def e(self):
        """Message field 'e'."""
        return self._e

    @e.setter
    def e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'e' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'e' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._e = value

    @builtins.property
    def f(self):
        """Message field 'f'."""
        return self._f

    @f.setter
    def f(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'f' field must be of type 'bytes' or 'ByteString' with length 1"
        self._f = value

    @builtins.property
    def g(self):
        """Message field 'g'."""
        return self._g

    @g.setter
    def g(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'g' field must be of type 'bool'"
        self._g = value

    @builtins.property
    def h(self):
        """Message field 'h'."""
        return self._h

    @h.setter
    def h(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'h' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'h' field must be an unsigned integer in [0, 255]"
        self._h = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SampleService_Response(type):
    """Metaclass of message 'SampleService_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interfaces.srv.SampleService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sample_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sample_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sample_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sample_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sample_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SampleService_Response(metaclass=Metaclass_SampleService_Response):
    """Message class 'SampleService_Response'."""

    __slots__ = [
        '_i',
        '_j',
        '_k',
        '_l',
        '_m',
    ]

    _fields_and_field_types = {
        'i': 'uint8',
        'j': 'uint16',
        'k': 'uint32',
        'l': 'uint64',
        'm': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.i = kwargs.get('i', int())
        self.j = kwargs.get('j', int())
        self.k = kwargs.get('k', int())
        self.l = kwargs.get('l', int())
        self.m = kwargs.get('m', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.i != other.i:
            return False
        if self.j != other.j:
            return False
        if self.k != other.k:
            return False
        if self.l != other.l:
            return False
        if self.m != other.m:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def i(self):
        """Message field 'i'."""
        return self._i

    @i.setter
    def i(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'i' field must be an unsigned integer in [0, 255]"
        self._i = value

    @builtins.property
    def j(self):
        """Message field 'j'."""
        return self._j

    @j.setter
    def j(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'j' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'j' field must be an unsigned integer in [0, 65535]"
        self._j = value

    @builtins.property
    def k(self):
        """Message field 'k'."""
        return self._k

    @k.setter
    def k(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'k' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'k' field must be an unsigned integer in [0, 4294967295]"
        self._k = value

    @builtins.property
    def l(self):
        """Message field 'l'."""
        return self._l

    @l.setter
    def l(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'l' field must be an unsigned integer in [0, 18446744073709551615]"
        self._l = value

    @builtins.property
    def m(self):
        """Message field 'm'."""
        return self._m

    @m.setter
    def m(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'm' field must be of type 'str'"
        self._m = value


class Metaclass_SampleService(type):
    """Metaclass of service 'SampleService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interfaces.srv.SampleService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sample_service

            from my_interfaces.srv import _sample_service
            if _sample_service.Metaclass_SampleService_Request._TYPE_SUPPORT is None:
                _sample_service.Metaclass_SampleService_Request.__import_type_support__()
            if _sample_service.Metaclass_SampleService_Response._TYPE_SUPPORT is None:
                _sample_service.Metaclass_SampleService_Response.__import_type_support__()


class SampleService(metaclass=Metaclass_SampleService):
    from my_interfaces.srv._sample_service import SampleService_Request as Request
    from my_interfaces.srv._sample_service import SampleService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
