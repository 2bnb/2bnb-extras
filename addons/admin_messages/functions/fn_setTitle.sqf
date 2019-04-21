params [["_ctrl",controlNull]];

private _text = if ([] call bnb_e_admin_messages_fnc_isAdminOrZeus) then {
    localize "STR_bnb_e_ADMIN_MESSAGES_SENDBOXTITLEADMIN"
} else {
    localize "STR_bnb_e_ADMIN_MESSAGES_SENDBOXTITLEPLAYER"
};

_ctrl ctrlSetText _text
