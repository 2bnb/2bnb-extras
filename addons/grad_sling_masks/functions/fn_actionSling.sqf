/* ----------------------------------------------------------------------------
Function: bnb_e_sling_mask_fnc_actionSling

Description:
	Triggered by the sling-action. Handles all the stuff.

Parameters:
	0: _unit <OBJECT>

Returns:
	Nothing

Examples:
	[player] call bnb_e_sling_mask_fnc_actionSling;

Author:
	DerZade, Arend
---------------------------------------------------------------------------- */

params ["_unit"];

private _helmetClass = goggles _unit;

//can't sling a non existent helmet
if (_helmetClass isEqualTo "") exitWith {};

[_unit, _helmetClass] call GRAD_slingHelmet_fnc_addSlungHelmet;
_unit setVariable ["bnb_e_sling_mask_slung", 1];
removegoggles _unit;
