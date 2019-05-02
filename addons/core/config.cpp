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
			"r0ed_SurvivableCrashes"
		};
		author[] = {
			"D. Ford",
			"Arend"
		};
	};
};

class CfgFunctions {
	class bnb_e_core {
		class zeus_modules {
			file="\x\bnb_e\core\functions\zeus_modules";
			class addArsenal {};
			class addContaminationArea {};
			class exportOcapData {};
		};

		class utilities {
			file="\x\bnb_e\core\functions\utilities";
			class log {};
			class strToArray {};
			class toBoolean {};
		};

		class direct_connect {
			file="\x\bnb_e\core\functions\direct_connect";
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

// Fix to register ILBE Satcom as a placeable item
class cfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class tfw_rf3080Item: ACE_ItemCore {
		class ItemInfo: CBA_MiscItem_ItemInfo {};
	};
};

// Add server direct connect tiles
class CfgMainMenuSpotlight {
	#include "connectionData.hpp";
};
