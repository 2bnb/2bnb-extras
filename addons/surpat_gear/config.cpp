class CfgPatches {
	class bnb_ex_surpat_gear {
		// Addon identity
		name = "2BNB Extras - SURPAT Gear";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Ford",
			"Arend"
		};
		url = "https : //discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"A3_Characters_F"
		};

		// Addon items
		units[] = {
			"BNB_EX_Surpat_Gear_Uniform",
			"BNB_EX_Surpat_Gear_Uniform_SS",
			"BNB_EX_Surpat_Gear_GP_Uniform",
			"BNB_EX_Surpat_Gear_GP_Uniform_SS",
			"BNB_EX_Surpat_Gear_GS_Uniform",
			"BNB_EX_Surpat_Gear_GS_Uniform_SS",
			"BNB_EX_Surpat_Gear_TP_Uniform",
			"BNB_EX_Surpat_Gear_TP_Uniform_SS",
			"BNB_EX_Surpat_Gear_TS_Uniform",
			"BNB_EX_Surpat_Gear_TS_Uniform_SS",
			"BNB_EX_Surpat_Gear_Uniform_BDU",
			"BNB_EX_Surpat_Gear_Uniform_BDU_GP",
			"BNB_EX_Surpat_Gear_Uniform_BDU_TP",
			"BNB_EX_Surpat_Gear_Uniform_TShirt",
			"BNB_EX_Surpat_Gear_Uniform_Crye",
			"BNB_EX_Surpat_Gear_Uniform_Crye_TS",
			"BNB_EX_Surpat_Gear_Uniform_Crye_TP",
			"BNB_EX_Surpat_Gear_Uniform_Crye_GP",
			"BNB_EX_Surpat_Gear_Uniform_Crye_GS",
			"BNB_EX_Surpat_Gear_Uniform_Crye_Tee",
			// old "combat_unf"
			"BNB_EX_Surpat_Gear_Uniform",
			"BNB_EX_Surpat_Gear_Uniform_R",
			"BNB_EX_Surpat_Gear_Uniform_TG",
			"BNB_EX_Surpat_Gear_Uniform_TB",
			"BNB_EX_Surpat_Gear_Uniform_Ghillie",
		};
		weapons[] = {
			"BNB_EX_Surpat_Gear_Camo",
			"BNB_EX_Surpat_Gear_Camo_SS",
			"BNB_EX_Surpat_Gear_GP_Camo",
			"BNB_EX_Surpat_Gear_GP_Camo_SS",
			"BNB_EX_Surpat_Gear_GS_Camo",
			"BNB_EX_Surpat_Gear_GS_Camo_SS",
			"BNB_EX_Surpat_Gear_TP_Camo",
			"BNB_EX_Surpat_Gear_TP_Camo_SS",
			"BNB_EX_Surpat_Gear_TS_Camo",
			"BNB_EX_Surpat_Gear_TS_Camo_SS",
			"BNB_EX_Surpat_Gear_Camo_BDU",
			"BNB_EX_Surpat_Gear_Camo_BDU_GP",
			"BNB_EX_Surpat_Gear_Camo_BDU_TP",
			"BNB_EX_Surpat_Gear_Camo_TShirt",
			"BNB_EX_Surpat_Gear_Camo_Crye",
			"BNB_EX_Surpat_Gear_Camo_Crye_TS",
			"BNB_EX_Surpat_Gear_Camo_Crye_TP",
			"BNB_EX_Surpat_Gear_Camo_Crye_GS",
			"BNB_EX_Surpat_Gear_Camo_Crye_Tee",
			"BNB_EX_Surpat_Gear_Camo_Crye_GP",
			"BNB_EX_Surpat_Gear_Vest_1",
			"BNB_EX_Surpat_Gear_Vest_2",
			"BNB_EX_Surpat_Gear_Vest_3",
			"BNB_EX_Surpat_Gear_Vest_4",
			"BNB_EX_Surpat_Gear_Vest_5",
			"BNB_EX_Surpat_Gear_Vest_6",
			"BNB_EX_Surpat_Gear_Vest_7",
			"BNB_EX_Surpat_Gear_Helmet1",
			"BNB_EX_Surpat_Gear_Helmet2",
			"BNB_EX_Surpat_Gear_Helmet3",
			"BNB_EX_Surpat_Gear_Boonie",
			"BNB_EX_Surpat_Gear_Cap",
			// old "combat_unf"
			"BNB_EX_Surpat_Gear_Boonie2",
			"BNB_EX_Surpat_Gear_Boonie_HS",
			"BNB_EX_Surpat_Gear_Cap2",
			"BNB_EX_Surpat_Gear_Helmet",
			"BNB_EX_Surpat_Gear_Camo_Unf",
			"BNB_EX_Surpat_Gear_Camo_Unf_R",
			"BNB_EX_Surpat_Gear_Camo_Unf_TG",
			"BNB_EX_Surpat_Gear_Camo_Unf_TB",
			"BNB_EX_Surpat_Gear_Camo_Unf_Ghillie",
		};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

// class cfgFactionClasses {
// 	class BNB_EX_Surpat_Gear {
// 		displayName = "SURPAT Units";
// 		priority = 1;
// 		side = 1;
// 		icon = "x\bnb_ex\surpat_gear\Data\moh_icon.paa";
// 	};
// };

#include "Infantry.hpp"
#include "Vests.hpp"
#include "Uniforms.hpp"
#include "Backpacks.hpp"
#include "Headgear.hpp"
