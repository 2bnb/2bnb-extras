/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_barracksModule

Description:
	Adds support functions to synced objects.

Parameters:
	0: _logic - of the module <OBJECT>
	1: _objects - synced to the module <ARRAY>

Returns:
	true

Examples:
	[_logic, _objects] call bnb_e_core_fnc_barracksModule;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_logic", objNull, [objNull]], ["_objects", [], [[]]]];

if (_objects isEqualTo []) exitWith {
	[format["Module Error: No objects synced! %1", _objects], "core\functions\eden_modules\fn_barracksModule.sqf"] call bnb_e_core_fnc_log;
};

if (!isServer) exitWith {
	["Attempted to execute module whilst not on the server.", "core\functions\eden_modules\fn_barracksModule.sqf"] call bnb_e_core_fnc_log;
};

if (_logic getVariable ["HasArsenal", false]) then {
	// Add Arsenal - Only if we're the server, since the Arsenal functions are GlobalJIP
	if (isServer) then {
		[_logic getVariable ["ArsenalFilter", ""], _objects] call bnb_f_core_fnc_arsenal;
	};
};

if (_logic getVariable ["HasFullHeal", false]) then {
	[_objects] call bnb_f_core_fnc_fullHeal;
};

[format["Loading Spectator? %1, with %2", _logic getVariable ["HasSpectator", false], _objects], "core\functions\eden_modules\fn_barracksModule.sqf"] call bnb_e_core_fnc_log;
if (_logic getVariable ["HasSpectator", false]) then {
	{
		[[_x], {[_this select 0] call bnb_e_core_fnc_addSpectator;}] remoteExec ["BIS_fnc_call", 0, _x];
	} foreach _objects;
};

true;
