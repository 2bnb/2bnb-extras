class CfgPatches {
	class bnb_e_core {
		name = "2BNB Extras - Core";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"achilles_modules_f_achilles","r0ed_SurvivableCrashes"};
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
			class addContaminationArea {};
			class exportOcapData {};
		};

		class utilities {
			file="\x\bnb_e\core\functions\utilities";
			class toBoolean {};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class bnb_e_zeus_modules {
        init = "call compile preprocessFileLineNumbers '\x\bnb_e\core\XEH_clientPreInit.sqf';";
	};
};

class Extended_PostInit_EventHandlers {
	class bnb_e_survivable_crashes {
		init="call compile preprocessFileLineNumbers '\x\bnb_e\core\XEH_postInit.sqf'";
	};
};

class cfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class tfw_rf3080Item: ACE_ItemCore {
		class ItemInfo: CBA_MiscItem_ItemInfo {};
	};
};
