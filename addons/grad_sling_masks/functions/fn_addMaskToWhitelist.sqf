/*
 * Author: DerZade
 * Adds given helmet(s) to whitelist. You can add as many helmets as you like.
 *
 * Arguments:
 * 0: Classname <STRING>
 * 1: Classname <STRING> (Optional)
 * 2: Classname <STRING> (Optional)
 * ...
 * N: Classname <STRING> (Optional)
 *
 * Return Value:
 * Nothing
 *
 * Examples:
 * ["Helmet1"] call GRAD_slingHelmet_fnc_addHelmetToWhitelist;
 *
 * ["Helmet1","Helmet2","Helmet3"] call GRAD_slingHelmet_fnc_addHelmetToWhitelist;
 *
 * Public: No
 */

if (isNil "_this") exitWith {};
if (_this isEqualTo []) exitWith {};

//execute on server to make sure that only one client (server) is writing to array at the same time
if (! isServer) exitWith {
    _this remoteExecCall ["bnb_e_grad_sling_mask_addMaskToWhitelist", 2];
};

//init variable if isn't yet
[] call bnb_e_grad_sling_mask_fnc_whitelist;

//add classnames
{
    bnb_e_grad_sling_mask_whitelist pushBackUnique _x;
} forEach _this;

publicVariable "bnb_e_grad_sling_mask_whitelist";
