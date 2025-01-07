# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hapthexa_msgs:msg/ForceSensor.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ForceSensor(type):
    """Metaclass of message 'ForceSensor'."""

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
            module = import_type_support('hapthexa_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hapthexa_msgs.msg.ForceSensor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__force_sensor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__force_sensor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__force_sensor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__force_sensor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__force_sensor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ForceSensor(metaclass=Metaclass_ForceSensor):
    """Message class 'ForceSensor'."""

    __slots__ = [
        '_loadcell1',
        '_loadcell2',
        '_piezo',
        '_radial_direction',
        '_radial_magnitude',
        '_loadcell1_raw',
        '_loadcell2_raw',
        '_piezo_raw',
        '_x',
        '_y',
        '_z',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'loadcell1': 'double',
        'loadcell2': 'double',
        'piezo': 'double',
        'radial_direction': 'double',
        'radial_magnitude': 'double',
        'loadcell1_raw': 'int64',
        'loadcell2_raw': 'int64',
        'piezo_raw': 'int64',
        'x': 'boolean',
        'y': 'boolean',
        'z': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.loadcell1 = kwargs.get('loadcell1', float())
        self.loadcell2 = kwargs.get('loadcell2', float())
        self.piezo = kwargs.get('piezo', float())
        self.radial_direction = kwargs.get('radial_direction', float())
        self.radial_magnitude = kwargs.get('radial_magnitude', float())
        self.loadcell1_raw = kwargs.get('loadcell1_raw', int())
        self.loadcell2_raw = kwargs.get('loadcell2_raw', int())
        self.piezo_raw = kwargs.get('piezo_raw', int())
        self.x = kwargs.get('x', bool())
        self.y = kwargs.get('y', bool())
        self.z = kwargs.get('z', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.loadcell1 != other.loadcell1:
            return False
        if self.loadcell2 != other.loadcell2:
            return False
        if self.piezo != other.piezo:
            return False
        if self.radial_direction != other.radial_direction:
            return False
        if self.radial_magnitude != other.radial_magnitude:
            return False
        if self.loadcell1_raw != other.loadcell1_raw:
            return False
        if self.loadcell2_raw != other.loadcell2_raw:
            return False
        if self.piezo_raw != other.piezo_raw:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def loadcell1(self):
        """Message field 'loadcell1'."""
        return self._loadcell1

    @loadcell1.setter
    def loadcell1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'loadcell1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loadcell1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loadcell1 = value

    @builtins.property
    def loadcell2(self):
        """Message field 'loadcell2'."""
        return self._loadcell2

    @loadcell2.setter
    def loadcell2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'loadcell2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loadcell2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loadcell2 = value

    @builtins.property
    def piezo(self):
        """Message field 'piezo'."""
        return self._piezo

    @piezo.setter
    def piezo(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'piezo' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'piezo' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._piezo = value

    @builtins.property
    def radial_direction(self):
        """Message field 'radial_direction'."""
        return self._radial_direction

    @radial_direction.setter
    def radial_direction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'radial_direction' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'radial_direction' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._radial_direction = value

    @builtins.property
    def radial_magnitude(self):
        """Message field 'radial_magnitude'."""
        return self._radial_magnitude

    @radial_magnitude.setter
    def radial_magnitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'radial_magnitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'radial_magnitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._radial_magnitude = value

    @builtins.property
    def loadcell1_raw(self):
        """Message field 'loadcell1_raw'."""
        return self._loadcell1_raw

    @loadcell1_raw.setter
    def loadcell1_raw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'loadcell1_raw' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'loadcell1_raw' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._loadcell1_raw = value

    @builtins.property
    def loadcell2_raw(self):
        """Message field 'loadcell2_raw'."""
        return self._loadcell2_raw

    @loadcell2_raw.setter
    def loadcell2_raw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'loadcell2_raw' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'loadcell2_raw' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._loadcell2_raw = value

    @builtins.property
    def piezo_raw(self):
        """Message field 'piezo_raw'."""
        return self._piezo_raw

    @piezo_raw.setter
    def piezo_raw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'piezo_raw' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'piezo_raw' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._piezo_raw = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'x' field must be of type 'bool'"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'y' field must be of type 'bool'"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'z' field must be of type 'bool'"
        self._z = value
