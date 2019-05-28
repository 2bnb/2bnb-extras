class CBA_Extended_EventHandlers_base;

class CfgVehicles {

	class B_Soldier_F;
	class B_Soldier_F_OCimport_01 : B_Soldier_F { scope = 0; class EventHandlers; };
	class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 { class EventHandlers; };

	class UK3CB_BAF_Jackal2_L2A1_W_Tropical;
	class UK3CB_BAF_Jackal2_L2A1_W_Tropical_OCimport_01 : UK3CB_BAF_Jackal2_L2A1_W_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Jackal2_L2A1_W_Tropical_OCimport_02 : UK3CB_BAF_Jackal2_L2A1_W_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class L111A1_MainTurret;
			class L7A2_1_Turret;
			class Right_Passenger_Cabin;
			class Left_Passenger_Cabin;
		};
	};

	class UK3CB_BAF_LandRover_Hard_FFR_Green_B_Tropical;
	class UK3CB_BAF_LandRover_Hard_FFR_Green_B_Tropical_OCimport_01 : UK3CB_BAF_LandRover_Hard_FFR_Green_B_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_LandRover_Hard_FFR_Green_B_Tropical_OCimport_02 : UK3CB_BAF_LandRover_Hard_FFR_Green_B_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class Passenger_Turret;
		};
	};

	class UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_B_Tropical;
	class UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_B_Tropical_OCimport_01 : UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_B_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_B_Tropical_OCimport_02 : UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_B_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class GPMG_Turret;
			class HMG_Turret;
		};
	};

	class UK3CB_BAF_MAN_HX60_Fuel_Green_Tropical;
	class UK3CB_BAF_MAN_HX60_Fuel_Green_Tropical_OCimport_01 : UK3CB_BAF_MAN_HX60_Fuel_Green_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_MAN_HX60_Fuel_Green_Tropical_OCimport_02 : UK3CB_BAF_MAN_HX60_Fuel_Green_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class TopCover_Turret;
		};
	};

	class UK3CB_BAF_MAN_HX60_Repair_Green_Tropical;
	class UK3CB_BAF_MAN_HX60_Repair_Green_Tropical_OCimport_01 : UK3CB_BAF_MAN_HX60_Repair_Green_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_MAN_HX60_Repair_Green_Tropical_OCimport_02 : UK3CB_BAF_MAN_HX60_Repair_Green_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class TopCover_Turret;
		};
	};

	class UK3CB_BAF_MAN_HX60_Transport_Green_Tropical;
	class UK3CB_BAF_MAN_HX60_Transport_Green_Tropical_OCimport_01 : UK3CB_BAF_MAN_HX60_Transport_Green_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_MAN_HX60_Transport_Green_Tropical_OCimport_02 : UK3CB_BAF_MAN_HX60_Transport_Green_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class TopCover_Turret;
		};
	};

	class UK3CB_BAF_Panther_GPMG_Green_A_Tropical;
	class UK3CB_BAF_Panther_GPMG_Green_A_Tropical_OCimport_01 : UK3CB_BAF_Panther_GPMG_Green_A_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Panther_GPMG_Green_A_Tropical_OCimport_02 : UK3CB_BAF_Panther_GPMG_Green_A_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class Gunner_GPMG;
			class CargoTurret_01;
		};
	};

	class UK3CB_BAF_FV432_Mk3_RWS_Green_Tropical;
	class UK3CB_BAF_FV432_Mk3_RWS_Green_Tropical_OCimport_01 : UK3CB_BAF_FV432_Mk3_RWS_Green_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_FV432_Mk3_RWS_Green_Tropical_OCimport_02 : UK3CB_BAF_FV432_Mk3_RWS_Green_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class Gunner_HMGRWS;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
		};
	};

	class UK3CB_BAF_FV432_Mk3_GPMG_Green_Tropical;
	class UK3CB_BAF_FV432_Mk3_GPMG_Green_Tropical_OCimport_01 : UK3CB_BAF_FV432_Mk3_GPMG_Green_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_FV432_Mk3_GPMG_Green_Tropical_OCimport_02 : UK3CB_BAF_FV432_Mk3_GPMG_Green_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class Gunner_GPMG;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
		};
	};

	class I_MBT_03_cannon_F;
	class I_MBT_03_cannon_F_OCimport_01 : I_MBT_03_cannon_F { scope = 0; class EventHandlers; class Turrets; };
	class I_MBT_03_cannon_F_OCimport_02 : I_MBT_03_cannon_F_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class UK3CB_BAF_Wildcat_AH1_CAS_8A_Tropical;
	class UK3CB_BAF_Wildcat_AH1_CAS_8A_Tropical_OCimport_01 : UK3CB_BAF_Wildcat_AH1_CAS_8A_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Wildcat_AH1_CAS_8A_Tropical_OCimport_02 : UK3CB_BAF_Wildcat_AH1_CAS_8A_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical;
	class UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical_OCimport_01 : UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical_OCimport_02 : UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class UK3CB_BAF_Merlin_HC3_18_Tropical;
	class UK3CB_BAF_Merlin_HC3_18_Tropical_OCimport_01 : UK3CB_BAF_Merlin_HC3_18_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Merlin_HC3_18_Tropical_OCimport_02 : UK3CB_BAF_Merlin_HC3_18_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_13;
			class CargoTurret_14;
		};
	};

	class UK3CB_BAF_Chinook_HC2_Tropical;
	class UK3CB_BAF_Chinook_HC2_Tropical_OCimport_01 : UK3CB_BAF_Chinook_HC2_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Chinook_HC2_Tropical_OCimport_02 : UK3CB_BAF_Chinook_HC2_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class UK3CB_BAF_Apache_AH1_Tropical;
	class UK3CB_BAF_Apache_AH1_Tropical_OCimport_01 : UK3CB_BAF_Apache_AH1_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Apache_AH1_Tropical_OCimport_02 : UK3CB_BAF_Apache_AH1_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class UK3CB_BAF_Hercules_C4_Tropical;
	class UK3CB_BAF_Hercules_C4_Tropical_OCimport_01 : UK3CB_BAF_Hercules_C4_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Hercules_C4_Tropical_OCimport_02 : UK3CB_BAF_Hercules_C4_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
		};
	};

	class rhssaf_airforce_l_18_101;
	class rhssaf_airforce_l_18_101_OCimport_01 : rhssaf_airforce_l_18_101 { scope = 0; class EventHandlers; };
	class rhssaf_airforce_l_18_101_OCimport_02 : rhssaf_airforce_l_18_101_OCimport_01 { scope = 0; class EventHandlers; };

	class UK3CB_BAF_Static_L111A1_Deployed_High_Tropical;
	class UK3CB_BAF_Static_L111A1_Deployed_High_Tropical_OCimport_01 : UK3CB_BAF_Static_L111A1_Deployed_High_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Static_L111A1_Deployed_High_Tropical_OCimport_02 : UK3CB_BAF_Static_L111A1_Deployed_High_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class UK3CB_BAF_Static_L134A1_Deployed_High_Tropical;
	class UK3CB_BAF_Static_L134A1_Deployed_High_Tropical_OCimport_01 : UK3CB_BAF_Static_L134A1_Deployed_High_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Static_L134A1_Deployed_High_Tropical_OCimport_02 : UK3CB_BAF_Static_L134A1_Deployed_High_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class UK3CB_BAF_Static_L16_Deployed_Tropical;
	class UK3CB_BAF_Static_L16_Deployed_Tropical_OCimport_01 : UK3CB_BAF_Static_L16_Deployed_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Static_L16_Deployed_Tropical_OCimport_02 : UK3CB_BAF_Static_L16_Deployed_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class UK3CB_BAF_Static_L7A2_Deployed_High_Tropical;
	class UK3CB_BAF_Static_L7A2_Deployed_High_Tropical_OCimport_01 : UK3CB_BAF_Static_L7A2_Deployed_High_Tropical { scope = 0; class EventHandlers; class Turrets; };
	class UK3CB_BAF_Static_L7A2_Deployed_High_Tropical_OCimport_02 : UK3CB_BAF_Static_L7A2_Deployed_High_Tropical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class RHS_A10;
	class RHS_A10_OCimport_01 : RHS_A10 { scope = 0; class EventHandlers; };
	class RHS_A10_OCimport_02 : RHS_A10_OCimport_01 { scope = 0; class EventHandlers; };

	class B_NorwayArmy_Man : B_Soldier_F_OCimport_02 {
		author = "Capt. Arend";
		scope = 0;
		scopeCurator = 2;
		side = 1;

		genericNames="norwegian_names";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "NWFlagW";
	};

	//////////////
	// Woodland //
	//////////////

	// Infantry
	class B_NorwayArmy_Man_Woodland : B_NorwayArmy_Man {
		displayName = "Man";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Woodland.jpg";
		faction = "B_NorwayArmy_Woodland";
		scope = 2;

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_Beanie_Black","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_Beanie_Black","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

		weapons[] = {};
		respawnWeapons[] = {};

		magazines[] = {};
		respawnMagazines[] = {};

		ALiVE_orbatCreator_loadout[] = {{},{},{},{"VSM_M81_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{},{},"VSM_Beanie_Black","",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};
	};

	class B_NorwayArmy_Rifleman_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "Rifleman";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Woodland.jpg";

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416CUSTOMvfgB","rhs_weap_M136"};
		respawnWeapons[] = {"SMA_HK416CUSTOMvfgB","rhs_weap_M136"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};

		backpack = "VSM_M81_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",{"ACE_30Rnd_556x45_Stanag_Mk318_mag",30},{},""},{"rhs_weap_M136","","","",{},{},""},{},{"VSM_M81_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_M81",{{"HandGrenade",2,1},{"SmokeShell",5,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},{"VSM_M81_Backpack_Kitbag",{{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"SmokeShellBlue",2,1}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Rifleman_AT_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "Rifleman AT";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_AT_Woodland.jpg";
		icon = "iconManAT";

		uniformClass = "VSM_M81_Crye_SS_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416CUSTOMvfgB","launch_MRAWS_green_rail_F","ACE_VectorDay"};
		respawnWeapons[] = {"SMA_HK416CUSTOMvfgB","launch_MRAWS_green_rail_F","ACE_VectorDay"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","MRAWS_HEAT_F","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","MRAWS_HEAT_F","ACE_30Rnd_556x45_Stanag_Mk318_mag"};

		backpack = "VSM_M81_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",{"ACE_30Rnd_556x45_Stanag_Mk318_mag",30},{},""},{"launch_MRAWS_green_rail_F","","","",{"MRAWS_HEAT_F",1},{},""},{},{"VSM_M81_Crye_SS_Camo",{{"ACE_packingBandage",15},{"ACE_morphine",7},{"ACE_tourniquet",4},{"ACE_epinephrine",6},{"ACE_EarPlugs",2},{"ACE_CableTie",5},{"ACE_elasticBandage",14},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_M81",{{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30},{"SmokeShell",5,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",4,30},{"SmokeShellBlue",2,1}}},{"VSM_M81_Backpack_Kitbag",{{"MRAWS_HEAT_F",4,1},{"MRAWS_HE_F",1,1}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Engineer_EOD_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "Engineer/EOD";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Woodland.jpg";
		icon = "iconManEngineer";
		picture = "pictureRepair";

		canDeactivateMines = 1;
		engineer = 1;

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416CUSTOMvfgB","rhs_weap_M136","ACE_VMH3"};
		respawnWeapons[] = {"SMA_HK416CUSTOMvfgB","rhs_weap_M136","ACE_VMH3"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};

		backpack = "VSM_M81_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",{"ACE_30Rnd_556x45_Stanag_Mk318_mag",30},{},""},{"rhs_weap_M136","","","",{},{},""},{"ACE_VMH3","","","",{},{},""},{"VSM_M81_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_M81",{{"ACE_EntrenchingTool",1},{"ACE_DefusalKit",1},{"ACE_Clacker",1},{"ACE_M26_Clacker",1},{"HandGrenade",2,1},{"SmokeShell",3,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30},{"SmokeShellBlue",2,1}}},{"VSM_M81_Backpack_Kitbag",{{"ToolKit",1},{"ACE_wirecutter",1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",4,1},{"AMP_Breaching_Charge_Mag",2,1}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_1IC_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "1IC";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Woodland.jpg";
		icon = "iconManOfficer";

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416GL","ACE_VectorDay"};
		respawnWeapons[] = {"SMA_HK416GL","ACE_VectorDay"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag"};

		backpack = "tfw_ilbe_gr";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416GL","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552_3XDOWN",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{},""},{},{},{"VSM_M81_Camo",{{"ACE_tourniquet",4},{"ACE_elasticBandage",11},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",15},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_M81",{{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30},{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"SmokeShellOrange",2,1}}},{"tfw_ilbe_gr",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_Smoke_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",5,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",5,1},{"1Rnd_HE_Grenade_shell",9,1}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_2IC_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "2IC";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Woodland.jpg";
		icon = "iconManLeader";

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416GL","ACE_VectorDay"};
		respawnWeapons[] = {"SMA_HK416GL","ACE_VectorDay"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag"};

		backpack = "tfw_ilbe_gr";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416GL","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552_3XDOWN",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{},""},{},{},{"VSM_M81_Camo",{{"ACE_tourniquet",4},{"ACE_elasticBandage",11},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",15},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_M81",{{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30},{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"SmokeShellOrange",2,1}}},{"tfw_ilbe_gr",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_Smoke_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",5,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",5,1},{"1Rnd_HE_Grenade_shell",9,1}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Marksman_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "Marksman";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Woodland.jpg";

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK417_16in","ACE_VectorDay"};
		respawnWeapons[] = {"SMA_HK417_16in","ACE_VectorDay"};

		magazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR_IR","SMA_20Rnd_762x51mm_M80A1_EPR_IR"};
		respawnMagazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR_IR","SMA_20Rnd_762x51mm_M80A1_EPR_IR"};

		backpack = "VSM_M81_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK417_16in","SMA_supp_762","SMA_SFPEQ_HK417TOP_BLK","SMA_ELCAN_SPECTER_ARDRDS_4z",{"SMA_20Rnd_762x51mm_M80A1_EPR_IR",20},{},"bipod_01_F_blk"},{},{},{"VSM_M81_Camo",{{"ACE_packingBandage",14},{"ACE_morphine",6},{"ACE_elasticBandage",12},{"ACE_CableTie",5},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_MapTools",1},{"ACE_epinephrine",4},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1},{"ACE_RangeCard",1}}},{"VSM_FAPC_Operator_M81",{{"ACE_EntrenchingTool",1},{"SMA_20Rnd_762x51mm_M80A1_EPR_IR",7,20},{"HandGrenade",2,1},{"SmokeShell",5,1},{"SmokeShellGreen",2,1},{"20Rnd_762x51_Mag",4,20},{"SmokeShellBlue",1,1},{"Chemlight_green",2,1}}},{"VSM_M81_Backpack_Kitbag",{{"SMA_20Rnd_762x51mm_M80A1_EPR_IR",7,20},{"20Rnd_762x51_Mag",3,20}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_LMG_556_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "LMG 5.56";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Woodland.jpg";
		icon = "iconManMG";

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_MG_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_MG_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"rhs_weap_m249_pip_L","ACE_VectorDay"};
		respawnWeapons[] = {"rhs_weap_m249_pip_L","ACE_VectorDay"};

		magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};

		backpack = "VSM_M81_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},""},{},{},{"VSM_M81_Camo",{{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_MG_M81",{{"ACE_EntrenchingTool",1},{"rhsusf_200rnd_556x45_M855_mixed_box",6,200},{"HandGrenade",2,1},{"Chemlight_green",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",5,1}}},{"VSM_M81_Backpack_Kitbag",{{"rhsusf_200rnd_556x45_M855_mixed_box",2,200},{"ACE_SpareBarrel",1,1}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_LMG_762_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "LMG 7.62";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Woodland.jpg";
		icon = "iconManMG";

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_MG_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_MG_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"rhs_weap_m240B","ACE_VectorDay"};
		respawnWeapons[] = {"rhs_weap_m240B","ACE_VectorDay"};

		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};

		backpack = "VSM_M81_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m240B","","","",{"rhsusf_100Rnd_762x51_m62_tracer",100},{},""},{},{},{"VSM_M81_Camo",{{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_MG_M81",{{"ACE_EntrenchingTool",1},{"HandGrenade",2,1},{"Chemlight_green",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",5,1},{"rhsusf_100Rnd_762x51_m61_ap",2,100},{"rhsusf_100Rnd_762x51_m62_tracer",4,100}}},{"VSM_M81_Backpack_Kitbag",{{"ACE_SpareBarrel",1,1},{"rhsusf_100Rnd_762x51_m62_tracer",2,100}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Medic_Woodland : B_NorwayArmy_Man_Woodland {
		displayName = "Medic";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Woodland.jpg";
		icon = "iconManMedic";
		picture = "pictureHeal";

		attendant = 1;

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","VSM_Mich2000_2_M81","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416CUSTOMvfgB"};
		respawnWeapons[] = {"SMA_HK416CUSTOMvfgB"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};

		backpack = "VSM_M81_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",{"ACE_30Rnd_556x45_Stanag_Mk318_mag",30},{},""},{},{},{"VSM_M81_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_M81",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_salineIV_500",4},{"ACE_salineIV",1},{"ACE_epinephrine",1},{"ACE_morphine",1},{"HandGrenade",1,1},{"SmokeShell",10,1},{"SmokeShellGreen",3,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",6,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30}}},{"VSM_M81_Backpack_Kitbag",{{"ACE_surgicalKit",1},{"ACE_salineIV_250",4},{"ACE_salineIV_500",11},{"ACE_salineIV",4},{"ACE_elasticBandage",30},{"ACE_packingBandage",30},{"ACE_quikclot",25},{"ACE_fieldDressing",15},{"ACE_tourniquet",2},{"ACE_morphine",10},{"ACE_epinephrine",10},{"adv_aceCPR_AED",1},{"SmokeShellBlue",2,1}}},"VSM_Mich2000_2_M81","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Crew_Woodland : B_NorwayArmy_Man_Woodland {
		author = "Jebby";
		displayName = "Crew";

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","H_HelmetCrew_I","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","H_HelmetCrew_I","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

		weapons[] = {"SMA_HK416CUSTOMCQBafgB"};
		respawnWeapons[] = {"SMA_HK416CUSTOMCQBafgB"};

		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"};
		respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"};

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBafgB","","","",{"SMA_30Rnd_556x45_M855A1",30},{},""},{},{},{"VSM_M81_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{"VSM_FAPC_Operator_M81",{{"SMA_30Rnd_556x45_M855A1",8,30},{"UK3CB_BAF_SmokeShell",2,1},{"UK3CB_BAF_SmokeShellGreen",1,1},{"UK3CB_BAF_SmokeShellRed",1,1}}},{},"H_HelmetCrew_I","VSM_Thermal",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};
	};

	class B_NorwayArmy_Pilot_Woodland : B_NorwayArmy_Man_Woodland {
		author = "Jebby";
		displayName = "Pilot";

		uniformClass = "VSM_M81_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_M81","rhsusf_hgu56p_visor","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_M81","rhsusf_hgu56p_visor","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

		weapons[] = {"SMA_HK416CUSTOMCQBafgB"};
		respawnWeapons[] = {"SMA_HK416CUSTOMCQBafgB"};

		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"};
		respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"};

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBafgB","","","",{"SMA_30Rnd_556x45_M855A1",30},{},""},{},{},{"VSM_M81_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{"VSM_FAPC_Operator_M81",{{"SMA_30Rnd_556x45_M855A1",8,30},{"UK3CB_BAF_SmokeShell",2,1},{"UK3CB_BAF_SmokeShellGreen",1,1},{"UK3CB_BAF_SmokeShellRed",1,1}}},{},"rhsusf_hgu56p_visor","VMS_Shemagh_OD",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};
	};

	// Vehicles
	class B_NorwayArmy_Jackal_2HMG_Woodland : UK3CB_BAF_Jackal2_L2A1_W_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Jackal_2HMG_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Jackal 2 HMG Woodland";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class L111A1_MainTurret : L111A1_MainTurret { gunnerType = "B_NorwayArmy_Rifleman_Woodland"; };
			class L7A2_1_Turret : L7A2_1_Turret { gunnerType = "B_NorwayArmy_1IC_Woodland"; };
			class Right_Passenger_Cabin : Right_Passenger_Cabin { gunnerType = ""; };
			class Left_Passenger_Cabin : Left_Passenger_Cabin { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_LRover_HardTop_FFR_G_Woodland : UK3CB_BAF_LandRover_Hard_FFR_Green_B_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_LRover_HardTop_FFR_G_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Land Rover HardTop FFR (Green)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class Passenger_Turret : Passenger_Turret { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_LRover_WMIK_HMG_FFR_G_Woodland : UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_B_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_LRover_WMIK_HMG_FFR_G_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Land Rover WMIK HMG FFR (Green)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class GPMG_Turret : GPMG_Turret { gunnerType = "B_NorwayArmy_Rifleman_Woodland"; };
			class HMG_Turret : HMG_Turret { gunnerType = "B_NorwayArmy_1IC_Woodland"; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_MAN_HX60_4x4_Fuel_G_Woodland : UK3CB_BAF_MAN_HX60_Fuel_Green_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_MAN_HX60_4x4_Fuel_G_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAN HX60 4x4 Fuel (Green)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class TopCover_Turret : TopCover_Turret { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_MAN_HX60_4x4_Repair_G_Woodland : UK3CB_BAF_MAN_HX60_Repair_Green_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_MAN_HX60_4x4_Repair_G_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAN HX60 4x4 Repair (Green)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class TopCover_Turret : TopCover_Turret { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_MAN_HX60_4x4_Transport_G_Woodland : UK3CB_BAF_MAN_HX60_Transport_Green_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_MAN_HX60_4x4_Transport_G_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAN HX60 4x4 Transport (Green)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class TopCover_Turret : TopCover_Turret { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_Panther_CLV_GPMG_G_Woodland : UK3CB_BAF_Panther_GPMG_Green_A_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Panther_CLV_GPMG_G_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Panther CLV GPMG (Green)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class Gunner_GPMG : Gunner_GPMG { gunnerType = "B_NorwayArmy_Rifleman_Woodland"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_FV432_3Bulldog_HMG_RWS_G_Woodland : UK3CB_BAF_FV432_Mk3_RWS_Green_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_FV432_3Bulldog_HMG_RWS_G_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "FV432/3 Bulldog HMG-RWS (Green)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Crew_Woodland";

		class Turrets : Turrets {
			class Gunner_HMGRWS : Gunner_HMGRWS { gunnerType = "B_NorwayArmy_Crew_Woodland"; };
			class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
			class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
			class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
			class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_FV432_3Bulldog_GPMG_G_Woodland : UK3CB_BAF_FV432_Mk3_GPMG_Green_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_FV432_3Bulldog_GPMG_G_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "FV432/3 Bulldog GPMG (Green)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Crew_Woodland";

		class Turrets : Turrets {
			class Gunner_GPMG : Gunner_GPMG { gunnerType = "B_NorwayArmy_Crew_Woodland"; };
			class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
			class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
			class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
			class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_Leopard_2SG_Woodland : I_MBT_03_cannon_F_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Leopard_2SG_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Leopard 2SG";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Crew_Woodland";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "B_NorwayArmy_Crew_Woodland"; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_Wildcat_AH1_8CAS_Woodland : UK3CB_BAF_Wildcat_AH1_CAS_8A_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Wildcat_AH1_8CAS_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Wildcat AH1 8 CAS";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Pilot_Woodland";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_Wildcat_AH18_Transport_Woodland : UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Wildcat_AH18_Transport_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Wildcat AH1 8 Transport";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Pilot_Woodland";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_Merlin_HC3_18_Woodland : UK3CB_BAF_Merlin_HC3_18_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Merlin_HC3_18_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Merlin HC3 18";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Pilot_Woodland";

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
			class CargoTurret_13 : CargoTurret_13 { gunnerType = ""; };
			class CargoTurret_14 : CargoTurret_14 { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_Chinook_HC2_Woodland : UK3CB_BAF_Chinook_HC2_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Chinook_HC2_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Chinook HC2";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Pilot_Woodland";

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
			class MainTurret : MainTurret { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
			class RightDoorGun : RightDoorGun { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_Apache_AH1_Multi_Woodland : UK3CB_BAF_Apache_AH1_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Apache_AH1_Multi_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Apache AH1 Multi";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Pilot_Woodland";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_Hercules_C4_Woodland : UK3CB_BAF_Hercules_C4_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_Hercules_C4_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Hercules C4";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Pilot_Woodland";

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "B_NorwayArmy_Pilot_Woodland"; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorB_NorwayArmy_L18_101_CAP_Woodland : rhssaf_airforce_l_18_101_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorB_NorwayArmy_L18_101_CAP_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "L-18 (101/CAP)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Pilot_Woodland";


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class B_NorwayArmy_L111A1_H_Woodland : UK3CB_BAF_Static_L111A1_Deployed_High_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_L111A1_H_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "L111A1 (High)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_L134A1_High_Woodland : UK3CB_BAF_Static_L134A1_Deployed_High_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_L134A1_High_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "L134A1 (High)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_L16_Woodland : UK3CB_BAF_Static_L16_Deployed_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_L16_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "L16";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class B_NorwayArmy_L7A2_High_Woodland : UK3CB_BAF_Static_L7A2_Deployed_High_Tropical_OCimport_02 {
		editorPreview = "\x\addons\bnorway2bnb\data\preview\B_NorwayArmy_L7A2_High_Woodland.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "L7A2 (High)";
		side = 1;
		faction = "B_NorwayArmy_Woodland";
		crew = "B_NorwayArmy_Rifleman_Woodland";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
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

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	////////////
	// Desert //
	////////////

	class B_NorwayArmy_Man_Desert : B_NorwayArmy_Man {
		displayName = "Man";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Man_Desert.jpg";
		faction = "B_NorwayArmy_Desert";
		scope = 2;

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_Beanie_Black","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_Beanie_Black","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter"};

		weapons[] = {};
		respawnWeapons[] = {};

		magazines[] = {};
		respawnMagazines[] = {};

		ALiVE_orbatCreator_loadout[] = {{},{},{},{"VSM_AOR1_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1}}},{},{},"VSM_Beanie_Black","",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter",""}};
	};

	class B_NorwayArmy_Medic_Desert : B_NorwayArmy_Man_Desert {
		displayName = "Medic";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Medic_Desert.jpg";
		icon = "iconManMedic";
		picture = "pictureHeal";

		attendant = 1;

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416CUSTOMvfgB"};
		respawnWeapons[] = {"SMA_HK416CUSTOMvfgB"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};

		backpack = "VSM_AOR1_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",{"ACE_30Rnd_556x45_Stanag_Mk318_mag",30},{},""},{},{},{"VSM_AOR1_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_AOR1",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_salineIV_500",4},{"ACE_salineIV",1},{"ACE_epinephrine",1},{"ACE_morphine",1},{"HandGrenade",1,1},{"SmokeShell",10,1},{"SmokeShellGreen",3,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",6,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30}}},{"VSM_AOR1_Backpack_Kitbag",{{"ACE_surgicalKit",1},{"ACE_salineIV_250",4},{"ACE_salineIV_500",11},{"ACE_salineIV",4},{"ACE_elasticBandage",30},{"ACE_packingBandage",30},{"ACE_quikclot",25},{"ACE_fieldDressing",15},{"ACE_tourniquet",2},{"ACE_morphine",10},{"ACE_epinephrine",10},{"adv_aceCPR_AED",1},{"SmokeShellBlue",2,1}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_LMG_762_Desert : B_NorwayArmy_Man_Desert {
		displayName = "LMG 7.62";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_762_Desert.jpg";
		icon = "iconManMG";

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_FAPC_MG_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_MG_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"rhs_weap_m240B","ACE_VectorDay"};
		respawnWeapons[] = {"rhs_weap_m240B","ACE_VectorDay"};

		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};

		backpack = "VSM_AOR1_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m240B","","","",{"rhsusf_100Rnd_762x51_m62_tracer",100},{},""},{},{},{"VSM_AOR1_Camo",{{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_MG_AOR1",{{"ACE_EntrenchingTool",1},{"HandGrenade",2,1},{"Chemlight_green",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",5,1},{"rhsusf_100Rnd_762x51_m61_ap",2,100},{"rhsusf_100Rnd_762x51_m62_tracer",4,100}}},{"VSM_AOR1_Backpack_Kitbag",{{"ACE_SpareBarrel",1,1},{"rhsusf_100Rnd_762x51_m62_tracer",2,100}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_LMG_556_Desert : B_NorwayArmy_Man_Desert {
		displayName = "LMG 5.56";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_LMG_556_Desert.jpg";
		icon = "iconManMG";

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_FAPC_MG_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_MG_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"rhs_weap_m249_pip_L","ACE_VectorDay"};
		respawnWeapons[] = {"rhs_weap_m249_pip_L","ACE_VectorDay"};

		magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};

		backpack = "VSM_AOR1_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},""},{},{},{"VSM_AOR1_Camo",{{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_MG_AOR1",{{"ACE_EntrenchingTool",1},{"rhsusf_200rnd_556x45_M855_mixed_box",6,200},{"HandGrenade",2,1},{"Chemlight_green",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",5,1}}},{"VSM_AOR1_Backpack_Kitbag",{{"rhsusf_200rnd_556x45_M855_mixed_box",2,200},{"ACE_SpareBarrel",1,1}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Marksman_Desert : B_NorwayArmy_Man_Desert {
		displayName = "Marksman";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Marksman_Desert.jpg";

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK417_16in","ACE_VectorDay"};
		respawnWeapons[] = {"SMA_HK417_16in","ACE_VectorDay"};

		magazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR_IR","SMA_20Rnd_762x51mm_M80A1_EPR_IR"};
		respawnMagazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR_IR","SMA_20Rnd_762x51mm_M80A1_EPR_IR"};

		backpack = "VSM_AOR1_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK417_16in","SMA_supp_762","SMA_SFPEQ_HK417TOP_BLK","SMA_ELCAN_SPECTER_ARDRDS_4z",{"SMA_20Rnd_762x51mm_M80A1_EPR_IR",20},{},"bipod_01_F_blk"},{},{},{"VSM_AOR1_Camo",{{"ACE_packingBandage",14},{"ACE_morphine",6},{"ACE_elasticBandage",12},{"ACE_CableTie",5},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_MapTools",1},{"ACE_epinephrine",4},{"ACE_tourniquet",4},{"ACE_Flashlight_MX991",1},{"ACE_RangeCard",1}}},{"VSM_FAPC_Operator_AOR1",{{"ACE_EntrenchingTool",1},{"SMA_20Rnd_762x51mm_M80A1_EPR_IR",7,20},{"HandGrenade",2,1},{"SmokeShell",5,1},{"SmokeShellGreen",2,1},{"20Rnd_762x51_Mag",4,20},{"SmokeShellBlue",1,1},{"Chemlight_green",2,1}}},{"VSM_AOR1_Backpack_Kitbag",{{"SMA_20Rnd_762x51mm_M80A1_EPR_IR",7,20},{"20Rnd_762x51_Mag",3,20}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Engineer_EOD_Desert : B_NorwayArmy_Man_Desert {
		displayName = "Engineer/EOD";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Engineer_EOD_Desert.jpg";
		icon = "iconManEngineer";
		picture = "pictureRepair";

		canDeactivateMines = 1;
		engineer = 1;

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416CUSTOMvfgB","rhs_weap_M136","ACE_VMH3"};
		respawnWeapons[] = {"SMA_HK416CUSTOMvfgB","rhs_weap_M136","ACE_VMH3"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};

		backpack = "VSM_AOR1_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",{"ACE_30Rnd_556x45_Stanag_Mk318_mag",30},{},""},{"rhs_weap_M136","","","",{},{},""},{"ACE_VMH3","","","",{},{},""},{"VSM_AOR1_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_AOR1",{{"ACE_EntrenchingTool",1},{"ACE_DefusalKit",1},{"ACE_Clacker",1},{"ACE_M26_Clacker",1},{"HandGrenade",2,1},{"SmokeShell",3,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",6,30},{"SmokeShellBlue",2,1}}},{"VSM_AOR1_Backpack_Kitbag",{{"ToolKit",1},{"ACE_wirecutter",1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",4,1},{"AMP_Breaching_Charge_Mag",2,1}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_1IC_Desert : B_NorwayArmy_Man_Desert {
		displayName = "1IC";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Desert.jpg";
		icon = "iconManOfficer";

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416GL","ACE_VectorDay"};
		respawnWeapons[] = {"SMA_HK416GL","ACE_VectorDay"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag"};

		backpack = "tfw_ilbe_coy";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416GL","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552_3XDOWN",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{},""},{},{},{"VSM_AOR1_Camo",{{"ACE_tourniquet",4},{"ACE_elasticBandage",11},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",15},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_AOR1",{{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30},{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"SmokeShellOrange",2,1}}},{"tfw_ilbe_coy",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_Smoke_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",5,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",5,1},{"1Rnd_HE_Grenade_shell",9,1}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_2IC_Desert : B_NorwayArmy_Man_Desert {
		displayName = "2IC";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_IC_2IC_Desert.jpg";
		icon = "iconManLeader";

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416GL","ACE_VectorDay"};
		respawnWeapons[] = {"SMA_HK416GL","ACE_VectorDay"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag"};

		backpack = "tfw_ilbe_coy";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416GL","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552_3XDOWN",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{},""},{},{},{"VSM_AOR1_Camo",{{"ACE_tourniquet",4},{"ACE_elasticBandage",11},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",15},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",6},{"ACE_CableTie",5},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_AOR1",{{"ACE_30Rnd_556x45_Stanag_Mk318_mag",8,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",7,30},{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"SmokeShellOrange",2,1}}},{"tfw_ilbe_coy",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_Smoke_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",5,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",5,1},{"1Rnd_HE_Grenade_shell",9,1}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Rifleman_AT_Desert : B_NorwayArmy_Man_Desert {
		displayName = "Rifleman AT";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_AT_Desert.jpg";
		icon = "iconManAT";

		uniformClass = "VSM_AOR1_Crye_SS_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416CUSTOMvfgB","launch_MRAWS_sand_rail_F","ACE_VectorDay"};
		respawnWeapons[] = {"SMA_HK416CUSTOMvfgB","launch_MRAWS_sand_rail_F","ACE_VectorDay"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","MRAWS_HEAT_F","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","MRAWS_HEAT_F","ACE_30Rnd_556x45_Stanag_Mk318_mag"};

		backpack = "VSM_AOR1_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",{"ACE_30Rnd_556x45_Stanag_Mk318_mag",30},{},""},{"launch_MRAWS_sand_rail_F","","","",{"MRAWS_HEAT_F",1},{},""},{},{"VSM_AOR1_Crye_SS_Camo",{{"ACE_packingBandage",15},{"ACE_morphine",7},{"ACE_tourniquet",4},{"ACE_epinephrine",6},{"ACE_EarPlugs",2},{"ACE_CableTie",5},{"ACE_elasticBandage",14},{"ACE_IR_Strobe_Item",2},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_AOR1",{{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30},{"SmokeShell",5,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",4,30},{"SmokeShellBlue",2,1}}},{"VSM_AOR1_Backpack_Kitbag",{{"MRAWS_HEAT_F",4,1},{"MRAWS_HE_F",1,1}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

	class B_NorwayArmy_Rifleman_Desert : B_NorwayArmy_Man_Desert {
		displayName = "Rifleman";
		editorPreview = "\x\bnb_e\bnorway\data\preview\B_NorwayArmy_Rifleman_Desert.jpg";

		uniformClass = "VSM_AOR1_Camo";

		linkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};
		respawnlinkedItems[] = {"VSM_FAPC_Operator_AOR1","VSM_Mich2000_2_aor1","ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"};

		weapons[] = {"SMA_HK416CUSTOMvfgB","rhs_weap_M136"};
		respawnWeapons[] = {"SMA_HK416CUSTOMvfgB","rhs_weap_M136"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};

		backpack = "VSM_AOR1_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMvfgB","","SMA_SFPEQ_HKTOP_BLK","SMA_eotech552",{"ACE_30Rnd_556x45_Stanag_Mk318_mag",30},{},""},{"rhs_weap_M136","","","",{},{},""},{},{"VSM_AOR1_Camo",{{"ACE_packingBandage",13},{"ACE_morphine",6},{"ACE_tourniquet",4},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",4},{"ACE_EarPlugs",1},{"ACE_CableTie",5},{"ACE_elasticBandage",13},{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1}}},{"VSM_FAPC_Operator_AOR1",{{"HandGrenade",2,1},{"SmokeShell",5,1},{"SmokeShellGreen",3,1},{"Chemlight_green",2,1},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",10,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},{"VSM_AOR1_Backpack_Kitbag",{{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"SmokeShellBlue",2,1}}},"VSM_Mich2000_2_aor1","VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",{},{"ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ACE_Altimeter","A3_GPNVG18_F"}};
	};

};
