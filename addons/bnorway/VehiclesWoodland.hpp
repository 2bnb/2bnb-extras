//////////////
// Infantry //
//////////////
class B_NorwayArmy_Man_Woodland : B_NorwayArmy_Man {
	displayName = "Man";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Woodland.jpg";
	faction = "B_NorwayArmy_Woodland";
	scope = 2;

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

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

class B_NorwayArmy_Rifleman_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Woodland.jpg";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "";

	weapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Rifleman_AT_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Rifleman AT";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_AT_Woodland.jpg";
	icon = "iconManAT";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416N","launch_MRAWS_green_F","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","launch_MRAWS_green_F","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","MRAWS_HEAT_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","MRAWS_HE_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","SmokeShellGreen"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","MRAWS_HEAT_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","MRAWS_HE_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_IR_Strobe_Item","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Engineer_EOD_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Engineer/EOD";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Woodland.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","ACE_VMM3","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","rhs_weap_m72a7","ACE_VMM3","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","ACE_M14","ACE_M14","rhsusf_m112x4_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","SmokeShellGreen"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","ACE_M14","ACE_M14","rhsusf_m112x4_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_DefusalKit","ACE_M26_Clacker","ACE_EarPlugs","ToolKit","ACE_wirecutter","ACE_SpraypaintBlue","ACE_SpraypaintRed"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_DefusalKit","ACE_M26_Clacker","ACE_EarPlugs","ToolKit","ACE_wirecutter","ACE_SpraypaintBlue","ACE_SpraypaintRed"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_1IC_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "1IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Woodland.jpg";
	icon = "iconManOfficer";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "tfw_ilbe_DD_coy";

	weapons[] = {"hlc_rifle_416N_gl","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N_gl","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShell","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShell","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"2BNB_Berret","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_HuntIR_monitor"};
	respawnItems[] = {"2BNB_Berret","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_HuntIR_monitor"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_2IC_Woodland : B_NorwayArmy_1IC_Woodland {
	displayName = "2IC";
	icon = "iconManLeader";
};

class B_NorwayArmy_Marksman_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Marksman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Woodland.jpg";

	bnb_e_weaponItems[] = {"muzzle_snds_B","","rhsusf_acc_su230a_mrds","bipod_01_F_blk"};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "";

	weapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};
	respawnWeapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};

	magazines[] = {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_SD","SmokeShell","SmokeShell","SmokeShellGreen"};
	respawnMagazines[] = {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_SD","SmokeShell","SmokeShell","SmokeShellGreen"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool","ACE_adenosine","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_MapTools","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool","ACE_adenosine","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage"};

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_556_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "LMG 5.56";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Woodland.jpg";
	icon = "iconManMG";

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
	respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_LMG_762_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "LMG 7.62";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Woodland.jpg";
	icon = "iconManMG";

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};
	respawnMagazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","ACE_SpareBarrel","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m80a1epr"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_IR_Strobe_Item","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_EarPlugs"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Medic_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Medic";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Woodland.jpg";
	icon = "iconManMedic";
	picture = "pictureHeal";

