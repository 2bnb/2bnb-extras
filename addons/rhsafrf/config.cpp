class CfgPatches {
	class bnb_e_rhsafrf {
		name = "2BNB Extras - Russia (VDV/UN)";
		units[] = {
			"rhs_vdv__un_rifleman",
			"rhs_vdv_un_sergeant"
		};
		weapons[] = {};
		requiredAddons[] = {
			"rhs_c_troops"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"SeeOne"
		};
	};
};

class CfgGroups {
    class EAST {

        class rhs_faction_vdv {
            name = "Russia (VDV)";

            class bnb_e_un_infantry {
                name = "Infantry (EMR/UN)";

                class o_rhsfactionvdv_infantry_vdv_emr_un {
                    name = "Squad";
                    side = 0;
                    faction = "rhs_faction_vdv";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "rhs_vdv_un_sergeant";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "rhs_vdv__un_rifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "rhs_vdv__un_rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "rhs_vdv__un_rifleman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "rhs_vdv__un_rifleman";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "rhs_vdv__un_rifleman";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "rhs_vdv__un_rifleman";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "rhs_vdv__un_rifleman";
                    };
                };

            };

        };

    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class rhs_vdv_LAT;
    class rhs_vdv_LAT_OCimport_01 : rhs_vdv_LAT { scope = 0; class EventHandlers; };
    class rhs_vdv_LAT_OCimport_02 : rhs_vdv_LAT_OCimport_01 { class EventHandlers; };
    class rhs_vdv_un_sergeant : rhs_vdv_LAT_OCimport_02 {
        author = "Vkpl. SeeOne";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sergeant";
        side = 0;
        faction = "rhs_faction_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vdv_emr";

        linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","LOP_H_6B27M_ess_UN","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","LOP_H_6B27M_ess_UN","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_ak74m_pkas","rhs_weap_makarov_pm","Binocular"};
        respawnWeapons[] = {"rhs_weap_ak74m_pkas","rhs_weap_makarov_pm","Binocular"};

        magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x18_8_57N181S"};
        respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x18_8_57N181S"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74m_pkas","rhs_acc_dtk","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_AK",30},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"rhs_uniform_vdv_emr",{{"FirstAidKit",1},{"rhs_1PN138",1},{"ACE_EarPlugs",1},{"rhs_30Rnd_545x39_7N10_AK",1,30}}},{"rhs_6b23_digi_6sh92_headset_mapcase",{{"rhs_30Rnd_545x39_7N10_AK",6,30},{"rhs_mag_9x18_8_57N181S",1,8},{"rhs_mag_rdg2_white",2,1},{"rhs_mag_rgn",2,1}}},{},"LOP_H_6B27M_ess_UN","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class rhs_infantry_vdv_base;
    class rhs_infantry_vdv_base_OCimport_01 : rhs_infantry_vdv_base { scope = 0; class EventHandlers; };
    class rhs_infantry_vdv_base_OCimport_02 : rhs_infantry_vdv_base_OCimport_01 { class EventHandlers; };
    class rhs_vdv__un_rifleman : rhs_infantry_vdv_base_OCimport_02 {
        author = "Vkpl. SeeOne";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "rhs_faction_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vdv_emr";

        linkedItems[] = {"rhs_6b23_digi_6sh92","LOP_H_6B27M_ess_UN","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b23_digi_6sh92","LOP_H_6B27M_ess_UN","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_ak74m_dtk"};
        respawnWeapons[] = {"rhs_weap_ak74m_dtk"};

        magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};
        respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74m_dtk","rhs_acc_dtk","","",{"rhs_30Rnd_545x39_7N10_AK",30},{},""},{},{},{"rhs_uniform_vdv_emr",{{"FirstAidKit",1},{"rhs_30Rnd_545x39_7N10_AK",2,30},{"rhs_mag_rgn",1,1}}},{"rhs_6b23_digi_6sh92",{{"rhs_30Rnd_545x39_7N10_AK",5,30},{"rhs_mag_rgn",1,1}}},{},"LOP_H_6B27M_ess_UN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };


};
