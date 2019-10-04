
class CfgPatches
{
	class WRUS
	{
	   units[] =
		{
			"WRUS_S_Rif",
			"WRUS_S_Crew",
			"WRUS_S_AT",
			"WRUS_S_PKP",
			"WRUS_S_AA",
			"WRUS_S_Engi",
			"WRUS_S_LAT",
			"WRUS_S_grenadier",
			"WRUS_S_marksman",
			"WRUS_Veh_UAZ",
			"WRUS_Veh_UAZ_ags",
			"WRUS_Veh_UAZ_dshkm",
			"WRUS_Veh_UAZ_open",
			"WRUS_Veh_UAZ_spg9",
			"WRUS_Veh_BTR60",
			"WRUS_S_pilot",
			"WRUS_Veh_Mi8",
			"WRUS_Veh_Ural_C",
			"WRUS_Veh_Ural_open",
			"WRUS_Veh_Ural_zu23",
			"WRUS_Veh_Ural_open_flat",
			"WRifleSquad1",
			"WRifleSquad2",
			"WRifleSquad3",
			"WRifleSquad4",
			"WRifleSquad5",
			"WRUS_Veh_s_kornet",
			"WRUS_Veh_s_igla",
			"WRUS_Veh_s_kord",
			"WRUS_Veh_s_spg9",
			"WRUS_Veh_s_zu23",
		};

		weapons[] =
		{

		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses
{
	class WRUS
	{
		displayName = "Russia (Winter)";
		priority = 1; // Position in list.
		side = 0; // Opfor = 0, Blufor = 1, Indep = 2.
		icon = ""; //Custom Icon
	};
};

class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};

class CfgVehicles
{
	//************************************************************************************************************************************************************************************************
	//*****             Units                *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************
	class rhs_vdv_rifleman;
	class rhs_vdv_at;
	class rhs_vdv_arifleman;
	class rhs_vdv_crew;
	class rhs_vdv_aa;

