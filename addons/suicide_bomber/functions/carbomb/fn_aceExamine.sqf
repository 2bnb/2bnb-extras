/* ----------------------------------------------------------------------------
Function: bnb_ex_suicide_bomber_fnc_aceExamine

Description:
	Handles the "Examine" ACE interaction.

Parameters:
	0: _car - to examine <OBJECT>

Returns:
	Nothing

Examples:
	[_car] call bnb_ex_suicide_bomber_fnc_aceExamine;

Author:
	Ph¡l
	Arend
---------------------------------------------------------------------------- */
_car = _this select 0;

player switchMove "DismountSideProne";

_dummy = "Land_HelipadEmpty_F" createVehicle getpos player;
[(_dummy),"fox_suicide_bomber_toolbox"]remoteExec ["say3D"];

[17, [player,_car,_dummy], {

	_args = _this select 0;
	_player = _args select 0;
	_car = _args select 1;
	_dummy = _args select 2;

	deleteVehicle _dummy;

	if( _car getVariable ["fox_suicide_bomber_carbombActive",false] )then{
		hint "You found a IED attached under the car.";
		_car setvariable["fox_carbombFound",TRUE,TRUE];
	}else{
		hint "Nothing suspicious found.";
	};

}, {

	_args = _this select 0;
	_player = _args select 0;
	_car = _args select 1;
	_dummy = _args select 2;

	player switchmove "";
		deleteVehicle _dummy;

}, format["Examine %1", getText ( configfile >> "CfgVehicles" >> typeOf _car >> "displayName")]] call ace_common_fnc_progressBar
