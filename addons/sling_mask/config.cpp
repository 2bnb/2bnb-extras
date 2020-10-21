class CfgPatches {
	class bnb_ex_sling_mask {
		// Addon identity
		name = "2BNB Extras - Sling Mask";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"DerZade [A]",
			"Ford",
			"Arend"
		};
		url = "https://discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"GRAD_slingHelmet"
		};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class Extended_PreInit_EventHandlers {
	class bnb_ex_sling_mask_preInit {
		init = "call compile preprocessFileLineNumbers '\x\bnb_ex\sling_mask\XEH_preInit.sqf'";
	};
};

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
