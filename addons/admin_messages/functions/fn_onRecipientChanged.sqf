params [["_ctrl",controlNull],["_selID",-1]];

private _data = call compile (_ctrl lbData _selID);

private _sendButton = uiNamespace getVariable ["bnb_e_admin_messages_sendBoxButtonCtrl",controlNull];

if (!(_data isEqualType 0) || {_data == -1}) then {
    _sendButton ctrlEnable false;
    _sendButton ctrlSetText (localize "STR_bnb_e_ADMIN_MESSAGES_SELECTVALIDRECIP");
} else {
    _sendButton ctrlEnable true;
    _sendButton ctrlSetText format [(localize "STR_bnb_e_ADMIN_MESSAGES_SENDTO"),_ctrl lbText _selID];
};
