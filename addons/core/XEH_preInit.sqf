["2BNB Modules", "Add Contaminated Area",
{
	// Array of position AGLS, ObjNull or the object under the module as it's placed
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	[_position, _objectUnderCursor] call bnb_e_core_fnc_addContaminationArea;
}] call Ares_fnc_RegisterCustomModule;

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

missionNamespace setVariable ["JSHK_contam_aiDamageEnabled", bnb_e_contam_aiDamage];
missionNamespace setVariable ["JSHK_contam_addSpawnedAI", true];
missionNamespace setVariable ["JSHK_contamModuleVar_maskSoundStamina", bnb_e_contam_equipment_enableMaskStaminaEffect];
missionNamespace setVariable ["JSHK_contam_DEBUG", bnb_e_contam_enableDebug];

//set gasmasks
private _head = [bnb_e_contam_equipment_masks] call bnb_e_core_fnc_strToArray;
private _headArr = [];
{
	if (isClass (configFile >> "CfgWeapons" >> _x)) then
	{
		_headArr pushBackUnique _x;
	} else
	{
		[format ["fn_moduleSettingsValues: Vest classname provided does not exist: %1",_x], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
	};
} forEach _head;
missionNamespace setVariable ["JSHK_contam_headgear",_headArr];

private _masks50 = [bnb_e_contam_equipment_masks] call bnb_e_core_fnc_strToArray;
private _allMasks = [];
{
	private _arr = _x;
	{
		if ((isClass (configFile >> "CfgWeapons" >> _x)) ||
				(isClass (configfile >> "CfgGlasses" >> _x))) then
		{
			_allMasks pushBackUnique _x;
		} else
		{
			[format ["fn_moduleMask: Mask classname provided does not exist: %1",_x], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
		};
	} forEach _arr;
} forEach [_masks50];
missionNamespace setVariable ["JSHK_contam_gasMasks50",_masks50];
missionNamespace setVariable ["JSHK_contam_gasMasks",_allMasks];


//other gear
private _uni = [bnb_e_contam_equipment_uniforms] call bnb_e_core_fnc_strToArray;
private _uniArr = [];
{
	if (isClass (configFile >> "CfgWeapons" >> _x)) then
	{
		_uniArr pushBackUnique _x;
	} else
	{
		[format ["fn_moduleSettingsValues: Uniform classname provided does not exist: %1",_x], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
	};
} forEach _uni;
missionNamespace setVariable ["JSHK_contam_uniforms",_uniArr];

private _vests = [bnb_e_contam_equipment_vests] call bnb_e_core_fnc_strToArray;
private _vestArr = [];
{
	if (isClass (configFile >> "CfgWeapons" >> _x)) then
	{
		_vestArr pushBackUnique _x;
	} else
	{
		[format ["fn_moduleSettingsValues: Vest classname provided does not exist: %1",_x], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
	};
} forEach _vests;
missionNamespace setVariable ["JSHK_contam_vests",_vestArr];



//safe vehicles

private _tempArr = [bnb_e_contam_equipment_vehicles] call bnb_e_core_fnc_strToArray;
[format ["fn_moduleVehicles: _tempArr value pre-synced objects: %1",_tempArr], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
{
	if !(_x isKindOf "Man") then
	{
		_tempArr pushBackUnique _x;
	} else
	{
		[format ["fn_moduleSettingsValues: Player or units cannot be added as safe vehicles: %1",typeOf _x], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
	};
} forEach _units;
[format ["fn_moduleVehicles: _tempArr value post-synced objects: %1",_tempArr], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
private _vehArr = [];
{
	if (typeName _x == "OBJECT") then
	{
		if (!isNull _x) then
		{
			_vehArr pushBackUnique _x;
			["fn_moduleVehicles: Vehicle by object added to safe vehicle pool", "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
		};
	} else
	{
		if (typeName _x == "STRING") then
		{
			if (isClass (configfile >> "CfgVehicles" >> _x)) then
			{
				_vehArr pushBackUnique _x;
				["fn_moduleVehicles: Vehicle class added to safe vehicle pool", "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
			} else
			{
				private _vehObj = missionNamespace getVariable [_x,objNull];
				if (!isNull _vehObj) then
				{
					_vehArr pushBackUnique _x;
					["fn_moduleVehicles: Vehicle by variable name added to safe vehicle pool", "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
				} else
				{
					[format ["fn_moduleVehicles: Vehicle classname or object provided does not exist: %1",_x], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
				};
			};
		};
	};
} forEach _tempArr;
[format ["fn_moduleVehicles: Final value of _vehArr - %1",_vehArr], "core\XEH_preInit.sqf"] call bnb_e_core_fnc_log;
missionNamespace setVariable ["JSHK_contam_safeVehicles",_vehArr];
