// Infantry
class B_NorwayArmy_Man_Desert : B_NorwayArmy_Man {
	displayName = "Man";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Desert.jpg";
	faction = "B_NorwayArmy_Desert";
	scope = 2;

	uniformClass = "U_mas_nor_B_CombatUniform_aor1";

	linkedItems[] = {"H_mas_nor_Booniehat_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"H_mas_nor_Booniehat_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_mas_nor_B_CombatUniform_aor1",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{},{},"H_mas_nor_Booniehat_aor1","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Medic_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Medic";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Desert.jpg";
	icon = "iconManMedic";
	picture = "pictureHeal";

	attendant = 1;

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhsusf_weap_glock17g4"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

	backpack = "B_mas_nor_Kitbag_d";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrierAR_tan",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_salineIV_500",4},{"ACE_salineIV",1},{"ACE_epinephrine",1},{"ACE_morphine",1},{"HandGrenade",1,1},{"SmokeShell",10,1},{"SmokeShellGreen",3,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",6,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30}}},{"B_mas_nor_Kitbag_d",{{"ACE_surgicalKit",1},{"ACE_salineIV_250",4},{"ACE_salineIV_500",11},{"ACE_salineIV",4},{"ACE_elasticBandage",30},{"ACE_packingBandage",30},{"ACE_quikclot",25},{"ACE_fieldDressing",15},{"ACE_tourniquet",2},{"ACE_morphine",10},{"ACE_epinephrine",10},{"adv_aceCPR_AED",1},{"SmokeShellBlue",2,1}}},"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_LMG_762_Desert : B_NorwayArmy_Man_Desert {
	displayName = "LMG 7.62";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Desert.jpg";
	icon = "iconManMG";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_m240B","rhsusf_weap_glock17g4"};

	magazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_mag_17Rnd_9x19_JHP"};

	backpack = "B_mas_nor_Kitbag_d";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m240B","","","",{"rhsusf_100Rnd_762x51_m80a1epr",100},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrierAR_tan",{{"ACE_EntrenchingTool",1},{"HandGrenade",2,1},{"Chemlight_green",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",5,1},{"rhsusf_100Rnd_762x51_m61_ap",2,100},{"rhsusf_100Rnd_762x51_m80a1epr",2,100}}},{"B_mas_nor_Kitbag_d",{{"ACE_SpareBarrel",1,1},{"rhsusf_100Rnd_762x51_m80a1epr",2,100}}},"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_LMG_556_Desert : B_NorwayArmy_Man_Desert {
	displayName = "LMG 5.56";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Desert.jpg";
	icon = "iconManMG";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_glock17g4"};

	magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200rnd_556x45_mixed_box","rhsusf_mag_17Rnd_9x19_JHP"};

	backpack = "B_mas_nor_Kitbag_d";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"V_mas_nor_PlateCarrierAR_tan",{{"ACE_EntrenchingTool",1},{"HandGrenade",2,1},{"rhsusf_100Rnd_556x45_M855_soft_pouch",7,100}}},{"B_mas_nor_Kitbag_d",{{"ACE_SpareBarrel",1,1},{"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",4,100}}},"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Marksman_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Marksman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Desert.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_sr25","rhsusf_weap_glock17g4","ACE_Vector"};
	respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_glock17g4","ACE_Vector"};

	magazines[] = {"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_mag_17Rnd_9x19_JHP"};

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","rhsusf_acc_SR25S","UK3CB_BAF_LLM_Flashlight_Black","rhsusf_acc_ACOG_MDO",{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",15},{"ACE_morphine",4},{"ACE_elasticBandage",15},{"ACE_CableTie",5},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_MapTools",1},{"ACE_epinephrine",4},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1},{"ACE_RangeCard",1},{"ACE_EntrenchingTool",1},{"ACE_M26_Clacker",1},{"SmokeShellBlue",1,1},{"Chemlight_green",2,1}}},{"V_mas_nor_PlateCarrierLR_tan",{{"HandGrenade",1,1},{"SmokeShell",5,1},{"SmokeShellGreen",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17},{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",10,20}}},{},"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Engineer_EOD_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Engineer/EOD";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Desert.jpg";
	icon = "iconManEngineer";
	picture = "pictureRepair";

	canDeactivateMines = 1;
	engineer = 1;

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrierAR_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","ACE_VMH3"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7","ACE_VMH3"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

	backpack = "B_mas_nor_Kitbag_d";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"ACE_VMH3","","","",{},{},""},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_SpraypaintBlue",1},{"ACE_SpraypaintRed",1}}},{"V_mas_nor_PlateCarrierAR_tan",{{"ACE_EntrenchingTool",1},{"ACE_DefusalKit",1},{"ACE_Clacker",1},{"ACE_M26_Clacker",1},{"HandGrenade",2,1},{"SmokeShell",3,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30},{"SmokeShellBlue",2,1}}},{"B_mas_nor_Kitbag_d",{{"ToolKit",1},{"ACE_wirecutter",1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",4,1},{"ACE_M14",2,1}}},"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_1IC_Desert : B_NorwayArmy_Man_Desert {
	displayName = "1IC";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Desert.jpg";
	icon = "iconManOfficer";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145_m320","rhsusf_weap_glock17g4","Laserdesignator"};
	respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhsusf_weap_glock17g4","Laserdesignator"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

	backpack = "tfw_ilbe_dd_coy";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_tourniquet",4},{"ACE_elasticBandage",11},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",15},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_Flashlight_MX991",1}}},{"V_mas_nor_PlateCarrier1_tan",{{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30},{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"SmokeShellOrange",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{"tfw_ilbe_dd_coy",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_Smoke_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",5,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",5,1},{"1Rnd_HE_Grenade_shell",9,1}}},"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_2IC_Desert : B_NorwayArmy_1IC_Desert {
	displayName = "2IC";
	icon = "iconManLeader";
};

