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

class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class tfw_rf3080Item: ACE_ItemCore {
		class ItemInfo: CBA_MiscItem_ItemInfo{};
	};

	// ACE Barrel Swap fixes
	class Rifle_Long_Base_F;
	class UK3CB_BAF_L110_Base : Rifle_Long_Base_F {
		ace_overheating_allowSwapBarrel = 1;
	};
	class UK3CB_BAF_L7A2 : Rifle_Long_Base_F {
		ace_overheating_allowSwapBarrel = 1;
	};

	class LMG_03_base_F;
	class LMG_03_F : LMG_03_base_F {
		ace_overheating_allowSwapBarrel = 1;
	};
};

class CfgMagazines {
	// Register the m112(x4) explosive charges (RHS) with ACE Explosives
	class CA_Magazine;
	class rhsusf_m112_mag : CA_Magazine {
		ACE_Explosives_Placeable = 1;
		useAction = 0;
		ACE_Explosives_SetupObject = "rhsusf_explosive_m112";
		ACE_Explosives_DelayTime = 1.5;

		class ACE_Triggers {
			SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
			class Timer {
				FuseTime = 0.5;
			};

			class Command {
				FuseTime = 0.5;
			};

			class MK16_Transmitter : Command {};
			class DeadmanSwitch : Command {};
		};
	};
	class rhsusf_m112x4_mag : rhsusf_m112_mag {
		ACE_Explosives_SetupObject = "rhsusf_explosive_m112x4";
	};
};

class CfgVehicles {
	#include "CfgVehicles.hpp";
};

// Add server direct connect tiles
class CfgMainMenuSpotlight {
	#include "connectionData.hpp";
};
