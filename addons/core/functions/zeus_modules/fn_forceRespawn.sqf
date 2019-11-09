/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_forceRespawn

Description:
	Forces all the dead people to respawn in 2 seconds, lasts 6 seconds. After that the respawn is disabled once again.

Parameters:
	0: _position - of the module <ARRAY>

Returns:
	Nothing

Examples:
	[_position, _objectUnderCursor] call bnb_e_core_fnc_addArsenal;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];



private _dialogResult =
[
	"Add Static Intel",
	[
		["Combo Box Control", ["Files","Notepad","Top secret Files","Research files","File w photo","Laptop","Laptop Rugged","Laptop old"], 0],
		["Text Control", "", ""]
	]
] call Ares_fnc_showChooseDialog;

if (_dialogResult isEqualTo []) exitWith {};

_dialogResult params ["_comboBoxResult", "_typedText"];

[[], setPlayerRespawnTime 2; sleep 6; setPlayerRespawnTime 99999;] remoteExec ["bis_fnc_call", 0]; // Dosent work
