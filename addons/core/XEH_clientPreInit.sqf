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



missionNamespace setVariable ["JSHK_contam_aiDamageEnabled", bnb_e_contam_aiDamage];
missionNamespace setVariable ["JSHK_contam_addSpawnedAI", true];
missionNamespace setVariable ["JSHK_contamModuleVar_maskSoundStamina", bnb_e_contam_equipment_enableMaskStaminaEffect];
missionNamespace setVariable ["JSHK_contam_DEBUG", bnb_e_contam_enableDebug];



//set gasmasks
private _head = [bnb_e_contam_equipment_masks] call JSHK_contam_fnc_strToArray;
private _headArr = [];
{
	if (isClass (configFile >> "CfgWeapons" >> _x)) then
	{
		_headArr pushBackUnique _x;
	} else
	{
		[format ["fn_moduleSettingsValues: Vest classname provided does not exist: %1",_x],true] call JSHK_contam_fnc_logMessage;
	};
} forEach _head;
missionNamespace setVariable ["JSHK_contam_headgear",_headArr];

private _masks50 = [bnb_e_contam_equipment_masks] call JSHK_contam_fnc_strToArray;
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
			[format ["fn_moduleMask: Mask classname provided does not exist: %1",_x],true] call JSHK_contam_fnc_logMessage;
		};
	} forEach _arr;
} forEach [_masks50];
missionNamespace setVariable ["JSHK_contam_gasMasks50",_masks50];
missionNamespace setVariable ["JSHK_contam_gasMasks",_allMasks];


//other gear
private _uni = [bnb_e_contam_equipment_uniforms] call JSHK_contam_fnc_strToArray;
private _uniArr = [];
{
	if (isClass (configFile >> "CfgWeapons" >> _x)) then
	{
		_uniArr pushBackUnique _x;
	} else
	{
		[format ["fn_moduleSettingsValues: Uniform classname provided does not exist: %1",_x],true] call JSHK_contam_fnc_logMessage;
	};
} forEach _uni;
missionNamespace setVariable ["JSHK_contam_uniforms",_uniArr];

private _vests = [bnb_e_contam_equipment_vests] call JSHK_contam_fnc_strToArray;
private _vestArr = [];
{
	if (isClass (configFile >> "CfgWeapons" >> _x)) then
	{
		_vestArr pushBackUnique _x;
	} else
	{
		[format ["fn_moduleSettingsValues: Vest classname provided does not exist: %1",_x],true] call JSHK_contam_fnc_logMessage;
	};
} forEach _vests;
missionNamespace setVariable ["JSHK_contam_vests",_vestArr];



//safe vehicles

private _tempArr = [bnb_e_contam_equipment_vehicles] call JSHK_contam_fnc_strToArray;
[format ["fn_moduleVehicles: _tempArr value pre-synced objects: %1",_tempArr]] call JSHK_contam_fnc_logMessage;
{
	if !(_x isKindOf "Man") then
	{
		_tempArr pushBackUnique _x;
	} else
	{
		[format ["fn_moduleSettingsValues: Player or units cannot be added as safe vehicles: %1",typeOf _x],true] call JSHK_contam_fnc_logMessage;
	};
} forEach _units;
[format ["fn_moduleVehicles: _tempArr value post-synced objects: %1",_tempArr]] call JSHK_contam_fnc_logMessage;
private _vehArr = [];
{
	if (typeName _x == "OBJECT") then
	{
		if (!isNull _x) then
		{
			_vehArr pushBackUnique _x;
			["fn_moduleVehicles: Vehicle by object added to safe vehicle pool"] call JSHK_contam_fnc_logMessage;
		};
	} else
	{
		if (typeName _x == "STRING") then
		{
			if (isClass (configfile >> "CfgVehicles" >> _x)) then
			{
				_vehArr pushBackUnique _x;
				["fn_moduleVehicles: Vehicle class added to safe vehicle pool"] call JSHK_contam_fnc_logMessage;
			} else
			{
				private _vehObj = missionNamespace getVariable [_x,objNull];
				if (!isNull _vehObj) then
				{
					_vehArr pushBackUnique _x;
					["fn_moduleVehicles: Vehicle by variable name added to safe vehicle pool"] call JSHK_contam_fnc_logMessage;
				} else
				{
					[format ["fn_moduleVehicles: Vehicle classname or object provided does not exist: %1",_x],true] call JSHK_contam_fnc_logMessage;
				};
			};
		};
	};
} forEach _tempArr;
[format ["fn_moduleVehicles: Final value of _vehArr - %1",_vehArr]] call JSHK_contam_fnc_logMessage;
missionNamespace setVariable ["JSHK_contam_safeVehicles",_vehArr];

/*
Getting 2nd var array by loading the loadout and putting this into console!

_items = getUnitLoadout player;
copyToClipboard str _items;

*/

