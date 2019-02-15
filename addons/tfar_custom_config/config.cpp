class CfgPatches {
	class bnb_e_tfar {
		name = "2BNB Extras - TFAR Custom Config";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"tfar_core"};
		author[] = {
			"D. Ford",
			"Arend"
		};
	};
};

class CfgVehicles {
	class MRAP_01_base_F;
	class rhsusf_hmmwe_base : MRAP_01_base_F {
		tf_isolatedAmount = 0.3;
	};
};
