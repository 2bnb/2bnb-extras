class RscStructuredText;

class RscTitles {
	class bnb_e_admin_messages_rscCustomChat {
		duration = 20;
		enableSimulation = 1;
		fadeIn = 0.2;
		fadeOut = 0.2;
		idd = -1;
		movingEnable = 0;
		onLoad = "uiNamespace setVariable [""bnb_e_admin_messages_rscCustomChat"",_this select 0]";
		onUnload = "uiNamespace setVariable [""bnb_e_admin_messages_rscCustomChat"",nil]";

		class controls {
			class chatBox: RscStructuredText {
				idc = BNB_E_ADMIN_MESSAGES_IDC_CUSTOMCHATTEXT;

				colorBackground[] = {0,0,0,0.3};
				font = "RobotoCondensed";
				shadow = 1;
				shadowColor[] = {0,0,0,0.5};
				size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";

				x = "(safezoneX + 1 * (((safezoneW / safezoneH) min 1.2) / 40))";
				y = "(safezoneY + safezoneH - 10.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "(20 *(((safezoneW / safezoneH) min 1.2) / 40))";
				h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			};
		};
	};
};
