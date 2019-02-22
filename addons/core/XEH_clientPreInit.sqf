["2BNB Modules", "Add Contaminated Area",
{
	// Array of position AGLS, ObjNull or the object under the module as it's placed
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	[_position, _objectUnderCursor] call bnb_e_core_fnc_zeusAddContamAreaDialog;

	// Log the parameters
	systemChat str _position;
	systemChat str _objectUnderCursor;
}] call Ares_fnc_RegisterCustomModule;

private _bnb_e_settings = [
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
	]
];

{_x call CBA_Settings_fnc_init;} forEach _bnb_e_settings;
