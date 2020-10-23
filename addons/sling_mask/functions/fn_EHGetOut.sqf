/* ----------------------------------------------------------------------------
Function: bnb_ex_sling_mask_fnc_EHGetOut

Description:
	Eventhandler - Get Out. Does the actual mounting of the weapon holder
	onto the unit's waist both when mask is slung as well as when unit exits
	the vehicle they may be in.

Parameters:
	0: _unit <OBJECT>
	1: _position <STRING>
	2: _veh <OBJECT>

Returns:
	Nothing

Examples:
	[player, "", objNull] call bnb_ex_sling_mask_fnc_EHGetOut;

Author:
	DerZade, Arend
---------------------------------------------------------------------------- */
params ["_unit","_position","_veh"];

if (isNil "_unit" or isNil "_veh") exitWith {["No proper argument(s) given."] call BIS_fnc_error};

private _wh = [_unit] call GRAD_slingHelmet_fnc_weaponHolder;

//attach and unhide the weaponholder (slung helmet)
[_wh, [_unit,[0.15,-0.09,-0.75],"pelvis"]] remoteExec ["attachTo", 0];
[_wh, [[-1,-0.8,30],[1,-0.8,1]]] remoteExec ["setVectorDirAndUp", 0];
[_wh, false] remoteExec ["hideObjectGlobal", 0];
