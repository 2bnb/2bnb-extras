params["_control",["_focused", true,[true]]];

private _enterKey = 28;

if (_focused) then {
	bnb_e_admin_messages_sendBox_enter_handler = [_enterKey, [false,false,false], {call bnb_e_admin_messages_fnc_sendMessage}] call CBA_fnc_addKeyHandler;
} else {
	if (isNil bnb_e_admin_messages_sendBox_enter_handler) exitWith {};
	bnb_e_admin_messages_sendBox_enter_handler call CBA_fnc_removeKeyHandler;
	bnb_e_admin_messages_sendBox_enter_handler = nil;
};
