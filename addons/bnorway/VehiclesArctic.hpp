// Infantry
class B_NorwayArmy_Man_Arctic : B_NorwayArmy_Man {
	displayName = "Man";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Arctic.jpg";
	faction = "B_NorwayArmy_Arctic";
	scope = 2;

	uniformClass = "U_mas_nor_B_CombatUniform_wint";

	backpack = "";

	weapons[] = {"Throw","Put"};
	respawnWeapons[] = {"Throw","Put"};

	magazines[] = {};
	respawnMagazines[] = {};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50"};

	linkedItems[] = {"H_mas_nor_beanie_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"H_mas_nor_beanie_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Medic_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Medic";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Arctic.jpg";
	icon = "iconManMedic";
	picture = "pictureHeal";

	attendant = 1;

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	weapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","SmokeShellBlue","SmokeShellBlue"};
	respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","SmokeShellBlue","SmokeShellBlue"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV","ACE_epinephrine","ACE_morphine","ACE_surgicalKit","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV","ACE_epinephrine","ACE_morphine","ACE_surgicalKit","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_762_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "LMG 7.62";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Arctic.jpg";
	icon = "iconManMG";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	weapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};
	respawnMagazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_556_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "LMG 5.56";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Arctic.jpg";
	icon = "iconManMG";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","ACE_SpareBarrel","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
	respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","ACE_SpareBarrel","SmokeShell","SmokeShell","SmokeShell","SmokeShell","HandGrenade","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Marksman_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Marksman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "";

	weapons[] = {"rhs_weap_sr25","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};

	magazines[] = {"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","SmokeShellBlue","Chemlight_green","Chemlight_green","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag"};
	respawnMagazines[] = {"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","SmokeShellBlue","Chemlight_green","Chemlight_green","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_RangeCard","ACE_EntrenchingTool","ACE_M26_Clacker","ACE_EarPlugs"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_RangeCard","ACE_EntrenchingTool","ACE_M26_Clacker","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Engineer_EOD_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Engineer/EOD";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Arctic.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	weapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","ACE_VMH3","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","ACE_VMH3","Throw","Put"};

	magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","SmokeShellBlue","SmokeShellBlue","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ACE_M14","ACE_M14"};
	respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","SmokeShellBlue","SmokeShellBlue","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ACE_M14","ACE_M14"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_SpraypaintBlue","ACE_SpraypaintRed","ACE_EarPlugs","ACE_EntrenchingTool","ACE_DefusalKit","ACE_Clacker","ACE_M26_Clacker","ToolKit","ACE_wirecutter"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_SpraypaintBlue","ACE_SpraypaintRed","ACE_EarPlugs","ACE_EntrenchingTool","ACE_DefusalKit","ACE_Clacker","ACE_M26_Clacker","ToolKit","ACE_wirecutter"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_1IC_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "1IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Arctic.jpg";
	icon = "iconManOfficer";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "UK3CB_BAF_B_Bergen_Arctic_SL_A";

	weapons[] = {"rhs_weap_hk416d145_m320","ACE_VectorDay","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_hk416d145_m320","ACE_VectorDay","Throw","Put"};

	magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","1Rnd_HE_Grenade_shell","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","HandGrenade","HandGrenade","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellOrange","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","Chemlight_green","Chemlight_green","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","1Rnd_HE_Grenade_shell","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","HandGrenade","HandGrenade","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellOrange","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","Chemlight_green","Chemlight_green","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};

	items[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_Flashlight_MX991","ACE_EntrenchingTool","ACE_HuntIR_monitor"};
	respawnItems[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_Flashlight_MX991","ACE_EntrenchingTool","ACE_HuntIR_monitor"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_2IC_Arctic : B_NorwayArmy_1IC_Arctic {
	displayName = "2IC";
	icon = "iconManLeader";
};

class B_NorwayArmy_Rifleman_AT_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Rifleman AT";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_AT_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	weapons[] = {"rhs_weap_hk416d145","SAW_W_MAAWS1","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_hk416d145","SAW_W_MAAWS1","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","MRAWS_HEAT_F","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","SmokeShellBlue","SmokeShellBlue"};
	respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","MRAWS_HEAT_F","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","SmokeShellBlue","SmokeShellBlue"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Rifleman_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	weapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","SmokeShellBlue","SmokeShellBlue"};
	respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","SmokeShellBlue","SmokeShellBlue"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool","ACE_wirecutter"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool","ACE_wirecutter"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Crew_Arctic : B_NorwayArmy_Man_Arctic {
	author = "Jebby";
	displayName = "Crew";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Crew_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "";

	weapons[] = {"rhs_weap_hk416d10","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_hk416d10","Binocular","Throw","Put"};

	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_HelmetCrew_I","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_HelmetCrew_I","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Pilot_Arctic : B_NorwayArmy_Man_Arctic {
	author = "Jebby";
	displayName = "Pilot";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Pilot_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "";

	weapons[] = {"rhs_weap_hk416d10","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_hk416d10","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","rhsusf_hgu56p_visor_white","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","rhsusf_hgu56p_visor_white","G_mas_nor_Bandanna_W","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};


// Vehicles
class B_NorwayArmy_Leopard_2SG_Arctic: B_NorwayArmy_Leopard {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Arctic";
	displayName = "Leopard 2SG";
	crew = "B_NorwayArmy_Crew_Arctic";
	typicalCargo[] = { "B_NorwayArmy_Crew_Arctic" };

	hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Main_Turret.paa", // Main Turret
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Com_Turret.paa", // Commander Turret
		"\x\bnb_e\bnorway\data\textures\Leopard_Arctic_Camonet.paa"
	};
};