//------------------------- 2BNB AOR 1 Kits --------------------------------------
["2BNB IC/2IC AOR1",[["SMA_HK416GL","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552_3XDOWN",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["VSM_AOR1_Crye_SS_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_AOR1",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30]]],["tfw_ilbe_dd_d",[["ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30],["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",3,1],["SmokeShell",5,1],["CUP_1Rnd_HE_M203",10,1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["SmokeShellOrange",2,1],["SmokeShellPurple",2,1],["SmokeShellRed",2,1],["SmokeShellYellow",2,1]]],"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
["2BNB AT AOR1",[["SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],["launch_MRAWS_sand_rail_F","","","",["MRAWS_HEAT_F",1],[],""],[],["VSM_AOR1_Crye_SS_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_AOR1",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30]]],["VSM_AOR1_Backpack_Kitbag",[["ACE_30Rnd_556x45_Stanag_Mk262_mag",4,30],["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",2,1],["SmokeShell",4,1]]],"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
["2BNB LMG AOR1",[["CUP_lmg_MG3_rail","","","CUP_optic_HoloBlack",["CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",120],[],""],[],[],["VSM_AOR1_Crye_SS_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_AOR1",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5]]],["VSM_AOR1_Backpack_Kitbag",[["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",2,1],["SmokeShell",4,1],["CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",3,120]]],"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
["2BNB Marksman AOR1",[["SMA_HK417_16in","SMA_supp_762","SMA_SFPEQ_HK417TOP_BLK","SMA_ELCAN_SPECTER_ARDRDS_4z",["SMA_20Rnd_762x51mm_M80A1_EPR_IR",20],[],"bipod_01_F_blk"],[],[],["VSM_AOR1_Crye_SS_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_AOR1",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5],["SMA_20Rnd_762x51mm_M80A1_EPR_IR",7,20]]],["VSM_AOR1_Backpack_Kitbag",[["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",2,1],["SmokeShell",4,1],["SMA_20Rnd_762x51mm_M80A1_EPR_IR",7,20],["20Rnd_762x51_Mag",7,20]]],"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
["2BNB Rifleman AOR1",[["SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["VSM_AOR1_Crye_SS_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_AOR1",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5]]],["VSM_AOR1_Backpack_Kitbag",[["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30],["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",2,1],["SmokeShell",4,1]]],"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
//-------------------------------------------------------------------------------

//-------------------------- 2BNB M81 Kits ------------------------------------
["2BNB IC/2IC M81",[["SMA_HK416GL","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552_3XDOWN",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["VSM_M81_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_M81",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30]]],["VSM_M81_Backpack_Kitbag",[["ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30],["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",3,1],["SmokeShell",5,1],["CUP_1Rnd_HE_M203",10,1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["SmokeShellOrange",2,1],["SmokeShellPurple",2,1],["SmokeShellRed",2,1],["SmokeShellYellow",2,1]]],"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
["2BNB AT M81",[["SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],["launch_MRAWS_green_rail_F","","","",["MRAWS_HEAT_F",1],[],""],[],["VSM_M81_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_M81",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30]]],["VSM_M81_Backpack_Kitbag",[["ACE_30Rnd_556x45_Stanag_Mk262_mag",4,30],["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",2,1],["SmokeShell",4,1],["MRAWS_HEAT_F",3,1]]],"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
["2BNB LMG M81",[["CUP_lmg_MG3_rail","","","CUP_optic_HoloBlack",["CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",120],[],""],[],[],["VSM_M81_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_M81",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5]]],["VSM_M81_Backpack_Kitbag",[["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",2,1],["SmokeShell",4,1],["CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",3,120]]],"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
["2BNB Marksman M81",[["SMA_HK417_16in","SMA_supp_762","SMA_SFPEQ_HK417TOP_BLK","SMA_ELCAN_SPECTER_ARDRDS_4z",["SMA_20Rnd_762x51mm_M80A1_EPR_IR",20],[],"bipod_01_F_blk"],[],[],["VSM_M81_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_M81",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5],["SMA_20Rnd_762x51mm_M80A1_EPR_IR",7,20]]],["VSM_M81_Backpack_Kitbag",[["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",2,1],["SmokeShell",4,1],["SMA_20Rnd_762x51mm_M80A1_EPR_IR",7,20],["20Rnd_762x51_Mag",7,20]]],"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
["2BNB Rifleman M81",[["SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["VSM_M81_Camo",[["ACE_fieldDressing",4],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["VSM_FAPC_Operator_M81",[["ACE_fieldDressing",4],["ACE_elasticBandage",7],["ACE_quikclot",7],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_packingBandage",9],["ACE_tourniquet",5],["ACE_morphine",5]]],["VSM_M81_Backpack_Kitbag",[["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30],["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["CUP_HandGrenade_M67",2,1],["SmokeShell",4,1]]],"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"]]] call ace_arsenal_fnc_addDefaultLoadout;
//-------------------------------------------------------------------------------
