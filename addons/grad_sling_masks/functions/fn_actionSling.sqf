/*
 * Author: DerZade
 * Triggered by the sling-action. Handles all the stuff.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call GRAD_slingHelmet_fnc_actionSling;
 *
 * Public: No
 */

params ["_unit"];

private _helmetClass = goggles _unit;

//can't sling a non existent helmet
if (_helmetClass isEqualTo "") exitWith {};

[_unit, _helmetClass] call GRAD_slingHelmet_fnc_addSlungHelmet;
removegoggles _unit;
