/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addBarracks

Description:
	Adds filtered Arsenal, and other 2BNB functions such as "Full Heal", etc.
	to an object.

Parameters:
	0: _position - of the module <ARRAY>
	1: _objectUnderCursor - object the module was placed on <OBJECT>

Returns:
	Nothing

Examples:
	[_position, _objectUnderCursor] call bnb_e_core_fnc_addBarracks;

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


// Add Full Heal?
_dialogOptions = _dialogOptions + [["Add Full Heal?", ["Yes", "No"]]];
_dialogControls = _dialogControls + [["_hasFullHeal", 0]];


// Add Spectator?
_dialogOptions = _dialogOptions + [["Add Spectator?", ["Yes", "No"]]];
_dialogControls = _dialogControls + [["_hasSpectator", 0]];

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
		[format["No objects selected: %1", _objects], "core\functions\zeus_modules\fn_addBarracks.sqf"] call bnb_e_core_fnc_log;
		if (_objects isEqualTo [] || !(_objects isEqualType [])) exitWith {[localize "STR_AMAE_NO_OBJECT_SELECTED"] call Achilles_fnc_ShowZeusErrorMessage};

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
if (!isServer) then {
	{
		if (_x setOwner 2) then {
			[format["Changed ownership of %1 to %2", _x, owner _x], "core\functions\zeus_modules\fn_addBarracks.sqf"] call bnb_e_core_fnc_log;
		} else {
			[format["Could not change ownership of %1 to %2", _x, owner _x], "core\functions\zeus_modules\fn_addBarracks.sqf"] call bnb_e_core_fnc_log;
		};
	} foreach _objects;
};


// Add Arsenal - Remotely, since only the server has 2BNB Framework loaded
[_availableFilters select _filter, _objects] remoteExec ["bnb_f_core_fnc_arsenal", 2];

if (_hasFullHeal isEqualTo 0) then {
	[_objects] remoteExec ["bnb_f_core_fnc_fullHeal", 2];
};

if (_hasSpectator isEqualTo 0) then {
	{
		[[_x], {[_this select 0] call bnb_e_core_fnc_addSpectator;}] remoteExec ["BIS_fnc_call", 0, _x];
	} foreach _objects;
};

// Show Message
["Barracks functions added!"] call Ares_fnc_ShowZeusMessage;