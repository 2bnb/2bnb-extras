["2BNB Modules", "Add Static Intel",
{
	// Array of position AGLS, ObjNull or the object under the module as it's placed
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	[_position, _objectUnderCursor] call bnb_e_intel_fnc_addIntel;
}] call Ares_fnc_RegisterCustomModule;

private _bnb_e_intel_settings = [
	[
		"bnb_e_intel_1",
		"EDITBOX",
		["1."],
		["2BNB Intel", "Documents"],
		"<t size='9' valign='top' align='center'>Hello!</t><br/><t size='1' align='center'>This is a test</t>",
		true
	],
	[
		"bnb_e_intel_2",
		"EDITBOX",
		["2."],
		["2BNB Intel", "Documents"],
		"<t size='9' valign='top' align='center'>Hello!</t><br/><t size='1' align='center'>This is a test</t>",
		true
	],
	[
		"bnb_e_intel_3",
		"EDITBOX",
		["3."],
		["2BNB Intel", "Documents"],
		"<t size='9' valign='top' align='center'>Hello!</t><br/><t size='1' align='center'>This is a test</t>",
		true
	],
	[
		"bnb_e_intel_4",
		"EDITBOX",
		["4."],
		["2BNB Intel", "Documents"],
		"<t size='9' valign='top' align='center'>Hello!</t><br/><t size='1' align='center'>This is a test</t>",
		true
	],
	[
		"bnb_e_intel_5",
		"EDITBOX",
		["5."],
		["2BNB Intel", "Documents"],
		"<t size='9' valign='top' align='center'>Hello!</t><br/><t size='1' align='center'>This is a test</t>",
		true
	],
	[
		"bnb_e_intel_6",
		"EDITBOX",
		["6."],
		["2BNB Intel", "Documents"],
		"<t size='9' valign='top' align='center'>Hello!</t><br/><t size='1' align='center'>This is a test</t>",
		true
	]
];

{_x call CBA_Settings_fnc_init;} forEach _bnb_e_intel_settings;
