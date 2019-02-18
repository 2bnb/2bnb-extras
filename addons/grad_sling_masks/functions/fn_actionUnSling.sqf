/*
 * Author: DerZade
 * Triggered by the unSling-action. Handles all the stuff.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call GRAD_slingHelmet_fnc_actionUnSling;
 *
 * Public: No
 */

params ["_unit"];

private _helmetClass = [_unit] call GRAD_slingHelmet_fnc_getSlungHelmet;

//can't unsling a non existent helmet
if (_helmetClass isEqualTo "") exitWith {};

[_unit] call GRAD_slingHelmet_fnc_removeSlungHelmet;
_unit addgoggles _helmetClass;
