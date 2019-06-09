/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addArsenal

Description:
	Adds filtered Arsenal, and other 2BNB functions such as "Full Heal", etc.
	to an object.

Parameters:
	0: _position - of the module <ARRAY>
	1: _objectUnderCursor - object the module was placed on <OBJECT>

Returns:
	Nothing

Examples:
	[_position, _objectUnderCursor] call bnb_e_core_fnc_addArsenal;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

private _objects = [_objectUnderCursor];

// Show Filter Dialog
private _availableFilters = [
	"None",
	"West",
	"East",
	"Independent",
	"Loadouts",
	"Mission"
];

private _arsenalObjects = [bnb_e_arsenal_objects, true] call bnb_e_core_fnc_strToArray;

private _dialogOptions = [["Filter", _availableFilters, 0]];
private _dialogControls = [["_filter", 0]];

if (isNull (_objects select 0)) then {
	_dialogOptions = [[
		"Select object to spawn",
		[""] + (_arsenalObjects apply {getText (configfile >> "CfgVehicles" >> _x >> "displayName")})
	]] + _dialogOptions;

	_dialogControls = [["_arsenalObject", 0]] + _dialogControls;
};

private _dialogResult = ["Add Filtered Arsenal", _dialogOptions] call Ares_fnc_showChooseDialog;

// If the dialog was closed.
if (_dialogResult isEqualTo []) exitWith {};

// Get the selected data
_dialogResult params _dialogControls;


// Check if module placed on an object
if (isNull (_objects select 0)) then {
	if (_arsenalObject == 0) then {
		// No object selected to be spawned
		_objects = [localize "STR_AMAE_OBJECTS"] call Achilles_fnc_SelectUnits;
		if (_objects isEqualTo []) exitWith {[localize "STR_AMAE_NO_OBJECT_SELECTED"] call Achilles_fnc_ShowZeusErrorMessage};

	} else {
		// Object selected to be spawned
		private _type = _arsenalObjects select (_arsenalObject - 1);
		_object = _type createVehicle _position;
		[[_object]] call Ares_fnc_AddUnitsToCurator;
		_objects = [_object];
	};
};

if (_objects isEqualTo []) exitWith {};

// Give server the object, so that everything in future can be applied to the object locally
if (isServer) then {
	{
		if (owner _x != 2 || owner _x != 0) then { _x setOwner 2; };
		[format["Changed ownership of %1 to %2", _x, owner _x], "core\functions\zeus_modules\fn_addArsenal.sqf"] call bnb_e_core_fnc_log;
	} foreach _objects;
};

// Add Arsenal - Remotely, since only the server has 2BNB Framework loaded
[_availableFilters select _filter, _objects] remoteExec ["bnb_f_core_fnc_arsenal", 2];

// Show Message
[localize "STR_AMAE_ARSENAL_ADDED"] call Ares_fnc_ShowZeusMessage;
