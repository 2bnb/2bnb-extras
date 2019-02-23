class CfgPatches {
	class bnb_e_tfar {
		name = "Test";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"tfar_core"};
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


