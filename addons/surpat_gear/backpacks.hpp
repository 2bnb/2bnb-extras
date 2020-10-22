class CfgVehicles {
	class B_kitbag_Base;
	class BNB_EX_Surpat_Gear_Backpack_Kitbag : B_kitbag_Base {
		scope = 2;
		displayName = "SURPAT Kitbag";
		author = "VanSchmoozin";
		model = "A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\data\surpat_kitbag.paa"};
	};
	class B_AssaultPack_Base;
	class BNB_EX_Surpat_Gear_Backpack_Compact : B_AssaultPack_Base {
		scope = 2;
		displayName = "SURPAT Compact Bag";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\data\surpat_compact.paa"};
	};
};
