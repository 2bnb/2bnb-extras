/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_supportsModule

Description:
	Adds support functions to synced objects.

Parameters:
	0: _logic - of the module <OBJECT>
	1: _objects - synced to the module <ARRAY>

Returns:
	true

Examples:


Author:
	Arend
---------------------------------------------------------------------------- */
params [["_logic", objNull, [objNull]], ["_objects", [], [[]]]];

if (_objects isEqualTo []) exitWith {
	[format["Module Error: No objects synced! %1", _objects], "core\functions\eden_modules\fn_barracksModule.sqf"] call bnb_e_core_fnc_log;
};

if (!isServer) exitWith {
	["Attempted to execute module not on the server.", "core\functions\eden_modules\fn_barracksModule.sqf"] call bnb_e_core_fnc_log;
};

if (_logic getVariable ["HasArsenal", false]) then {
	// Add Arsenal - Remotely, since only the server has 2BNB Framework loaded
	[_logic getVariable ["ArsenalFilter", ""], _objects] call bnb_f_core_fnc_arsenal;
};

if (_logic getVariable ["HasFullHeal", false]) then {
	[_objects] call bnb_f_core_fnc_fullHeal;
};
