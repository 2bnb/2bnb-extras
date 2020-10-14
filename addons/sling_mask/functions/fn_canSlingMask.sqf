/* ----------------------------------------------------------------------------
Function: bnb_ex_sling_mask_fnc_canSlingMask

Description:
	Returns wether a unit can sling it's mask.

Parameters:
	0: _unit <OBJECT>

Returns:
	Can Sling <BOOLEAN>

Examples:
	[player] call bnb_ex_sling_mask_fnc_canSlingMask;

Author:
	DerZade, Arend
---------------------------------------------------------------------------- */
params ["_unit"];

//unit has to have goggles
if (goggles _unit isEqualTo '') exitWith {false;};

//unit must not have a slung helmet already
if !([_unit] call GRAD_slingHelmet_fnc_getSlungHelmet isEqualTo '') exitWith {false;};

//check if all helmets are allowed via CBA setting
if (missionNamespace getVariable ["GRAD_slingHelmet_allowAll", false]) exitWith {true;};

//check ii unit's helmet is allowed by mod creator
if !(isNull (configFile >> "CfgWeapons" >> (goggles _unit) >> "grad_slingHelmet_allow")) exitWith {true;};

//check wether unit's helemt is in list of allowed helmets
if !((goggles _unit) in ([] call bnb_ex_sling_mask_fnc_whitelist)) exitWith {false;};

true;
