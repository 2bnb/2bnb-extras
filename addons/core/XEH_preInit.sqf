["2BNB Modules", "Export Recording Data",
{
	call bnb_e_core_fnc_exportOcapData;
}] call Ares_fnc_RegisterCustomModule;

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
		"bnb_e_contam_aiDamage",
		"CHECKBOX",
		["Enable AI Damage", "Tick for AI to take damage from contamination areas"],
		"2BNB Contamination",
		true,
		true
	],
	[
		"bnb_e_contam_enableDebug",
		"CHECKBOX",
		["Enable Debug", "Tick to enable debug"],
		"2BNB Contamination",
		true,
		true
	],
	[
		"bnb_e_contam_equipment_masks",
		"EDITBOX",
		["MOPP Masks", "Classnames, separated by commas and without double quotations, of those masks that protect against contamination"],
		["2BNB Contamination", "MOPP Equipment"],
		"",
		true
	],
	[
		"bnb_e_contam_equipment_enableMaskStaminaEffect",
		"CHECKBOX",
		["Enable stamina effect", "Tick for masks to affect the stamina"],
		["2BNB Contamination", "MOPP Equipment"],
		true,
		true
	],
	[
		"bnb_e_contam_equipment_uniforms",
		"EDITBOX",
		["MOPP Uniforms", "Classnames, separated by commas and without double quotations, of those uniforms that protect against contamination"],
		["2BNB Contamination", "MOPP Equipment"],
		"",
		true
	],
	[
		"bnb_e_contam_equipment_vests",
		"EDITBOX",
		["MOPP Vests", "Classnames, separated by commas and without double quotations, of those vests that protect against contamination"],
		["2BNB Contamination", "MOPP Equipment"],
		"",
		true
	],
	[
		"bnb_e_contam_equipment_vehicles",
		"EDITBOX",
		["MOPP Vehicles", "Classnames, separated by commas and without double quotations, of those vehicles that protect against contamination"],
		["2BNB Contamination", "MOPP Equipment"],
		"",
		true
	],
	[
		"bnb_e_sc_enable",
		"CHECKBOX",
		["Enable survivable crashes", "Tick to enable survivable crashes"],
		"2BNB Survivable crashes",
		true,
		true
	],
	[
		"bnb_e_sc_vehicles",
		"EDITBOX",
		["Vehicle classes", "Vehicle classes in square brackets, with quotation marks seperated by ,"],
		"2BNB Survivable crashes",
		"[""Air""]",
		true
	],
	[
		"bnb_e_sc_damage",
		"SLIDER",
		["Damage multiplier", "The amount of damage to apply to crashed player"],
		"2BNB Survivable crashes",
		[0, 1, 0.3, 1],
		true
	]
];

{_x call CBA_Settings_fnc_init;} forEach _bnb_e_settings;


