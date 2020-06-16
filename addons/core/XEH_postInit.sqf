[format["Current climate: %1", missionNamespace getVariable (format["bnb_e_climate_%1", worldName])], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
private _climate = missionNamespace getVariable [format["bnb_e_climate_%1", worldName], "all"];

if (_climate isEqualTo "arctic" || _climate isEqualTo "all") then {
	["Arctic default loadouts added", "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
	//-------------------------- 2BNB Arctic Kits ------------------------------------
	["2BNB Arctic - Anti-Tank",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["SAW_W_MAAWS1","","","",["MRAWS_HEAT_F",1],[],""],[],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",7],["ACE_tourniquet",4],["ACE_epinephrine",6],["ACE_EarPlugs",2],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_wint",[["ACE_EntrenchingTool",1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["Chemlight_green",2,1],["HandGrenade",2,1],["hlc_30rnd_556x45_SPR_PMAG",9,30]]],["Alpine_backpack_kitbag",[["2BNB_Berret",1],["MRAWS_HE_F",1,1],["MRAWS_HEAT_F",3,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Blank",[[],[],[],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],[],[],"2BNB_Berret","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Crew",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",12],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",8],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_wint",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_RedSignal_F",2,6],["6Rnd_GreenSignal_F",1,6],["hlc_30rnd_556x45_SPR_PMAG",6,30]]],[],"H_HelmetCrew_I","G_mas_nor_Bandanna_W",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Engineer/EOD",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",12],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",8],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_wint",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_RedSignal_F",2,6],["6Rnd_GreenSignal_F",1,6],["hlc_30rnd_556x45_SPR_PMAG",6,30]]],[],"H_HelmetCrew_I","G_mas_nor_Bandanna_W",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - IC/2IC",[["hlc_rifle_416D145_gl","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],["rhs_mag_M441_HE",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_tourniquet",4],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_packingBandage",20],["ACE_MapTools",1],["ACE_IR_Strobe_Item",2],["ACE_morphine",6],["ACE_CableTie",5],["ACE_Flashlight_MX991",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_wint",[["HandGrenade",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",6,1],["SmokeShellRed",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["hlc_30rnd_556x45_SPR_PMAG",9,30]]],["tfw_ilbe_DD_alpine",[["ACE_HuntIR_monitor",1],["2BNB_Berret",1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["Chemlight_green",2,1],["ACE_HuntIR_M203",5,1],["rhs_mag_M397_HET",3,1],["rhs_mag_M433_HEDP",10,1],["rhs_mag_M441_HE",7,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",["Laserdesignator","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - LMG 5.56",[["rhs_weap_m249_pip_L","","","",["rhsusf_200rnd_556x45_mixed_box",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_wint",[["ACE_EntrenchingTool",1],["rhsusf_200rnd_556x45_mixed_box",4,200]]],["Alpine_backpack_kitbag",[["2BNB_Berret",1],["ACE_SpareBarrel",1,1],["rhsusf_200rnd_556x45_mixed_box",3,200],["HandGrenade",2,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - LMG 7.62",[["rhs_weap_m240B","","","",["rhsusf_100Rnd_762x51_m80a1epr",100],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_wint",[["ACE_EntrenchingTool",1],["HandGrenade",2,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",5,1],["rhsusf_100Rnd_762x51_m61_ap",2,100],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],["Alpine_backpack_kitbag",[["2BNB_Berret",1],["ACE_SpareBarrel",1,1],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Marksman",[["srifle_DMR_06_olive_F","muzzle_snds_B","","rhsusf_acc_su230_mrds",["ACE_20Rnd_762x51_Mk319_Mod_0_Mag",20],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",4],["ACE_elasticBandage",10],["ACE_CableTie",5],["ACE_EarPlugs",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_epinephrine",4],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_EntrenchingTool",1],["ACE_adenosine",1],["SmokeShellBlue",1,1],["Chemlight_green",2,1]]],["V_mas_nor_PlateCarrierLR_wint",[["HandGrenade",1,1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["ACE_20Rnd_762x51_M993_AP_Mag",4,20],["ACE_20Rnd_762x51_Mk319_Mod_0_Mag",7,20],["ACE_20Rnd_762x51_Mag_SD",3,20]]],[],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",["Rangefinder","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Medic",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_wint",[["ACE_elasticBandage",5],["ACE_packingBandage",5],["ACE_salineIV_500",4],["ACE_salineIV",1],["ACE_epinephrine",1],["ACE_morphine",1],["HandGrenade",1,1],["SmokeShell",10,1],["SmokeShellGreen",3,1],["hlc_30rnd_556x45_SPR_PMAG",7,30]]],["Alpine_backpack_kitbag",[["ACE_surgicalKit",1],["ACE_salineIV_250",4],["ACE_salineIV_500",11],["ACE_salineIV",4],["ACE_elasticBandage",35],["ACE_packingBandage",40],["ACE_quikclot",25],["ACE_tourniquet",2],["ACE_morphine",10],["ACE_epinephrine",10],["ACE_adenosine",10],["2BNB_Berret",1],["SmokeShellBlue",2,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Pilot",[["SMG_03C_TR_black","","","optic_Yorris",["50Rnd_570x28_SMG_03",50],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",3]]],["V_mas_nor_PlateCarrier1_wint",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_GreenSignal_F",1,6],["6Rnd_RedSignal_F",2,6]]],[],"rhsusf_hgu56p_visor_white","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Rifleman",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["rhs_weap_m72a7","","","",[],[],""],[],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["ACE_EntrenchingTool",1],["SmokeShellBlue",2,1]]],["V_mas_nor_PlateCarrier1_wint",[["HandGrenade",2,1],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["hlc_30rnd_556x45_SPR_PMAG",11,30]]],["Alpine_backpack_kitbag",[["2BNB_Berret",1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	//-------------------------------------------------------------------------------
};

if (_climate isEqualTo "desert" || _climate isEqualTo "all") then {
	["Desert default loadouts added", "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
	//------------------------- 2BNB Desert Kits --------------------------------------
	["2BNB Desert - Anti-Tank",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["launch_MRAWS_sand_F","","","",["MRAWS_HEAT_F",1],[],""],[],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",20],["ACE_morphine",7],["ACE_tourniquet",4],["ACE_epinephrine",6],["ACE_EarPlugs",2],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_tan",[["ACE_EntrenchingTool",1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["Chemlight_green",2,1],["HandGrenade",2,1],["hlc_30rnd_556x45_SPR_PMAG",9,30]]],["B_mas_nor_Kitbag_d",[["2BNB_Berret",1],["MRAWS_HE_F",1,1],["MRAWS_HEAT_F",3,1]]],"H_mas_nor_ach_aor1","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Blank",[[],[],[],["U_mas_nor_B_CombatUniform_aor1",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],[],[],"2BNB_Berret","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Crew",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",20],["ACE_morphine",12],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",8],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_tan",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_RedSignal_F",2,6],["6Rnd_GreenSignal_F",1,6],["hlc_30rnd_556x45_SPR_PMAG",6,30]]],[],"H_HelmetCrew_I","",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Engineer/EOD",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["rhs_weap_m72a7","","","",[],[],""],["ACE_VMM3","","","",[],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_SpraypaintBlue",1],["ACE_SpraypaintRed",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["ACE_DefusalKit",1],["ACE_M26_Clacker",1],["HandGrenade",2,1],["SmokeShell",3,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["hlc_30rnd_556x45_SPR_PMAG",8,30]]],["B_mas_nor_Kitbag_d",[["ToolKit",1],["ACE_wirecutter",1],["2BNB_Berret",1],["ACE_M14",2,1],["rhsusf_m112x4_mag",1,1],["rhsusf_m112_mag",4,1]]],"H_mas_nor_ach_aor1","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - IC/2IC",[["hlc_rifle_416D145_gl","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],["rhs_mag_M441_HE",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_tourniquet",4],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_packingBandage",20],["ACE_MapTools",1],["ACE_IR_Strobe_Item",2],["ACE_morphine",6],["ACE_CableTie",5],["ACE_Flashlight_MX991",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_tan",[["HandGrenade",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",6,1],["SmokeShellRed",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["hlc_30rnd_556x45_SPR_PMAG",9,30]]],["tfw_ilbe_DD_coy",[["ACE_HuntIR_monitor",1],["2BNB_Berret",1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["Chemlight_green",2,1],["ACE_HuntIR_M203",5,1],["rhs_mag_M397_HET",3,1],["rhs_mag_M433_HEDP",10,1],["rhs_mag_M441_HE",10,1]]],"H_mas_nor_ach_aor1","",["Laserdesignator","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - LMG 5.56",[["rhs_weap_m249_pip_L","","","",["rhsusf_200rnd_556x45_mixed_box",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["rhsusf_200rnd_556x45_mixed_box",4,200]]],["B_mas_nor_Kitbag_d",[["2BNB_Berret",1],["ACE_SpareBarrel",1,1],["rhsusf_200rnd_556x45_mixed_box",3,200],["HandGrenade",2,1]]],"H_mas_nor_ach_aor1","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - LMG 7.62",[["rhs_weap_m240B","","","",["rhsusf_100Rnd_762x51_m80a1epr",100],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["HandGrenade",2,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",5,1],["rhsusf_100Rnd_762x51_m61_ap",2,100],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],["B_mas_nor_Kitbag_d",[["2BNB_Berret",1],["ACE_SpareBarrel",1,1],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],"H_mas_nor_ach_aor1","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Marksman",[["srifle_DMR_06_olive_F","muzzle_snds_B","","rhsusf_acc_su230_mrds",["ACE_20Rnd_762x51_Mk319_Mod_0_Mag",20],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",20],["ACE_morphine",4],["ACE_elasticBandage",10],["ACE_CableTie",5],["ACE_EarPlugs",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_epinephrine",4],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_EntrenchingTool",1],["ACE_adenosine",1],["SmokeShellBlue",1,1],["Chemlight_green",2,1]]],["V_mas_nor_PlateCarrierLR_tan",[["HandGrenade",1,1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["ACE_20Rnd_762x51_M993_AP_Mag",4,20],["ACE_20Rnd_762x51_Mk319_Mod_0_Mag",7,20],["ACE_20Rnd_762x51_Mag_SD",3,20]]],[],"H_mas_nor_ach_aor1","",["Rangefinder","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Medic",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_elasticBandage",5],["ACE_packingBandage",5],["ACE_salineIV_500",4],["ACE_salineIV",1],["ACE_epinephrine",1],["ACE_morphine",1],["HandGrenade",1,1],["SmokeShell",10,1],["SmokeShellGreen",3,1],["hlc_30rnd_556x45_SPR_PMAG",7,30]]],["B_mas_nor_Kitbag_d",[["ACE_surgicalKit",1],["ACE_salineIV_250",4],["ACE_salineIV_500",11],["ACE_salineIV",4],["ACE_elasticBandage",45],["ACE_packingBandage",45],["ACE_quikclot",25],["ACE_tourniquet",2],["ACE_morphine",10],["ACE_epinephrine",10],["ACE_adenosine",10],["2BNB_Berret",1],["SmokeShellBlue",2,1]]],"H_mas_nor_ach_aor1","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Pilot",[["SMG_03C_TR_black","","","optic_Yorris",["50Rnd_570x28_SMG_03",50],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",3]]],["V_mas_nor_PlateCarrier1_tan",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_GreenSignal_F",1,6],["6Rnd_RedSignal_F",2,6]]],[],"rhsusf_hgu56p_visor_green","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Rifleman",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["rhs_weap_m72a7","","","",[],[],""],[],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["ACE_EntrenchingTool",1],["SmokeShellBlue",2,1]]],["V_mas_nor_PlateCarrier1_tan",[["HandGrenade",2,1],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["hlc_30rnd_556x45_SPR_PMAG",11,30]]],["B_mas_nor_Kitbag_d",[["2BNB_Berret",1]]],"H_mas_nor_ach_aor1","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	//-------------------------------------------------------------------------------
};

if (_climate isEqualTo "multicam" || _climate isEqualTo "all") then {
	["Multicam default loadouts added", "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
	//-------------------------- 2BNB Multicam Kits ------------------------------------
	["2BNB Multicam - Anti-Tank",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["launch_MRAWS_sand_F","","","",["MRAWS_HEAT_F",1],[],""],[],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",20],["ACE_morphine",7],["ACE_tourniquet",4],["ACE_epinephrine",6],["ACE_EarPlugs",2],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_rgr",[["ACE_EntrenchingTool",1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["Chemlight_green",2,1],["HandGrenade",2,1],["hlc_30rnd_556x45_SPR_PMAG",9,30]]],["B_mas_nor_Kitbag_m",[["2BNB_Berret",1],["MRAWS_HE_F",1,1],["MRAWS_HEAT_F",3,1]]],"H_mas_nor_ach","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - Blank",[[],[],[],["U_mas_nor_B_CombatUniform_multi",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],[],[],"2BNB_Berret","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - Crew",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",20],["ACE_morphine",12],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",8],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_rgr",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_RedSignal_F",2,6],["6Rnd_GreenSignal_F",1,6],["hlc_30rnd_556x45_SPR_PMAG",6,30]]],[],"H_HelmetCrew_I","",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - Engineer/EOD",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["rhs_weap_m72a7","","","",[],[],""],["ACE_VMM3","","","",[],[],""],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_SpraypaintBlue",1],["ACE_SpraypaintRed",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrierAR_rgr",[["ACE_EntrenchingTool",1],["ACE_DefusalKit",1],["ACE_M26_Clacker",1],["HandGrenade",2,1],["SmokeShell",3,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["hlc_30rnd_556x45_SPR_PMAG",8,30]]],["B_mas_nor_Kitbag_m",[["ToolKit",1],["ACE_wirecutter",1],["2BNB_Berret",1],["ACE_M14",2,1],["rhsusf_m112_mag",4,1],["rhsusf_m112x4_mag",1,1]]],"H_mas_nor_ach","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - IC/2IC",[["hlc_rifle_416D145_gl","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],["rhs_mag_M441_HE",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_tourniquet",4],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_packingBandage",20],["ACE_MapTools",1],["ACE_IR_Strobe_Item",2],["ACE_morphine",6],["ACE_CableTie",5],["ACE_Flashlight_MX991",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_rgr",[["HandGrenade",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",6,1],["SmokeShellRed",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["hlc_30rnd_556x45_SPR_PMAG",9,30]]],["tfw_ilbe_DD_mc",[["ACE_HuntIR_monitor",1],["2BNB_Berret",1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["Chemlight_green",2,1],["ACE_HuntIR_M203",5,1],["rhs_mag_M397_HET",3,1],["rhs_mag_M433_HEDP",10,1],["rhs_mag_M441_HE",10,1]]],"H_mas_nor_ach","",["Laserdesignator","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - LMG 5.56",[["rhs_weap_m249_pip_L","","","",["rhsusf_200rnd_556x45_mixed_box",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_rgr",[["ACE_EntrenchingTool",1],["rhsusf_200rnd_556x45_mixed_box",4,200]]],["B_mas_nor_Kitbag_m",[["2BNB_Berret",1],["ACE_SpareBarrel",1,1],["rhsusf_200rnd_556x45_mixed_box",3,200],["HandGrenade",2,1]]],"H_mas_nor_ach","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - LMG 7.62",[["rhs_weap_m240B","","","",["rhsusf_100Rnd_762x51_m80a1epr",100],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_rgr",[["ACE_EntrenchingTool",1],["HandGrenade",2,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",5,1],["rhsusf_100Rnd_762x51_m61_ap",2,100],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],["B_mas_nor_Kitbag_m",[["2BNB_Berret",1],["ACE_SpareBarrel",1,1],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],"H_mas_nor_ach","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - Marksman",[["srifle_DMR_06_olive_F","muzzle_snds_B","","rhsusf_acc_su230_mrds",["ACE_20Rnd_762x51_Mk319_Mod_0_Mag",20],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",20],["ACE_morphine",4],["ACE_elasticBandage",10],["ACE_CableTie",5],["ACE_EarPlugs",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_epinephrine",4],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_EntrenchingTool",1],["ACE_adenosine",1],["SmokeShellBlue",1,1],["Chemlight_green",2,1]]],["V_mas_nor_PlateCarrierLR_rgr",[["HandGrenade",1,1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["ACE_20Rnd_762x51_M993_AP_Mag",4,20],["ACE_20Rnd_762x51_Mk319_Mod_0_Mag",7,20],["ACE_20Rnd_762x51_Mag_SD",3,20]]],[],"H_mas_nor_ach","",["Rangefinder","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - Medic",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_rgr",[["ACE_elasticBandage",5],["ACE_packingBandage",5],["ACE_salineIV_500",4],["ACE_salineIV",1],["ACE_epinephrine",1],["ACE_morphine",1],["HandGrenade",1,1],["SmokeShell",10,1],["SmokeShellGreen",3,1],["hlc_30rnd_556x45_SPR_PMAG",7,30]]],["B_mas_nor_Kitbag_m",[["ACE_surgicalKit",1],["ACE_salineIV_250",4],["ACE_salineIV_500",11],["ACE_salineIV",4],["ACE_elasticBandage",45],["ACE_packingBandage",45],["ACE_quikclot",25],["ACE_tourniquet",2],["ACE_morphine",10],["ACE_epinephrine",10],["ACE_adenosine",10],["2BNB_Berret",1],["SmokeShellBlue",2,1]]],"H_mas_nor_ach","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - Pilot",[["SMG_03C_TR_black","","","optic_Yorris",["50Rnd_570x28_SMG_03",50],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",3]]],["V_mas_nor_PlateCarrier1_rgr",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_GreenSignal_F",1,6],["6Rnd_RedSignal_F",2,6]]],[],"rhsusf_hgu56p_visor_green","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Multicam - Rifleman",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["rhs_weap_m72a7","","","",[],[],""],[],["U_mas_nor_B_CombatUniform_S_multi",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["ACE_EntrenchingTool",1],["SmokeShellBlue",2,1]]],["V_mas_nor_PlateCarrier1_rgr",[["HandGrenade",2,1],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["hlc_30rnd_556x45_SPR_PMAG",11,30]]],["B_mas_nor_Kitbag_m",[["2BNB_Berret",1]]],"H_mas_nor_ach","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	//-------------------------------------------------------------------------------
};

if (_climate isEqualTo "woodland" || _climate isEqualTo "all") then {
	["Woodland default loadouts added", "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
	//-------------------------- 2BNB Woodland Kits ------------------------------------
	["2BNB Woodland - Anti-Tank",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["launch_MRAWS_olive_F","","","",["MRAWS_HEAT_F",1],[],""],[],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",7],["ACE_tourniquet",4],["ACE_epinephrine",6],["ACE_EarPlugs",2],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_tan",[["ACE_EntrenchingTool",1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["Chemlight_green",2,1],["HandGrenade",2,1],["hlc_30rnd_556x45_SPR_PMAG",9,30]]],["B_mas_nor_Kitbag_d",[["2BNB_Berret",1],["MRAWS_HEAT_F",3,1],["MRAWS_HE_F",1,1]]],"H_mas_nor_ach_aor2","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Blank",[[],[],[],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],[],[],"2BNB_Berret","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Crew",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",12],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",8],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_tan",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_RedSignal_F",2,6],["6Rnd_GreenSignal_F",1,6],["hlc_30rnd_556x45_SPR_PMAG",6,30]]],[],"H_HelmetCrew_I","",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Engineer/EOD",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["rhs_weap_m72a7","","","",[],[],""],["ACE_VMM3","","","",[],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_SpraypaintBlue",1],["ACE_SpraypaintRed",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["ACE_DefusalKit",1],["ACE_M26_Clacker",1],["HandGrenade",2,1],["SmokeShell",3,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["hlc_30rnd_556x45_SPR_PMAG",8,30]]],["B_mas_nor_Kitbag_d",[["ToolKit",1],["ACE_wirecutter",1],["2BNB_Berret",1],["ACE_M14",2,1],["rhsusf_m112_mag",4,1],["rhsusf_m112x4_mag",1,1]]],"H_mas_nor_ach_aor2","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - IC/2IC",[["hlc_rifle_416D145_gl","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],["rhs_mag_M441_HE",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_tourniquet",4],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_packingBandage",20],["ACE_MapTools",1],["ACE_IR_Strobe_Item",2],["ACE_morphine",6],["ACE_CableTie",5],["ACE_Flashlight_MX991",1],["ACE_adenosine",1]]],["V_mas_nor_PlateCarrier1_tan",[["HandGrenade",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",6,1],["SmokeShellRed",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["hlc_30rnd_556x45_SPR_PMAG",9,30]]],["tfw_ilbe_DD_coy",[["ACE_HuntIR_monitor",1],["2BNB_Berret",1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["Chemlight_green",2,1],["ACE_HuntIR_M203",5,1],["rhs_mag_M397_HET",3,1],["rhs_mag_M433_HEDP",10,1],["rhs_mag_M441_HE",10,1]]],"H_mas_nor_ach_aor2","",["Laserdesignator","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - LMG 5.56",[["rhs_weap_m249_pip_L","","","",["rhsusf_200rnd_556x45_mixed_box",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["rhsusf_200rnd_556x45_mixed_box",4,200]]],["B_mas_nor_Kitbag_d",[["2BNB_Berret",1],["ACE_SpareBarrel",1,1],["rhsusf_200rnd_556x45_mixed_box",3,200],["HandGrenade",2,1]]],"H_mas_nor_ach_aor2","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - LMG 7.62",[["rhs_weap_m240B","","","",["rhsusf_100Rnd_762x51_m80a1epr",100],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["HandGrenade",2,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",5,1],["rhsusf_100Rnd_762x51_m61_ap",2,100],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],["B_mas_nor_Kitbag_d",[["2BNB_Berret",1],["ACE_SpareBarrel",1,1],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],"H_mas_nor_ach_aor2","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Marksman",[["srifle_DMR_06_olive_F","muzzle_snds_B","","rhsusf_acc_su230_mrds",["ACE_20Rnd_762x51_Mk319_Mod_0_Mag",20],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",4],["ACE_elasticBandage",10],["ACE_CableTie",5],["ACE_EarPlugs",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_epinephrine",4],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_EntrenchingTool",1],["ACE_adenosine",1],["SmokeShellBlue",1,1],["Chemlight_green",2,1]]],["V_mas_nor_PlateCarrierLR_tan",[["HandGrenade",1,1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["ACE_20Rnd_762x51_M993_AP_Mag",4,20],["ACE_20Rnd_762x51_Mk319_Mod_0_Mag",7,20],["ACE_20Rnd_762x51_Mag_SD",3,20]]],[],"H_mas_nor_ach_aor2","",["Rangefinder","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Medic",[["hlc_rifle_416D10C","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_elasticBandage",5],["ACE_packingBandage",5],["ACE_salineIV_500",4],["ACE_salineIV",1],["ACE_epinephrine",1],["ACE_morphine",1],["HandGrenade",1,1],["SmokeShell",10,1],["SmokeShellGreen",3,1],["hlc_30rnd_556x45_SPR_PMAG",7,30]]],["B_mas_nor_Kitbag_d",[["ACE_surgicalKit",1],["ACE_salineIV_250",4],["ACE_salineIV_500",11],["ACE_salineIV",4],["ACE_elasticBandage",45],["ACE_packingBandage",45],["ACE_quikclot",25],["ACE_tourniquet",2],["ACE_morphine",10],["ACE_epinephrine",10],["ACE_adenosine",10],["2BNB_Berret",1],["SmokeShellBlue",2,1]]],"H_mas_nor_ach_aor2","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Pilot",[["SMG_03C_TR_black","","","optic_Yorris",["50Rnd_570x28_SMG_03",50],[],""],[],["hgun_Pistol_Signal_F","","","",["6Rnd_GreenSignal_F",6],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_adenosine",3]]],["V_mas_nor_PlateCarrier1_tan",[["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["6Rnd_GreenSignal_F",1,6],["6Rnd_RedSignal_F",2,6]]],[],"rhsusf_hgu56p_visor","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Rifleman",[["hlc_rifle_416D145","","","rhsusf_acc_eotech_552",["hlc_30rnd_556x45_SPR_PMAG",30],[],""],["rhs_weap_m72a7","","","",[],[],""],[],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",20],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",10],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_adenosine",1],["ACE_EntrenchingTool",1],["SmokeShellBlue",2,1]]],["V_mas_nor_PlateCarrier1_tan",[["HandGrenade",2,1],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["hlc_30rnd_556x45_SPR_PMAG",11,30]]],["B_mas_nor_Kitbag_d",[["2BNB_Berret",1]]],"H_mas_nor_ach_aor2","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	//-------------------------------------------------------------------------------
};

player addEventHandler ["Killed", {
	params ["_player"];

	private _curator = objNull;
	private _curators = [];
	{
		_curator = getAssignedCuratorUnit _x;
		if !(_curator isEqualTo objNull) then {
			_curators pushBack _curator;
		};
	} foreach allCurators;

	[format["%1 just died!", name _player]] remoteExec ["Ares_fnc_ShowZeusMessage", _curators];
	_player setVariable ["bnb_e_diedAt", serverTime];
	[format["%1 died at: %2", name _player, _player getVariable "bnb_e_diedAt"], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
}];

player addEventHandler ["Respawn", {
	params ["_player", "_corpse"];
	[format["%1 respawned at: %2. Died at: %3", name _player, serverTime, _player getVariable "bnb_e_diedAt"], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
}];

// Pass magazine keybinding
[
	"2BNB",
	"bnb_e_passMagazine",
	["Pass magazine", "Pass a magazine to the person you're looking at"],
	{
		private _target = cursorTarget;
		if (
			_target isKindOf "CAManBase"
			&& {[ACE_player, _target, primaryWeapon ACE_player] call ace_interaction_fnc_canPassMagazine}
			&& ACE_player distance _target < 4
		) then {
			[format["%1 passed a magazine", name ACE_player], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
			[ACE_player, _target, primaryWeapon ACE_player] call ace_interaction_fnc_passMagazine;
			playSound "ace_overheating_fixing_pistol";
			hint "Magazine passed!";
		};
	},
	''
] call CBA_fnc_addKeybind;


/**
 * Interact with civilians using gestures
 *
 * Possible gestures:
 * - Freeze:		`ace_gestures_Freeze`
 * - Cover:			`ace_gestures_Cover`
 * - Forward:		`ace_gestures_Forward`
 * - Regroup:		`ace_gestures_Regroup`
 * - Engage:		`ace_gestures_Engage`
 * - Point:			`ace_gestures_Point`
 * - Hold:			`ace_gestures_Hold`
 * - Warning:		`ace_gestures_Warning`
 *
 * - Go:			`gestureGo`
 * - Advance:		`gestureAdvance`
 * - Follow:		`gestureFollow`
 * - Up:			`gestureUp`
 * - Stop:			`gestureFreeze`
 * - Cease Fire:	`gestureCeaseFire`
 *
 * All gestures with `ace_gestures_[x]` have a second stance
 * `ace_gestures_[x]StandLowered` for when the player is standing with a
 * lowered weapon, or without one!
 */
["ace_common_playActionNow", {
	params ["_player", "_gesture"];

	// If it's not a player, don't do anything
	if !(isPlayer _player) exitWith {};

	// The percentage chance a civilian will listen
	private _chance = [0.5, 0.8] select (count weapons _player > 0);
	private _acceptedGestures = [];

// Commands affecting units within angle sector

	// Stop!
	_acceptedGestures = [
		"gestureFreeze",
		"ace_gestures_Hold",
		"ace_gestures_HoldStandLowered",
		"ace_gestures_Freeze",
		"ace_gestures_FreezeStandLowered"
	];

	if ({_x == _gesture} count _acceptedGestures > 0) then {
		{
			if !(_x isEqualTo _player) then {
				if (count weapons _x == 0 && {random 1 < _chance}) then {
					if ([position _player, getDir _player, 30, position _x] call BIS_fnc_inAngleSector) then {
						if (vehicle _x == _x) then {
							// In case unit is following someone
							_x setVariable ["bnb_e_following", nil, true];

							[format["%1 told %2 to stop with a %3 gesture", _player, _x, _gesture], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
							doStop _x;
							false;
						} else {
							[format["%1 detected %2 in a vehicle for stop gesture", _player, _x, _gesture], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
							if (effectiveCommander (vehicle _x) isEqualTo _x) then {
								// In case unit is following someone
								_x setVariable ["bnb_e_following", nil, true];

								[format["%1 told %2 to stop with a %3 gesture", _player, _x, _gesture], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
								doStop _x;
								false;
							};
						};
					};
				};
			};
		} count ((entities [["Man"], [], true, true]) inAreaArray [position _player, 50, 50]);
	};

	// Go away!
	_acceptedGestures = [
		"gestureGo",
		"gestureAdvance",
		"ace_gestures_Forward",
		"ace_gestures_ForwardStandLowered",
		"ace_gestures_Engage",
		"ace_gestures_EngageStandLowered"
	];

	if ({_x == _gesture} count _acceptedGestures > 0) then {
		// Source: https://github.com/acemod/ACE3/blob/master/addons/interaction/functions/fnc_sendAway.sqf
		// Extracted from source to avoid an infinite loop caused by line 23 in source
		{
			if (count weapons _x == 0 && {random 1 < _chance}) then {
				if ([position _player, getDir _player, 40, position _x] call BIS_fnc_inAngleSector) then {
					[format["%1 told %2 to go away with a %3 gesture", _player, _x, _gesture], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
					// In case unit is following someone
					_x setVariable ["bnb_e_following", nil, true];

					private _position = getPosASL _player vectorAdd (eyeDirection _player vectorMultiply 50);
					_position set [2, 0];

					["ace_interaction_sendAway", [_x, _position], [_x]] call CBA_fnc_targetEvent;
				};
			};
			false;
		} count (_player nearEntities ["Man", 10]);
	};

// Commands affecting units only under cursor
	private _target = cursorTarget;
	if !(_target isKindOf "Man") exitWith {};

	// Follow!
	_acceptedGestures = ["gestureFollow"];

	if ({_x == _gesture} count _acceptedGestures > 0 && _player distance _target < 10) then {

		if (count weapons _target == 0 && {random 1 < _chance}) then {
		[format["%1 told %2 to follow using a %3 gesture", _player, _target, _gesture], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;

			private _following = [_target, _player] spawn {
				params ["_target", "_player"];
				_target setVariable ["bnb_e_following", _player, true];

				[format["%1 about to move to %2 (%3)", _target, _player, _target getVariable ["bnb_e_following", "nothing"]], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
				private _playerPosition = [];
				private _index = 0;

				while {(_target getVariable ["bnb_e_following", false]) isEqualTo _player} do {
					if (_index > 30) exitWith {
						_target setVariable ["bnb_e_following", nil, true];
					};

					if !(_playerPosition isEqualTo (getPosASL _player)) then {
						[format["%1 moving", _target], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
						_target doMove (getPosASL _player vectorDiff (vectorDir _player vectorMultiply 4));
						_playerPosition = getPosASL _player;
					};

					sleep 2;
					_index = 1 + _index;
				};
			};

		};
	};


	// Hi there!
	_acceptedGestures = [
		"ace_gestures_Cover",
		"ace_gestures_CoverStandLowered",
		"ace_gestures_Warning",
		"ace_gestures_WarningStandLowered"
	];

	if ({_x == _gesture} count _acceptedGestures > 0) then {
		if (
			[position _target, getDir _target, 120, position _player] call BIS_fnc_inAngleSector
			&& ((side group _target) getFriend (side group _player)) > 0.6 // Is friendly-ish?
		) then {
			[format["%1 waved at %2 with a %3 gesture", _player, _target, _gesture], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
			[_target, _player] spawn {
				_target = _this select 0;
				sleep 1;
				[_target, "ace_gestures_WarningStandLowered"] call ace_common_fnc_doGesture;
			};
		};
	};
}] call CBA_fnc_addEventHandler;
