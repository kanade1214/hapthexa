# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hapthexa_msgs:srv/ChangeCurrent.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChangeCurrent_Request(type):
    """Metaclass of message 'ChangeCurrent_Request'."""

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
                'hapthexa_msgs.srv.ChangeCurrent_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_current__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_current__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_current__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_current__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_current__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeCurrent_Request(metaclass=Metaclass_ChangeCurrent_Request):
    """Message class 'ChangeCurrent_Request'."""

    __slots__ = [
        '_num',
        '_current_coxa',
        '_current_femur',
        '_current_tibia',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'num': 'int64',
        'current_coxa': 'int64',
        'current_femur': 'int64',
        'current_tibia': 'int64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
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
        self.num = kwargs.get('num', int())
        self.current_coxa = kwargs.get('current_coxa', int())
        self.current_femur = kwargs.get('current_femur', int())
        self.current_tibia = kwargs.get('current_tibia', int())

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
        if self.num != other.num:
            return False
        if self.current_coxa != other.current_coxa:
            return False
        if self.current_femur != other.current_femur:
            return False
        if self.current_tibia != other.current_tibia:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num(self):
        """Message field 'num'."""
        return self._num

    @num.setter
    def num(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num = value

    @builtins.property
    def current_coxa(self):
        """Message field 'current_coxa'."""
        return self._current_coxa

    @current_coxa.setter
    def current_coxa(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_coxa' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'current_coxa' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._current_coxa = value

    @builtins.property
    def current_femur(self):
        """Message field 'current_femur'."""
        return self._current_femur

    @current_femur.setter
    def current_femur(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_femur' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'current_femur' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._current_femur = value

    @builtins.property
    def current_tibia(self):
        """Message field 'current_tibia'."""
        return self._current_tibia

    @current_tibia.setter
    def current_tibia(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_tibia' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'current_tibia' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._current_tibia = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeCurrent_Response(type):
    """Metaclass of message 'ChangeCurrent_Response'."""

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
                'hapthexa_msgs.srv.ChangeCurrent_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_current__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_current__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_current__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_current__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_current__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeCurrent_Response(metaclass=Metaclass_ChangeCurrent_Response):
    """Message class 'ChangeCurrent_Response'."""

    __slots__ = [
        '_check_fields',
    ]

    _fields_and_field_types = {
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeCurrent_Event(type):
    """Metaclass of message 'ChangeCurrent_Event'."""

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
                'hapthexa_msgs.srv.ChangeCurrent_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_current__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_current__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_current__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_current__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_current__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeCurrent_Event(metaclass=Metaclass_ChangeCurrent_Event):
    """Message class 'ChangeCurrent_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<hapthexa_msgs/ChangeCurrent_Request, 1>',
        'response': 'sequence<hapthexa_msgs/ChangeCurrent_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['hapthexa_msgs', 'srv'], 'ChangeCurrent_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['hapthexa_msgs', 'srv'], 'ChangeCurrent_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from hapthexa_msgs.srv import ChangeCurrent_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ChangeCurrent_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ChangeCurrent_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from hapthexa_msgs.srv import ChangeCurrent_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ChangeCurrent_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ChangeCurrent_Response'"
        self._response = value


class Metaclass_ChangeCurrent(type):
    """Metaclass of service 'ChangeCurrent'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hapthexa_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hapthexa_msgs.srv.ChangeCurrent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__change_current

            from hapthexa_msgs.srv import _change_current
            if _change_current.Metaclass_ChangeCurrent_Request._TYPE_SUPPORT is None:
                _change_current.Metaclass_ChangeCurrent_Request.__import_type_support__()
            if _change_current.Metaclass_ChangeCurrent_Response._TYPE_SUPPORT is None:
                _change_current.Metaclass_ChangeCurrent_Response.__import_type_support__()
            if _change_current.Metaclass_ChangeCurrent_Event._TYPE_SUPPORT is None:
                _change_current.Metaclass_ChangeCurrent_Event.__import_type_support__()


class ChangeCurrent(metaclass=Metaclass_ChangeCurrent):
    from hapthexa_msgs.srv._change_current import ChangeCurrent_Request as Request
    from hapthexa_msgs.srv._change_current import ChangeCurrent_Response as Response
    from hapthexa_msgs.srv._change_current import ChangeCurrent_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
