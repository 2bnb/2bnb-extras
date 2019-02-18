class GRAD_slingMask_sling
{
    displayName = $STR_grad_sling_mask_sling;
    condition = "[_player] call bnb_e_grad_sling_mask_fnc_canSlingMask";
    exceptions[] = {"isNotInside"};
    statement = "[_player] call bnb_e_grad_sling_mask_fnc_actionSling";
    showDisabled = 0;
    priority = 2.5;
    icon = "\a3\ui_f\data\gui\rsc\rscdisplayarsenal\headgear_ca.paa";
};
class GRAD_slingMask_unsling : GRAD_slingMask_sling
{
    displayName = $STR_grad_sling_mask_unsling;
    condition = "(goggles _player isEqualTo '') && !([_player] call GRAD_slingHelmet_fnc_getSlungHelmet isEqualTo '')";
    statement = "[_player] call bnb_e_grad_sling_mask_fnc_actionUnsling";
};
