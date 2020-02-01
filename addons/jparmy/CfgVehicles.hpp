class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class B_NorwayArmy_1IC_Woodland;
    class B_NorwayArmy_1IC_Woodland_OCimport_01 : B_NorwayArmy_1IC_Woodland { scope = 0; class EventHandlers; };
    class B_NorwayArmy_1IC_Woodland_OCimport_02 : B_NorwayArmy_1IC_Woodland_OCimport_01 { class EventHandlers; };

    class rhsusf_m113_usarmy;
    class rhsusf_m113_usarmy_OCimport_01 : rhsusf_m113_usarmy { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m113_usarmy_OCimport_02 : rhsusf_m113_usarmy_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class B_NorwayArmy_Leopard_2SG_Woodland;
    class B_NorwayArmy_Leopard_2SG_Woodland_OCimport_01 : B_NorwayArmy_Leopard_2SG_Woodland { scope = 0; class EventHandlers; class Turrets; };
    class B_NorwayArmy_Leopard_2SG_Woodland_OCimport_02 : B_NorwayArmy_Leopard_2SG_Woodland_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class B_T_AFV_Wheeled_01_cannon_F;
    class B_T_AFV_Wheeled_01_cannon_F_OCimport_01 : B_T_AFV_Wheeled_01_cannon_F { scope = 0; class EventHandlers; class Turrets; };
    class B_T_AFV_Wheeled_01_cannon_F_OCimport_02 : B_T_AFV_Wheeled_01_cannon_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class UK3CB_BAF_Husky_Passenger_HMG_Green_DPMW;
    class UK3CB_BAF_Husky_Passenger_HMG_Green_DPMW_OCimport_01 : UK3CB_BAF_Husky_Passenger_HMG_Green_DPMW { scope = 0; class EventHandlers; class Turrets; };
    class UK3CB_BAF_Husky_Passenger_HMG_Green_DPMW_OCimport_02 : UK3CB_BAF_Husky_Passenger_HMG_Green_DPMW_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class L111A1_1_Turret;
            class CommanderTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_01 : B_Heli_Light_01_dynamicLoadout_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_02 : B_Heli_Light_01_dynamicLoadout_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };


    class B_JapanArmy_Section_Leader_01 : B_NorwayArmy_1IC_Woodland_OCimport_02 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Section Leader";
        side = 1;
        faction = "B_JapanArmy";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "VSM_MulticamTropic_Camo_SS";

        linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};
        respawnWeapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};

        magazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};
        respawnMagazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};

        backpack = "tfw_ilbe_DD_mct";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_m320","","","RKSL_optic_EOT552",{},{"rhs_mag_M441_HE",1},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",4},{"ACE_CableTie",5},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5}}},{"VSM_RAV_operator_MulticamTropic",{{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",3,30}}},{"tfw_ilbe_DD_mct",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_M441_HE",7,1},{"rhs_mag_M433_HEDP",7,1},{"rhs_mag_M397_HET",3,1},{"16Rnd_9x21_Mag",2,17},{"1Rnd_Smoke_Grenade_shell",3,1}}},"VSM_MulticamTropic_OPS_2","UK3CB_BAF_G_Tactical_Clear",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

    };

    class B_JapanArmy_Team_Leader_01 : B_JapanArmy_Section_Leader_01 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "B_JapanArmy";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "VSM_MulticamTropic_Camo_SS";

        linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};
        respawnWeapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};

        magazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};
        respawnMagazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};

        backpack = "tfw_ilbe_DD_mct";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_m320","","","RKSL_optic_EOT552",{},{"rhs_mag_M441_HE",1},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",4},{"ACE_CableTie",5},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5}}},{"VSM_RAV_operator_MulticamTropic",{{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",3,30}}},{"tfw_ilbe_DD_mct",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_M441_HE",7,1},{"rhs_mag_M433_HEDP",7,1},{"rhs_mag_M397_HET",3,1},{"16Rnd_9x21_Mag",2,17},{"1Rnd_Smoke_Grenade_shell",3,1}}},"VSM_MulticamTropic_OPS_2","UK3CB_BAF_G_Tactical_Clear",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

    };

    class B_JapanArmy_Combat_Life_Saver_01 : B_JapanArmy_Team_Leader_01 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "B_JapanArmy";
		icon = "iconManMedic";
		picture = "pictureHeal";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "VSM_MulticamTropic_Camo_SS";

        linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};
        respawnWeapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};

        magazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};
        respawnMagazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};

        backpack = "VSM_MulticamTropic_Backpack_Kitbag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_m320","","","RKSL_optic_EOT552",{},{"rhs_mag_M441_HE",1},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",4},{"ACE_CableTie",5},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_fieldDressing",10},{"ACE_epinephrine",8},{"ACE_morphine",8},{"SmokeShellGreen",2,1},{"SmokeShell",8,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",2,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",2,30},{"HandGrenade",2,1}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"ACE_surgicalKit",1},{"ACE_tourniquet",8},{"ACE_salineIV_500",10},{"ACE_salineIV_250",20},{"ACE_salineIV",4},{"ACE_morphine",12},{"ACE_epinephrine",12},{"ACE_packingBandage",20},{"ACE_elasticBandage",20},{"ACE_fieldDressing",20},{"ACE_quikclot",20},{"ACE_adenosine",8}}},"VSM_MulticamTropic_OPS_2","UK3CB_BAF_G_Tactical_Clear",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

    };

    class B_JapanArmy_Rifleman_01 : B_JapanArmy_Section_Leader_01 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "B_JapanArmy";

        icon = "iconMan";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "VSM_MulticamTropic_Camo_SS";

        linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_mk18_wd","rhs_weap_m72a7","hgun_Rook40_F","Laserdesignator"};
        respawnWeapons[] = {"rhs_weap_mk18_wd","rhs_weap_m72a7","hgun_Rook40_F","Laserdesignator"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries"};

        backpack = "VSM_MulticamTropic_Backpack_Kitbag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_wd","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"SmokeShell",5,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",5,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"HandGrenade",2,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",3,30}}},{"VSM_MulticamTropic_Backpack_Kitbag",{}},"VSM_MulticamTropic_OPS_2","UK3CB_BAF_G_Tactical_Clear",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

    };

    class B_JapanArmy_LMG_762_01 : B_JapanArmy_Rifleman_01 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "LMG 7.62";
        side = 1;
        faction = "B_JapanArmy";
		icon = "iconManMG";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "VSM_MulticamTropic_Camo_SS";

        linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_m240G","hgun_Rook40_F","Laserdesignator"};
        respawnWeapons[] = {"rhs_weap_m240G","hgun_Rook40_F","Laserdesignator"};

        magazines[] = {"rhsusf_50Rnd_762x51","16Rnd_9x21_Mag","Laserbatteries","rhsusf_50Rnd_762x51","16Rnd_9x21_Mag","Laserbatteries"};
        respawnMagazines[] = {"rhsusf_50Rnd_762x51","16Rnd_9x21_Mag","Laserbatteries","rhsusf_50Rnd_762x51","16Rnd_9x21_Mag","Laserbatteries"};

        backpack = "VSM_MulticamTropic_Backpack_Kitbag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m240G","","","RKSL_optic_EOT552X",{"rhsusf_50Rnd_762x51",50},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"ACE_EntrenchingTool",1}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"SmokeShell",3,1},{"HandGrenade",2,1},{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",4,20},{"rhsusf_100Rnd_762x51_m62_tracer",1,100},{"rhsusf_100Rnd_762x51_m80a1epr",1,100}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",2,20},{"SmokeShell",3,1},{"rhs_mag_m67",2,1},{"SmokeShellGreen",2,1},{"rhsusf_50Rnd_762x51",1,50},{"rhsusf_100Rnd_762x51_m80a1epr",1,100},{"rhsusf_100Rnd_762x51_m62_tracer",1,100},{"rhsusf_100Rnd_762x51_m61_ap",1,100}}},"VSM_MulticamTropic_OPS_2","UK3CB_BAF_G_Tactical_Clear",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

    };

    class B_JapanArmy_LMG_556_01 : B_JapanArmy_LMG_762_01 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "LMG 5.56";
        side = 1;
        faction = "B_JapanArmy";
		icon = "iconManMG";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "VSM_MulticamTropic_Camo_SS";

        linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_m249_light_S","hgun_Rook40_F","Laserdesignator"};
        respawnWeapons[] = {"rhs_weap_m249_light_S","hgun_Rook40_F","Laserdesignator"};

        magazines[] = {"rhsusf_100Rnd_556x45_M855_soft_pouch","16Rnd_9x21_Mag","Laserbatteries","rhsusf_100Rnd_556x45_M855_soft_pouch","16Rnd_9x21_Mag","Laserbatteries"};
        respawnMagazines[] = {"rhsusf_100Rnd_556x45_M855_soft_pouch","16Rnd_9x21_Mag","Laserbatteries","rhsusf_100Rnd_556x45_M855_soft_pouch","16Rnd_9x21_Mag","Laserbatteries"};

        backpack = "VSM_MulticamTropic_Backpack_Kitbag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_light_S","","","RKSL_optic_EOT552X",{"rhsusf_100Rnd_556x45_M855_soft_pouch",100},{},"rhsusf_acc_saw_bipod"},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"ACE_EntrenchingTool",1}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"SmokeShell",3,1},{"HandGrenade",2,1},{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",4,20},{"rhsusf_100Rnd_556x45_soft_pouch",2,100}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",2,20},{"SmokeShell",3,1},{"rhs_mag_m67",2,1},{"SmokeShellGreen",2,1},{"rhsusf_100Rnd_556x45_soft_pouch",5,100}}},"VSM_MulticamTropic_OPS_2","UK3CB_BAF_G_Tactical_Clear",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

    };

    class B_JapanArmy_Anti_Tank_01 : B_JapanArmy_LMG_556_01 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Anti-Tank";
        side = 1;
        faction = "B_JapanArmy";
        icon = "iconManAT";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "VSM_MulticamTropic_Camo_SS";

        linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_mk18_wd","rhs_weap_smaw_green","hgun_Rook40_F","Laserdesignator"};
        respawnWeapons[] = {"rhs_weap_mk18_wd","rhs_weap_smaw_green","hgun_Rook40_F","Laserdesignator"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_smaw_HEAA","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_smaw_HEAA","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries"};

        backpack = "VSM_MulticamTropic_Backpack_Kitbag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_wd","","","RKSL_optic_EOT552",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_smaw_green","","","",{"rhs_mag_smaw_HEAA",1},{"rhs_mag_smaw_SR",5},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"SmokeShell",5,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",5,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"HandGrenade",2,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",3,30}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_smaw_SR",1,5},{"rhs_mag_smaw_HEDP",2,1}}},"VSM_MulticamTropic_OPS_2","UK3CB_BAF_G_Tactical_Clear",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

    };

    class B_JapanArmy_Marksman_01 : B_JapanArmy_Anti_Tank_01 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "B_JapanArmy";
        icon = "iconMan";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "VSM_MulticamTropic_Camo_SS";

        linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter"};

        weapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","hgun_Rook40_F","Laserdesignator"};
        respawnWeapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","hgun_Rook40_F","Laserdesignator"};

        magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m80_ball","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_20Rnd_SCAR_762x51_m80_ball","16Rnd_9x21_Mag","Laserbatteries"};
        respawnMagazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m80_ball","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_20Rnd_SCAR_762x51_m80_ball","16Rnd_9x21_Mag","Laserbatteries"};

        backpack = "VSM_MulticamTropic_Backpack_Kitbag";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_LB","","","rhsusf_acc_su230a_mrds_c",{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",20},{},"rhsusf_acc_harris_bipod"},{"rhs_weap_m72a7","","","",{},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"ACE_EntrenchingTool",1}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"SmokeShell",3,1},{"HandGrenade",2,1},{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",4,20},{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",4,20}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",2,20},{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",2,20},{"SmokeShell",3,1},{"rhs_mag_m67",2,1},{"SmokeShellGreen",2,1}}},"VSM_MulticamTropic_OPS_2","UK3CB_BAF_G_Tactical_Clear",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ACE_Altimeter",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

    };

    class B_JapanArmy_M113A3_M2_01 : rhsusf_m113_usarmy_OCimport_02 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3 (M2)";
        side = 1;
        faction = "B_JapanArmy";
        crew = "B_JapanArmy_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_JapanArmy_Section_Leader_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_JapanArmy_Rifleman_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_JapanArmy_Combat_Life_Saver_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class B_JapanArmy_Type_89_MBT_01 : B_NorwayArmy_Leopard_2SG_Woodland_OCimport_02 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type 89 MBT";
        side = 1;
        faction = "B_JapanArmy";
        crew = "B_JapanArmy_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_JapanArmy_Section_Leader_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Indep_02";

    };

    class B_JapanArmy_Type_10_IFV_01 : B_T_AFV_Wheeled_01_cannon_F_OCimport_02 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type 10 (Rooikat 120)";
        side = 1;
        faction = "B_JapanArmy";
        crew = "B_JapanArmy_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_JapanArmy_Section_Leader_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa'];_unit setObjectTextureGlobal [2,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];_unit setObjectTextureGlobal [4,'A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class B_JapanArmy_Type_22_MRAP_01 : UK3CB_BAF_Husky_Passenger_HMG_Green_DPMW_OCimport_02 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type 22 MRAP";
        side = 1;
        faction = "B_JapanArmy";
        crew = "B_JapanArmy_Rifleman_01";

        class Turrets : Turrets {
            class L111A1_1_Turret : L111A1_1_Turret { gunnerType = "B_JapanArmy_LMG_556_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "B_JapanArmy_Section_Leader_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_JapanArmy_Combat_Life_Saver_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\number0_co.paa'];_unit setObjectTextureGlobal [1,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\number0_co.paa'];_unit setObjectTextureGlobal [2,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyCab_green_co.paa'];_unit setObjectTextureGlobal [3,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyFrontEnd_green_co.paa'];_unit setObjectTextureGlobal [4,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyMisc_heavy_green_co.paa'];_unit setObjectTextureGlobal [5,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyRearEnd_green_co.paa'];_unit setObjectTextureGlobal [6,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyUnderside_green_co.paa'];_unit setObjectTextureGlobal [7,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyTyre_green_co.paa'];_unit setObjectTextureGlobal [8,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyDecals_green_ca.paa'];_unit setObjectTextureGlobal [9,'uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskySeats_green_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class B_JapanArmy_OH_6M_01 : B_Heli_Light_01_dynamicLoadout_F_OCimport_02 {
        author = "OLt. FarCry";
        scope = 2;
        scopeCurator = 2;
        displayName = "OH-6M";
        side = 1;
        faction = "B_JapanArmy";
        crew = "B_JapanArmy_Section_Leader_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_JapanArmy_Combat_Life_Saver_01"; };
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

	class RHS_CH_47F;
    class B_JapanArmy_Chinook : RHS_CH_47F {
    	author = "Arend";
        scope = 2;
        scopeCurator = 2;
    	displayName = "CH-47F Chinook";
    	side = 1;
    	faction = "B_JapanArmy";
        crew = "B_JapanArmy_Section_Leader_01";
		typicalCargo[] = {
			"B_JapanArmy_Section_Leader_01"
		};

		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\jparmy\data\textures\ch47_ext_1_co.paa",
			"\x\bnb_e\jparmy\data\textures\ch47_ext_2_co.paa",
			"\x\bnb_e\jparmy\data\textures\ch47f_nalepky_ca.paa",
			"\x\bnb_e\jparmy\data\textures\ch47_ext_mlod_co.paa"
		};

		class TextureSources {
			class JapanStandard {
				displayName="Standard - JSDF";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\jparmy\data\textures\ch47_ext_1_co.paa",
					"\x\bnb_e\jparmy\data\textures\ch47_ext_2_co.paa",
					"\x\bnb_e\jparmy\data\textures\ch47f_nalepky_ca.paa",
					"\x\bnb_e\jparmy\data\textures\ch47_ext_mlod_co.paa"
				};
				factions[] = {
					"B_JapanArmy"
				};
			};
			class JapanDesert {
				displayName="Desert - JSDF";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\jparmy\data\textures\ch47_ext_1_light_co.paa",
					"\x\bnb_e\jparmy\data\textures\ch47_ext_2_light_co.paa",
					"\x\bnb_e\jparmy\data\textures\ch47f_nalepky_ca.paa",
					"\x\bnb_e\jparmy\data\textures\ch47_ext_light_mlod_co.paa"
				};
				factions[] = {
					"B_JapanArmy"
				};
			};
		};
    };

	class RHS_AH64D;
    class B_JapanArmy_AH64D : RHS_AH64D {
    	author = "Arend";
        scope = 2;
        scopeCurator = 2;
    	displayName = "AH-64D Apache";
    	side = 1;
    	faction = "B_JapanArmy";
        crew = "B_JapanArmy_Section_Leader_01";
		typicalCargo[] = {
			"B_JapanArmy_Section_Leader_01"
		};

		hiddenSelectionsTextures[] =
		{
			"\x\bnb_e\jparmy\data\textures\ah64d_body_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
			"\x\bnb_e\jparmy\data\textures\ah64d_alfa_ca.paa"
		};

		class TextureSources {
			class Standard {
				displayName="Standard - JSDF";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\jparmy\data\textures\ah64d_body_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
					"\x\bnb_e\jparmy\data\textures\ah64d_alfa_ca.paa"
				};
				factions[] = {
					"B_JapanArmy"
				};
			};
		};
    };

};
