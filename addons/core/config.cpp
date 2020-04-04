class CfgPatches {
	class bnb_e_core {
		name = "2BNB Extras - Core";
		units[] = {
			// CfgSupplyCrates
			"BNB_E_Resupply",
			"BNB_E_Resupply_Class_A",
			"BNB_E_Resupply_Class_B",
			"BNB_E_Resupply_Class_C",

			// CfgEdenModules
			"BNB_E_Supports_Module"
		};
		weapons[] = {};
		requiredAddons[] = {
			"achilles_modules_f_ares",
			"achilles_ui_f",
			"achilles_functions_f_achilles",
			"achilles_functions_f_ares",
			"cba_settings",
			"ace_arsenal",
			"ace_explosives",
			"ace_medical",
			"A3_Modules_F"
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
			class addSpectator {};
			class connectToServer {};
			class getDeadPlayers {};
			class listDeadPlayers {};
		};

		class zeus_modules {
			file = "\x\bnb_e\core\functions\zeus_modules";
			class addBarracks {};
			class forceRespawn {};
			class addMusicRadio {};
		};

		class eden_modules {
			file = "\x\bnb_e\core\functions\eden_modules";
			class barracksModule {};
		};

		class utilities {
			file = "\x\bnb_e\core\functions\utilities";
			class arrayFlatten {};
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


// Remove "Activate mine" action from diffused explosives/mines
class CfgActions {
	class None;
	class UseContainerMagazine : None {
		show = 0;
	};
};

// Config features/fixes
#include "configs\CfgBarrelSwaps.hpp";
#include "configs\CfgDirectConnect.hpp";
#include "configs\CfgEdenModules.hpp";
#include "configs\CfgExplosives.hpp";
#include "configs\CfgSatcom.hpp";
#include "configs\CfgLadderTweak.hpp";
#include "configs\CfgSupplyCrates.hpp";
#include "configs\CfgEnableDebug.hpp";
#include "configs\CfgZeusActions.hpp";
