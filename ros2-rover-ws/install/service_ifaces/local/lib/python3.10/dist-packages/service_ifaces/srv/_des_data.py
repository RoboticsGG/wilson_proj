# generated from rosidl_generator_py/resource/_idl.py.em
# with input from service_ifaces:srv/DesData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DesData_Request(type):
    """Metaclass of message 'DesData_Request'."""

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
            module = import_type_support('service_ifaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'service_ifaces.srv.DesData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__des_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__des_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__des_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__des_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__des_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DesData_Request(metaclass=Metaclass_DesData_Request):
    """Message class 'DesData_Request'."""

    __slots__ = [
        '_des_lat',
        '_des_long',
    ]

    _fields_and_field_types = {
        'des_lat': 'double',
        'des_long': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.des_lat = kwargs.get('des_lat', float())
        self.des_long = kwargs.get('des_long', float())

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
        if self.des_lat != other.des_lat:
            return False
        if self.des_long != other.des_long:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def des_lat(self):
        """Message field 'des_lat'."""
        return self._des_lat

    @des_lat.setter
    def des_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'des_lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'des_lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._des_lat = value

    @builtins.property
    def des_long(self):
        """Message field 'des_long'."""
        return self._des_long

    @des_long.setter
    def des_long(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'des_long' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'des_long' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._des_long = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DesData_Response(type):
    """Metaclass of message 'DesData_Response'."""

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
            module = import_type_support('service_ifaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'service_ifaces.srv.DesData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__des_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__des_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__des_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__des_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__des_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DesData_Response(metaclass=Metaclass_DesData_Response):
    """Message class 'DesData_Response'."""

    __slots__ = [
        '_result_fser',
    ]

    _fields_and_field_types = {
        'result_fser': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result_fser = kwargs.get('result_fser', str())

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
        if self.result_fser != other.result_fser:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result_fser(self):
        """Message field 'result_fser'."""
        return self._result_fser

    @result_fser.setter
    def result_fser(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result_fser' field must be of type 'str'"
        self._result_fser = value


class Metaclass_DesData(type):
    """Metaclass of service 'DesData'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('service_ifaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'service_ifaces.srv.DesData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__des_data

            from service_ifaces.srv import _des_data
            if _des_data.Metaclass_DesData_Request._TYPE_SUPPORT is None:
                _des_data.Metaclass_DesData_Request.__import_type_support__()
            if _des_data.Metaclass_DesData_Response._TYPE_SUPPORT is None:
                _des_data.Metaclass_DesData_Response.__import_type_support__()


class DesData(metaclass=Metaclass_DesData):
    from service_ifaces.srv._des_data import DesData_Request as Request
    from service_ifaces.srv._des_data import DesData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
