params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

private _dialogResult =
[
	"Add Contaminated Area",
	[
		// The last number is optional! If you want the first selection you can remove the number.
		["Name of Area", "", "Zone_0"],
		["Entire Map", ["No","Yes"]],
		["Cold Zone Radius", "", "100"],
		["Hot Zone Radius", "", "50"],
		["Show Area on Map", ["No","Yes"]],
		["Type of Marker", ["No Marker","Transparent Marker","Basic Marker","Warning Area Marker"]],
		["MOPP Level (Gear required to live)", [
			"No Gear",
			"MOPP Level 1 (Mask Only)",
			"MOPP Level 2 (Mask and Uniform)",
			"MOPP Level 3 (Mark, Uniform, Vest)",
			"MOPP Level 4 (Mask, Uniform, Vest, Headgear/Goggles)"
		]]
	]
] call Ares_fnc_showChooseDialog;

// If the dialog was closed.
if (_dialogResult isEqualTo []) exitWith{};

// Get the selected data
_dialogResult params [
	["_name",""],
	["_entireMap",false],
	["_radius",100],
	["_hotRadius",50],
	["_showMarker",true],
	["_alphaMarker",1],
	["_moppLevel",1]
];

// Set defaults for those variables we didn't leave customisable
_objRadius = 5;
_timeToDeath = 100;
_usePos = false;
_onDestroy = true;

_showMarker = [_showMarker] call bnb_e_core_fnc_toBoolean;
_entireMap = [_entireMap] call bnb_e_core_fnc_toBoolean;

if !(_showMarker) then {
	_alphaMarker = 0;
};

if (_entireMap) then {
	[_position,[0,(worldSize/2),0],_timeToDeath,_alphaMarker,[false,objNull,false],_moppLevel,_name] call JSHK_contam_fnc_addArea;
} else {
	if (_usePos) then {
		[_position,[_radius,_hotRadius,_objRadius],_timeToDeath,_alphaMarker,[false,objNull,_onDestroy],_moppLevel,_name] call JSHK_contam_fnc_addArea;
	};
};

// Output the data to the chat.
systemChat format ["Name of Area: %1", _name];
systemChat format ["Entire Map: %1", _entireMap];
systemChat format ["Cold Zone Radius: %1", _radius];
systemChat format ["Hot Zone Radius: %1", _hotRadius];
systemChat format ["Show Area on Map: %1", _showMarker];
systemChat format ["Type of Marker: %1", _alphaMarker];
systemChat format ["MOPP Level: %1", _moppLevel];
