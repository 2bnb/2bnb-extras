#include "..\gui\defines.hpp"

params [["_ctrl",controlNull]];

if !([] call bnb_e_admin_messages_fnc_isAdminOrZeus) exitWith {};

_ctrl ctrlSetPosition [BNB_E_ADMIN_MESSAGES_TITLE_X,BNB_E_ADMIN_MESSAGES_SENDBUTTON_Y_2];
_ctrl ctrlCommit 0;
