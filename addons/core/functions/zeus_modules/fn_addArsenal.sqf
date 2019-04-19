/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addArsenal

Description:
	Adds filtered Arsenal, and other 2BNB functions such as "Full Heal", etc.
	to an object.

Parameters:
	None

Returns:
	Nothing

Examples:
	call bnb_e_core_fnc_addArsenal;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

private _objects = [_objectUnderCursor];

// Check if module placed on an object!
if (isNull (_objects select 0)) then
{
	_objects = [localize "STR_AMAE_OBJECTS"] call Achilles_fnc_SelectUnits;
};
if (isNil "_objects") exitWith {};
if (_objects isEqualTo []) exitWith {[localize "STR_AMAE_NO_OBJECT_SELECTED"] call Achilles_fnc_ShowZeusErrorMessage};

// Show Filter Dialog
private _availableFilters = [
	"None",
	"West",
	"East",
	"Independent",
	"Loadouts",
	"Mission"
];

private _dialogResult = [
	"Add Contaminated Area", [["Filter", _availableFilters, 0]]
] call Ares_fnc_showChooseDialog;

// If the dialog was closed.
if (_dialogResult isEqualTo []) exitWith {};

// Get the selected data
_dialogResult params [["_filter", 0]];

// Add Arsenal - Remotely, since only the server has 2BNB Framework loaded
[[_availableFilters select _filter, _objects], bnb_f_core_fnc_arsenal, 2] call Achilles_fnc_spawn;

// Show Message
[localize "STR_AMAE_ARSENAL_ADDED"] call Ares_fnc_ShowZeusMessage;