	class WRUS_S_Rif: rhs_vdv_rifleman {
		author = "Sawtes";
		scope = 2;
		displayName = "Rifleman (Winter)";
		faction = "WRUS";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		uniformClass = "WRUS_U_Gorka";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
		linkedItems[] =
		{
			"WRUS_V_6B23_6s",
			"WRUS_H_6b7_camo",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_6s",
			"WRUS_H_6b7_camo",
		};
		class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'WRUS_H_6b7_camo';";
		};
	};
	class WRUS_S_AT: rhs_vdv_at {
		author = "Sawtes";
		scope = 2;
		displayName = "AT Specialist (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
		backpack = "WRUS_B_RPG";
		linkedItems[] =
		{
			"WRUS_V_6B23_6s",
			"WRUS_H_6b7_camo",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_6s",
			"WRUS_H_6b7_camo",
		};
		   class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'WRUS_H_6b7_camo';";
		};
	};
	class WRUS_S_PKP: rhs_vdv_arifleman {
		author = "Sawtes";
		scope = 2;
		displayName = "Machinegunner (PKP) (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
		backpack = "WRUS_B_SidorMG";
		linkedItems[] =
		{
			"WRUS_V_6B23_6s",
			"WRUS_H_6b7_camo",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_6s",
			"WRUS_H_6b7_camo",
		};
		class EventHandlers
		   {
			init = 	"(_this select 0) addHeadgear 'WRUS_H_6b7_camo';";
		};
	};
	class WRUS_S_Crew: rhs_vdv_crew {
		author = "Sawtes";
		scope = 2;
		displayName = "Crew (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
			linkedItems[] =
		{
			"WRUS_V_6B23_crew",
			"rhs_tsh4",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_crew",
			"rhs_tsh4",
		};
		   class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'rhs_tsh4';";
		};
	};
	class WRUS_S_AA: rhs_vdv_aa {
		author = "Sawtes";
		scope = 2;
		displayName = "AA Specialist (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
		linkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_6b7_camo",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_6b7_camo",
		};
		   class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'WRUS_H_6b7_camo';";
		};
	};
	class rhs_vdv_engineer;
	class WRUS_S_Engi: rhs_vdv_engineer	 {
		author = "Sawtes";
		scope = 2;
		displayName = "Engineer (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
		linkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_6b7_camo",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_6b7_camo",
		};
		   class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'WRUS_H_6b7_camo';";
		};
		backpack = "WRUS_B_UMBTS_Engineer_tool";
	};
	class rhs_vdv_LAT;
	class WRUS_S_LAT: rhs_vdv_LAT {
		author = "Sawtes";
		scope = 2;
		displayName = "Rifleman AT (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
		linkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_6b7_camo",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_6b7_camo",
		};
		   class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'WRUS_H_6b7_camo';";
		};
	};
	class rhs_vdv_grenadier;
	class WRUS_S_grenadier: rhs_vdv_grenadier {
		author = "Sawtes";
		scope = 2;
		displayName = "Rifleman (GP-25) (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
		linkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_6b7_camo",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_6b7_camo",
		};
		   class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'WRUS_H_6b7_camo';";
		};
	};
	class rhs_vdv_marksman;
	class WRUS_S_marksman: rhs_vdv_marksman {
		author = "Sawtes";
		scope = 2;
		displayName = "Marksman (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\WRUS\addons\Data\gorkaw.paa"
		};
		linkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_boonie",
		};
		respawnLinkedItems[] =
		{
			"WRUS_V_6B23_rifleman",
			"WRUS_H_boonie",
		};
		   class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'WRUS_H_boonie';";
		};
	};
	class rhs_pilot_combat_heli;
	class WRUS_S_pilot: rhs_pilot_combat_heli {
		author = "Sawtes";
		scope = 2;
		displayName = "Pilot (Winter)";
		faction = "WRUS";
		uniformClass = "WRUS_U_Gorka";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\x\bnb_eWRUS\addons\Data\gorkaw.paa"
		};
		linkedItems[] =
		{
			"rhs_zsh7a_mike",
		};
		respawnLinkedItems[] =
		{
			"rhs_zsh7a_mike",
		};
		   class EventHandlers{
			init = 	"(_this select 0) addHeadgear 'rhs_zsh7a_mike';";
		};
	};





	//************************************************************************************************************************************************************************************************
	//*****             Objects              *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************


	//************************************************************************************************************************************************************************************************
	//*****             Vehicles             *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************

	class LandVehicle;
	class rhsgref_ins_uaz;
	class rhsgref_ins_uaz_ags;
	class rhsgref_ins_uaz_dshkm;
	class rhsgref_ins_uaz_open;
	class rhsgref_ins_uaz_spg9;
	class rhs_kornet_9m133_2_vdv;
	class rhs_igla_aa_pod_vdv;
	class rhs_kord_high_vdv;
	class rhs_spg9m_vdv;
	class rhs_zu23_vdv;
	class WRUS_Veh_s_kornet: rhs_kornet_9m133_2_vdv
	{
		crew = "WRUS_S_Rif";
		faction = "WRUS";
	};
	class WRUS_Veh_s_igla: rhs_igla_aa_pod_vdv
	{
		crew = "WRUS_S_Rif";
		faction = "WRUS";
	};
	class WRUS_Veh_s_kord: rhs_kord_high_vdv
	{
		crew = "WRUS_S_Rif";
		faction = "WRUS";
	};
	class WRUS_Veh_s_spg9: rhs_spg9m_vdv
	{
		crew = "WRUS_S_Rif";
		faction = "WRUS";
	};
	class WRUS_Veh_s_zu23: rhs_zu23_vdv
	{
		crew = "WRUS_S_Rif";
		faction = "WRUS";
	};

	class WRUS_Veh_UAZ: rhsgref_ins_uaz
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "UAZ-3151";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\uazc.paa"};
	};
	class WRUS_Veh_UAZ_ags: rhsgref_ins_uaz_ags
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "UAZ-3151 (AGS-30)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\uazc.paa"};
	};
	class WRUS_Veh_UAZ_dshkm: rhsgref_ins_uaz_dshkm
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "UAZ-3151 (DShKM)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\uazc.paa"};
	};
	class WRUS_Veh_UAZ_open: rhsgref_ins_uaz_open
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "UAZ-3151 (Open)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\uazc.paa"};
	};
	class WRUS_Veh_UAZ_spg9: rhsgref_ins_uaz_spg9
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "UAZ-3151 (SPG-9)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\uazc.paa"};
	};
	class rhs_btr60_vdv;
	class WRUS_Veh_BTR60: rhs_btr60_vdv
	{
		crew = "WRUS_S_Crew";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "BTR-60";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\btr1.paa","\x\bnb_e\WRUS\addons\Data\btr2.paa"};
	};
	class rhs_ural_open_vdv_01;
	class rhs_ural_open_flat_vdv_01;
	class rhs_ural_zu23_vdv_01;
	class rhs_ural_vdv_01;
	class rhsgref_un_Mi8amt;
	class WRUS_Veh_Mi8: rhsgref_un_Mi8amt
	{
		crew = "WRUS_S_pilot";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "Mi-8 (Winter)";
	};
	class WRUS_Veh_Ural_C: rhs_ural_vdv_01
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "Ural-4320 Winter";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\ural1.paa","\x\bnb_e\WRUS\addons\Data\uralc.paa"};
	};
	class WRUS_Veh_Ural_open: rhs_ural_open_vdv_01
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "Ural-4320 Open Winter";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\ural1.paa","\x\bnb_e\WRUS\addons\Data\uralo.paa"};
	};
	class WRUS_Veh_Ural_open_flat: rhs_ural_open_flat_vdv_01
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "Ural-4320 (Open/Flatbed) Winter";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\ural1.paa","\x\bnb_e\WRUS\addons\Data\uralo.paa"};
	};
	class WRUS_Veh_Ural_zu23: rhs_ural_zu23_vdv_01
	{
		crew = "WRUS_S_Rif";
		side = 0;
		scope = 2;
		faction = "WRUS";
		displayName = "Ural-4320 (ZU-23-2) Winter";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] =
		{"\x\bnb_e\WRUS\addons\Data\ural1.paa","\x\bnb_e\WRUS\addons\Data\uralo.paa"};
	};
	//************************************************************************************************************************************************************************************************
	//*****             Backpacks               *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************
	class ReammoBox;
	class rhs_sidor;
	class rhs_assault_umbts;
	class rhs_assault_umbts_engineer_empty;
	class rhs_rpg_empty;
	class rhs_rpg;
	class rhs_sidorMG;
	class rhs_assault_umbts_engineer;

	class WRUS_B_Sidor: rhs_sidor
	{
		author = "Sawtes";
		scope = 2;
		displayName = "[SAW] RUS Sidor";
		picture = "\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelectionsTextures[]={"\x\bnb_e\WRUS\addons\Data\backpack.paa"};
	};
	class WRUS_B_UMBTS: rhs_assault_umbts
	{
		author = "Sawtes";
		scope = 2;
		displayName = "[SAW] RUS UMBTS Backpack";
		picture = "\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelectionsTextures[]={"\x\bnb_e\WRUS\addons\Data\backpack.paa"};
	};
	class WRUS_B_UMBTS_Engineer_tool: rhs_assault_umbts_engineer
	{
		author = "Sawtes";
		scope = 1;
		displayName = "[SAW] RUS UMBTS Backpack (Engineer)";
		picture = "\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelectionsTextures[]={"\x\bnb_e\WRUS\addons\Data\backpack.paa"};
	};
	class WRUS_B_RPG_empty: rhs_rpg_empty
	{
		author = "Sawtes";
		scope = 2;
		displayName = "[SAW] RUS RPG Carrier";
		picture = "\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelectionsTextures[]={"\x\bnb_e\WRUS\addons\Data\rpg.paa"};
	};
	class WRUS_B_RPG: rhs_rpg
	{
		author = "Sawtes";
		scope = 1;
		displayName = "[SAW] RUS RPG Carrier";
		picture = "\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelectionsTextures[]={"\x\bnb_e\WRUS\addons\Data\rpg.paa"};
	};
	class WRUS_B_SidorMG: rhs_sidorMG
	{
		author = "Sawtes";
		scope = 1;
		displayName = "[SAW] RUS Sidor";
		picture = "\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelectionsTextures[]={"\x\bnb_e\WRUS\addons\Data\backpack.paa"};
	};
	class WRUS_B_UMBTS_Engineer: rhs_assault_umbts_engineer_empty
	{
		author = "Sawtes";
		scope = 2;
		displayName = "[SAW] RUS UMBTS Backpack (Engineer)";
		picture = "\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelectionsTextures[]={"\x\bnb_e\WRUS\addons\Data\backpack.paa"};
	};

};


