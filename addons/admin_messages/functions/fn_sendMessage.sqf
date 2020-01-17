private _editBox = uiNamespace getVariable ["bnb_e_admin_messages_sendBoxCtrl",controlNull];
private _listbox = uiNamespace getVariable ["bnb_e_admin_messages_sendBoxListboxCtrl",controlNull];

if (isNull _editBox || isNull _listbox) exitWith {};

private _message = ctrlText _editBox;
if (_message == "") exitWith {};

_editBox ctrlSetText "";

if ([] call bnb_e_admin_messages_fnc_isAdminOrZeus) then {

	private _lbCurSel = lbCurSel _listbox;
	private _lbData = _listbox lbData _lbCurSel;
	private _lbText = _listbox lbText _lbCurSel;
	private _receiveConditionParams = [];

	private _receiveCondition = if ((call compile _lbData) < 0) then {
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

	// display sent message locally
	[format["%1 %2",localize "STR_bnb_e_ADMIN_MESSAGES_TO",_lbText],_message] call bnb_e_admin_messages_fnc_displayMessage;

	// send message to recipient
	[profileName,getPlayerUID player,_message,_receiveCondition,_receiveConditionParams] remoteExec ["bnb_e_admin_messages_fnc_receiveMessage",0,false];
} else {
	// display sent message locally
	[format["%1 %2",localize "STR_bnb_e_ADMIN_MESSAGES_TO","Admin"],_message] call bnb_e_admin_messages_fnc_displayMessage;

	// send message to recipient
	[profileName,getPlayerUID player,_message] remoteExec ["bnb_e_admin_messages_fnc_receiveMessage",0,false];
};

playSound "3DEN_notificationDefault";
