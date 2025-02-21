# generated from rosidl_generator_py/resource/_idl.py.em
# with input from frhal_msgs:srv/CalibInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'input_poses'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CalibInterface_Request(type):
    """Metaclass of message 'CalibInterface_Request'."""

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
            module = import_type_support('frhal_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'frhal_msgs.srv.CalibInterface_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calib_interface__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calib_interface__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calib_interface__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calib_interface__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calib_interface__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalibInterface_Request(metaclass=Metaclass_CalibInterface_Request):
    """Message class 'CalibInterface_Request'."""

    __slots__ = [
        '_model',
        '_base_param',
        '_x_step',
        '_y_step',
        '_angle_step',
        '_input_poses',
    ]

    _fields_and_field_types = {
        'model': 'uint8',
        'base_param': 'string',
        'x_step': 'double',
        'y_step': 'double',
        'angle_step': 'double',
        'input_poses': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.model = kwargs.get('model', int())
        self.base_param = kwargs.get('base_param', str())
        self.x_step = kwargs.get('x_step', float())
        self.y_step = kwargs.get('y_step', float())
        self.angle_step = kwargs.get('angle_step', float())
        self.input_poses = array.array('d', kwargs.get('input_poses', []))

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
        if self.model != other.model:
            return False
        if self.base_param != other.base_param:
            return False
        if self.x_step != other.x_step:
            return False
        if self.y_step != other.y_step:
            return False
        if self.angle_step != other.angle_step:
            return False
        if self.input_poses != other.input_poses:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'model' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'model' field must be an unsigned integer in [0, 255]"
        self._model = value

    @builtins.property
    def base_param(self):
        """Message field 'base_param'."""
        return self._base_param

    @base_param.setter
    def base_param(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'base_param' field must be of type 'str'"
        self._base_param = value

    @builtins.property
    def x_step(self):
        """Message field 'x_step'."""
        return self._x_step

    @x_step.setter
    def x_step(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_step' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_step' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_step = value

    @builtins.property
    def y_step(self):
        """Message field 'y_step'."""
        return self._y_step

    @y_step.setter
    def y_step(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_step' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_step' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_step = value

    @builtins.property
    def angle_step(self):
        """Message field 'angle_step'."""
        return self._angle_step

    @angle_step.setter
    def angle_step(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_step' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_step' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_step = value

    @builtins.property
    def input_poses(self):
        """Message field 'input_poses'."""
        return self._input_poses

    @input_poses.setter
    def input_poses(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'input_poses' array.array() must have the type code of 'd'"
            self._input_poses = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'input_poses' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._input_poses = array.array('d', value)


# Import statements for member types

# Member 'output_poses'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_CalibInterface_Response(type):
    """Metaclass of message 'CalibInterface_Response'."""

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
            module = import_type_support('frhal_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'frhal_msgs.srv.CalibInterface_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calib_interface__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calib_interface__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calib_interface__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calib_interface__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calib_interface__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalibInterface_Response(metaclass=Metaclass_CalibInterface_Response):
    """Message class 'CalibInterface_Response'."""

    __slots__ = [
        '_cmd_result',
        '_error_msg',
        '_output_poses',
    ]

    _fields_and_field_types = {
        'cmd_result': 'boolean',
        'error_msg': 'string',
        'output_poses': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd_result = kwargs.get('cmd_result', bool())
        self.error_msg = kwargs.get('error_msg', str())
        self.output_poses = array.array('d', kwargs.get('output_poses', []))

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
        if self.cmd_result != other.cmd_result:
            return False
        if self.error_msg != other.error_msg:
            return False
        if self.output_poses != other.output_poses:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmd_result(self):
        """Message field 'cmd_result'."""
        return self._cmd_result

    @cmd_result.setter
    def cmd_result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cmd_result' field must be of type 'bool'"
        self._cmd_result = value

    @builtins.property
    def error_msg(self):
        """Message field 'error_msg'."""
        return self._error_msg

    @error_msg.setter
    def error_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_msg' field must be of type 'str'"
        self._error_msg = value

    @builtins.property
    def output_poses(self):
        """Message field 'output_poses'."""
        return self._output_poses

    @output_poses.setter
    def output_poses(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'output_poses' array.array() must have the type code of 'd'"
            self._output_poses = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'output_poses' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._output_poses = array.array('d', value)


class Metaclass_CalibInterface(type):
    """Metaclass of service 'CalibInterface'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('frhal_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'frhal_msgs.srv.CalibInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__calib_interface

            from frhal_msgs.srv import _calib_interface
            if _calib_interface.Metaclass_CalibInterface_Request._TYPE_SUPPORT is None:
                _calib_interface.Metaclass_CalibInterface_Request.__import_type_support__()
            if _calib_interface.Metaclass_CalibInterface_Response._TYPE_SUPPORT is None:
                _calib_interface.Metaclass_CalibInterface_Response.__import_type_support__()


class CalibInterface(metaclass=Metaclass_CalibInterface):
    from frhal_msgs.srv._calib_interface import CalibInterface_Request as Request
    from frhal_msgs.srv._calib_interface import CalibInterface_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
