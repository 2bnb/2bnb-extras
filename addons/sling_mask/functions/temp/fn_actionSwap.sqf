// THIS IS TEMPORARY, until GRAD_slingHelmet gets updated with the below code
/*
 * Author: Arend
 * Swaps the slung helmet and the headgear item currently being worn,
 * unless the headgear item cannot be slung, in which case it will be placed in
 * the inventory.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call GRAD_slingHelmet_fnc_actionSwap;
 *
 * Public: No
 */

params ["_unit"];

private _helmetClass = headgear _unit;
removeHeadgear _unit;

[_unit] call GRAD_slingHelmet_fnc_actionUnsling;

// Restore the headgear somewhere, either by slinging, in inventory or on ground
// Check if _helmetClass is a slingable item
if (_helmetClass in ([] call GRAD_slingHelmet_fnc_whitelist)) then {

	[_unit, _helmetClass] call GRAD_slingHelmet_fnc_addSlungHelmet;
} else {
	[_unit, _helmetClass, true] call CBA_fnc_addItem;
};
