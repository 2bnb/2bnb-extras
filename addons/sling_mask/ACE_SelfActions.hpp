class GRAD_slingHelmet_sling;
class GRAD_slingHelmet_unsling
{
    condition = "(headgear _player isEqualTo '') && !([_player] call GRAD_slingHelmet_fnc_getSlungHelmet isEqualTo '') && (_player getVariable ['bnb_e_sling_mask_slung', 0] isEqualTo 0)";
};

class bnb_e_sling_mask_sling : GRAD_slingHelmet_sling
{
    displayName = $STR_sling_mask_sling;
    condition = "[_player] call bnb_e_sling_mask_fnc_canSlingMask";
    statement = "[_player] call bnb_e_sling_mask_fnc_actionSling";
};
class bnb_e_sling_mask_unsling : GRAD_slingHelmet_sling
{
    displayName = $STR_sling_mask_unsling;
    condition = "(goggles _player isEqualTo '') && !([_player] call GRAD_slingHelmet_fnc_getSlungHelmet isEqualTo '') && (_player getVariable ['bnb_e_sling_mask_slung', 0] isEqualTo 1)";
    statement = "[_player] call bnb_e_sling_mask_fnc_actionUnsling";
};

class bnb_e_sling_mask_swap : GRAD_slingHelmet_sling
{
    displayName = $STR_sling_mask_swap;
	condition = "!(goggles _player isEqualTo '') && !([_player] call GRAD_slingHelmet_fnc_getSlungHelmet isEqualTo '') && (_player getVariable ['bnb_e_sling_mask_slung', 0] isEqualTo 1)";
	statement = "[_player] call bnb_e_sling_mask_fnc_actionSwap";
};

// TEMPORARY until https://github.com/DerZade/grad_slinghelmet/pull/23 is merged
class GRAD_slingHelmet_swap : GRAD_slingHelmet_sling
{
    displayName = "Swap Headgear with slung Helmet";
    condition = "!(headgear _player isEqualTo '') && !([_player] call GRAD_slingHelmet_fnc_getSlungHelmet isEqualTo '') && (_player getVariable ['bnb_e_sling_mask_slung', 0] isEqualTo 0)";
    statement = "[_player] call GRAD_slingHelmet_fnc_actionSwap";
};
