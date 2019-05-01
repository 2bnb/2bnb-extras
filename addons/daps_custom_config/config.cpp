class CfgPatches {
	class bnb_e_daps {
		name = "2BNB Extras - DAPS Custom Config";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"CBA_main","DrongosAPS"};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Drongo",
			"D. Ford",
			"Arend"
		};
	};
};

class Extended_PostInit_EventHandlers {
	dapscInit = "execVM '\x\bnb_e\daps_custom_config\Start.sqf'";
};