class B_NorwayArmy_Rifleman_AT_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Rifleman AT";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_AT_Desert.jpg";
	icon = "iconManAT";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145","launch_MRAWS_sand_F"};
	respawnWeapons[] = {"rhs_weap_hk416d145","launch_MRAWS_sand_F"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

	backpack = "B_mas_nor_Kitbag_d";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{"launch_MRAWS_sand_F","","","",{"MRAWS_HEAT_F",1},{},""},{},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",15},{"ACE_morphine",7},{"ACE_tourniquet",4},{"ACE_epinephrine",6},{"ACE_EarPlugs",2},{"ACE_CableTie",5},{"ACE_elasticBandage",14},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"V_mas_nor_PlateCarrier1_tan",{{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30},{"SmokeShell",5,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",3,30},{"SmokeShellBlue",2,1}}},{"B_mas_nor_Kitbag_d",{{"MRAWS_HEAT_F",3,1}}},"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Rifleman_Desert : B_NorwayArmy_Man_Desert {
	displayName = "Rifleman";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Desert.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_mas_nor_ach_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7"};
	respawnWeapons[] = {"rhs_weap_hk416d145","rhs_weap_m72a7"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

	backpack = "B_mas_nor_Kitbag_d";

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"V_mas_nor_PlateCarrier1_tan",{{"HandGrenade",2,1},{"SmokeShell",5,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30}}},{"B_mas_nor_Kitbag_d",{{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"SmokeShellBlue",2,1}}},"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Crew_Desert : B_NorwayArmy_Man_Desert {
	author = "Jebby";
	displayName = "Crew";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Crew_Desert.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_HelmetCrew_I","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","H_HelmetCrew_I","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d10","Binocular"};
	respawnWeapons[] = {"rhs_weap_hk416d10","Binocular"};

	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","","",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{"V_mas_nor_PlateCarrier1_tan",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"SmokeShell",2,1}}},{},"H_HelmetCrew_I","VSM_Thermal",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};

class B_NorwayArmy_Pilot_Desert : B_NorwayArmy_Man_Desert {
	author = "Jebby";
	displayName = "Pilot";
	editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Pilot_Desert.jpg";

	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";

	linkedItems[] = {"V_mas_nor_PlateCarrier1_tan","rhsusf_hgu56p_visor_green","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
	respawnlinkedItems[] = {"V_mas_nor_PlateCarrier1_tan","rhsusf_hgu56p_visor_green","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

	weapons[] = {"rhs_weap_hk416d10","rhsusf_weap_glock17g4"};
	respawnWeapons[] = {"rhs_weap_hk416d10","rhsusf_weap_glock17g4"};

	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

	ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_mas_nor_B_CombatUniform_S_aor1",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{"V_mas_nor_PlateCarrier1_tan",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"SmokeShell",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{},"rhsusf_hgu56p_visor_green","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};
};
