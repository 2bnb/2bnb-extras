// Infantry
class B_NorwayArmy_Man_Desert : B_NorwayArmy_Man {
	displayName = "Man";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Desert.jpg";
	faction = "B_NorwayArmy_Desert";
	scope = 2;

	uniformClass = "U_mas_nor_B_CombatUniform_aor1";

	backpack = "";

	weapons[] = {"Throw","Put"};
	respawnWeapons[] = {"Throw","Put"};

	magazines[] = {};
	respawnMagazines[] = {};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50"};

	linkedItems[] = {"2BNB_Berret","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"2BNB_Berret","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Medic_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Medic";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Desert.jpg";
	icon = "iconManMedic";
	picture = "pictureHeal";
	bnb_e_optic = "rhsusf_acc_eotech_552";

	attendant = 1;

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416D10C","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D10C","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShellBlue","SmokeShellBlue"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShellBlue","SmokeShellBlue"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV","ACE_epinephrine","ACE_morphine","ACE_surgicalKit","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","2BNB_Berret"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV","ACE_epinephrine","ACE_morphine","ACE_surgicalKit","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","2BNB_Berret"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_762_Desert : B_NorwayArmy_Man_Desert {
	displayName = "LMG 7.62";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Desert.jpg";
	icon = "iconManMG";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};
	respawnMagazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_adenosine","ACE_EarPlugs","ACE_EntrenchingTool","2BNB_Berret"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_adenosine","ACE_EarPlugs","ACE_EntrenchingTool","2BNB_Berret"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_556_Desert : B_NorwayArmy_Man_Desert {
	displayName = "LMG 5.56";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Desert.jpg";
	icon = "iconManMG";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","ACE_SpareBarrel","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade"};
	respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","ACE_SpareBarrel","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_adenosine","ACE_EarPlugs","ACE_EntrenchingTool","2BNB_Berret"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_adenosine","ACE_EarPlugs","ACE_EntrenchingTool","2BNB_Berret"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Marksman_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Marksman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Desert.jpg";
	bnb_e_optic = "rhsusf_acc_su230_mrds";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "";

	weapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};
	respawnWeapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};

	magazines[] = {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","SmokeShellBlue","Chemlight_green","Chemlight_green","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_SD","ACE_20Rnd_762x51_Mag_SD","ACE_20Rnd_762x51_Mag_SD"};
	respawnMagazines[] = {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","SmokeShellBlue","Chemlight_green","Chemlight_green","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_SD","ACE_20Rnd_762x51_Mag_SD","ACE_20Rnd_762x51_Mag_SD"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_EntrenchingTool","ACE_adenosine","ACE_EarPlugs"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_EntrenchingTool","ACE_adenosine","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Engineer_EOD_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Engineer/EOD";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Desert.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";
	bnb_e_optic = "rhsusf_acc_eotech_552";

	canDeactivateMines = 1;
	engineer = 1;

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416D145","rhs_weap_m72a7","ACE_VMM3","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D145","rhs_weap_m72a7","ACE_VMM3","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","SmokeShellBlue","SmokeShellBlue","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","ACE_M14","ACE_M14","rhsusf_m112x4_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","SmokeShellBlue","SmokeShellBlue","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","ACE_M14","ACE_M14","rhsusf_m112x4_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_SpraypaintBlue","ACE_SpraypaintRed","ACE_adenosine","ACE_EarPlugs","ACE_EntrenchingTool","ACE_DefusalKit","ACE_M26_Clacker","ToolKit","ACE_wirecutter","2BNB_Berret"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_SpraypaintBlue","ACE_SpraypaintRed","ACE_adenosine","ACE_EarPlugs","ACE_EntrenchingTool","ACE_DefusalKit","ACE_M26_Clacker","ToolKit","ACE_wirecutter","2BNB_Berret"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_1IC_Desert : B_NorwayArmy_Man_Desert {
	displayName = "1IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Desert.jpg";
	icon = "iconManOfficer";
	bnb_e_optic = "rhsusf_acc_eotech_552";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "tfw_ilbe_DD_coy";

	weapons[] = {"hlc_rifle_416D145_gl","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D145_gl","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","HandGrenade","HandGrenade","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","Chemlight_green","Chemlight_green","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","HandGrenade","HandGrenade","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","Chemlight_green","Chemlight_green","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE"};

	items[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_Flashlight_MX991","ACE_adenosine","ACE_HuntIR_monitor","2BNB_Berret"};
	respawnItems[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_Flashlight_MX991","ACE_adenosine","ACE_HuntIR_monitor","2BNB_Berret"};

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
	bnb_e_optic = "rhsusf_acc_eotech_552";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416D145","launch_MRAWS_sand_F","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D145","launch_MRAWS_sand_F","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","MRAWS_HEAT_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","MRAWS_HE_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","MRAWS_HEAT_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","MRAWS_HE_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_EarPlugs","ACE_EntrenchingTool","2BNB_Berret"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_EarPlugs","ACE_EntrenchingTool","2BNB_Berret"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Rifleman_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Desert.jpg";
	bnb_e_optic = "rhsusf_acc_eotech_552";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416D145","rhs_weap_m72a7","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D145","rhs_weap_m72a7","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","SmokeShellBlue","SmokeShellBlue","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","SmokeShellBlue","SmokeShellBlue","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_EntrenchingTool","ACE_EarPlugs","2BNB_Berret"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_EntrenchingTool","ACE_EarPlugs","2BNB_Berret"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Crew_Desert : B_NorwayArmy_Man_Desert {
	author = "Jebby";
	displayName = "Crew";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Crew_Desert.jpg";
	bnb_e_optic = "optic_Yorris";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "";

	weapons[] = {"hlc_rifle_416D10C","hgun_Pistol_Signal_F","Binocular","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D10C","hgun_Pistol_Signal_F","Binocular","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","6Rnd_GreenSignal_F","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_RedSignal_F","6Rnd_RedSignal_F","6Rnd_GreenSignal_F","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","6Rnd_GreenSignal_F","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_RedSignal_F","6Rnd_RedSignal_F","6Rnd_GreenSignal_F","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_HelmetCrew_I","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_HelmetCrew_I","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Pilot_Desert : B_NorwayArmy_Man_Desert {
	author = "Jebby";
	displayName = "Pilot";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Pilot_Desert.jpg";
	bnb_e_optic = "optic_Yorris";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	backpack = "";

	weapons[] = {"SMG_03C_TR_black","hgun_Pistol_Signal_F","Throw","Put"};
	respawnWeapons[] = {"SMG_03C_TR_black","hgun_Pistol_Signal_F","Throw","Put"};

	magazines[] = {"50Rnd_570x28_SMG_03","6Rnd_GreenSignal_F","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_RedSignal_F"};
	respawnMagazines[] = {"50Rnd_570x28_SMG_03","6Rnd_GreenSignal_F","SmokeShellRed","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_RedSignal_F"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine","ACE_adenosine","ACE_adenosine"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine","ACE_adenosine","ACE_adenosine"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","rhsusf_hgu56p_visor_green","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","rhsusf_hgu56p_visor_green","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};


// Vehicles
class B_NorwayArmy_Leopard_2SG_Desert: B_NorwayArmy_Leopard {
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