	attendant = 1;

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416D10C","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416D10C","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_epinephrine","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV_500"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_epinephrine","ACE_adenosine","ACE_EntrenchingTool","ACE_Flashlight_XL50","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV_500"};

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Crew_Woodland : B_NorwayArmy_Man_Woodland {
	author = "Jebby";
	displayName = "Crew";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Crew_Woodland.jpg";

	bnb_e_weaponItems[] = {"","","optic_Yorris",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

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

class B_NorwayArmy_Pilot_Woodland : B_NorwayArmy_Man_Woodland {
	author = "Jebby";
	displayName = "Pilot";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Pilot_Woodland.jpg";

	bnb_e_weaponItems[] = {"","","optic_Yorris",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

	backpack = "";

	weapons[] = {"SMG_03C_TR_black","hgun_Pistol_Signal_F","Throw","Put"};
	respawnWeapons[] = {"SMG_03C_TR_black","hgun_Pistol_Signal_F","Throw","Put"};

	magazines[] = {"50Rnd_570x28_SMG_03","6Rnd_GreenSignal_F","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_RedSignal_F","SmokeShellBlue"};
	respawnMagazines[] = {"50Rnd_570x28_SMG_03","6Rnd_GreenSignal_F","SmokeShellGreen","SmokeShell","SmokeShell","6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_RedSignal_F","SmokeShellBlue"};

	items[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};
	respawnItems[] = {"2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_adenosine"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","rhsusf_hgu56p_visor","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","rhsusf_hgu56p_visor","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Recon_IC_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Recon IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Recon_IC_Woodland.jpg";
	icon = "iconManOfficer";

	bnb_e_weaponItems[] = {"muzzle_snds_B","","rhsusf_acc_g33_xps3",""};

	uniformClass = "U_mas_nor_B_CombatUniform_aor2";

	backpack = "tfw_ilbe_whip_coy";

	weapons[] = {"HLC_Rifle_g3ka4_GL","rhs_weap_m72a7","Laserdesignator_01_khk_F","Throw","Put"};
	respawnWeapons[] = {"HLC_Rifle_g3ka4_GL","rhs_weap_m72a7","Laserdesignator_01_khk_F","Throw","Put"};

	magazines[] = {"hlc_20rnd_762x51_b_G3","Laserbatteries","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Chemlight_green","Chemlight_green","SmokeShell","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
	respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","Laserbatteries","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Chemlight_green","Chemlight_green","SmokeShell","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};

	items[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","2BNB_Berret","ACE_HuntIR_monitor","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
	respawnItems[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","2BNB_Berret","ACE_HuntIR_monitor","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Recon_Rifleman_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Recon Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Recon_Rifleman_Woodland.jpg";

	bnb_e_weaponItems[] = {"muzzle_snds_B","","rhsusf_acc_g33_xps3","rhsusf_acc_harris_bipod"};

	uniformClass = "U_mas_nor_B_CombatUniform_aor2";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_g3ka4","rhs_weap_m72a7","ACE_VectorDay","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_g3ka4","rhs_weap_m72a7","ACE_VectorDay","Throw","Put"};

	magazines[] = {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","Chemlight_green","Chemlight_green","SmokeShell","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};
	respawnMagazines[] = {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","Chemlight_green","Chemlight_green","SmokeShell","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M993_AP_Mag"};

	items[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
	respawnItems[] = {"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","2BNB_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Sniper_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Sniper";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Sniper_Woodland.jpg";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_LEUPOLDMK4_2",""};

	uniformClass = "U_mas_nor_B_CombatUniform_aor2";

	backpack = "tfw_ilbe_blade_coy";

	weapons[] = {"srifle_LRR_F","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"srifle_LRR_F","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};

	magazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell"};
	respawnMagazines[] = {"7Rnd_408_Mag","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","rhsusf_mag_17Rnd_9x19_FMJ","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell"};

	items[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_adenosine","ACE_Flashlight_MX991","2BNB_Berret","ACE_ATragMX","ACE_Kestrel4500","ACE_Tripod"};
	respawnItems[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_adenosine","ACE_adenosine","ACE_Flashlight_MX991","2BNB_Berret","ACE_ATragMX","ACE_Kestrel4500","ACE_Tripod"};

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Spotter_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Spotter";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Spotter_Woodland.jpg";

	bnb_e_weaponItems[] = {"","","rhsusf_acc_eotech_552",""};

	uniformClass = "U_mas_nor_B_CombatUniform_aor2";

	backpack = "B_mas_nor_Kitbag_d";

	weapons[] = {"hlc_rifle_416N","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_416N","rhsusf_weap_glock17g4","ACE_Vector","Throw","Put"};

	magazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};
	respawnMagazines[] = {"hlc_30rnd_556x45_SPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","SmokeShellGreen","SmokeShellGreen","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_SPR_PMAG"};

	items[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","2BNB_Berret","ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_microDAGR"};
	respawnItems[] = {"ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_Flashlight_MX991","ACE_adenosine","ACE_adenosine","2BNB_Berret","ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_microDAGR"};

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor2","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class B_NorwayArmy_Zeus_Woodland : B_NorwayArmy_Man_Woodland {
	displayName = "Zeus";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Zeus_Woodland.jpg";
	icon = "iconManOfficer";

	bnb_e_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";

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
class rhsusf_m998_w_s_2dr_fulltop;
class rhsusf_m998_w_s_2dr_fulltop_OCimport_01 : rhsusf_m998_w_s_2dr_fulltop { scope = 0; class EventHandlers; };
class rhsusf_m998_w_s_2dr_fulltop_OCimport_02 : rhsusf_m998_w_s_2dr_fulltop_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Command_Humvee_Woodland : rhsusf_m998_w_s_2dr_fulltop_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Humvee (Command)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		VEHICLE_WEAPONS
	};

	class TransportItems {
		VEHICLE_ITEMS
	};

	class TransportBackpacks {
		VEHICLE_BACKPACKS
	};


	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class rhsusf_m1043_w_s_m2;
class rhsusf_m1043_w_s_m2_OCimport_01 : rhsusf_m1043_w_s_m2 { scope = 0; class EventHandlers; };
class rhsusf_m1043_w_s_m2_OCimport_02 : rhsusf_m1043_w_s_m2_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Armed_Humvee_M2_Woodland : rhsusf_m1043_w_s_m2_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Humvee (M2)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		VEHICLE_WEAPONS
	};

	class TransportItems {
		VEHICLE_ITEMS
	};

	class TransportBackpacks {
		VEHICLE_BACKPACKS
	};


	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class rhsusf_m1043_w_s_mk19;
class rhsusf_m1043_w_s_mk19_OCimport_01 : rhsusf_m1043_w_s_mk19 { scope = 0; class EventHandlers; };
class rhsusf_m1043_w_s_mk19_OCimport_02 : rhsusf_m1043_w_s_mk19_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Armed_Humvee_Mk19_Woodland : rhsusf_m1043_w_s_mk19_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Humvee (Mk19)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		VEHICLE_WEAPONS
	};

	class TransportItems {
		VEHICLE_ITEMS
	};

	class TransportBackpacks {
		VEHICLE_BACKPACKS
	};


	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class rhsusf_M977A4_AMMO_BKIT_usarmy_wd;
class rhsusf_M977A4_AMMO_BKIT_usarmy_wd_OCimport_01 : rhsusf_M977A4_AMMO_BKIT_usarmy_wd { scope = 0; class EventHandlers; };
class rhsusf_M977A4_AMMO_BKIT_usarmy_wd_OCimport_02 : rhsusf_M977A4_AMMO_BKIT_usarmy_wd_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_HEMTT_Ammo_Woodland : rhsusf_M977A4_AMMO_BKIT_usarmy_wd_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "HEMTT (Ammo)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		VEHICLE_WEAPONS
	};

	class TransportItems {
		VEHICLE_ITEMS
	};

	class TransportBackpacks {
		VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class rhsusf_M978A4_BKIT_usarmy_wd;
class rhsusf_M978A4_BKIT_usarmy_wd_OCimport_01 : rhsusf_M978A4_BKIT_usarmy_wd { scope = 0; class EventHandlers; };
class rhsusf_M978A4_BKIT_usarmy_wd_OCimport_02 : rhsusf_M978A4_BKIT_usarmy_wd_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_HEMTT_Fuel_Woodland : rhsusf_M978A4_BKIT_usarmy_wd_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "HEMTT (Fuel)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		VEHICLE_WEAPONS
	};

	class TransportItems {
		VEHICLE_ITEMS
	};

	class TransportBackpacks {
		VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd;
class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd_OCimport_01 : rhsusf_M977A4_REPAIR_BKIT_usarmy_wd { scope = 0; class EventHandlers; };
class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd_OCimport_02 : rhsusf_M977A4_REPAIR_BKIT_usarmy_wd_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_HEMTT_Repair_Woodland : rhsusf_M977A4_REPAIR_BKIT_usarmy_wd_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "HEMTT (Repair)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		// init = "systemChat this;[this, 2, \"ACE_Track\", true] call ace_repair_fnc_addSpareParts;[this, 8, \"ACE_Wheel\", true] call ace_repair_fnc_addSpareParts;";
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		VEHICLE_WEAPONS
	};

	class TransportItems {
		VEHICLE_ITEMS
	};

	class TransportBackpacks {
		VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class rhsusf_m1240a1_m2_usmc_wd;
class rhsusf_m1240a1_m2_usmc_wd_OCimport_01 : rhsusf_m1240a1_m2_usmc_wd { scope = 0; class EventHandlers; };
class rhsusf_m1240a1_m2_usmc_wd_OCimport_02 : rhsusf_m1240a1_m2_usmc_wd_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Hunter_M2_Woodland : rhsusf_m1240a1_m2_usmc_wd_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Hunter M2";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		VEHICLE_WEAPONS
	};

	class TransportItems {
		VEHICLE_ITEMS
	};

	class TransportBackpacks {
		VEHICLE_BACKPACKS
	};


	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class rhsusf_stryker_m1126_m2_wd;
class rhsusf_stryker_m1126_m2_wd_OCimport_01 : rhsusf_stryker_m1126_m2_wd { scope = 0; class EventHandlers; };
class rhsusf_stryker_m1126_m2_wd_OCimport_02 : rhsusf_stryker_m1126_m2_wd_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Stryker_Woodland : rhsusf_stryker_m1126_m2_wd_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Stryker M2";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Crew_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Crew_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		ARMOURED_VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		ARMOURED_VEHICLE_WEAPONS
	};

	class TransportItems {
		ARMOURED_VEHICLE_ITEMS
	};

	class TransportBackpacks {
		ARMOURED_VEHICLE_BACKPACKS
	};


	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class B_NorwayArmy_M113_Woodland : B_NorwayArmy_M113 {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Crew_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenselectionstextures[] = {
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Light.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
	};
};

class B_NorwayArmy_M113_M2_Woodland : B_NorwayArmy_M113_M2 {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Crew_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenselectionstextures[] = {
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
	};
};

class B_NorwayArmy_M113_Medical_Woodland : B_NorwayArmy_M113_Medical {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Crew_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenselectionstextures[] = {
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Medical_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
	};
};

class B_NorwayArmy_M113_M2_Shield_Woodland : B_NorwayArmy_M113_M2_Shield {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Crew_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenselectionstextures[] = {
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa", // Gun Mount
		"\x\bnb_e\bnorway\data\textures\M113_Woodland_Shield.paa" // Turret Shield
	};
};

class B_NorwayArmy_Leopard_2SG_Woodland : B_NorwayArmy_Leopard {
	scope = 2;
	scopeCurator = 2;
	displayName = "Leopard 2SG";
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Crew_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Crew_Woodland" };

	hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Main_Turret.paa", // Main Turret
		"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Com_Turret.paa", // Commander Turret
		"A3\Armor_F\Data\camonet_greenbeige_co.paa"
	};
};

class B_NorwayArmy_Leopard_2SG_Kompis_Woodland : B_NorwayArmy_Leopard {
	author = "Ezpez";
	scope = 2;
	scopeCurator = 2;
	displayName = "Leopard 2SG (Kompis)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Crew_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Crew_Woodland" };

	hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Leopard_Kompis_Hull.paa", // Hull
		"\x\bnb_e\bnorway\data\textures\Leopard_Kompis_Main_Turret.paa", // Main Turret
		"\x\bnb_e\bnorway\data\textures\Leopard_Kompis_Com_Turret.paa", // Commander Turret
		"A3\Armor_F\Data\camonet_greenbeige_co.paa"
	};
};

class B_NorwayArmy_CV90_Woodland : B_NorwayArmy_CV90 {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	displayName = "CV90";
	crew = "B_NorwayArmy_Crew_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Crew_Woodland" };

	hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret.paa", // Turret
		"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull.paa", // Hull
		"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
		"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
	};
};

class B_NorwayArmy_Scania_Woodland : B_NorwayArmy_Scania {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Canopy.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_Scania_Covered_Woodland : B_NorwayArmy_Scania_Covered {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Canopy.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_Scania_Fuel_Woodland : B_NorwayArmy_Scania_Fuel {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Fuel.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_Scania_Utility_Woodland : B_NorwayArmy_Scania_Utility {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Utility.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

class B_NorwayArmy_Scania_Medical_Woodland : B_NorwayArmy_Scania_Medical {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	hiddenSelectionsTextures[] = {
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
		"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Canopy.paa", // Canopy
		"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
	};
};

//////////////////
// Air Vehicles //
//////////////////
class rhs_uh1h_hidf_gunship;
class rhs_uh1h_hidf_gunship_OCimport_01 : rhs_uh1h_hidf_gunship { scope = 0; class EventHandlers; };
class rhs_uh1h_hidf_gunship_OCimport_02 : rhs_uh1h_hidf_gunship_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Huey_Gunship_Woodland : rhs_uh1h_hidf_gunship_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Huey Gunship";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		AIR_VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		AIR_VEHICLE_WEAPONS
	};

	class TransportItems {
		AIR_VEHICLE_ITEMS
	};

	class TransportBackpacks {
		AIR_VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class rhs_uh1h_hidf;
class rhs_uh1h_hidf_OCimport_01 : rhs_uh1h_hidf { scope = 0; class EventHandlers; };
class rhs_uh1h_hidf_OCimport_02 : rhs_uh1h_hidf_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Huey_Transport_Woodland : rhs_uh1h_hidf_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Huey Transport";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		AIR_VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		AIR_VEHICLE_WEAPONS
	};

	class TransportItems {
		AIR_VEHICLE_ITEMS
	};

	class TransportBackpacks {
		AIR_VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class RHS_UH60M;
class RHS_UH60M_OCimport_01 : RHS_UH60M { scope = 0; class EventHandlers; class Turrets; };
class RHS_UH60M_OCimport_02 : RHS_UH60M_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
	class Turrets : Turrets {
		class CopilotTurret;
		class MainTurret;
		class RightDoorGun;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
	};
};
class B_NorwayArmy_Blackhawk_Woodland : RHS_UH60M_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Blackhawk";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };

	class Turrets : Turrets {
		class CopilotTurret: CopilotTurret {};
		class MainTurret: MainTurret { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
		class RightDoorGun: RightDoorGun { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
		class CargoTurret_01: CargoTurret_01 {};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
		class CargoTurret_04: CargoTurret_04 {};
	};

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		AIR_VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		AIR_VEHICLE_WEAPONS
	};

	class TransportItems {
		AIR_VEHICLE_ITEMS
	};

	class TransportBackpacks {
		AIR_VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class RHS_MELB_AH6M;
class RHS_MELB_AH6M_OCimport_01 : RHS_MELB_AH6M { scope = 0; class EventHandlers; };
class RHS_MELB_AH6M_OCimport_02 : RHS_MELB_AH6M_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Littlebird_CAS_Woodland : RHS_MELB_AH6M_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Littlebird (CAS)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		AIR_VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		AIR_VEHICLE_WEAPONS
	};

	class TransportItems {
		AIR_VEHICLE_ITEMS
	};

	class TransportBackpacks {
		AIR_VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class RHS_MELB_MH6M;
class B_NorwayArmy_Littlebird_Transport_Woodland : RHS_MELB_MH6M {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Littlebird (Transport)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		AIR_VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		AIR_VEHICLE_WEAPONS
	};

	class TransportItems {
		AIR_VEHICLE_ITEMS
	};

	class TransportBackpacks {
		AIR_VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class B_NorwayArmy_C130J_Woodland : B_NorwayArmy_C130J {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };
};

class B_NorwayArmy_C130J_Cargo_Woodland : B_NorwayArmy_C130J_Cargo {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };
};

class B_NorwayArmy_Bell412_Woodland : B_NorwayArmy_Bell412 {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };
};

class B_NorwayArmy_Bell412_Armed_Woodland : B_NorwayArmy_Bell412_Armed {
	scope = 2;
	scopeCurator = 2;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Pilot_Woodland" };
};

class RHS_A10;
class RHS_A10_OCimport_01 : RHS_A10 { scope = 0; class EventHandlers; };
class RHS_A10_OCimport_02 : RHS_A10_OCimport_01 {
	scope = 0;
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_A10_Woodland : RHS_A10_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "A-10";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		AIR_VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		AIR_VEHICLE_WEAPONS
	};

	class TransportItems {
		AIR_VEHICLE_ITEMS
	};

	class TransportBackpacks {
		AIR_VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class I_Plane_Fighter_04_F;
class I_Plane_Fighter_04_F_OCimport_01 : I_Plane_Fighter_04_F { scope = 0; class EventHandlers; };
class I_Plane_Fighter_04_F_OCimport_02 : I_Plane_Fighter_04_F_OCimport_01 {
	scope = 0;
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_JAS_39_Gripen_Woodland : I_Plane_Fighter_04_F_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "JAS 39 Gripen";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Pilot_Woodland";

	hiddenSelections[] = {"Camo_01", "Camo_02"};
	hiddenSelectionsTextures[] = {
		"x\bnb_e\bnorway\data\textures\Gripen_fuselage_01_co.paa",
		"x\bnb_e\bnorway\data\textures\Gripen_fuselage_02_co.paa"
	};

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	class TransportMagazines {
		AIR_VEHICLE_MAGAZINES
	};

	class TransportWeapons {
		AIR_VEHICLE_WEAPONS
	};

	class TransportItems {
		AIR_VEHICLE_ITEMS
	};

	class TransportBackpacks {
		AIR_VEHICLE_BACKPACKS
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

/////////////
// Statics //
/////////////
class RHS_M2StaticMG_WD;
class RHS_M2StaticMG_WD_OCimport_01 : RHS_M2StaticMG_WD { scope = 0; class EventHandlers; };
class RHS_M2StaticMG_WD_OCimport_02 : RHS_M2StaticMG_WD_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Static_MG_High_Woodland : RHS_M2StaticMG_WD_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Static MG (High)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class RHS_M2StaticMG_MiniTripod_WD;
class RHS_M2StaticMG_MiniTripod_WD_OCimport_01 : RHS_M2StaticMG_MiniTripod_WD { scope = 0; class EventHandlers; };
class RHS_M2StaticMG_MiniTripod_WD_OCimport_02 : RHS_M2StaticMG_MiniTripod_WD_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Static_MG_Low_Woodland : RHS_M2StaticMG_MiniTripod_WD_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Static MG (Low)";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class RHS_M252_WD;
class RHS_M252_WD_OCimport_01 : RHS_M252_WD { scope = 0; class EventHandlers; };
class RHS_M252_WD_OCimport_02 : RHS_M252_WD_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Mortar_Woodland : RHS_M252_WD_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class RHS_MK19_TriPod_USMC_WD;
class RHS_MK19_TriPod_USMC_WD_OCimport_01 : RHS_MK19_TriPod_USMC_WD { scope = 0; class EventHandlers; };
class RHS_MK19_TriPod_USMC_WD_OCimport_02 : RHS_MK19_TriPod_USMC_WD_OCimport_01 {
	class EventHandlers;
	VEHICLE_INVENTORY_RESET
};
class B_NorwayArmy_Static_GMG_Woodland : RHS_MK19_TriPod_USMC_WD_OCimport_02 {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Static GMG";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};

class RHS_TOW_TriPod_WD;
class B_NorwayArmy_Static_TOW_Woodland : RHS_TOW_TriPod_WD {
	author = "Jebby";
	scope = 2;
	scopeCurator = 2;
	displayName = "Static TOW";
	side = 1;
	faction = "B_NorwayArmy_Woodland";
	crew = "B_NorwayArmy_Rifleman_Woodland";
	typicalCargo[] = { "B_NorwayArmy_Rifleman_Woodland" };

	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;
};
