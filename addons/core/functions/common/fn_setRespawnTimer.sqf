/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_setRespawnTimer

Description:
	Set the respawn timer CBA Setting.

Parameters:
	0: _time - Time in seconds to set to <NUMBER>

Returns:
	Nothing

Examples:
	[134] call bnb_e_core_fnc_setRespawnTimer;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_time", 0, [0]]];

private _response = [
	"bnb_e_respawn_timer",
	_time,
	1,
	"mission"
] call CBA_settings_fnc_set; // This is an internal CBA function and may change or cease to work without notice!

if (_response) then {
	[format["Respawn timer set to %1", [_time, "M:SS"] call CBA_fnc_formatElapsedTime]] call Ares_fnc_ShowZeusMessage;
} else {
	[format["Respawn timer remains as %1", [bnb_e_respawn_timer, "M:SS"] call CBA_fnc_formatElapsedTime]] call Ares_fnc_ShowZeusMessage;
};
