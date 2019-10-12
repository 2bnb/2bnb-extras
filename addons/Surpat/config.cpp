#define _ARMA_

class CfgPatches
{
	class SURPAT_Config
	{
		units[] = {"SURPAT_Mod"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgFactionClasses
{
	class VSM_SURPAT
	{
		displayName = "VSM SURPAT";
		priority = 1;
		side = 1;
		icon = "SURPAT\Data\moh_icon.paa";
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicles
{
	class B_Soldier_F;
	class SURPAT_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Rifleman";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "SURPAT_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Team Leader";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "SURPAT_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_GP_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Rifleman(GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "SURPAT_GP_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_GP_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Team Leader(GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "SURPAT_GP_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_GS_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Rifleman(GS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "SURPAT_GS_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1_GREEN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_GS_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Team Leader(GS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "SURPAT_GS_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1_GREEN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_TP_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Rifleman(TP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "SURPAT_TP_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_TP_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Team Leader(TP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "SURPAT_TP_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_TS_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Rifleman(TS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "SURPAT_TS_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1_TAN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_TS_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Team Leader(TS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "SURPAT_TS_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_1_TAN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_BDU: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Rifleman(BDU)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "SURPAT_Camo_BDU";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_officer.paa","SURPAT\Data\SURPAT_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_BDU_GP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Rifleman(BDU GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "SURPAT_Camo_BDU_GP";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_officer.paa","SURPAT\Data\SURPAT_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_BDU_TP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Rifleman(BDU TP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "SURPAT_Camo_BDU_TP";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_officer.paa","SURPAT\Data\SURPAT_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_TShirt: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Medic";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass = "SURPAT_Camo_TShirt";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\MOH_TSHIRT.paa","SURPAT\Data\SURPAT_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_Cyre: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Operator";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "SURPAT_Camo_Cyre";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_CYRE.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_Cyre_TS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Operator TS";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "SURPAT_Camo_Cyre_TS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_CYRE_tan_shirt.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_Cyre_TP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Operator TP";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "SURPAT_Camo_Cyre_TP";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_CYRE_tan_pants.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_Cyre_GP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Operator GP";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "SURPAT_Camo_Cyre_GP";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_CYRE_green_pants.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_Cyre_GS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Operator GS";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "SURPAT_Camo_Cyre_GS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_CYRE_green_shirt.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class SURPAT_Uniform_Cyre_Tee: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "[VSM] SURPAT Lite";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "VSM_SURPAT";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "SURPAT_Camo_Cyre_Tee";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_CYRE.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_kitbag_Base;
	class SURPAT_Backpack_Kitbag: B_kitbag_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT Kitbag";
		author = "VanSchmoozin";
		model = "A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_kitbag.paa"};
	};
	class B_AssaultPack_Base;
	class SURPAT_Backpack_Compact: B_AssaultPack_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT Compact Bag";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_compact.paa"};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class SURPAT_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_SS";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_GP_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (GP) ";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_GP_Uniform";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_GP_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (GP) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_GP_Uniform_SS";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_GS_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (GS) ";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_GS_Uniform";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_GS_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (GS) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_GS_Uniform_SS";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_TP_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (TP)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_TP_Uniform";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_TP_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (TP) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_TP_Uniform_SS";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_TS_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (TS)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_TS_Uniform";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_TS_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (TS) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_TS_Uniform_SS";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_BDU: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT BDU";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_BDU";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_BDU_GP: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT BDU GP";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_BDU_GP";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_BDU_TP: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT BDU TP";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_BDU_TP";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_TShirt: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (T-Shirt)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_TShirt";
			containerClass = "Supply30";
			mass = 35;
		};
	};
	class SURPAT_Camo_Cyre: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (Crye)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_Cyre";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_Cyre_TS: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (Crye TS)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_Cyre_TS";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_Cyre_TP: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (Crye TP)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_Cyre_TP";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_Cyre_GS: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (Crye GS)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_Cyre_GS";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_Cyre_Tee: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (Crye Tee)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_Cyre_Tee";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class SURPAT_Camo_Cyre_GP: Uniform_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT (Crye GP)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "SURPAT_Uniform_Cyre_GP";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class SURPAT_Vest_1: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT Platecarrier";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Vest_2: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT Platecarrier Lite";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Vest_3: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT Platecarrier Special";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Vest_4: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT IOTV Lite";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_IOTV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Vest_5: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[VSM] SURPAT IOTV";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_IOTV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Vest_6: Vest_Camo_Base
	{
		author = "VanSchmoozin";
		scope = 2;
		displayName = "[VSM] SURPAT Heavy 1";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_NATO_Heavy.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Vest_7: Vest_Camo_Base
	{
		author = "VanSchmoozin";
		scope = 2;
		displayName = "[VSM] SURPAT Heavy 2";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_NATO_Heavy.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
			containerClass = "Supply220";
			mass = 40;
			hiddenSelections[] = {"camo"};
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
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class SURPAT_Helmet1: H_HelmetB
	{
		displayName = "[VSM] SURPAT ECH";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Helmet2: H_HelmetB
	{
		displayName = "[VSM] SURPAT ECH Lite";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Helmet3: H_HelmetB
	{
		displayName = "[VSM] SURPAT Canvas Helmet";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "\A3\characters_F_Beta\indep\headgear_helmet_canvas";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_canvas_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "\A3\characters_F_Beta\indep\headgear_helmet_canvas";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
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
	class SURPAT_Boonie: H_HelmetB
	{
		displayName = "[VSM] SURPAT Boonie";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_boonie.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
	class SURPAT_Cap: H_HelmetB
	{
		displayName = "[VSM] SURPAT Cap";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"SURPAT\Data\SURPAT_cap.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
};
