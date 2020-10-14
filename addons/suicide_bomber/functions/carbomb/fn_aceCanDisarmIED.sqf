/* ----------------------------------------------------------------------------
Function: bnb_ex_suicide_bomber_fnc_aceCanDisarmIED

Description:
	Checks whether the player is able to disarm the IED.

Parameters:
	0: _unit - player doing the interaction <OBJECT>
	1: _vehicle - to examine <OBJECT>

Returns:
	Whether the unit can disarm <BOOLEAN>

Examples:
	[_unit, _vehicle] call bnb_ex_suicide_bomber_fnc_aceCanDisarmIED;

Author:
	Ph¡l
	Arend
---------------------------------------------------------------------------- */
params ["_unit", "_vehicle"];

if (vehicle _unit != _unit || {!("ACE_DefusalKit" in (_unit call ace_common_fnc_uniqueItems))}) exitWith {false};

if (ace_explosives_RequireSpecialist && {!([_unit] call ace_Common_fnc_isEOD)}) exitWith {false};

_foundBomb = _vehicle getVariable["fox_carbombFound",false];
_foundBomb;
