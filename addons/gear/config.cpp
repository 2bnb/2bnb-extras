class CfgPatches {
	class bnb_e_gear {
		name = "2BNB Extras - Gear";
		units[] = {};
		weapons[] = {};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"D. Ford",
			"Arend"
		};
	};
};



class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class ItemCore;
	class VestItem;
	class HeadgearItem;


	class U_I_CombatUniform;

	class H_HelmetB_TI_tna_F;
	class V_PlateCarrier2_wdl;
	class U_B_CTRG_Soldier_F;

	class U_B_CTRG_Soldier_Fx: U_B_CTRG_Soldier_F
	{
		author = "Ford";
		scope = 2;
		displayName = "SUPAR STEALTH";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_Soldier_F";
			containerClass = "Supply80";
			mass = 20;
		};
	};

	class H_HelmetB_TI_tna_Fx:H_HelmetB_TI_tna_F
	{
		author = "Ford";
		scope = 2;
		displayName = "SUPAR STEALTH";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {0,3};
			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Face {
					armor = 10;
					hitpointName = "HitFace";
					passThrough = 0.1;
					};
				class Head {
					armor = 30;
					hitpointName = "HitHead";
					passThrough = 0.1;
					};
			};
		};
	};

	class V_PlateCarrier2_wdlXXX:V_PlateCarrier2_wdl
	{
		author = "Ford";
		displayName = "SUPAR STEALTH";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			containerClass = Supply220;
			mass = 60;

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck"; // reference to the hit point class defined in the man base class
					armor = 8; // addition to armor of referenced hitpoint
					passThrough = 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};

	};

	class Adidas_Uniform: U_I_CombatUniform //Edited
	{
	scope = 2;
	displayName = "Adidas Uniform";
	author = "Ford";
	picture = "\x\bnb_e\gear\data\adidass.paa";


	   class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Irish_Peacekeeper"; //Edited
			containerClass = "Supply70";
			mass = 20;
		};
	};

	class Adidas_Vest: ItemCore
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas Light Vest";
		allowedSlots[] = {901}; // This means the vest can be put into a backpack.
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\gear\data\adidasV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = Supply220;
			mass = 60;

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck"; // reference to the hit point class defined in the man base class
					armor = 8; // addition to armor of referenced hitpoint
					passThrough = 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class Adidas_Berret: ItemCore
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas Berret";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_e\gear\data\adidasB.paa" };
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Head
				{
					hitpointName="HitHead";
					armor=30;
					passThrough=0.1;
				};
			};
		};
	};
	class Adidas_Helmet: ItemCore
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas Helmet";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		ace_hearing_protection = 0.8;
        ace_hearing_lowerVolume = 0.25;
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {"\x\bnb_e\gear\data\adidasH.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Head
				{
					hitpointName="HitHead";
					armor=90;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class Adidas_BerretX: Adidas_Berret
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas BerretX";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		ace_hearing_lowerVolume = 0.80;
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_e\gear\data\adidasB.paa" };
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo:HitpointsProtectionInfo
			{
				class Head:Head
				{
				};
			};
		};
	};

	class 2BNB_Berret: Adidas_Berret
	{
		author = "FarGay";
		displayName = "2BNB Berret";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_e\gear\data\2BNB_Berret.paa" };
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo:HitpointsProtectionInfo
			{
				class Head:Head
				{
				};
			};
		};
	};

	class RUS1: Adidas_Berret
	{
		author = "Ford";
		displayName = "2BNB RUSB";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_e\gear\data\RUSB.paa" };
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo:HitpointsProtectionInfo
			{
				class Head:Head
				{
				};
			};
		};
	};

	class RUS2: Adidas_Berret
	{
		author = "Ford";
		displayName = "2BNB RUSB1";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_e\gear\data\RUSB1.paa" };
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo:HitpointsProtectionInfo
			{
				class Head:Head
				{
				};
			};
		};
	};


	class H_mas_nor_opscore: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class H_mas_nor_Cap_fsk_f: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_MulticamTropic: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_M81: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_CamoSprayOD: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_CamoSprayTAN: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_OGA: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_OGA_OD: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_ProjectHonor: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_Multicam: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_AOR1: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_ocp: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_MulticamTropic: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_OCP: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_aor1: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_M81: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_CamoSprayOD: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_CamoSprayTAN: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_OGA: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_OGA_OD: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_ProjectHonor: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_Multicam: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	///OPS START
	class VSM_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_multicam: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_ocp: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_aor1: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Black_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_oga_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_OD_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_ProjectHonor_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Tan_spray_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OD_spray_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_MulticamTropic_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_M81_OPS: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	///OPS 2 START
	class VSM_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_2_multicam: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_2_ocp: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_2_AOR1: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Black_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_oga_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_OD_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_ProjectHonor_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_MulticamTropic_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_M81_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Tan_spray_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OD_Spray_OPS_2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	///BOWMAN HAT START
	class VSM_Bowman: ItemCore
	{
		ace_hearing_protection = 0.40;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_Black: ItemCore
	{
		ace_hearing_protection = 0.40;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_Green: ItemCore
	{
		ace_hearing_protection = 0.40;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_Tan: ItemCore
	{
		ace_hearing_protection = 0.40;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_balaclava_Tan: ItemCore
	{
		ace_hearing_protection = 0.40;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_balaclava_Olive: ItemCore
	{
		ace_hearing_protection = 0.40;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_balaclava_Black: ItemCore
	{
		ace_hearing_protection = 0.40;
        ace_hearing_lowerVolume = 0;
	};
	///ECH START
	class VSM_OGA_Helmet1: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_OD_Helmet1: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_Helmet2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_OD_Helmet2: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	///PELTOR START
	class VSM_Peltor_AOR1: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_Coyote: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_M81: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_OCP: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_OD: ItemCore
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
};
class CfgGlasses
{
	class VSM_Balaclava_black_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Balaclava_tan_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_OD_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_black_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_tan_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Balaclava_OD_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Balaclava_black_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava_tan_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava_OD_Peltor
	{
         ace_hearing_protection = 0.75;
	};
	class VSM_Balaclava_black_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;

	};
	class VSM_Balaclava_tan_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava_OD_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava_black_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava_tan_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava_OD_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava2_black_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Balaclava2_tan_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_OD_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_black_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_tan_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Balaclava2_OD_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Balaclava2_black_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava2_tan_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava2_OD_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava2_black_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;

	};
	class VSM_Balaclava2_tan_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava2_OD_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava2_black_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava2_tan_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Balaclava2_OD_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Facemask_black_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Facemask_tan_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_OD_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_black_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_tan_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Facemask_OD_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Facemask_black_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Facemask_tan_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Facemask_OD_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Facemask_black_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;

	};
	class VSM_Facemask_tan_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Facemask_OD_Peltor_glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Facemask_black_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Facemask_tan_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Facemask_OD_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Peltor_AOR1_glasses
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_coyote_glasses
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_m81_glasses
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_OCP_glasses
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_OD_glasses
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Shemagh_Balaclava_OD_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Balaclava_tan_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Balaclava_OD_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Balaclava_tan_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Balaclava_OD_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Shemagh_Balaclava_tan_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Shemagh_Balaclava_OD_Peltor_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Balaclava_tan_Peltor_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Balaclava_OD_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Balaclava2_tan_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Balaclava2_OD_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Balaclava2_tan_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Balaclava2_OD_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Balaclava2_tan_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Balaclava2_OD_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Shemagh_Balaclava2_tan_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Shemagh_Balaclava2_OD_Peltor_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Balaclava2_tan_Peltor_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Balaclava2_OD_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Facemask_tan_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Facemask_OD_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Facemask_tan_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Facemask_OD_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Facemask_tan_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_Facemask_OD_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Shemagh_Facemask_tan_Peltor
	{
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};
	class VSM_Shemagh_Facemask_OD_Peltor_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Facemask_tan_Peltor_Glasses
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

	};
	class VSM_Shemagh_Facemask_OD_Peltor_Goggles
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_glasses_tan
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_glasses_OD
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_goggles_tan
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class VSM_Shemagh_goggles_od
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		};
	class G_Blindfold_01_white_F
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\x\bnb_e\gear\data\Blindfold.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		};
	class G_Blindfold_01_black_F
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\x\bnb_e\gear\data\Blindfold.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		};

	/*
	class CUP_arifle_AK101;
	class Adidas_AK:CUP_arifle_AK101
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas AK 101";

		magazines[] = {"CUP_30Rnd_556x45_AK","CUP_30Rnd_TE1_Red_Tracer_556x45_AK","CUP_30Rnd_TE1_Green_Tracer_556x45_AK","CUP_30Rnd_TE1_Yellow_Tracer_556x45_AK","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		magazineWell[] = {"CBA_556x45_AK"};
		magazineReloadSwitchPhase = 0;
		magazineReloadTime = 0;
		modelOptics = "-";
	};
	*/
};

class CfgVehicles
{
	class I_Soldier_base_F;
	class I_soldier_F;

	class Irish_Peacekeeper : I_soldier_F
	{
		scope = 1;
		displayName = "Adidas Warrior";
		author = "Ford";
		nakedUniform = "U_BasicBody";
		uniformClass = "Adidas_Uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\gear\data\adidas.paa"};

		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		side = 1;

		backpack = "B_Parachute";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","FirstAidKit"};
		respawnLinkedItems[] = {"G_Combat","ItemMap","ItemCompass","ItemWatch","ItemRadio","FirstAidKit"};
		Weapons[] = {"Throw","Put"}; // only add rifle & / pistol classname, leave throw and put they are used for explosives and grenades
		respawnWeapons[] = {"Throw","Put"};
		Magazines[] = {};
		respawnMagazines[] = {};
	};
};
