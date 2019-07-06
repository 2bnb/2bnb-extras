class CfgPatches {
	class bnb_e_core {
		name = "2BNB Extras - Core";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"achilles_modules_f_ares",
			"achilles_ui_f",
			"achilles_functions_f_achilles",
			"achilles_functions_f_ares",
			"cba_settings",
			"tfw_radios_rf3080"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"D. Ford",
			"Arend"
		};
	};
};

class CfgFunctions {
	class bnb_e_core {
		class common {
			file = "\x\bnb_e\core\functions\common";
			class addFullHeal {};
		};

		class zeus_modules {
			file = "\x\bnb_e\core\functions\zeus_modules";
			class addArsenal {};
			class addMusicRadio {};
		};

		class utilities {
			file = "\x\bnb_e\core\functions\utilities";
			class log {};
			class strToArray {};
			class toBoolean {};
		};

		class direct_connect {
			file = "\x\bnb_e\core\functions\direct_connect";
			class connectToServer {};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class bnb_e_core_preInit {
        init = "call compile preprocessFileLineNumbers '\x\bnb_e\core\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class bnb_e_core_postInit {
		init = "call compile preprocessFileLineNumbers '\x\bnb_e\core\XEH_postInit.sqf'";
	};
};

class cfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class tfw_rf3080Item: ACE_ItemCore {
		class ItemInfo: CBA_MiscItem_ItemInfo{};
	};
};

// Add server direct connect tiles
class CfgMainMenuSpotlight {
	#include "connectionData.hpp";
};
