_unit = param[0, objNull];


if (isNull _unit) exitWith {
	"Invalid unit" call fox_suicide_bomber_fnc_curatorMessage;
};


_roads = _unit nearRoads 15;

if (count _roads isEqualTo 0) exitWith {
	"No valid road neaby" call fox_suicide_bomber_fnc_curatorMessage;
};


_ieds = [
	"ACE_IEDLandSmall_Range_Ammo",
	"ACE_IEDUrbanSmall_Range_Ammo",
	"ACE_IEDLandBig_Range_Ammo",
	"ACE_IEDUrbanBig_Range_Ammo"
];
_iedsTextArray = [];

{
	_cfgAmmo = getText (configfile >> "CfgAmmo" >> _x >> "defaultMagazine");
	_displayName = getText (configfile >> "CfgMagazines" >> _cfgAmmo >>"displayName");
	_iedsTextArray pushBack _displayName;
} forEach _ieds;


[format["Remote IED 1: %1 %2 %3", _this, _unit, _roads], "suicide_bomber\functions\ied\fn_aiRemoteIEDZen.sqf"] call bnb_es_core_fnc_log;
[
	"Improvised Explosive Device",
	[
		["COMBO", "IED", [_ieds, _iedsTextArray]]
	],
	{
		(_this select 1) params ["_unit", "_roads"];
		// Get the selected data
		_ammo = (_this select 0) select 0;

		_road = selectRandom _roads;

		_pos = [_road, 0, 7] call BIS_fnc_findSafePos;
		//createVehicle ["Sign_Arrow_Large_Cyan_F", _pos, [], 0, "CAN_COLLIDE"];

		_unit doMove _pos;

		[format["Remote IED 2: %1 %2 %3 %4", _this, _ammo, _pos, _road], "suicide_bomber\functions\ied\fn_aiRemoteIEDZen.sqf"] call bnb_es_core_fnc_log;
		[{
			(_this select 0) distance (_this select 1) < 3
			}, {
				_unit = _this select 0;
				_pos = _this select 1;
				_ammo = _this select 2;
				[format["Remote IED: %1 %2 %3", _unit, _pos, _ammo], "suicide_bomber\functions\ied\fn_aiRemoteIEDZen.sqf"] call bnb_es_core_fnc_log;

				[_unit,_ammo, _pos] spawn {
					params["_unit","_ammo", "_pos"];
					[format["Post-Remote IED: %1 %2 %3", _unit, _pos, _ammo], "suicide_bomber\functions\ied\fn_aiRemoteIEDZen.sqf"] call bnb_es_core_fnc_log;
					sleep 4;
					[_unit,"Acts_TreatingWounded06"] remoteExec ["playMove",0];
					sleep 4;
					[_unit,"fox_suicide_bomber_shovel"] remoteExec ["say3d",0];
					sleep 9;
					if (alive _unit) then {
						_bomb = createVehicle [_ammo, position _unit, [], 0, "CAN_COLLIDE"];
						[_unit, _bomb, "PressurePlate"] call ace_explosives_fnc_connectExplosive;
						sleep 3;
						[_unit,""] remoteExec ["switchMove",0];
						_pos = getPos _unit;
						_pos = [_unit, 0, 30] call BIS_fnc_findSafePos;
						_unit doMove _pos;
					};
				};

		}, [_unit,_pos,_ammo], 60, {
			diag_log _this;
			// if (alive (_this select 0)) then {
			// 	"Unit took too long to place the IED" call fox_suicide_bomber_fnc_curatorMessage;
				[(_this select 0),""] remoteExec ["switchMove",0];
			// };
		}] call CBA_fnc_waitUntilAndExecute;
	}, {}, [_unit, _roads]
] call zen_dialog_fnc_create;
