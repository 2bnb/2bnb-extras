class CfgPatches {
	class bnb_ex_gear {
		// Addon identity
		name = "2BNB Extras - Gear";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Ford",
			"Arend",
			"Sawtes"
		};
		url = "https://discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"rhs_c_weapons",
			"A3_Characters_F_Enoch"
		};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};


class CfgWeapons
{
	class UniformItem;
	class ItemCore;
	class VestItem;
	class HeadgearItem;


	class U_I_CombatUniform;

	class H_HelmetB;
	class H_HelmetB_TI_tna_F;
	class V_PlateCarrier2_wdl;
	class U_B_CTRG_Soldier_F;

	class U_B_CTRG_Soldier_Fx : U_B_CTRG_Soldier_F
	{
		author = "Ford";
		scope = 2;
		displayName = "SUPAR STEALTH";

		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_Soldier_F";
			containerClass = "Supply80";
			mass = 20;
		};
	};

	class BNB_EX_Gear_Super_Stealth_Helmet : H_HelmetB_TI_tna_F
	{
		author = "Ford";
		scope = 2;
		displayName = "SUPAR STEALTH";

		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {0,3};
			class HitpointsProtectionInfo // more info at : https : //community.bistudio.com/wiki/Arma_3_Soldier_Protection
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

	class BNB_EX_Gear_Super_Stealth_Platecarrier : V_PlateCarrier2_wdl
	{
		author = "Ford";
		displayName = "SUPAR STEALTH";

		class ItemInfo : VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			containerClass = Supply220;
			mass = 40;

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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

	class BNB_EX_Gear_Adidas_Uniform : U_I_CombatUniform //Edited
	{
		scope = 2;
		displayName = "Adidas Uniform";
		author = "Ford";
		picture = "\x\bnb_ex\gear\data\adidas_icon.paa";

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "Irish_Peacekeeper"; //Edited
			containerClass = "Supply70";
			mass = 20;
		};
	};

	class BNB_EX_Gear_Adidas_Vest : ItemCore
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas Light Vest";
		allowedSlots[] = {901}; // This means the vest can be put into a backpack.
		picture = "\x\bnb_ex\gear\data\adidas_icon.paa";
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\adidas_vest.paa"};
		editorPreview = "\A3\EditorPreviews_F\Data\add.jpg";
		class ItemInfo : VestItem
		{
			editorPreview = "\A3\EditorPreviews_F\Data\add11.jpg";
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = Supply220;
			mass = 60;

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
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

	class BNB_EX_Gear_Adidas_Berret : ItemCore
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas Berret";
		picture = "\x\bnb_ex\gear\data\adidas_icon.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_ex\gear\data\adidas_berret.paa" };
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo
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
	class BNB_EX_Gear_Adidas_Helmet : ItemCore
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas Helmet";
		picture = "\x\bnb_ex\gear\data\adidas_icon.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.25;
		hiddenSelections[] = { "Camo1" };
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\adidas_altyn.paa"};
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "Camo1" };

			class HitpointsProtectionInfo
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
	class BNB_EX_Gear_Adidas_Berret_Muffled : BNB_EX_Gear_Adidas_Berret
	{
		author = "Ford";
		scope = 2;
		displayName = "Adidas Berret (Muffled)";
		picture = "\x\bnb_ex\gear\data\adidas_icon.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		ace_hearing_lowerVolume = 0.80;
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_ex\gear\data\adidas_berret.paa" };
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo : HitpointsProtectionInfo
			{
				class Head : Head
				{
				};
			};
		};
	};

	class BNB_EX_Gear_Unit_Berret : BNB_EX_Gear_Adidas_Berret
	{
		author = "FarGay";
		displayName = "2BNB Berret";
		picture = "\x\bnb_ex\gear\data\adidas_icon.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_ex\gear\data\2BNB_Berret.paa" };
		// hiddenSelectionsMaterials[] = {"\x\bnb_ex\gear\data\2BNB_Berret.rvmat"};
		class ItemInfo : ItemInfo
		{
			mass = 0;
			allowedSlots[] = {801, 701, 901, 605}; // Allow me in uniform, vest, backpack and on the head (of course)

			class HitpointsProtectionInfo : HitpointsProtectionInfo
			{
				class Head : Head
				{
				};
			};
		};
	};

	class BNB_EX_Gear_Russian_Berret_Flag : BNB_EX_Gear_Adidas_Berret
	{
		author = "Ford";
		displayName = "Russian Berret (Flag)";
		picture = "\x\bnb_ex\gear\data\adidas_icon.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_ex\gear\data\russian_berret_flag.paa" };
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo : HitpointsProtectionInfo
			{
				class Head : Head
				{
				};
			};
		};
	};

	class BNB_EX_Gear_Russian_Berret_Star : BNB_EX_Gear_Adidas_Berret
	{
		author = "Ford";
		displayName = "Russian Berret (Star)";
		picture = "\x\bnb_ex\gear\data\adidas_icon.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\x\bnb_ex\gear\data\russian_berret_star.paa" };
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo : HitpointsProtectionInfo
			{
				class Head : Head
				{
				};
			};
		};
	};


	class H_mas_nor_opscore : H_HelmetB
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class H_mas_nor_Cap_fsk_f : H_HelmetB
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_MulticamTropic : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_M81 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_CamoSprayOD : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_CamoSprayTAN : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_OGA : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_OGA_OD : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_ProjectHonor : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_Multicam : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_AOR1 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_ocp : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_MulticamTropic : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_OCP : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_aor1 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_M81 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_CamoSprayOD : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_CamoSprayTAN : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_OGA : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_OGA_OD : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_ProjectHonor : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Mich2000_2_Multicam : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	///OPS START
	class VSM_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_multicam : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_ocp : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_aor1 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Black_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_oga_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_OD_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_ProjectHonor_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Tan_spray_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OD_spray_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_MulticamTropic_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_M81_OPS : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	///OPS 2 START
	class VSM_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_2_multicam : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_2_ocp : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OPS_2_AOR1 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Black_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_oga_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_OD_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_ProjectHonor_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_MulticamTropic_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_M81_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Tan_spray_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OD_Spray_OPS_2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	///BOWMAN HAT START
	class VSM_Bowman : ItemCore
	{
		ace_hearing_protection = 0.40;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_Black : ItemCore
	{
		ace_hearing_protection = 0.40;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_Green : ItemCore
	{
		ace_hearing_protection = 0.40;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_Tan : ItemCore
	{
		ace_hearing_protection = 0.40;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_balaclava_Tan : ItemCore
	{
		ace_hearing_protection = 0.40;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_balaclava_Olive : ItemCore
	{
		ace_hearing_protection = 0.40;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Bowman_cap_balaclava_Black : ItemCore
	{
		ace_hearing_protection = 0.40;
		ace_hearing_lowerVolume = 0;
	};
	///ECH START
	class VSM_OGA_Helmet1 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_OD_Helmet1 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_Helmet2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_OGA_OD_Helmet2 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	///PELTOR START
	class VSM_Peltor_AOR1 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_Coyote : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_M81 : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_OCP : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class VSM_Peltor_OD : ItemCore
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class launch_MRAWS_green_rail_f;
	class BNB_EX_Gear_SAW_W_MAAWS0 : launch_MRAWS_green_rail_f
	{
		author = "Sawtes";
		scope = 2;
		baseWeapon = "BNB_EX_Gear_SAW_W_MAAWS0";
		displayName = "MAAWS Mk4 Mod 0 (White)";
		picture = "\x\bnb_ex\gear\data\white_maaws_icon.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\maaws_tube.paa"};
	};
	class launch_MRAWS_green_F;
	class BNB_EX_Gear_SAW_W_MAAWS1 : launch_MRAWS_green_F
	{
		author = "Sawtes";
		scope = 2;
		baseWeapon = "BNB_EX_Gear_SAW_W_MAAWS1";
		displayName = "MAAWS Mk4 Mod 1 (White)";
		picture = "\x\bnb_ex\gear\data\white_maaws_icon.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\maaws_tube.paa"};
	};
	class rhs_weap_ak74m;
	class BNB_EX_Gear_SAW_W_AK_Adidas : rhs_weap_ak74m
	{
		scope = 2;
		baseWeapon = "BNB_EX_Gear_SAW_W_AK_Adidas";
		displayName = "AK-74M (Adidas)";
		picture = "\x\bnb_ex\gear\data\ak_adidas_icon.paa";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\ak_adidas.paa"};
	};
	class rhs_weap_ak74m_npz;
	class BNB_EX_Gear_SAW_W_AK_Adidas_npz : rhs_weap_ak74m_npz
	{
		scope = 2;
		baseWeapon = "BNB_EX_Gear_SAW_W_AK_Adidas_npz";
		displayName = "AK-74M (Adidas/B-13)";
		picture = "\x\bnb_ex\gear\data\ak_adidas_icon.paa";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\ak_adidas.paa"};
	};
	class rhs_weap_ak74m_gp25;
	class BNB_EX_Gear_SAW_W_AK_Adidas_gp25 : rhs_weap_ak74m_gp25
	{
		scope = 2;
		baseWeapon = "BNB_EX_Gear_SAW_W_AK_Adidas_gp25";
		displayName = "AK-74M (Adidas/GP-25)";
		picture = "\x\bnb_ex\gear\data\ak_adidas_icon.paa";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\ak_adidas.paa"};
	};
	class rhs_weap_ak74m_gp25_npz;
	class BNB_EX_Gear_SAW_W_AK_Adidas_gp25_npz : rhs_weap_ak74m_gp25_npz
	{
		scope = 2;
		baseWeapon = "BNB_EX_Gear_SAW_W_AK_Adidas_gp25_npz";
		displayName = "AK-74M (Adidas/GP-25/B-13)";
		picture = "\x\bnb_ex\gear\data\ak_adidas_icon.paa";
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\ak_adidas.paa"};
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
	class G_Blindfold_01_base_F;
	class G_Blindfold_01_white_F : G_Blindfold_01_base_F
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\x\bnb_ex\gear\data\Blindfold.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
	};
	class G_Blindfold_01_black_F : G_Blindfold_01_base_F
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 16.0;
		ACE_Overlay = "\x\bnb_ex\gear\data\Blindfold.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
	};
};

class CfgVehicles
{
	class I_soldier_F;
	class Heli_Light_02_base_F;

	class O_Heli_Light_02_unarmed_F : Heli_Light_02_base_F
	{
		class TextureSources
		{
			class Black {
				author = "Bohemia Interactive";
				displayName = "Black";
				faction[] = {"OPF_F"};
				textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
			};
			class Blackcustom {
				author = "Bohemia Interactive";
				displayName = "Black Custom";
				faction[] = {"OPF_F"};
				textures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};
			};
			class Blue {
				author = "Bohemia Interactive";
				displayName = "Blue";
				factions[] = {"CIV_F"};
				textures[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"};
			};
			class Opfor {
				author = "Bohemia Interactive";
				displayName = "OPFOR";
				faction[] = {"OPF_F"};
				textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
			};
			class Russki
			{
				displayName = "Russki";
				author = "Ford";
				textures[] = {"\x\bnb_ex\gear\data\kasatka_ka60_hull.paa"};
				factions[] = {};
			};
		};
	};

	class Irish_Peacekeeper : I_soldier_F
	{
		scope = 1;
		displayName = "Adidas Warrior";
		author = "Ford";
		nakedUniform = "U_BasicBody";
		uniformClass = "BNB_EX_Gear_Adidas_Uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\bnb_ex\gear\data\adidas_trousers.paa"};

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
