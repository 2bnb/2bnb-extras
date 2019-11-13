/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addIntel

Description:
	Adds static intel objects to be placed on the ground

Parameters:
	0: _position - of the module <ARRAY>
	1: _objectUnderCursor - object the module was placed on <OBJECT>

Returns:
	Nothing

Examples:
	[_position, _objectUnderCursor] call bnb_e_core_fnc_addIntel;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

private _dialogResult =
[
	"Add Static Intel",
	[
		[
			"Combo Box Control",
			[
				"Files",
				"Notepad",
				"Top secret Files",
				"Research files",
				"File w photo",
				"Laptop",
				"Laptop Rugged",
				"Laptop old"
			],
			0
		],
		["Text Control", "", ""]
	]
] call Ares_fnc_showChooseDialog;

if (_dialogResult isEqualTo []) exitWith {};

_dialogResult params ["_comboBoxResult", "_typedText"];

_type="";
switch (_comboBoxResult) do {
    case 0: { _type = "Land_File1_F" };
    case 1: { _type = "Land_Notepad_F" };
	case 2: { _type = "Land_Document_01_F" };
	case 3: { _type = "Land_File2_F" };
	case 4: { _type = "Land_FilePhotos_F" };
	case 5: { _type = "Land_Laptop_unfolded_F" };
	case 6: { _type = "Land_Laptop_03_black_F" };
	case 7: { _type = "Land_Laptop_02_unfolded_F" };
    default { _type = "Land_File1_F" };
};
_obj = _type createVehicle _position;
_obj setVariable ["IntelText",_typedText,true];

_action = [
	"ReadIntel",
	"Read Intel",
	"",
	{
		createDialog "Intel1";
		_display = findDisplay 6699;
		( _display displayCtrl 7777 ) ctrlSetStructuredText parseText (_target getVariable "IntelText");
	},
	{true}
] call ace_interact_menu_fnc_createAction;

{[_obj, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;} remoteExec ["bis_fnc_call", 0];
[[_obj]] call Ares_fnc_AddUnitsToCurator;
