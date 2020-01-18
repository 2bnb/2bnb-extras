/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_listDeadPlayers

Description:
	Format a message listing dead players. Can be filtered by side.

Parameters:
	0: _side - Filter list by side <SIDE|STRING>

Returns:
	Formatted message listing dead players <STRING>

Examples:
	[east] call bnb_e_core_fnc_listDeadPlayers;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_side", "", ["", west]]];

private _deadPlayers = [] call bnb_e_core_fnc_getDeadPlayers;

if (_side isEqualTo "") then {
	_deadPlayers = _deadPlayers call bnb_e_core_fnc_arrayFlatten;
} else {
	private _sideReference = [WEST, EAST, RESISTANCE, CIVILIAN];

	_deadPlayers = _deadPlayers select (_sideReference find _side);
};

if (_deadPlayers isEqualTo []) exitWith {
	hint "There aren't any dead players.";
};

[format["Listing dead players: %1", _deadPlayers], "core\functions\common\fn_listDeadPlayers.sqf"] call bnb_e_core_fnc_log;
private _message = "Dead players:\n";
{
	[format["Dead: %1 in %2", name _x, side group _x], "core\functions\common\fn_listDeadPlayers.sqf"] call bnb_e_core_fnc_log;
	_message = _message + name _x + " [" + side group _x + "]\n";
} foreach _deadPlayers;

hint _message;