class cfgWeapons
{
	//********************************************************************************************************************************************************************************************
	//*****            Uniforms              *****************************************************************************************************************************************************
	//********************************************************************************************************************************************************************************************
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class WRUS_U_Gorka: Uniform_Base
	{
		scope = 2;
		displayName = "[SAW] RUS Gorka (Klyaksa)";
		picture = "\x\bnb_e\WRUS\addons\Data\wrus.paa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
		class ItemInfo : UniformItem {
			uniformClass = "WRUS_S_Rif";
			containerClass = "Supply60";
			mass = 40;
		};
	};
	//************************************************************************************************************************************************************************************************
	//*****             Helmets               *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************

	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class rhs_6b7_1m_emr;
	class rhs_6b7_1m_emr_ess;
	class WRUS_H_6b7_Plain: rhs_6b7_1m_emr
	{
		displayName = "[SAW] RUS 6B7-1M (Winter)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\helmet1.paa","\x\bnb_e\WRUS\addons\Data\helmet1.paa"};
	};
	class WRUS_H_6b7_Plain_ESS: rhs_6b7_1m_emr_ess
	{
		displayName = "[SAW] RUS 6B7-1M (Winter/ESS)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\helmet1.paa","\x\bnb_e\WRUS\addons\Data\helmet1.paa"};
	};
	class WRUS_H_6b7_camo: rhs_6b7_1m_emr
	{
		displayName = "[SAW] RUS 6B7-1M (Klyaksa)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
	   hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\helmet1.paa","\x\bnb_e\WRUS\addons\Data\helmet2.paa"};
	};
	class WRUS_H_6b7_camo_ess: rhs_6b7_1m_emr_ess
	{
		displayName = "[SAW] RUS 6B7-1M (Klyaksa/ESS)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
	   hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\helmet1.paa","\x\bnb_e\WRUS\addons\Data\helmet2.paa"};
	};
	class rhs_beanie;
	class WRUS_H_beanie: rhs_beanie
	{
		displayName = "[SAW] RUS Beanie (Winter)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\bean.paa"};
	};
	class H_booniehat_oli;
	class WRUS_H_boonie: H_booniehat_oli
	{
		displayName = "[SAW] RUS Boonie Hat (Winter)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\boon.paa"};
	};
	//************************************************************************************************************************************************************************************************
	//*****             Vests               *********************************************************************************************************************************************************
	//************************************************************************************************************************************************************************************************

	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class LOP_V_6B23_6Sh92_OLV;
	class LOP_V_6B23_CrewOfficer_OLV;
	class LOP_V_6B23_Medic_OLV;
	class LOP_V_6B23_Rifleman_OLV;

	class WRUS_V_6B23_6s: LOP_V_6B23_6Sh92_OLV
	{
		displayName = "[SAW] RUS 6B23 Winter";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\vest.paa"};
	};
	class WRUS_V_6B23_crew: LOP_V_6B23_CrewOfficer_OLV
	{
		displayName = "[SAW] RUS 6B23 Winter (Crew)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\vest.paa"};
	};
	class WRUS_V_6B23_medic: LOP_V_6B23_Medic_OLV
	{
		displayName = "[SAW] RUS 6B23 Winter (Medic)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\vest.paa"};
	};
	class WRUS_V_6B23_rifleman: LOP_V_6B23_Rifleman_OLV
	{
		displayName = "[SAW] RUS 6B23 Winter (Rifleman)";
		picture ="\x\bnb_e\WRUS\addons\Data\wrus.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\x\bnb_e\WRUS\addons\Data\vest.paa"};
	};
};
  //************************************************************************************************************************************************************************************************
  //*****             Groups               *********************************************************************************************************************************************************
  //************************************************************************************************************************************************************************************************

