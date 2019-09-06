// Infantry
class B_NorwayArmy_Man_Arctic : B_NorwayArmy_Man {
	displayName = "Man";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Arctic.jpg";
	faction = "B_NorwayArmy_Arctic";
	scope = 2;

	uniformClass = "U_mas_nor_B_CombatUniform_wint";

	linkedItems[] = {"H_mas_nor_beanie_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"H_mas_nor_beanie_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_mas_nor_B_CombatUniform_wint",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{},{},"H_mas_nor_beanie_w","G_mas_nor_Bandanna_W",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Medic_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Medic";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Arctic.jpg";
	icon = "iconManMedic";
	picture = "pictureHeal";

	attendant = 1;

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrierAR_wint",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_salineIV_500",4},{"ACE_salineIV",1},{"ACE_epinephrine",1},{"ACE_morphine",1},{"HandGrenade",1,1},{"SmokeShell",10,1},{"SmokeShellGreen",3,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",6,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30}}},{"UK3CB_BAF_B_Kitbag_Arctic",{{"ACE_surgicalKit",1},{"ACE_salineIV_250",4},{"ACE_salineIV_500",11},{"ACE_salineIV",4},{"ACE_elasticBandage",30},{"ACE_packingBandage",30},{"ACE_quikclot",25},{"ACE_fieldDressing",15},{"ACE_tourniquet",2},{"ACE_morphine",10},{"ACE_epinephrine",10},{"adv_aceCPR_AED",1},{"SmokeShellBlue",2,1}}},"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_LMG_762_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "LMG 7.62";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Arctic.jpg";
	icon = "iconManMG";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4"};

	magazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP"};

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m240B","","","",{"rhsusf_100Rnd_762x51_m80a1epr",100},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrierAR_wint",{{"ACE_EntrenchingTool",1},{"HandGrenade",2,1},{"Chemlight_green",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",5,1},{"rhsusf_100Rnd_762x51_m61_ap",2,100},{"rhsusf_100Rnd_762x51_m80a1epr",2,100}}},{"UK3CB_BAF_B_Kitbag_Arctic",{{"ACE_SpareBarrel",1,1},{"rhsusf_100Rnd_762x51_m80a1epr",2,100}}},"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_LMG_556_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "LMG 5.56";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Arctic.jpg";
	icon = "iconManMG";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4"};

	magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP"};

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrierAR_wint",{{"ACE_EntrenchingTool",1},{"rhsusf_200rnd_556x45_M855_mixed_box",5,200},{"HandGrenade",2,1}}},{"UK3CB_BAF_B_Kitbag_Arctic",{{"rhsusf_200rnd_556x45_M855_mixed_box",2,200},{"ACE_SpareBarrel",1,1},{"SmokeShell",4,1},{"HandGrenade",1,1},{"SmokeShellGreen",2,1},{"SmokeShellBlue",2,1}}},"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Marksman_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Marksman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_sr25","rhsusf_weap_glock17g4","ACE_Vector"};
	respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_glock17g4","ACE_Vector"};

	magazines[] = {"ACE_10Rnd_762x51_Mk316_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","ACE_10Rnd_762x51_Mk316_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"ACE_10Rnd_762x51_Mk316_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP","ACE_10Rnd_762x51_Mk316_Mod_0_Mag","rhsusf_mag_17Rnd_9x19_JHP"};

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","rhsusf_acc_SR25S","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG3",{"ACE_10Rnd_762x51_Mk316_Mod_0_Mag",10},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",14},{"ACE_morphine",6},{"ACE_elasticBandage",12},{"ACE_CableTie",5},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_MapTools",1},{"ACE_epinephrine",4},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1},{"ACE_RangeCard",1},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACE_10Rnd_762x51_M993_AP_Mag",1,10}}},{"V_mas_nor_PlateCarrierLR_wint",{{"ACE_EntrenchingTool",1},{"HandGrenade",2,1},{"SmokeShell",5,1},{"SmokeShellGreen",2,1},{"SmokeShellBlue",2,1},{"Chemlight_green",2,1},{"ACE_10Rnd_762x51_M993_AP_Mag",4,10},{"ACE_10Rnd_762x51_Mk316_Mod_0_Mag",4,10},{"ACE_10Rnd_762x51_Mk319_Mod_0_Mag",4,10},{"10Rnd_Mk14_762x51_Mag",8,10}}},{},"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Engineer_EOD_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Engineer/EOD";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Arctic.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierAR_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","ACE_VMH3"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","ACE_VMH3"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","","RKSL_optic_EOT552X",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"ACE_VMH3","","","",{},{},""},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"V_mas_nor_PlateCarrierAR_wint",{{"ACE_EntrenchingTool",1},{"ACE_DefusalKit",1},{"ACE_Clacker",1},{"ACE_M26_Clacker",1},{"HandGrenade",2,1},{"SmokeShell",3,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30},{"SmokeShellBlue",2,1}}},{"UK3CB_BAF_B_Kitbag_Arctic",{{"ToolKit",1},{"ACE_wirecutter",1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",4,1},{"ACE_M14",2,1}}},"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_1IC_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "1IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Arctic.jpg";
	icon = "iconManOfficer";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145_m320","ACE_VectorDay"};
	respawnWeapons[] = {"rhs_weap_hk416d145_m320","ACE_VectorDay"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

	backpack = "UK3CB_BAF_B_Bergen_Arctic_SL_A";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_tourniquet",4},{"ACE_elasticBandage",11},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",15},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_Flashlight_MX991",1}}},{"V_mas_nor_PlateCarrier1_wint",{{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30},{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"SmokeShellOrange",2,1}}},{"UK3CB_BAF_B_Bergen_Arctic_SL_A",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_Smoke_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",5,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",5,1},{"1Rnd_HE_Grenade_shell",9,1}}},"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_2IC_Arctic : B_NorwayArmy_1IC_Arctic {
	displayName = "2IC";
	icon = "iconManLeader";
};

