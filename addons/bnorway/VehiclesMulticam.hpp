// Infantry
class B_NorwayArmy_Man_Multicam : B_NorwayArmy_Man {
	displayName = "Man";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Multicam.jpg";
	faction = "B_NorwayArmy_Multicam";
	scope = 2;

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

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

class B_NorwayArmy_Medic_Multicam : B_NorwayArmy_Man_Multicam {
	displayName = "Medic";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Multicam.jpg";
	icon = "iconManMedic";
	picture = "pictureHeal";

	attendant = 1;

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "B_mas_nor_Kitbag_m";

	weapons[] = {"hlc_rifle_416D10C","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D10C","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_epinephrine","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV_500"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_epinephrine","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV_500"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_762_Multicam : B_NorwayArmy_Man_Multicam {
	displayName = "LMG 7.62";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Multicam.jpg";
	icon = "iconManMG";

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "B_mas_nor_Kitbag_m";

	weapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};
	respawnMagazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_556_Multicam : B_NorwayArmy_Man_Multicam {
	displayName = "LMG 5.56";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Multicam.jpg";
	icon = "iconManMG";

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "B_mas_nor_Kitbag_m";

	weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
	respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Marksman_Multicam : B_NorwayArmy_Man_Multicam {
	displayName = "Marksman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Multicam.jpg";

	bnb_e_weaponItems[] = {"muzzle_snds_B","","rhsusf_acc_su230a_mrds","bipod_01_F_blk"};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "";

	weapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};
	respawnWeapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};

	magazines[] = {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_SD","SmokeShell","SmokeShell","SmokeShellGreen"};
	respawnMagazines[] = {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_SD","SmokeShell","SmokeShell","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool","ACE_adenosine","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool","ACE_adenosine","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage"};

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierLR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Engineer_EOD_Multicam : B_NorwayArmy_Man_Multicam {
	displayName = "Engineer/EOD";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Multicam.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "B_mas_nor_Kitbag_m";

	weapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","ACE_VMM3","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","ACE_VMM3","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","ACE_M14","ACE_M14","rhsusf_m112x4_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","SmokeShellGreen"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","ACE_M14","ACE_M14","rhsusf_m112x4_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_DefusalKit","ACE_M26_Clacker","ACE_EarPlugs","ToolKit","ACE_wirecutter","ACE_SpraypaintBlue","ACE_SpraypaintRed"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_DefusalKit","ACE_M26_Clacker","ACE_EarPlugs","ToolKit","ACE_wirecutter","ACE_SpraypaintBlue","ACE_SpraypaintRed"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_1IC_Multicam : B_NorwayArmy_Man_Multicam {
	displayName = "1IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Multicam.jpg";
	icon = "iconManOfficer";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "tfw_ilbe_DD_mc";

	weapons[] = {"hlc_rifle_416N_gl","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N_gl","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShell","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShell","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"2BNB_Berret","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_HuntIR_monitor"};
	respawnItems[] = {"2BNB_Berret","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_HuntIR_monitor"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_2IC_Multicam : B_NorwayArmy_1IC_Multicam {
	displayName = "2IC";
	icon = "iconManLeader";
};

class B_NorwayArmy_Rifleman_AT_Multicam : B_NorwayArmy_Man_Multicam {
	displayName = "Rifleman AT";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_AT_Multicam.jpg";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "B_mas_nor_Kitbag_m";

	weapons[] = {"hlc_rifle_416N","launch_MRAWS_sand_F","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","launch_MRAWS_sand_F","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","MRAWS_HEAT_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","MRAWS_HE_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","SmokeShellGreen"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","MRAWS_HEAT_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","MRAWS_HE_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Rifleman_Multicam : B_NorwayArmy_Man_Multicam {
	displayName = "Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Multicam.jpg";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "";

	weapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","H_mas_nor_ach","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Crew_Multicam : B_NorwayArmy_Man_Multicam {
	author = "Jebby";
	displayName = "Crew";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Crew_Multicam.jpg";

	bnb_e_weaponItems[] = {"","","optic_Yorris",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "";

	weapons[] = {"hlc_rifle_416D10C","hgun_Pistol_Signal_F","Binocular","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D10C","hgun_Pistol_Signal_F","Binocular","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","6Rnd_GreenSignal_F","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_RedSignal_F","6Rnd_RedSignal_F","6Rnd_GreenSignal_F","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","6Rnd_GreenSignal_F","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_RedSignal_F","6Rnd_RedSignal_F","6Rnd_GreenSignal_F","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Pilot_Multicam : B_NorwayArmy_Man_Multicam {
	author = "Jebby";
	displayName = "Pilot";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Pilot_Multicam.jpg";

	bnb_e_weaponItems[] = {"","","optic_Yorris",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";

	backpack = "";

	weapons[] = {"SMG_03C_TR_black","hgun_Pistol_Signal_F","Throw","Put"};
	respawnWeapons[] = {"SMG_03C_TR_black","hgun_Pistol_Signal_F","Throw","Put"};

	magazines[] = {"50Rnd_570x28_SMG_03","6Rnd_GreenSignal_F","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_RedSignal_F","SmokeShellBlue"};
	respawnMagazines[] = {"50Rnd_570x28_SMG_03","6Rnd_GreenSignal_F","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_RedSignal_F","SmokeShellBlue"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","rhsusf_hgu56p_visor_green","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_rgr","rhsusf_hgu56p_visor_green","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};
