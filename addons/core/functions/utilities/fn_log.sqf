/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_log

Description:
	Logs a message to the .rpt file and to systemChat

Parameters:
	0: _message - message to be logged <ANY>
	1: _filename - filename in which log originates <ANY>

Returns:
	Nothing

Examples:
	["Troubleshooting info!", "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;

Author:
	Arend
	CreepPork_LV
	Anton Struyk
---------------------------------------------------------------------------- */
params [["_message", "No Message", []], ["_fileName", "N/A", []]];

if (bnb_e_debug) then {
	if (_fileName isEqualTo "N/A") then {
		systemChat (format["[2BNB Debug] %1", _message]);
		diag_log format["[2BNB Debug] %1", _message];
	} else {
		systemChat (format["[2BNB Debug] [%1] %2", _fileName, _message]);
		diag_log format["[2BNB Debug] [%1] %2", _fileName, _message];
	};
};
