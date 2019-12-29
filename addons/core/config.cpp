class CfgPatches {
	class bnb_e_core {
		name = "2BNB Extras - Core";
		units[] = {
			"BNB_E_Resupply",
			"BNB_E_Resupply_Class_A",
			"BNB_E_Resupply_Class_B",
			"BNB_E_Resupply_Class_C"
		};
		weapons[] = {};
		requiredAddons[] = {
			"achilles_modules_f_ares",
			"achilles_ui_f",
			"achilles_functions_f_achilles",
			"achilles_functions_f_ares",
			"cba_settings",
			"tfw_radios_rf3080",
			"ace_explosives",
			"ace_medical"
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
			class connectToServer {};
		};

		class zeus_modules {
			file = "\x\bnb_e\core\functions\zeus_modules";
			class addArsenal {};
			class forceRespawn {};
			class addMusicRadio {};
		};

		class utilities {
			file = "\x\bnb_e\core\functions\utilities";
			class log {};
			class strToArray {};
			class toBoolean {};
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

// Config features/fixes
#include "configs\CfgBarrelSwaps.hpp";
#include "configs\CfgDirectConnect.hpp";
#include "configs\CfgExplosives.hpp";
#include "configs\CfgSatcom.hpp";
#include "configs\CfgSupplyCrates.hpp";
