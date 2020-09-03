class RscText;
class RscTitle;
class RscEdit;
class RscButtonMenu;
class RscCombo;

class bnb_e_admin_messages_sendBoxTitleBase: RscTitle {
    idc = -1;
    style = 0;

    onLoad = "_this call bnb_e_admin_messages_fnc_setTitle";

    text = "ERROR ";
    colorBackground[] = {
        "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
    };

    x = BNB_E_ADMIN_MESSAGES_TITLE_X;
    y = BNB_E_ADMIN_MESSAGES_TITLE_Y;
    w = BNB_E_ADMIN_MESSAGES_TOTAL_W;
    h = BNB_E_ADMIN_MESSAGES_ELEMENT_H;
};

class bnb_e_admin_messages_sendBoxBGBase: RscText {
    idc = -1;

    colorBackground[] = {0, 0, 0, 0.700000};

    x = BNB_E_ADMIN_MESSAGES_TITLE_X;
    y = BNB_E_ADMIN_MESSAGES_EDITBOX_BG_Y;
    w = BNB_E_ADMIN_MESSAGES_TOTAL_W;
    h = BNB_E_ADMIN_MESSAGES_EDITBOX_BG_H;
};

class bnb_e_admin_messages_sendBoxBase: RscEdit {
    idc = -1;
    style = 16;

    autocomplete = "";
    shadow = 0;
    font = "EtelkaMonospacePro";
    sizeEx = "0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

    onLoad = "uiNamespace setVariable [""bnb_e_admin_messages_sendBoxCtrl"",(_this select 0)]";
    onUnLoad = "uiNamespace setVariable [""bnb_e_admin_messages_sendBoxCtrl"",nil]";

    onSetFocus = "[_this select 0, true] call bnb_e_admin_messages_fnc_handleEnterKey";
    onKillFocus = "[_this select 0, false] call bnb_e_admin_messages_fnc_handleEnterKey";

    x = BNB_E_ADMIN_MESSAGES_EDITBOX_X;
    y = BNB_E_ADMIN_MESSAGES_EDITBOX_Y;
    w = BNB_E_ADMIN_MESSAGES_EDITBOX_W;
    h = BNB_E_ADMIN_MESSAGES_EDITBOX_H;
};

class bnb_e_admin_messages_sendBoxButtonBase: RscButtonMenu {
    idc = BNB_E_ADMIN_MESSAGES_IDC_SENDBUTTON;

    onLoad = "uiNamespace setVariable [""bnb_e_admin_messages_sendBoxButtonCtrl"",(_this select 0)]; _this call bnb_e_admin_messages_fnc_setSendButtonPosition";
    onUnLoad = "uiNamespace setVariable [""bnb_e_admin_messages_sendBoxButtonCtrl"",nil]";

    text = "$STR_bnb_e_ADMIN_MESSAGES_SENDBOXBUTTON";
    action = "call bnb_e_admin_messages_fnc_sendMessage";

    x = BNB_E_ADMIN_MESSAGES_TITLE_X;
    y = BNB_E_ADMIN_MESSAGES_SENDBUTTON_Y;
    w = BNB_E_ADMIN_MESSAGES_TOTAL_W;
    h = BNB_E_ADMIN_MESSAGES_ELEMENT_H;
};

class bnb_e_admin_messages_sendBoxListboxBase: RscCombo {
    idc = -1;

    font = "EtelkaMonospacePro";
    rowHeight = 10;
    /*sizeEx = "0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";*/

    onLoad = "uiNamespace setVariable [""bnb_e_admin_messages_sendBoxListboxCtrl"",(_this select 0)]; _this call bnb_e_admin_messages_fnc_initListbox";
    onUnLoad = "uiNamespace setVariable [""bnb_e_admin_messages_sendBoxListboxCtrl"",nil]";
    onLBSelChanged = "_this call bnb_e_admin_messages_fnc_onRecipientChanged";

    x = BNB_E_ADMIN_MESSAGES_TITLE_X;
    y = BNB_E_ADMIN_MESSAGES_SENDBUTTON_Y;
    w = BNB_E_ADMIN_MESSAGES_TOTAL_W;
    h = BNB_E_ADMIN_MESSAGES_ELEMENT_H;
};
