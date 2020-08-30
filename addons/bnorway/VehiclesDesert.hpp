//////////////
// Infantry //
//////////////
class B_NorwayArmy_Man_Desert : B_NorwayArmy_Man {
	displayName = "Man";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Desert.jpg";
	faction = "B_NorwayArmy_Desert";
	scope = 2;

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "";

	weapons[] = {"Throw","Put"};
	respawnWeapons[] = {"Throw","Put"};

	magazines[] = {};
	respawnMagazines[] = {};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};

	linkedItems[] = {"2BNB_Berret","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"2BNB_Berret","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Medic_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Medic";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Desert.jpg";
	icon = "iconManMedic";
	picture = "pictureHeal";

	attendant = 1;

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416D10C","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D10C","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_epinephrine","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV_500"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_epinephrine","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV_500"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_762_Desert : B_NorwayArmy_Man_Desert {
	displayName = "LMG 7.62";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Desert.jpg";
	icon = "iconManMG";

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};
	respawnMagazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_556_Desert : B_NorwayArmy_Man_Desert {
	displayName = "LMG 5.56";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Desert.jpg";
	icon = "iconManMG";

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
	respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Marksman_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Marksman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Desert.jpg";

	bnb_e_weaponItems[] = {"muzzle_snds_B","","rhsusf_acc_su230a_mrds","bipod_01_F_blk"};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "";

	weapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};
	respawnWeapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};

	magazines[] = {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_SD","SmokeShell","SmokeShell","SmokeShellGreen"};
	respawnMagazines[] = {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_SD","SmokeShell","SmokeShell","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool","ACE_adenosine","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool","ACE_adenosine","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage"};

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Engineer_EOD_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Engineer/EOD";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Desert.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","ACE_VMM3","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","ACE_VMM3","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","ACE_M14","ACE_M14","rhsusf_m112x4_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","SmokeShellGreen"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","ACE_M14","ACE_M14","rhsusf_m112x4_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_DefusalKit","ACE_M26_Clacker","ACE_EarPlugs","ToolKit","ACE_wirecutter","ACE_SpraypaintBlue","ACE_SpraypaintRed"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_DefusalKit","ACE_M26_Clacker","ACE_EarPlugs","ToolKit","ACE_wirecutter","ACE_SpraypaintBlue","ACE_SpraypaintRed"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_1IC_Desert : B_NorwayArmy_Man_Desert {
	displayName = "1IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Desert.jpg";
	icon = "iconManOfficer";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "tfw_ilbe_DD_coy";

	weapons[] = {"hlc_rifle_416N_gl","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N_gl","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShell","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShell","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"2BNB_Berret","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_HuntIR_monitor"};
	respawnItems[] = {"2BNB_Berret","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_HuntIR_monitor"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_2IC_Desert : B_NorwayArmy_1IC_Desert {
	displayName = "2IC";
	icon = "iconManLeader";
};

class B_NorwayArmy_Rifleman_AT_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Rifleman AT";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_AT_Desert.jpg";
	icon = "iconManAT";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416N","launch_MRAWS_sand_F","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","launch_MRAWS_sand_F","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","MRAWS_HEAT_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","MRAWS_HE_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","SmokeShellGreen"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","MRAWS_HEAT_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","MRAWS_HE_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Rifleman_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Desert.jpg";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "";

	weapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Crew_Desert : B_NorwayArmy_Man_Desert {
	author = "Jebby";
	displayName = "Crew";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Crew_Desert.jpg";

	bnb_e_weaponItems[] = {"","","optic_Yorris",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "";

	weapons[] = {"hlc_rifle_416D10C","hgun_Pistol_Signal_F","Binocular","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D10C","hgun_Pistol_Signal_F","Binocular","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","6Rnd_GreenSignal_F","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_RedSignal_F","6Rnd_RedSignal_F","6Rnd_GreenSignal_F","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","6Rnd_GreenSignal_F","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_RedSignal_F","6Rnd_RedSignal_F","6Rnd_GreenSignal_F","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_HelmetCrew_I","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_HelmetCrew_I","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Pilot_Desert : B_NorwayArmy_Man_Desert {
	author = "Jebby";
	displayName = "Pilot";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Pilot_Desert.jpg";

	bnb_e_weaponItems[] = {"","","optic_Yorris",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "";

	weapons[] = {"SMG_03C_TR_black","hgun_Pistol_Signal_F","Throw","Put"};
	respawnWeapons[] = {"SMG_03C_TR_black","hgun_Pistol_Signal_F","Throw","Put"};

	magazines[] = {"50Rnd_570x28_SMG_03","6Rnd_GreenSignal_F","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_RedSignal_F","SmokeShellBlue"};
	respawnMagazines[] = {"50Rnd_570x28_SMG_03","6Rnd_GreenSignal_F","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_RedSignal_F","SmokeShellBlue"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","rhsusf_hgu56p_visor_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","rhsusf_hgu56p_visor_tan","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Recon_IC_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Recon IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Recon_IC_Desert.jpg";
	icon = "iconManOfficer";

	bnb_e_weaponItems[] = {"muzzle_snds_B","","rhsusf_acc_g33_xps3",""};

	uniformClass = "U_mas_nor_B_CombatUniform_aor1";

	backpack = "tfw_ilbe_whip_coy";

	weapons[] = {"HLC_Rifle_g3ka4_GL","rhs_weap_m72a7","Laserdesignator_01_khk_F","Throw","Put"};
	respawnWeapons[] = {"HLC_Rifle_g3ka4_GL","rhs_weap_m72a7","Laserdesignator_01_khk_F","Throw","Put"};

	magazines[] = {"hlc_20rnd_762x51_b_G3","Laserbatteries","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Chemlight_green","Chemlight_green","SmokeShell","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
	respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","Laserbatteries","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Chemlight_green","Chemlight_green","SmokeShell","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};

	items[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","2BNB_Berret","ACE_HuntIR_monitor","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
	respawnItems[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","2BNB_Berret","ACE_HuntIR_monitor","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Recon_Rifleman_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Recon Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Recon_Rifleman_Desert.jpg";

	bnb_e_weaponItems[] = {"muzzle_snds_B","","rhsusf_acc_g33_xps3","rhsusf_acc_harris_bipod"};

	uniformClass = "U_mas_nor_B_CombatUniform_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_g3ka4","rhs_weap_m72a7","ACE_VectorDay","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_g3ka4","rhs_weap_m72a7","ACE_VectorDay","Throw","Put"};

	magazines[] = {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","Chemlight_green","Chemlight_green","SmokeShell","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
	respawnMagazines[] = {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","Chemlight_green","Chemlight_green","SmokeShell","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Sniper_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Sniper";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Sniper_Desert.jpg";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_LEUPOLDMK4_2",""};

	uniformClass = "U_mas_nor_B_CombatUniform_aor1";

	backpack = "tfw_ilbe_blade_coy";

	weapons[] = {"srifle_LRR_F","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"srifle_LRR_F","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};

	magazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell"};
	respawnMagazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell"};

	items[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_adenosine","ACE_Flashlight_MX991","2BNB_Berret","ACE_ATragMX","ACE_Kestrel4500","ACE_Tripod"};
	respawnItems[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_adenosine","ACE_Flashlight_MX991","2BNB_Berret","ACE_ATragMX","ACE_Kestrel4500","ACE_Tripod"};

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Spotter_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Spotter";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Spotter_Desert.jpg";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416N","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","2BNB_Berret","ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_microDAGR"};
	respawnItems[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","2BNB_Berret","ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_microDAGR"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Zeus_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Zeus";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Zeus_Desert.jpg";
	icon = "iconManOfficer";

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "tfw_ilbe_blade_coy";

	weapons[] = {"Throw","Put"};
	respawnWeapons[] = {"Throw","Put"};

	magazines[] = {};
	respawnMagazines[] = {};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool","tfw_rf3080Item"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool","tfw_rf3080Item"};

	linkedItems[] = {"2BNB_Berret","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"2BNB_Berret","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};


///////////////////
// Land Vehicles //
///////////////////
class B_NorwayArmy_Leopard_2SG_Desert : B_NorwayArmy_Leopard {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	displayName = "Leopard 2SG";
	crew = "B_NorwayArmy_Crew_Desert";
	typicalCargo[] = { "B_NorwayArmy_Crew_Desert" };

	hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Main_Turret.paa", // Main Turret
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Com_Turret.paa", // Commander Turret
		"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
	};
};

class B_NorwayArmy_CV90_Desert : B_NorwayArmy_CV90 {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	displayName = "CV90";
	crew = "B_NorwayArmy_Crew_Desert";
	typicalCargo[] = { "B_NorwayArmy_Crew_Desert" };

	hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\CV90_Desert_Turret.paa", // Turret
		"\x\bnb_e\bnorway\data\textures\CV90_Desert_Hull.paa", // Hull
		"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
		"\x\bnb_e\bnorway\data\textures\CV90_Desert_Cage.paa" // Blast Cage
	};
};

class B_NorwayArmy_Scania_Desert : B_NorwayArmy_Scania {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Rifleman_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Canopy.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_Scania_Covered_Desert : B_NorwayArmy_Scania_Covered {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Rifleman_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Canopy.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_Scania_Fuel_Desert : B_NorwayArmy_Scania_Fuel {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Rifleman_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Fuel.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_Scania_Utility_Desert : B_NorwayArmy_Scania_Utility {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Rifleman_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Utility.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_Scania_Medical_Desert : B_NorwayArmy_Scania_Medical {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Rifleman_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Desert_Canopy.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_M113_Desert : B_NorwayArmy_M113 {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Crew_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenselectionstextures[] = {
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Light.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
	};
};

class B_NorwayArmy_M113_M2_Desert : B_NorwayArmy_M113_M2 {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Crew_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenselectionstextures[] = {
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
	};
};

class B_NorwayArmy_M113_Medical_Desert : B_NorwayArmy_M113_Medical {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Crew_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenselectionstextures[] = {
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Medical_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
	};
};

class B_NorwayArmy_M113_M2_Shield_Desert : B_NorwayArmy_M113_M2_Shield {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Crew_Desert";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Desert" };

	hiddenselectionstextures[] = {
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa", // Gun Mount
		"\x\bnb_e\bnorway\data\textures\M113_Desert_Shield.paa" // Turret Shield
	};
};


//////////////////
// Air Vehicles //
//////////////////
class B_NorwayArmy_C130J_Desert : B_NorwayArmy_C130J {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Pilot_Desert";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Desert" };
};

class B_NorwayArmy_C130J_Cargo_Desert : B_NorwayArmy_C130J_Cargo {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Pilot_Desert";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Desert" };
};

class B_NorwayArmy_Bell412_Desert : B_NorwayArmy_Bell412 {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Pilot_Desert";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Desert" };
};

class B_NorwayArmy_Bell412_Armed_Desert : B_NorwayArmy_Bell412_Armed {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Desert";
	crew = "B_NorwayArmy_Pilot_Desert";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Desert" };
};
