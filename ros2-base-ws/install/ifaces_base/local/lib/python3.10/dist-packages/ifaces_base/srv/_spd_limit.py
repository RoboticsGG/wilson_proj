# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ifaces_base:srv/SpdLimit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpdLimit_Request(type):
    """Metaclass of message 'SpdLimit_Request'."""

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
            module = import_type_support('ifaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ifaces_base.srv.SpdLimit_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spd_limit__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spd_limit__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spd_limit__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spd_limit__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spd_limit__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpdLimit_Request(metaclass=Metaclass_SpdLimit_Request):
    """Message class 'SpdLimit_Request'."""

    __slots__ = [
        '_rover_spd',
    ]

    _fields_and_field_types = {
        'rover_spd': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rover_spd = kwargs.get('rover_spd', int())

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
        if self.rover_spd != other.rover_spd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rover_spd(self):
        """Message field 'rover_spd'."""
        return self._rover_spd

    @rover_spd.setter
    def rover_spd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rover_spd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rover_spd' field must be an unsigned integer in [0, 255]"
        self._rover_spd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SpdLimit_Response(type):
    """Metaclass of message 'SpdLimit_Response'."""

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
            module = import_type_support('ifaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ifaces_base.srv.SpdLimit_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spd_limit__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spd_limit__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spd_limit__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spd_limit__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spd_limit__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpdLimit_Response(metaclass=Metaclass_SpdLimit_Response):
    """Message class 'SpdLimit_Response'."""

    __slots__ = [
        '_spd_result',
    ]

    _fields_and_field_types = {
        'spd_result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.spd_result = kwargs.get('spd_result', str())

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
        if self.spd_result != other.spd_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def spd_result(self):
        """Message field 'spd_result'."""
        return self._spd_result

    @spd_result.setter
    def spd_result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'spd_result' field must be of type 'str'"
        self._spd_result = value


class Metaclass_SpdLimit(type):
    """Metaclass of service 'SpdLimit'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ifaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ifaces_base.srv.SpdLimit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__spd_limit

            from ifaces_base.srv import _spd_limit
            if _spd_limit.Metaclass_SpdLimit_Request._TYPE_SUPPORT is None:
                _spd_limit.Metaclass_SpdLimit_Request.__import_type_support__()
            if _spd_limit.Metaclass_SpdLimit_Response._TYPE_SUPPORT is None:
                _spd_limit.Metaclass_SpdLimit_Response.__import_type_support__()


class SpdLimit(metaclass=Metaclass_SpdLimit):
    from ifaces_base.srv._spd_limit import SpdLimit_Request as Request
    from ifaces_base.srv._spd_limit import SpdLimit_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
