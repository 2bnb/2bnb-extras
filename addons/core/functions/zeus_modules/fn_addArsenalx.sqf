/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addArsenal

Description:
	Adds filtered Arsenal, and other 2BNB functions such as "Full Heal", etc.
	to an object.

Parameters:
	0: _position - of the module <ARRAY>
	1: _objectUnderCursor - object the module was placed on <OBJECT>

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
		["Combo Box Control", ["Files","Terminal"], 0],
		["Text Control", "", ""]
	]
] call Ares_fnc_showChooseDialog;

// If the dialog was closed.
if (_dialogResult isEqualTo []) exitWith {};

_dialogResult params ["_comboBoxResult", "_typedText"];

// Output the data to the chat.
systemChat format ["Combo Box Result: %1", _comboBoxResult];
systemChat format ["Typed Text: %1", _typedText];

_obj = "Land_File1_F" createVehicle _position;
_obj setVariable ["IntelText",_typedText,true];
_action = ["ReadIntel","Read Intel","",{createDialog "Intel1";_display = findDisplay 6699;( _display displayCtrl 7777 ) ctrlSetStructuredText parseText (_target getVariable "IntelText");},{true}] call ace_interact_menu_fnc_createAction;
[_obj, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
