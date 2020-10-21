class CfgPatches {
	class bnb_ex_suicide_bomber {
		// Addon identity
		name = "2BNB Extras - Suicide Bomber";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Ph¡l",
			"Arend"
		};
		url = "https://discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"fox_suicide_bomber"
		};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFunctions {
	class bnb_ex_suicide_bomber {
		class carbomb {
			file = "\x\bnb_ex\suicide_bomber\functions\carbomb";
			class aceCanDisarmIED {};
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
							statement = "[_target] call bnb_ex_suicide_bomber_fnc_aceExamine";
					};
					class fox_suicice_bomber_carbombDisarm {
							displayName = "Disarm IED";
							condition = "[_player, _target] call bnb_ex_suicide_bomber_fnc_aceCanDisarmIED";
							exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
							statement = "[_target] call bnb_ex_suicide_bomber_fnc_aceDisarmIED";
					};
				};
			};
		};
	};
};
