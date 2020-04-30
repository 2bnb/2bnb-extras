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
[format["_logic: %1 :: _objects:", _logic, _objects], "core\functions\eden_modules\fn_barracksModule.sqf"] call bnb_e_core_fnc_log;

if (_objects isEqualTo []) exitWith {
	[format["Module Error: No objects synced! %1", _objects], "core\functions\eden_modules\fn_barracksModule.sqf"] call bnb_e_core_fnc_log;
};

if (!isServer) exitWith {
	["Attempted to execute module whilst not on the server.", "core\functions\eden_modules\fn_barracksModule.sqf"] call bnb_e_core_fnc_log;
};

if (_logic getVariable ["HasArsenal", false]) then {
	private _whitelist = [_logic getVariable ["ArsenalFilter", ""]] call bnb_f_core_fnc_getArsenalFilter;

	{
		[_x, [], true] call ace_arsenal_fnc_initBox;
		[_x, _whitelist, true] call ace_arsenal_fnc_addVirtualItems;
		[format["Added %1 filtered arsenal to %2", _whitelist, _x], "core\functions\fn_arsenal.sqf"] call bnb_e_core_fnc_log;
	} foreach _objects;
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
