class CfgPatches {
	class bnb_e_admin_messages {
		author = "McDiod";
		name = "2BNB Extras - Admin Messages";
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Ui_F"};
		units[] = {};
		weapons[] = {};
		authors[] = {
			"McDiod",
			"D. Ford",
			"Arend"
		};
	};
};

#include "cfgEventHandlers.hpp"
#include "cfgFunctions.hpp"
#include "gui\defines.hpp"
#include "gui\sendBoxBase.hpp"
#include "gui\interruptMenu.hpp"
#include "gui\rscTitles.hpp"
