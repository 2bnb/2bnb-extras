/* ----------------------------------------------------------------------------
Function: bnb_ex_sling_mask_fnc_actionSling

Description:
	Triggered by the sling-action. Handles all the stuff.

Parameters:
	0: _unit <OBJECT>

Returns:
	Nothing

Examples:
	[player] call bnb_ex_sling_mask_fnc_actionSling;

Author:
	DerZade, Arend
---------------------------------------------------------------------------- */
params ["_unit"];

private _maskClass = goggles _unit;

//can't sling a non existent helmet
if (_maskClass isEqualTo "") exitWith {};

[_unit, _maskClass] call bnb_ex_sling_mask_fnc_addSlungMask;
_unit setVariable ["bnb_ex_sling_mask_slung", 1];
removegoggles _unit;