class CfgGroups
{
	class EAST
	{
		name = "OPFOR"; // Name of Faction Side
		side = 0; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
		class WRUS //Faction Class name
		{
			name = "Russia (Winter)"; //Faction Name
			class Infantry
			{
				name = "Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
				class WRifleSquad1
				{
					name = "Rifle Team"; //Name of Group
					faction = "WRUS"; //Faction
					side = 0; //Side
					class Unit0
					{
						side = 0;
						vehicle = "WRUS_S_Rif"; //Class name of desired solider
						rank = "SERGEANT"; // Rank
						position[] = {0,5,0}; //Position in the formation
					};
					class Unit1
					{
						side = 0;
						vehicle = "WRUS_S_Rif";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "WRUS_S_grenadier";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "WRUS_S_PKP";
						rank = "PRIVATE";
						position[] = {5,5,0};
					};
				};
				class WRifleSquad2
				{
					name = "Rifle Squad"; //Name of Group
					faction = "WRUS"; //Faction
					side = 0; //Side
					class Unit0
					{
						side = 0;
						vehicle = "WRUS_S_Rif"; //Class name of desired solider
						rank = "SERGEANT"; // Rank
						position[] = {0,5,0}; //Position in the formation
					};
					class Unit1
					{
						side = 0;
						vehicle = "WRUS_S_AT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "WRUS_S_Rif";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "WRUS_S_PKP";
						rank = "PRIVATE";
						position[] = {5,5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "WRUS_S_marksman";
						rank = "PRIVATE";
						position[] = {5,3,5};
					};
					class Unit5
					{
						side = 0;
						vehicle = "WRUS_S_grenadier";
						rank = "PRIVATE";
						position[] = {8,3,5};
					};
				};

