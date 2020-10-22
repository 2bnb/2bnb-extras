class CfgWeapons {
	class ItemCore;
	class UniformItem;
	class Uniform_Base : ItemCore {
		class ItemInfo;
	};
	class BNB_EX_Surpat_Gear_Camo : Uniform_Base {
		scope = 2;
		author = "VanSchmoozin";
		displayName = "SURPAT";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_1.paa"};

		class ItemInfo : UniformItem {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class BNB_EX_Surpat_Gear_Camo_SS : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT (Rolled Sleeves)";

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_SS";
		};
	};
	class BNB_EX_Surpat_Gear_GP_Camo : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT (GP)";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_1_green_pants.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_GP_Uniform";
		};
	};
	class BNB_EX_Surpat_Gear_GP_Camo_SS : BNB_EX_Surpat_Gear_GP_Camo {
		displayName = "SURPAT (GP) (Rolled Sleeves)";

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_GP_Uniform_SS";
		};
	};
	class BNB_EX_Surpat_Gear_GS_Camo : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT (GS)";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_1_green_shirt.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_GS_Uniform";
		};
	};
	class BNB_EX_Surpat_Gear_GS_Camo_SS : BNB_EX_Surpat_Gear_GS_Camo {
		displayName = "SURPAT (GS) (Rolled Sleeves)";

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_GS_Uniform_SS";
		};
	};
	class BNB_EX_Surpat_Gear_TP_Camo : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT (TP)";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_1_tan_pants.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_TP_Uniform";
		};
	};
	class BNB_EX_Surpat_Gear_TP_Camo_SS : BNB_EX_Surpat_Gear_TP_Camo {
		displayName = "SURPAT (TP) (Rolled Sleeves)";

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_TP_Uniform_SS";
		};
	};
	class BNB_EX_Surpat_Gear_TS_Camo : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT (TS)";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_1_tan_shirt.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_TS_Uniform";
		};
	};
	class BNB_EX_Surpat_Gear_TS_Camo_SS : BNB_EX_Surpat_Gear_TS_Camo {
		displayName = "SURPAT (TS) (Rolled Sleeves)";

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_TS_Uniform_SS";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_BDU : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT BDU";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_officer.paa","\x\bnb_ex\surpat_gear\data\surpat_1.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_BDU";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_BDU_GP : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT BDU GP";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_officer.paa","\x\bnb_ex\surpat_gear\data\surpat_1_green_pants.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_BDU_GP";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_BDU_TP : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT BDU TP";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_officer.paa","\x\bnb_ex\surpat_gear\data\surpat_1_tan_pants.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_BDU_TP";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_TShirt : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT (T-Shirt)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\moh_tshirt.paa","\x\bnb_ex\surpat_gear\data\surpat_1.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_TShirt";
			containerClass = "Supply30";
			mass = 35;
		};
	};
	class BNB_EX_Surpat_Gear_Camo_Crye : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT (Crye)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_crye.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_Crye";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_Crye_TS : BNB_EX_Surpat_Gear_Camo_Crye {
		displayName = "SURPAT (Crye TS)";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_crye_tan_shirt.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_Crye_TS";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_Crye_TP : BNB_EX_Surpat_Gear_Camo_Crye {
		displayName = "SURPAT (Crye TP)";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_crye_tan_pants.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_Crye_TP";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_Crye_GP : BNB_EX_Surpat_Gear_Camo_Crye {
		displayName = "SURPAT (Crye GP)";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_crye_green_pants.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_Crye_GP";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_Crye_GS : BNB_EX_Surpat_Gear_Camo_Crye {
		displayName = "SURPAT (Crye GS)";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_crye_green_shirt.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_Crye_GS";
		};
	};
	class BNB_EX_Surpat_Gear_Camo_Crye_Tee : BNB_EX_Surpat_Gear_Camo {
		displayName = "SURPAT (Crye Tee)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\surpat_gear\data\surpat_crye.paa"};

		class ItemInfo : ItemInfo {
			uniformClass = "BNB_EX_Surpat_Gear_Uniform_Crye_Tee";
		};
	};
};
