/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addContaminationArea

Description:
	Adds contamination area

Parameters:
	0: _position - of the module <ARRAY>
	0: _objectUnderCursor - object the module was placed on <OBJECT>

Returns:
	Nothing

Examples:
	[_position, _objectUnderCursor] call bnb_e_core_fnc_addContaminationArea;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

private _dialogResult = [
	"Add Contaminated Area", [
		// The last number is optional! If you want the first selection you can remove the number.
		["Name of Area", "", "Zone_0"],
		["Delete Area when Object Destroyed (Only if placed on an object)", ["No", "Yes"], 1],
		["Entire Map", ["No","Yes"], 0],
		["Cold Zone Radius", "", "100"],
		["Hot Zone Radius", "", "50"],
		["Show Area on Map", ["No","Yes"], 1],
		["Type of Marker", [
			"No Marker",
			"Transparent Marker",
			"Basic Marker",
			"Warning Area Marker"
		], 1],
		["MOPP Level (Gear required to live)", [
			"No Gear",
			"MOPP Level 1 (Mask Only)",
			"MOPP Level 2 (Mask and Uniform)",
			"MOPP Level 3 (Mark, Uniform, Vest)",
			"MOPP Level 4 (Mask, Uniform, Vest, Headgear/Goggles)"
		], 1]
	]
] call Ares_fnc_showChooseDialog;

// If the dialog was closed.
if (_dialogResult isEqualTo []) exitWith {};

// Get the selected data
_dialogResult params [
	["_name",""],
	["_onDestroy",1],
	["_entireMap",0],
	["_radius",100],
	["_hotRadius",50],
	["_showMarker",1],
	["_alphaMarker",1],
	["_moppLevel",1]
];

// Set defaults for those variables we didn't leave customisable
_objRadius = 5;
_timeToDeath = 100;
_useModulePos = true;

_radius = parseNumber _radius;
_hotRadius = parseNumber _hotRadius;
_onDestroy = [_onDestroy] call bnb_e_core_fnc_toBoolean;
_showMarker = [_showMarker] call bnb_e_core_fnc_toBoolean;
_entireMap = [_entireMap] call bnb_e_core_fnc_toBoolean;

if !(isNull _objectUnderCursor) then {
	_useModulePos = false;
};

if !(_showMarker) then {
	_alphaMarker = 0;
};

if (_entireMap) then {
	[_position,[0,(worldSize/2),0],_timeToDeath,_alphaMarker,[false,objNull,false],_moppLevel,_name] call JSHK_contam_fnc_addArea;
} else {
	if (_useModulePos) then {
		[_position,[_radius,_hotRadius,_objRadius],_timeToDeath,_alphaMarker,[false,objNull,_onDestroy],_moppLevel,_name] call JSHK_contam_fnc_addArea;
	};

	if !(isNull _objectUnderCursor) then {
		[getPos _objectUnderCursor,[_radius,_hotRadius,_objRadius],_timeToDeath,_alphaMarker,[true,_objectUnderCursor,_onDestroy],_moppLevel,_name] call JSHK_contam_fnc_addArea;
	};
};
