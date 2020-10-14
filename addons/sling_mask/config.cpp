class CfgPatches {
	class bnb_ex_sling_mask {
		name = "2BNB Extras - Sling Mask";
		units[] = {};
		weapons[] = {};
		version = 0.1;
		requiredVersion = 0.1;
		requiredAddons[] = {"GRAD_slingHelmet"};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"DerZade [A]",
			"D. Ford",
			"Arend"
		};
	};
};

class Extended_PreInit_EventHandlers {
	class bnb_ex_sling_mask_preInit {
		init = "call compile preprocessFileLineNumbers '\x\bnb_ex\sling_mask\XEH_preInit.sqf'";
	};
};

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
