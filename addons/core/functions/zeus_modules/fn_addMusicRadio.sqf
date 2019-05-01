/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addMusicRadio

Description:
	Adds music radio from KLPQ to the backpack or to the vehicle, depending on
	what the module was placed over.

Parameters:
	0: _position - of the module <ARRAY>
	1: _objectUnderCursor - object the module was placed on <OBJECT>

Returns:
	Nothing

Examples:
	[_position, _objectUnderCursor] call bnb_e_core_fnc_addMusicRadio;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

private _objects = [_objectUnderCursor];

// Check if module placed on an object
if (isNull (_objects select 0)) then {
	_objects = [localize "STR_AMAE_OBJECTS"] call Achilles_fnc_SelectUnits;
	if (_objects isEqualTo []) exitWith {[localize "STR_AMAE_NO_OBJECT_SELECTED"] call Achilles_fnc_ShowZeusErrorMessage};
};

{
	if (_x isKindOf "Man") then {
		[_x] call klpq_musicRadio_fnc_addBackpackRadio;
	} else {
		[_x, true] call klpq_musicRadio_fnc_addRadio;
	}
} foreach _objects;

[format ["Added music radio to %1", _objects], "core\functions\zeus_modules\fn_addArsenal.sqf"] call bnb_e_core_fnc_log;

// Show Message
["Music Radio added!"] call Ares_fnc_ShowZeusMessage;
