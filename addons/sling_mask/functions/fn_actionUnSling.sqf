/* ----------------------------------------------------------------------------
Function: bnb_e_sling_mask_fnc_actionUnSling

Description:
	Triggered by the unSling-action. Handles all the stuff.

Parameters:
	0: _unit <OBJECT>

Returns:
	Nothing

Examples:
	[player] call bnb_e_sling_mask_fnc_actionUnSling;

Author:
	DerZade, Arend
---------------------------------------------------------------------------- */

params ["_unit"];

private _helmetClass = [_unit] call GRAD_slingHelmet_fnc_getSlungHelmet;


//can't unsling a non existent helmet
if (_helmetClass isEqualTo "") exitWith {};

[_unit] call GRAD_slingHelmet_fnc_removeSlungHelmet;
_unit setVariable ["bnb_e_sling_mask_slung", 0];
_unit addgoggles _helmetClass;
