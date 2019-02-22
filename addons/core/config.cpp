class CfgPatches {
	class bnb_e_core {
		name = "2BNB Extras - Core";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"achilles_modules_f_achilles"};
		author[] = {
			"D. Ford",
			"Arend"
		};
	};
};

class CfgFunctions {
	class bnb_e_core {
		class functions {
			file="\x\bnb_e\core\functions";
			class zeusAddContamAreaDialog {};
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
