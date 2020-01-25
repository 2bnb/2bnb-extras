[format["Current climate: %1", missionNamespace getVariable (format["bnb_e_climate_%1", worldName])], "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
private _climate = missionNamespace getVariable [format["bnb_e_climate_%1", worldName], "all"];

if (_climate isEqualTo "arctic" || _climate isEqualTo "all") then {
	["Arctic default loadouts added", "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
	//-------------------------- 2BNB Arctic Kits ------------------------------------
	["2BNB Arctic - Anti-Tank",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["SAW_W_MAAWS1","","","",["MRAWS_HEAT_F",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",15],["ACE_morphine",7],["ACE_tourniquet",4],["ACE_epinephrine",6],["ACE_EarPlugs",2],["ACE_CableTie",5],["ACE_elasticBandage",14],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrier1_wint",[["ACE_EntrenchingTool",1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["HandGrenade",2,1],["ACE_30Rnd_556x45_Stanag_Mk262_mag",3,30],["SmokeShellBlue",2,1]]],["UK3CB_BAF_B_Kitbag_Arctic",[["MRAWS_HEAT_F",3,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Blank",[[],[],[],["U_mas_nor_B_CombatUniform_wint",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],[],[],"H_mas_nor_beanie_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Crew",[["rhs_weap_hk416d10","","","",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],["V_mas_nor_PlateCarrier1_wint",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30],["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1]]],[],"H_HelmetCrew_I","G_mas_nor_Bandanna_W",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Engineer/EOD",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552X",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["rhs_weap_m72a7","","","",[],[],""],["ACE_VMH3","","","",[],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_SpraypaintBlue",1],["ACE_SpraypaintRed",1]]],["V_mas_nor_PlateCarrierAR_wint",[["ACE_EntrenchingTool",1],["ACE_DefusalKit",1],["ACE_Clacker",1],["ACE_M26_Clacker",1],["HandGrenade",2,1],["SmokeShell",3,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30],["SmokeShellBlue",2,1]]],["UK3CB_BAF_B_Kitbag_Arctic",[["ToolKit",1],["ACE_wirecutter",1],["ClaymoreDirectionalMine_Remote_Mag",2,1],["DemoCharge_Remote_Mag",4,1],["ACE_M14",2,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - IC/2IC",[["rhs_weap_hk416d145_m320","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],["1Rnd_HE_Grenade_shell",1],""],[],[],["U_mas_nor_B_CombatUniform_wint2",[["ACE_tourniquet",4],["ACE_elasticBandage",11],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_packingBandage",15],["ACE_MapTools",1],["ACE_IR_Strobe_Item",2],["ACE_morphine",6],["ACE_CableTie",5],["ACE_Flashlight_MX991",1]]],["V_mas_nor_PlateCarrier1_wint",[["ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30],["HandGrenade",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",6,1],["SmokeShellRed",2,1],["SmokeShellOrange",2,1]]],["UK3CB_BAF_B_Bergen_Arctic_SL_A",[["ACE_EntrenchingTool",1],["ACE_HuntIR_monitor",1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["Chemlight_green",2,1],["ACE_HuntIR_M203",5,1],["1Rnd_HE_Grenade_shell",9,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",["ACE_VectorDay","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - LMG 5.56",[["rhs_weap_m249_pip_L","","","",["rhsusf_200rnd_556x45_mixed_box",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",12],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",12],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_wint",[["ACE_EntrenchingTool",1],["rhsusf_200rnd_556x45_mixed_box",5,200],["HandGrenade",2,1]]],["UK3CB_BAF_B_Kitbag_Arctic",[["rhsusf_200rnd_556x45_mixed_box",2,200],["ACE_SpareBarrel",1,1],["SmokeShell",4,1],["HandGrenade",1,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - LMG 7.62",[["rhs_weap_m240B","","","",["rhsusf_100Rnd_762x51_m80a1epr",100],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",12],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",12],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_wint",[["ACE_EntrenchingTool",1],["HandGrenade",2,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",5,1],["rhsusf_100Rnd_762x51_m61_ap",2,100],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],["UK3CB_BAF_B_Kitbag_Arctic",[["ACE_SpareBarrel",1,1],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Marksman",[["rhs_weap_sr25","rhsusf_acc_SR25S","UK3CB_BAF_LLM_Flashlight_Black","rhsusf_acc_ACOG_MDO",["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",15],["ACE_morphine",4],["ACE_elasticBandage",15],["ACE_CableTie",5],["ACE_EarPlugs",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_epinephrine",4],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_RangeCard",1],["ACE_EntrenchingTool",1],["ACE_M26_Clacker",1],["SmokeShellBlue",1,1],["Chemlight_green",2,1]]],["V_mas_nor_PlateCarrierLR_wint",[["HandGrenade",1,1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",10,20]]],[],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",["ACE_Vector","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Medic",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_wint",[["ACE_elasticBandage",5],["ACE_packingBandage",5],["ACE_salineIV_500",4],["ACE_salineIV",1],["ACE_epinephrine",1],["ACE_morphine",1],["HandGrenade",1,1],["SmokeShell",10,1],["SmokeShellGreen",3,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",6,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30]]],["UK3CB_BAF_B_Kitbag_Arctic",[["ACE_surgicalKit",1],["ACE_salineIV_250",4],["ACE_salineIV_500",11],["ACE_salineIV",4],["ACE_elasticBandage",30],["ACE_packingBandage",30],["ACE_quikclot",25],["ACE_fieldDressing",15],["ACE_tourniquet",2],["ACE_morphine",10],["ACE_epinephrine",10],["SmokeShellBlue",2,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Pilot",[["rhs_weap_hk416d10","","","",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrier1_wint",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30],["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1]]],[],"rhsusf_hgu56p_visor_white","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Arctic - Rifleman",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["rhs_weap_m72a7","","","",[],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_wint2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrier1_wint",[["HandGrenade",2,1],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30]]],["UK3CB_BAF_B_Kitbag_Arctic",[["ACE_EntrenchingTool",1],["ACE_wirecutter",1],["SmokeShellBlue",2,1]]],"H_mas_nor_opscore_w","G_mas_nor_Bandanna_W",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	//-------------------------------------------------------------------------------
};

if (_climate isEqualTo "desert" || _climate isEqualTo "all") then {
	["Desert default loadouts added", "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
	//------------------------- 2BNB Desert Kits --------------------------------------
	["2BNB Desert - Anti-Tank",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["launch_MRAWS_sand_F","","","",["MRAWS_HEAT_F",1],[],""],[],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",15],["ACE_morphine",7],["ACE_tourniquet",4],["ACE_epinephrine",6],["ACE_EarPlugs",2],["ACE_CableTie",5],["ACE_elasticBandage",14],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_Flashlight_MX991",1]]],["V_mas_nor_PlateCarrier1_tan",[["ACE_EntrenchingTool",1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["HandGrenade",2,1],["ACE_30Rnd_556x45_Stanag_Mk262_mag",3,30],["SmokeShellBlue",2,1]]],["B_mas_nor_Kitbag_d",[["MRAWS_HEAT_F",3,1]]],"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Blank",[[],[],[],["U_mas_nor_B_CombatUniform_aor1",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],[],[],"H_mas_nor_Booniehat_aor1","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Crew",[["rhs_weap_hk416d10","","","",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],[],[],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],["V_mas_nor_PlateCarrier1_tan",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30],["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1]]],[],"H_HelmetCrew_I","VSM_Thermal",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Engineer/EOD",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["rhs_weap_m72a7","","","",[],[],""],["ACE_VMH3","","","",[],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_SpraypaintBlue",1],["ACE_SpraypaintRed",1]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["ACE_DefusalKit",1],["ACE_Clacker",1],["ACE_M26_Clacker",1],["HandGrenade",2,1],["SmokeShell",3,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30],["SmokeShellBlue",2,1]]],["B_mas_nor_Kitbag_d",[["ToolKit",1],["ACE_wirecutter",1],["ClaymoreDirectionalMine_Remote_Mag",2,1],["DemoCharge_Remote_Mag",4,1],["ACE_M14",2,1]]],"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - IC/2IC",[["rhs_weap_hk416d145_m320","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_tourniquet",4],["ACE_elasticBandage",11],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_packingBandage",15],["ACE_MapTools",1],["ACE_IR_Strobe_Item",2],["ACE_morphine",6],["ACE_CableTie",5],["ACE_Flashlight_MX991",1]]],["V_mas_nor_PlateCarrier1_tan",[["ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30],["HandGrenade",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",6,1],["SmokeShellRed",2,1],["SmokeShellOrange",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["tfw_ilbe_dd_coy",[["ACE_EntrenchingTool",1],["ACE_HuntIR_monitor",1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["Chemlight_green",2,1],["ACE_HuntIR_M203",5,1],["1Rnd_HE_Grenade_shell",9,1]]],"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",["Laserdesignator","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - LMG 5.56",[["rhs_weap_m249_pip_L","","","",["rhsusf_200rnd_556x45_mixed_box",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",12],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",12],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["rhsusf_200rnd_556x45_mixed_box",4,200]]],["B_mas_nor_Kitbag_d",[["ACE_SpareBarrel",1,1],["rhsusf_200rnd_556x45_mixed_box",3,200],["HandGrenade",2,1]]],"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - LMG 7.62",[["rhs_weap_m240B","","","",["rhsusf_100Rnd_762x51_m80a1epr",100],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",12],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",12],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["HandGrenade",2,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",5,1],["rhsusf_100Rnd_762x51_m61_ap",2,100],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],["B_mas_nor_Kitbag_d",[["ACE_SpareBarrel",1,1],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Marksman",[["rhs_weap_sr25","rhsusf_acc_SR25S","UK3CB_BAF_LLM_Flashlight_Black","rhsusf_acc_ACOG_MDO",["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",15],["ACE_morphine",4],["ACE_elasticBandage",15],["ACE_CableTie",5],["ACE_EarPlugs",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_epinephrine",4],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_RangeCard",1],["ACE_EntrenchingTool",1],["ACE_M26_Clacker",1],["SmokeShellBlue",1,1],["Chemlight_green",2,1]]],["V_mas_nor_PlateCarrierLR_tan",[["HandGrenade",1,1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",10,20]]],[],"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",["ACE_Vector","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Medic",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_elasticBandage",5],["ACE_packingBandage",5],["ACE_salineIV_500",4],["ACE_salineIV",1],["ACE_epinephrine",1],["ACE_morphine",1],["HandGrenade",1,1],["SmokeShell",10,1],["SmokeShellGreen",3,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",6,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30]]],["B_mas_nor_Kitbag_d",[["ACE_surgicalKit",1],["ACE_salineIV_250",4],["ACE_salineIV_500",11],["ACE_salineIV",4],["ACE_elasticBandage",30],["ACE_packingBandage",30],["ACE_quikclot",25],["ACE_fieldDressing",15],["ACE_tourniquet",2],["ACE_morphine",10],["ACE_epinephrine",10],["SmokeShellBlue",2,1]]],"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Pilot",[["rhs_weap_hk416d10","","","",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],["V_mas_nor_PlateCarrier1_tan",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30],["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],[],"rhsusf_hgu56p_visor_green","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Desert - Rifleman",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["rhs_weap_m72a7","","","",[],[],""],[],["U_mas_nor_B_CombatUniform_S_aor1",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1]]],["V_mas_nor_PlateCarrier1_tan",[["HandGrenade",2,1],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30]]],["B_mas_nor_Kitbag_d",[["ACE_EntrenchingTool",1],["ACE_wirecutter",1],["SmokeShellBlue",2,1]]],"H_mas_nor_ach_aor1","VSM_Shemagh_Balaclava2_tan_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	//-------------------------------------------------------------------------------
};

if (_climate isEqualTo "woodland" || _climate isEqualTo "all") then {
	["Woodland default loadouts added", "core\XEH_postInit.sqf"] call bnb_e_core_fnc_log;
	//-------------------------- 2BNB Woodland Kits ------------------------------------
	["2BNB Woodland - Anti-Tank",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["launch_MRAWS_olive_F","","","",["MRAWS_HEAT_F",1],[],""],[],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",15],["ACE_morphine",7],["ACE_tourniquet",4],["ACE_epinephrine",6],["ACE_EarPlugs",2],["ACE_CableTie",5],["ACE_elasticBandage",14],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_Flashlight_MX991",1]]],["V_mas_nor_PlateCarrier1_tan",[["ACE_EntrenchingTool",1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["HandGrenade",2,1],["ACE_30Rnd_556x45_Stanag_Mk262_mag",3,30],["SmokeShellBlue",2,1]]],["B_mas_nor_Kitbag_d",[["MRAWS_HEAT_F",3,1]]],"H_mas_nor_ach_aor2","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Blank",[[],[],[],["U_mas_nor_B_CombatUniform_aor2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],[],[],"H_mas_nor_Booniehat_aor2","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Crew",[["rhs_weap_hk416d10","","","",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],[],[],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],["V_mas_nor_PlateCarrier1_tan",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30],["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1]]],[],"H_HelmetCrew_I","VSM_Thermal",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Engineer/EOD",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["rhs_weap_m72a7","","","",[],[],""],["ACE_VMH3","","","",[],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["ACE_SpraypaintBlue",1],["ACE_SpraypaintRed",1]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["ACE_DefusalKit",1],["ACE_Clacker",1],["ACE_M26_Clacker",1],["HandGrenade",2,1],["SmokeShell",3,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30],["SmokeShellBlue",2,1]]],["B_mas_nor_Kitbag_d",[["ToolKit",1],["ACE_wirecutter",1],["ClaymoreDirectionalMine_Remote_Mag",2,1],["DemoCharge_Remote_Mag",4,1],["ACE_M14",2,1]]],"H_mas_nor_ach_aor2","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - IC/2IC",[["rhs_weap_hk416d145_m320","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_tourniquet",4],["ACE_elasticBandage",11],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_packingBandage",15],["ACE_MapTools",1],["ACE_IR_Strobe_Item",2],["ACE_morphine",6],["ACE_CableTie",5],["ACE_Flashlight_MX991",1]]],["V_mas_nor_PlateCarrier1_tan",[["ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30],["HandGrenade",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",6,1],["SmokeShellRed",2,1],["SmokeShellOrange",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["tfw_ilbe_dd_coy",[["ACE_EntrenchingTool",1],["ACE_HuntIR_monitor",1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",5,1],["Chemlight_green",2,1],["ACE_HuntIR_M203",5,1],["1Rnd_HE_Grenade_shell",9,1]]],"H_mas_nor_ach_aor2","VSM_Shemagh_Balaclava2_OD_Goggles",["Laserdesignator","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - LMG 5.56",[["rhs_weap_m249_pip_L","","","",["rhsusf_200rnd_556x45_mixed_box",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",12],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",12],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["rhsusf_200rnd_556x45_mixed_box",4,200]]],["B_mas_nor_Kitbag_d",[["ACE_SpareBarrel",1,1],["rhsusf_200rnd_556x45_mixed_box",3,200],["HandGrenade",2,1]]],"H_mas_nor_ach_aor2","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - LMG 7.62",[["rhs_weap_m240B","","","",["rhsusf_100Rnd_762x51_m80a1epr",100],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",12],["ACE_morphine",6],["ACE_CableTie",5],["ACE_elasticBandage",12],["ACE_EarPlugs",1],["ACE_epinephrine",4],["ACE_IR_Strobe_Item",2],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_EntrenchingTool",1],["HandGrenade",2,1],["Chemlight_green",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",3,1],["SmokeShell",5,1],["rhsusf_100Rnd_762x51_m61_ap",2,100],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],["B_mas_nor_Kitbag_d",[["ACE_SpareBarrel",1,1],["rhsusf_100Rnd_762x51_m80a1epr",2,100]]],"H_mas_nor_ach_aor2","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Marksman",[["rhs_weap_sr25","rhsusf_acc_SR25S","UK3CB_BAF_LLM_Flashlight_Black","rhsusf_acc_ACOG_MDO",["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",15],["ACE_morphine",4],["ACE_elasticBandage",15],["ACE_CableTie",5],["ACE_EarPlugs",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_epinephrine",4],["ACE_tourniquet",4],["ACE_Flashlight_MX991",1],["ACE_RangeCard",1],["ACE_EntrenchingTool",1],["ACE_M26_Clacker",1],["SmokeShellBlue",1,1],["Chemlight_green",2,1]]],["V_mas_nor_PlateCarrierLR_tan",[["HandGrenade",1,1],["SmokeShell",5,1],["SmokeShellGreen",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17],["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",10,20]]],[],"H_mas_nor_ach_aor2","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",["ACE_Vector","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Medic",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],["V_mas_nor_PlateCarrierAR_tan",[["ACE_elasticBandage",5],["ACE_packingBandage",5],["ACE_salineIV_500",4],["ACE_salineIV",1],["ACE_epinephrine",1],["ACE_morphine",1],["HandGrenade",1,1],["SmokeShell",10,1],["SmokeShellGreen",3,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",6,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",5,30]]],["B_mas_nor_Kitbag_d",[["ACE_surgicalKit",1],["ACE_salineIV_250",4],["ACE_salineIV_500",11],["ACE_salineIV",4],["ACE_elasticBandage",30],["ACE_packingBandage",30],["ACE_quikclot",25],["ACE_fieldDressing",15],["ACE_tourniquet",2],["ACE_morphine",10],["ACE_epinephrine",10],["SmokeShellBlue",2,1]]],"H_mas_nor_ach_aor2","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Pilot",[["rhs_weap_hk416d10","","","",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],["V_mas_nor_PlateCarrier1_tan",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30],["SmokeShellRed",1,1],["SmokeShellGreen",1,1],["SmokeShell",2,1],["rhsusf_mag_17Rnd_9x19_FMJ",2,17]]],[],"rhsusf_hgu56p_visor","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	["2BNB Woodland - Rifleman",[["rhs_weap_hk416d145","","","RKSL_optic_EOT552",["ACE_30Rnd_556x45_Stanag_Mk318_mag",30],[],""],["rhs_weap_m72a7","","","",[],[],""],[],["U_mas_nor_B_CombatUniform_S_aor2",[["ACE_packingBandage",13],["ACE_morphine",6],["ACE_tourniquet",4],["ACE_IR_Strobe_Item",2],["ACE_epinephrine",4],["ACE_EarPlugs",1],["ACE_CableTie",5],["ACE_elasticBandage",13],["ACE_MapTools",1],["ACE_Flashlight_MX991",1]]],["V_mas_nor_PlateCarrier1_tan",[["HandGrenade",2,1],["SmokeShell",5,1],["SmokeShellGreen",3,1],["Chemlight_green",2,1],["ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30],["ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30]]],["B_mas_nor_Kitbag_d",[["ACE_EntrenchingTool",1],["ACE_wirecutter",1],["SmokeShellBlue",2,1]]],"H_mas_nor_ach_aor2","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]] call ace_arsenal_fnc_addDefaultLoadout;
	//-------------------------------------------------------------------------------
};

player addEventHandler ["Killed", {
	params ["_unit"];
	private _curators = allCurators apply {getAssignedCuratorUnit _x};

	[format["%1 just died!", name _unit]] remoteExec ["Ares_fnc_ShowZeusMessage", _curators];
	_unit setVariable ["bnb_e_diedAt", serverTime];
}];