class B_NorwayArmy_Rifleman_AT_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Rifleman AT";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_AT_Arctic.jpg";
	icon = "iconManAT";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145","launch_MRAWS_olive_F","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_hk416d145","launch_MRAWS_olive_F","rhsusf_weap_glock17g4"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","MRAWS_HEAT_F","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","MRAWS_HEAT_F","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{"launch_MRAWS_olive_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",15},{"ACE_morphine",7},{"ACE_tourniquet",4},{"ACE_epinephrine",6},{"ACE_EarPlugs",2},{"ACE_CableTie",5},{"ACE_elasticBandage",14},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrier1_wint",{{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30},{"SmokeShell",5,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",3,30},{"SmokeShellBlue",2,1}}},{"UK3CB_BAF_B_Kitbag_Arctic",{{"MRAWS_HEAT_F",3,1}}},"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Rifleman_Arctic : B_NorwayArmy_Man_Arctic {
	displayName = "Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_mas_nor_opscore_w","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","rhsusf_weap_glock17g4"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

	backpack = "UK3CB_BAF_B_Kitbag_Arctic";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrier1_wint",{{"HandGrenade",2,1},{"SmokeShell",5,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30}}},{"UK3CB_BAF_B_Kitbag_Arctic",{{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"SmokeShellBlue",2,1}}},"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Crew_Arctic : B_NorwayArmy_Man_Arctic {
	author = "Jebby";
	displayName = "Crew";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Crew_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_HelmetCrew_I","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","H_HelmetCrew_I","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d10","Binocular"};
	respawnWeapons[] = {"rhs_weap_hk416d10","Binocular"};

	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{"V_mas_nor_PlateCarrier1_wint",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"SmokeShell",2,1}}},{},"H_HelmetCrew_I","G_mas_nor_Bandanna_W",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Pilot_Arctic : B_NorwayArmy_Man_Arctic {
	author = "Jebby";
	displayName = "Pilot";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Pilot_Arctic.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_wint","rhsusf_hgu56p_visor_white","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_wint","rhsusf_hgu56p_visor_white","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d10","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_hk416d10","rhsusf_weap_glock17g4"};

	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_wint2",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrier1_wint",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"SmokeShell",2,1}}},{},"rhsusf_hgu56p_visor_white","G_mas_nor_Bandanna_W",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};
