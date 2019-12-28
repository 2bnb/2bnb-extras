/* ----------------------------------------------------------------------------
Function: bnb_e_sling_mask_fnc_addMaskToWhitelist

Description:
	Adds given mask(s) to whitelist. You can add as many masks as you like.

Parameters:
	0: Classname <STRING>
	1: Classname <STRING> (Optional)
	1: Classname <STRING> (Optional)
	...
	N: Classname <STRING> (Optional)

Returns:
	Nothing

Examples:
	["Helmet1"] call bnb_e_sling_mask_fnc_addMaskToWhitelist;
	["Helmet1","Helmet2","Helmet3"] call bnb_e_sling_mask_fnc_addMaskToWhitelist;

Author:
	DerZade, Arend
---------------------------------------------------------------------------- */
if (isNil "_this") exitWith {};
if (_this isEqualTo []) exitWith {};

//execute on server to make sure that only one client (server) is writing to array at the same time
if (!isServer) exitWith {
    _this remoteExec ["bnb_e_sling_mask_addMaskToWhitelist", 2];
};

//init variable if isn't yet
[] call bnb_e_sling_mask_fnc_whitelist;

//add classnames
{
    bnb_e_sling_mask_whitelist pushBackUnique _x;
} forEach _this;

publicVariable "bnb_e_sling_mask_whitelist";
