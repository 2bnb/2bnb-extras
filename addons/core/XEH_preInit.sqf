["2BNB Modules", "Add Barracks Functions",
{
	// Array of position AGLS, ObjNull or the object under the module as it's placed
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	[_position, _objectUnderCursor] call bnb_e_core_fnc_addBarracks;
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
		["Respawn Timer (seconds)", "Number of seconds player waves need to wait before respawn (0 -> 600 (10 minutes))"],
		["2BNB Zeus", "Respawn"],
		[1, 600, 5, 0],
		1,
		{
			missionNamespace setVariable ["bnb_e_respawn_timer_override", true, true];
			setPlayerRespawnTime _this;
		}
	],
	[
		"bnb_e_arsenal_whitelist_mission",
		"EDITBOX",
		["Mission", "Mission specific equipment whitelist"],
		["2BNB Arsenal", "Arsenal Whitelists"],
		"[]",
		true,
		{
			// One day this will re-init all arsenals that have this filter set
		},
		true
	]
];

{_x call CBA_Settings_fnc_init;} forEach _bnb_e_settings;

// Create a climate select setting for each detected world
private _name = "";
private _prettyName = "";
{
	_name = configName _x;
	_prettyName = getText (configfile >> "CfgWorlds" >> _name >> "description");
	[
		format["bnb_e_climate_%1", _name],
		"LIST",
		[format["Map Climate - %1", _prettyName], "Select the appropriate climate for this map"],
		["2BNB Arsenal", "World Climates"],
		[
			["all", "woodland", "multicam", "desert", "arctic"],
			["All", "Woodland", "Multicam", "Desert", "Arctic"],
			0
		],
		true,
		{},
		true
	] call CBA_Settings_fnc_init;
} forEach ("true" configClasses (configfile >> "CfgWorldList"));

CHVD_allowNoGrass = false;
