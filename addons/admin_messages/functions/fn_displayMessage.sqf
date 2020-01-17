#include "..\gui\defines.hpp"

params [["_info",""],["_message",""]];

"bnb_e_admin_messages_customChatLayer" cutRsc ["bnb_e_admin_messages_rscCustomChat","PLAIN",-1,true];
private _customChatTitleDisplay = uiNamespace getVariable ["bnb_e_admin_messages_rscCustomChat",displayNull];
private _ctrlText = _customChatTitleDisplay displayCtrl BNB_E_ADMIN_MESSAGES_IDC_CUSTOMCHATTEXT;

_ctrlText ctrlSetStructuredText parseText format ["<t color='#E51919'>%1</t> %2",format [localize "STR_bnb_e_ADMIN_MESSAGES_CHANNEL",_info],_message];

private _textHeight = ctrlTextHeight _ctrlText;
/* private _textWidth = ctrlTextWidth _ctrlText; */

(ctrlPosition _ctrlText) params ["_origX","_origY","_origW","_origH"];

_ctrlText ctrlSetPosition [_origX,_origY - _textHeight,_origW,_textHeight];
_ctrlText ctrlCommit 0;


// add message to chat either way >> user can check chat history on map, if enabled
bnb_e_admin_messages_channel radioChannelAdd [player];
bnb_e_admin_messages_channel radioChannelSetCallsign format [localize "STR_bnb_e_ADMIN_MESSAGES_CHANNEL",_info];

player customChat [bnb_e_admin_messages_channel, _message];
bnb_e_admin_messages_channel radioChannelRemove [player];
