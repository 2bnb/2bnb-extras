class CfgWeapons {
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base : ItemCore {
		class ItemInfo;
	};
	class BNB_EX_Surpat_Gear_Vest_1 : Vest_Camo_Base {
		scope = 2;
		displayName = "SURPAT Platecarrier";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\Data\Surpat_Vest.paa"};

		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Vest_2 : Vest_Camo_Base {
		scope = 2;
		displayName = "SURPAT Platecarrier Lite";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\Data\Surpat_Vest.paa"};

		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Vest_3 : Vest_Camo_Base {
		scope = 2;
		displayName = "SURPAT Platecarrier Special";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\Data\Surpat_Vest.paa"};

		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Vest_4 : Vest_Camo_Base {
		scope = 2;
		displayName = "SURPAT IOTV Lite";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\Data\Surpat_Iotv.paa"};

		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Vest_5 : Vest_Camo_Base {
		scope = 2;
		displayName = "SURPAT IOTV";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\Data\Surpat_Iotv.paa"};

		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Vest_6 : Vest_Camo_Base {
		author = "VanSchmoozin";
		scope = 2;
		displayName = "SURPAT Heavy 1";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\Data\Surpat_Nato_Heavy.paa"};

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Vest_7 : Vest_Camo_Base {
		author = "VanSchmoozin";
		scope = 2;
		displayName = "SURPAT Heavy 2";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\Data\Surpat_Nato_Heavy.paa"};

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
};
