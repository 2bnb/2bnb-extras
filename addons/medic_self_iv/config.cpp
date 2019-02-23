class CfgPatches {
	class bnb_e_medic {
		name = "2BNB Extras - Medic stuff";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"ace_medical"};
		author[] = {
			"D. Ford",
			"Arend"
		};
	};
};

class ACE_Medical_Actions {
	class Advanced {
		class BloodIV: fieldDressing {
            allowSelfTreatment = 1;
        };
	};
};


