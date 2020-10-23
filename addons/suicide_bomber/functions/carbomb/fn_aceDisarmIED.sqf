/* ----------------------------------------------------------------------------
Function: bnb_ex_suicide_bomber_fnc_aceDisarmIED

Description:
	Adds music radio from KLPQ to the backpack or to the vehicle, depending on
	what the module was placed over.

Parameters:
	0: _position - of the module <ARRAY>
	1: _objectUnderCursor - object the module was placed on <OBJECT>

Returns:
	Nothing

Examples:
	[_position, _objectUnderCursor] call bnb_ex_suicide_bomber_fnc_aceDisarmIED;

Author:
	Ph¡l
	Arend
---------------------------------------------------------------------------- */
_vehicle = _this select 0;

player switchMove "DismountSideProne";

_dummy = "Land_HelipadEmpty_F" createVehicle getpos player;
[(_dummy),"fox_suicide_bomber_wire"]remoteExec ["say3D"];

[17, [player,_vehicle,_dummy], {

	_args = _this select 0;
	_player = _args select 0;
	_vehicle = _args select 1;
	_dummy = _args select 2;

	_ehId = _vehicle getVariable["fox_carbombEhId",0];
	[_vehicle, ["Engine", _ehId]] remoteExec ["removeEventHandler", 0, _vehicle];

	_vehicle setVariable ["fox_suicide_bomber_carbombActive",FALSE,TRUE];
	_vehicle setVariable["fox_carbombFound",FALSE,TRUE];
	deleteVehicle _dummy;

	hint "IED removed";

	_c4Pos = _player modelToWorld [0,1.3,0];
	_cutterPos = _player modelToWorld [-0.3,1.3,0];


	_holder = createVehicle ["GroundWeaponHolder", _c4Pos, [], 0, "CAN_COLLIDE"];
	_cutter = createVehicle ["Land_Pliers_F", _cutterPos, [], 0, "CAN_COLLIDE"];
	_cutter setdir ((getDir _player) + 120);
	_holder addMagazineCargoGlobal ["DemoCharge_Remote_Mag", 1];
}, {

	_args = _this select 0;
	_player = _args select 0;
	_car = _args select 1;
	_dummy = _args select 2;

	player switchmove "";
	deleteVehicle _dummy;
}, format["Disarming IED"]] call ace_common_fnc_progressBar
