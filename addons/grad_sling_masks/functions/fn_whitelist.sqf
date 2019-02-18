/*
 * Author: DerZade
 * Returns all whitelisted helmets.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Whitelisted Headgear <ARRAY>
 *
 * Example:
 * [] call GRAD_slingHelmet_fnc_whitelist;
 *
 * Public: No
 */

#include "..\allowedMasks.hpp"

if (isNil "bnb_e_grad_sling_mask_whitelist") then {
    //var has to be initialized
    bnb_e_grad_sling_mask_whitelist = _allowedMasks;
    publicVariable "bnb_e_grad_sling_mask_whitelist";
};

bnb_e_grad_sling_mask_whitelist;
