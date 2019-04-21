

private _editBox = uiNamespace getVariable ["bnb_e_admin_messages_sendBoxCtrl",controlNull];
private _listbox = uiNamespace getVariable ["bnb_e_admin_messages_sendBoxListboxCtrl",controlNull];

if (isNull _editBox || isNull _listbox) exitWith {};

private _message = ctrlText _editBox;
if (_message == "") exitWith {};

_editBox ctrlSetText "";

bnb_e_admin_messages_channel radioChannelAdd [player];
bnb_e_admin_messages_channel radioChannelSetCallsign localize "STR_bnb_e_ADMIN_MESSAGES_SENDCONFIRM_CHANNEL";

player customChat [bnb_e_admin_messages_channel, localize "STR_bnb_e_ADMIN_MESSAGES_SENDCONFIRM"];
player say2D "3DEN_notificationDefault";

bnb_e_admin_messages_channel radioChannelRemove [player];

if ([] call bnb_e_admin_messages_fnc_isAdminOrZeus) then {
    _lbData = _listbox lbData (lbCurSel _listbox);
    _receiveConditionParams = [];
    _receiveCondition = if ((call compile _lbData) < 0) then {
        switch (call compile _lbData) do {
            case (-2): {{true}};                                                //EVERYONE
            case (-3): {{[] call bnb_e_admin_messages_fnc_isAdminOrZeus}};        //OTHER ADMINS AND ZEUS
            case (-4): {{playerSide == WEST}};
            case (-5): {{playerSide == EAST}};
            case (-6): {{playerSide == INDEPENDENT}};
            case (-7): {{playerSide == CIVILIAN}};
            default {{false}};
        }
    } else {
        _receiveConditionParams = [_lbData];
        {getPlayerUID player == (_this select 0)}
    };
    [profileName,getPlayerUID player,_message,_receiveCondition,_receiveConditionParams] remoteExec ["bnb_e_admin_messages_fnc_receiveMessage",0,false];
} else {
    [profileName,getPlayerUID player,_message] remoteExec ["bnb_e_admin_messages_fnc_receiveMessage",0,false];
};
