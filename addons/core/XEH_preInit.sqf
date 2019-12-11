["2BNB Modules", "Add Filtered Arsenal",
{
	// Array of position AGLS, ObjNull or the object under the module as it's placed
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	[_position, _objectUnderCursor] call bnb_e_core_fnc_addArsenal;
}] call Ares_fnc_RegisterCustomModule;

["2BNB Modules", "Add Music Radio",
{
	// Array of position AGLS, ObjNull or the object under the module as it's placed
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	[_position, _objectUnderCursor] call bnb_e_core_fnc_addMusicRadio;
}] call Ares_fnc_RegisterCustomModule;

["2BNB Modules", "Force Respawn All",
{
	[] call bnb_e_core_fnc_forceRespawn;
}] call Ares_fnc_RegisterCustomModule;

private _bnb_e_settings = [
	[
		"bnb_e_debug",
		"CHECKBOX",
		["Enable Debug", "Tick enable 2BNB debug messages to appear in RPT and systemChat"],
		"2BNB Utilities",
		false
	],
	[
		"bnb_e_arsenal_objects",
		"EDITBOX",
		["Arsenal Objects", "Classnames, separated by commas and without double quotations, of objects that are spawnable by ""Add Filtered Arsenal"" module"],
		["2BNB Zeus", "Arsenal"],
		"C_supplyCrate_F,B_Slingload_01_Ammo_F"
	],
	[
		"bnb_e_respawn_timer",
		"SLIDER",
		["Respawn Timer (seconds)", "Number of seconds player waves need to wait before respawn (set to 99999 for infinite!)"],
		["2BNB Zeus", "Respawn"],
		[1, 99999, 2, 0]
	]
];

{_x call CBA_Settings_fnc_init;} forEach _bnb_e_settings;
