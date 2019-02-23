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


