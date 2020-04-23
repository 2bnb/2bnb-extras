class CfgPatches {
	class bnb_e_suicide_bomber {
		name = "2BNB Extras - Suicide Bomber";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"fox_suicide_bomber",
			"bnb_e_core"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Ph¡l",
			"Arend"
		};
	};
};

class CfgFunctions {
	class bnb_e_suicide_bomber {
		class carbomb {
			file = "\x\bnb_e\suicide_bomber\functions\carbomb";
			class aceDisarmIED {};
			class aceExamine {};
		};
	};
};


class CfgVehicles {
	class LandVehicle;
	class Car: LandVehicle {
	class ACE_Actions {
			class ACE_MainActions {
				class FOX_MainActions {
					displayName = "Vehicle";
					condition = "player == vehicle player";
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "";
					class fox_suicice_bomber_carbombSearch {
							displayName = "Search for explosives";
							condition = "alive _target";
							exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
							statement = "[_target] call bnb_e_suicide_bomber_fnc_aceExamine";
					};
					class fox_suicice_bomber_carbombDisarm {
							displayName = "Disarm IED";
							condition = "[_target] call fox_suicide_bomber_fnc_aceCanDisarmIED";
							exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
							statement = "[_target] call bnb_e_suicide_bomber_fnc_aceDisarmIED";
					};
				};
			};
		};
	};
};
