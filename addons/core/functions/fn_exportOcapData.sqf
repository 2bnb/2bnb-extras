/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_exportOcapData

Description:
	Exports OCAP data to web server and (if requested) ends mission with a
	"Mission Success" screen

Parameters:
	0: _value - value to be cast <STRING|BOOL|NUMBER>

Returns:
	Result of the cast <BOOLEAN>

Examples:
	[_number] call bnb_e_core_fnc_exportOcapData;

Author:
	Arend
---------------------------------------------------------------------------- */
private _endTypes = [
	"Don't end",
	"EveryoneWon",
	"EveryoneLost",
	"SideScore",
	"GroupScore",
	"PlayerScore"
];

private _dialogResult = [
	"Export Recording Data", [
		["End mission type", _endTypes]
	]
] call Ares_fnc_showChooseDialog;

_dialogResult params [
	["_endMission", 0]
];

if (isDedicated) then {
    [] call ocap_fnc_exportData;
};

// Send feedback to Zeus mission makers only!
if (!isNull (getAssignedCuratorLogic player)) then {
	hint "Mission recording has been exported to OCAP.\nCheck http://2bnb-operations.saborknight.com to see the recording";
};

if (_endMission > 0) then {
	(_endTypes select _endMission) call BIS_fnc_endMissionServer;
};
