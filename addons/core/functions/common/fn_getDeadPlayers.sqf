/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_getDeadPlayers

Description:
	Create a list of dead players.

Parameters:
	None

Returns:
	Array of players who are not alive. Sub-array index: <ARRAY>
	0: West
	1: East
	2: Resistance
	3: Civilian

Examples:
	[] call bnb_e_core_fnc_getDeadPlayers;

Author:
	Arend
---------------------------------------------------------------------------- */
private _deadPlayers = [[],[],[],[]];
private _sideReference = [WEST, EAST, RESISTANCE, CIVILIAN];
private _side = 0;
{
	if (!alive _x) then {
		_side = _sideReference find (side group _x);
		if (_side > -1) then {
			(_deadPlayers select _side) pushBack _x;
		};
	};
} foreach (allPlayers - entities "HeadlessClient_F");

[format["Got dead players %1", _deadPlayers], "core\functions\common\fn_getDeadPlayers.sqf"] call bnb_e_core_fnc_log;
_deadPlayers;
