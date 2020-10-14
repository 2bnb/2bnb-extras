/* ----------------------------------------------------------------------------
Function: bnb_ex_sling_mask_fnc_whitelist

Description:
	Returns all whitelisted helmets.

Parameters:
	None

Returns:
	Whitelisted Headgear <ARRAY>

Examples:
	[] call bnb_ex_sling_mask_fnc_whitelist;

Author:
	DerZade, Arend
---------------------------------------------------------------------------- */
#include "..\allowedMasks.hpp"

if (isNil "bnb_ex_sling_mask_whitelist") then {
    //var has to be initialized
    bnb_ex_sling_mask_whitelist = _allowedMasks;
    publicVariable "bnb_ex_sling_mask_whitelist";
};

bnb_ex_sling_mask_whitelist;