				class WRifleSquad3
				{
					name = "Sentry"; //Name of Group
					faction = "WRUS"; //Faction
					side = 0; //Side
					class Unit0
					{
						side = 0;
						vehicle = "WRUS_S_Rif"; //Class name of desired solider
						rank = "SERGEANT"; // Rank
						position[] = {0,5,0}; //Position in the formation
					};
					class Unit1
					{
						side = 0;
						vehicle = "WRUS_S_Rif";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class WRifleSquad4
				{
					name = "AA Team"; //Name of Group
					faction = "WRUS"; //Faction
					side = 0; //Side
					class Unit0
					{
						side = 0;
						vehicle = "WRUS_S_Rif"; //Class name of desired solider
						rank = "SERGEANT"; // Rank
						position[] = {0,5,0}; //Position in the formation
					};
					class Unit1
					{
						side = 0;
						vehicle = "WRUS_S_AA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
				class WRifleSquad5
				{
					name = "AT Team"; //Name of Group
					faction = "WRUS"; //Faction
					side = 0; //Side
					class Unit0
					{
						side = 0;
						vehicle = "WRUS_S_LAT"; //Class name of desired solider
						rank = "SERGEANT"; // Rank
						position[] = {0,5,0}; //Position in the formation
					};
					class Unit1
					{
						side = 0;
						vehicle = "WRUS_S_AT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
		};
	};
};
