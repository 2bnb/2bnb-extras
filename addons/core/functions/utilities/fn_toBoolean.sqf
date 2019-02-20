/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_toBoolean

Description:
	Casts any Number or String to Boolean

Parameters:
	0: _value - value to be cast <STRING|BOOL|NUMBER>

Returns:
	Result of the cast <BOOLEAN>

Examples:
	[_number] call bnb_e_core_toBoolean;

Author:
	Arend
---------------------------------------------------------------------------- */
params ["_value"];

if (typeName _value == "BOOL") exitWith {_value;};

if (typeName _value != "SCALAR") then {
	_value = parseNumber _value;
};

if (_value > 0) then {
	_value = true;
} else {
	_value = false;
};

_value;
