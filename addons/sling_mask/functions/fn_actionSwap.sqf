/* ----------------------------------------------------------------------------
Function: bnb_e_sling_mask_fnc_actionSwap

Description:
	Swaps the slung mask and the goggle item currently being worn,
	unless the goggle item cannot be slung, in which case it will be placed in
	the inventory.

Parameters:
	0: _unit <OBJECT>

Returns:
	Nothing

Examples:
	[player] call bnb_e_sling_mask_fnc_actionSwap

Author:
	Arend
---------------------------------------------------------------------------- */
params ["_unit"];

private _goggles = goggles _unit;
removeGoggles _unit;

[_unit] call bnb_e_sling_mask_fnc_actionUnSling;

// Restore the goggles somewhere, either by slinging, in inventory or on ground
// Check if _goggles is a slingable item
if (_goggles in ([] call bnb_e_sling_mask_fnc_whitelist)) then {

	[_unit, _goggles] call GRAD_slingHelmet_fnc_addSlungHelmet;
	_unit setVariable ["bnb_e_sling_mask_slung", 1];

} else {
	[_unit, _goggles, true] call CBA_fnc_addItem;
};


