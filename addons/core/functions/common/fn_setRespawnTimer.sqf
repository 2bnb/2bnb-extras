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

[
	"cba_settings_setSettingMission",
	[
		"bnb_e_respawn_timer",
		_time,
		1
	],
	"bnb_e_respawn_timer_event"
] call CBA_fnc_globalEventJIP;

[format["Respawn timer set to %1", [_time, "M:SS"] call CBA_fnc_formatElapsedTime]] call Ares_fnc_ShowZeusMessage;
[format["Respawn timer set to %1", [_time, "M:SS"] call CBA_fnc_formatElapsedTime], "core\functions\common\fn_setRespawnTimer.sqf"] call bnb_e_core_fnc_log;
