class CBA_Extended_EventHandlers_base;

#define VEHICLE_INVENTORY_RESET \
class TransportMagazines {}; \
class TransportWeapons {}; \
class TransportItems {}; \
class TransportBackpacks {};

////////////////////////////////
// Standard Vehicle inventory //
////////////////////////////////
#define VEHICLE_MAGAZINES \
class _xx_hlc_30rnd_556x45_SPR_PMAG { \
	magazine = "hlc_30rnd_556x45_SPR_PMAG"; \
	count = 15; \
}; \
class _xx_rhsusf_m112_mag { \
	magazine = "rhsusf_m112_mag"; \
	count = 3; \
};

#define VEHICLE_WEAPONS \
class _xx_hlc_rifle_416D10C { \
	weapon = "hlc_rifle_416D10C"; \
	count = 3; \
}; \
class _xx_rhs_weap_m72a7 { \
	weapon = "rhs_weap_m72a7"; \
	count = 1; \
};

#define VEHICLE_ITEMS \
class _xx_ACE_elasticBandage { \
	name = "ACE_elasticBandage"; \
	count = 15; \
}; \
class _xx_ACE_packingBandage { \
	name = "ACE_packingBandage"; \
	count = 15; \
}; \
class _xx_ACE_epinephrine { \
	name = "ACE_epinephrine"; \
	count = 10; \
}; \
class _xx_ACE_morphine { \
	name = "ACE_morphine"; \
	count = 10; \
}; \
class _xx_ACE_adenosine { \
	name = "ACE_adenosine"; \
	count = 10; \
}; \
class _xx_ACE_tourniquet { \
	name = "ACE_tourniquet"; \
	count = 10; \
}; \
class _xx_ACE_EarPlugs { \
	name = "ACE_EarPlugs"; \
	count = 5; \
};

#define VEHICLE_BACKPACKS

////////////////////////////////
// Armoured Vehicle inventory //
////////////////////////////////
#define ARMOURED_VEHICLE_MAGAZINES \
VEHICLE_MAGAZINES \
class _xx_rhs_fim92_mag { \
	magazine = "rhs_fim92_mag"; \
	count = 3; \
};

#define ARMOURED_VEHICLE_WEAPONS \
VEHICLE_WEAPONS \
class _xx_rhs_weap_fim92 { \
	weapon = "rhs_weap_fim92"; \
	count = 1; \
};

#define ARMOURED_VEHICLE_ITEMS VEHICLE_ITEMS

#define ARMOURED_VEHICLE_BACKPACKS \
class _xx_B_NorwayArmy_Toolkit_Backpack { \
	backpack = "B_NorwayArmy_Toolkit_Backpack"; \
	count = 1; \
};

////////////////////////
// Aviation inventory //
////////////////////////
#define AIR_VEHICLE_MAGAZINES VEHICLE_MAGAZINES

#define AIR_VEHICLE_WEAPONS VEHICLE_WEAPONS \
class _xx_rhs_weap_m72a7 { \
	weapon = "rhs_weap_m72a7"; \
	count = 0; \
};

#define AIR_VEHICLE_ITEMS VEHICLE_ITEMS

#define AIR_VEHICLE_BACKPACKS \
class _xx_B_NorwayArmy_Survival_Backpack { \
	backpack = "B_NorwayArmy_Survival_Backpack"; \
	count = 1; \
};


///////////////
// CV90 Ammo //
///////////////
class CfgAmmo {
	class rhs_ammo_3uor6;
	class B_NorwayArmy_30mm_MP_Tracer_Yellow : rhs_ammo_3uor6 {
		indirectHit = 8;
		indirectHitRange = 2;
		displayName = "HEI-T";
	};
};

class CfgMagazines {
	class rhs_mag_3uor6_125;
	class B_NorwayArmy_80Rnd_30mm_MP_shells_Tracer_Yellow : rhs_mag_3uor6_125 {
		ammo = "B_NorwayArmy_30mm_MP_Tracer_Yellow";
		displayName = "MP-T";
		displayNameShort = "MP-T";
		count = 80;
	};

	class 200Rnd_762x51_Belt;
	class B_NorwayArmy_200rnd_762_fnmag_coax : 200Rnd_762x51_Belt {
		displayName = "200rnd 762x51";
		ammo = "B_762x51_Ball";
		count = 200;
	};
};

/////////////////
// CV90 Cannon //
/////////////////
class CfgWeapons {
	class player;
	class MGun;

	class autocannon_30mm;
	class B_NorwayArmy_30mm_bushmastermk2 : autocannon_30mm {
		class player : player {
			reloadTime = 0.3;
		};
		muzzles[] = {"this"};
		displayName = "Bushmaster II";
		// magazineWell[] = {"RHS_AutoCannon_30mm_2A42_AP","RHS_AutoCannon_30mm_2A42_AP","B_NorwayArmy_AutoCannon_30mm_2A42_HE"};
		magazines[] = {
			"60Rnd_30mm_APFSDS_shells",
			"60Rnd_30mm_APFSDS_shells_Tracer_Red",
			"60Rnd_30mm_APFSDS_shells_Tracer_Green",
			"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
			"B_NorwayArmy_80Rnd_30mm_MP_shells_Tracer_Yellow"
		};
		magazineReloadTime = 4;
	};

	class LMG_coax;
	class B_NorwayArmy_fnmag_coax : LMG_coax {
		class manual : MGun {
			reloadTime = 0.115;
		};
		displayName = "FN MAG Coaxial";
		magazines[] = {"B_NorwayArmy_200rnd_762_fnmag_coax"};
		//magazineReloadTime = 8 ;
	};
};


class CfgVehicles {
	////////////////
	// Units Base //
	////////////////
	class B_Soldier_F;
	class B_Soldier_F_OCimport_01 : B_Soldier_F { scope = 0; class EventHandlers; };
	class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 { class EventHandlers; };

	class B_NorwayArmy_Man : B_Soldier_F_OCimport_02 {
		author = "Arend";
		scope = 0;
		scopeCurator = 2;
		side = 1;

		genericNames="norwegian_names";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
			class BNB_E_Optics {
				init = "
					if (local (_this select 0)) then {
						_onSpawn = {
							_this = _this select 0;
							_weaponItems = (configfile >> 'cfgvehicles' >> (typeof _this) >> 'bnb_e_weaponItems') call BIS_fnc_getCfgDataArray;
							sleep 0.2;
							{
								_this addPrimaryWeaponItem _x;
							} foreach _weaponItems;
						};
						[(_this select 0)] spawn _onSpawn;
					};";
			};
		};
	};

	class B_mas_nor_Kitbag_d;
	class B_NorwayArmy_Toolkit_Backpack : B_mas_nor_Kitbag_d {
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;

		class TransportMagazines {};

		class TransportItems {
			class _xx_Toolkit {
				name = "ToolKit";
				count = 1;
			};

			class _xx_ACE_Clacker {
				name = "ACE_Clacker";
				count = 1;
			};
		};
	};

	class B_mas_nor_Kitbag_d;
	class B_NorwayArmy_Survival_Backpack : B_mas_nor_Kitbag_d {
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		displayName = "Survival Kit";

		class TransportMagazines {};

		class TransportItems {
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 15;
			};

			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 15;
			};

			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 2;
			};

			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 4;
			};

			class _xx_ACE_adenosine {
				name = "ACE_adenosine";
				count = 2;
			};

			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 2;
			};

			class _xx_ACE_plasmaIV_250 {
				name = "ACE_plasmaIV_250";
				count = 4;
			};

			class _xx_ACE_surgicalKit {
				name = "ACE_surgicalKit";
				count = 1;
			};

			class _xx_ACE_IR_Strobe_Item {
				name = "ACE_IR_Strobe_Item";
				count = 1;
			};

			class _xx_Chemlight_green {
				name = "Chemlight_green";
				count = 4;
			};
		};
	};

	//////////////////
	// Leopard Base //
	//////////////////
	class I_MBT_03_cannon_F;
	class B_NorwayArmy_Leopard : I_MBT_03_cannon_F {
		author = "Arend";
		scope = 0;
		side = 1;

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Hull.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Main_Turret.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Com_Turret.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Hull.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Main_Turret.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Com_Turret.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayArctic {
				displayName="Norway (Arctic)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Hull.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Main_Turret.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Woodland_Com_Turret.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Arctic_Camonet.paa"
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayKompis {
				displayName="Norway (Kompis)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Leopard_Kompis_Hull.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Kompis_Main_Turret.paa",
					"\x\bnb_e\bnorway\data\textures\Leopard_Kompis_Com_Turret.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	///////////////
	// CV90 Base //
	///////////////
	class Tank;
	class Tank_F: Tank {
		class Turrets;
	};
	class APC_Tracked_03_base_F: Tank_F {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class I_APC_tracked_03_base_F: APC_Tracked_03_base_F {};
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F {};

	class B_NorwayArmy_CV90 : I_APC_tracked_03_cannon_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		vehicleClass = "rhs_vehclass_ifv";
		editorSubcategory = "rhs_EdSubcat_ifv";

		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[]={"B_NorwayArmy_30mm_bushmastermk2","B_NorwayArmy_fnmag_coax"};
				magazines[]= {
					"B_NorwayArmy_80Rnd_30mm_MP_shells_Tracer_Yellow",
					"B_NorwayArmy_80Rnd_30mm_MP_shells_Tracer_Yellow",
					"B_NorwayArmy_80Rnd_30mm_MP_shells_Tracer_Yellow",
					"B_NorwayArmy_80Rnd_30mm_MP_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"B_NorwayArmy_200rnd_762_fnmag_coax",
					"B_NorwayArmy_200rnd_762_fnmag_coax",
					"B_NorwayArmy_200rnd_762_fnmag_coax",
					"B_NorwayArmy_200rnd_762_fnmag_coax",
					"B_NorwayArmy_200rnd_762_fnmag_coax",
					"B_NorwayArmy_200rnd_762_fnmag_coax",
					"B_NorwayArmy_200rnd_762_fnmag_coax",
					"B_NorwayArmy_200rnd_762_fnmag_coax"
				};
			};
		};

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Turret.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Hull.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayArctic {
				displayName="Norway (Arctic)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Thor
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret_Thor.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull_Thor.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Turret_Thor.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Hull_Thor.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayThorArctic {
				displayName="Norway (Arctic) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret_Thor.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Odin
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret_Odin.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull_Odin.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Turret_Odin.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Hull_Odin.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayOdinArctic {
				displayName="Norway (Arctic) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret_Odin.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret_Mjolnir.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull_Mjolnir.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Turret_Mjolnir.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Hull_Mjolnir.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayMjolnirArctic {
				displayName="Norway (Arctic) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret_Mjolnir.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret_Heimdall.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull_Heimdall.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Turret_Heimdall.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Hull_Heimdall.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayHeimdallArctic {
				displayName="Norway (Arctic) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Turret_Heimdall.paa", // Turret
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Hull_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_e\bnorway\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	/////////////////
	// Scania Base //
	/////////////////
	class I_Truck_02_transport_F;
	class B_NorwayArmy_Scania : I_Truck_02_transport_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania";
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory = "rhs_EdSubcat_truck";

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Canopy.paa", // Canopy
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Canopy.paa", // Canopy
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	class I_Truck_02_covered_F;
	class B_NorwayArmy_Scania_Covered : I_Truck_02_covered_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania (Covered)";
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory = "rhs_EdSubcat_truck";

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Canopy.paa", // Canopy
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Canopy.paa", // Canopy
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	class I_Truck_02_fuel_F;
	class B_NorwayArmy_Scania_Fuel : I_Truck_02_fuel_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania (Fuel)";
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory = "rhs_EdSubcat_truck";

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Fuel.paa", // Fuel Cistern
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Fuel.paa", // Fuel Cistern
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	class I_Truck_02_box_F;
	class B_NorwayArmy_Scania_Utility : I_Truck_02_box_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania (Utility)";
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory = "rhs_EdSubcat_truck";
		ace_rearm_defaultSupply = 1200;
		ace_repair_canRepair = 1;

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Utility.paa", // Canopy
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Utility.paa", // Canopy
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS
		};
	};


	class I_Truck_02_medical_F;
	class B_NorwayArmy_Scania_Medical : I_Truck_02_medical_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania (Medical)";
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory = "rhs_EdSubcat_truck";

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Woodland_Canopy.paa", // Canopy
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_e\bnorway\data\textures\Scania_Desert_Canopy.paa", // Canopy
					"\x\bnb_e\bnorway\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
				count = 10;
			};
			class _xx_ACE_salineIV_500 {
				name = "ACE_salineIV_500";
				count = 10;
			};
			class _xx_ACE_salineIV_250 {
				name = "ACE_salineIV_250";
				count = 10;
			};
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 50;
			};
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 50;
			};
			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 50;
			};
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 10;
			};
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 30;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 30;
			};
			class _xx_ACE_adenosine {
				name = "ACE_adenosine";
				count = 30;
			};
			class _xx_ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 10;
			};
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS
		};
	};

	////////////////////
	// C130J Hercules //
	////////////////////
	class RHS_C130J;
	class B_NorwayArmy_C130J : RHS_C130J {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "C-130J Hercules";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"};

		hiddenSelectionsTextures[] = {
			"\x\bnb_e\bnorway\data\textures\C130J_Fuselage.paa", // Fuselage
			"\x\bnb_e\bnorway\data\textures\C130J_Wings.paa" // Wings
		};

		class TextureSources {
			class NorwayStandard {
				displayName="Norway (Standard)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\C130J_Fuselage.paa", // Fuselage
					"\x\bnb_e\bnorway\data\textures\C130J_Wings.paa" // Wings
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
			class _xx_B_Parachute {
				backpack = "B_Parachute";
				count = 25;
			};
		};
	};

	class RHS_C130J_Cargo;
	class B_NorwayArmy_C130J_Cargo : RHS_C130J_Cargo {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "C-130J Hercules (Cargo)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"};

		hiddenSelectionsTextures[] = {
			"\x\bnb_e\bnorway\data\textures\C130J_Fuselage.paa", // Fuselage
			"\x\bnb_e\bnorway\data\textures\C130J_Wings.paa" // Wings
		};

		class TextureSources {
			class NorwayStandard {
				displayName="Norway (Standard)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\C130J_Fuselage.paa", // Fuselage
					"\x\bnb_e\bnorway\data\textures\C130J_Wings.paa" // Wings
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
			class _xx_B_Parachute {
				backpack = "B_Parachute";
				count = 25;
			};
		};
	};

	//////////////
	// Bell 412 //
	//////////////
	class RHS_UH1Y_UNARMED;
	class B_NorwayArmy_Bell412 : RHS_UH1Y_UNARMED {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Bell 412 (Transport)";
		weapons[] = {"rhsusf_weap_CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};

		hiddenselectionstextures[] = {
			"\x\bnb_e\bnorway\data\textures\Bell412_Fuselage.paa", // Fuselage
			"\x\bnb_e\bnorway\data\textures\Bell412_Interior.paa" // Interior
		};
		hiddenselectionsmaterials[] = {"\x\bnb_e\bnorway\data\textures\Bell412_Fuselage.rvmat"};

		class TextureSources {
			class NorwayStandard {
				displayName="Norway (Standard)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Bell412_Fuselage.paa", // Fuselage
					"\x\bnb_e\bnorway\data\textures\Bell412_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	class RHS_UH1Y_d;
	class B_NorwayArmy_Bell412_Armed : RHS_UH1Y_d {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Bell 412 (Armed)";

		hiddenselectionstextures[] = {
			"\x\bnb_e\bnorway\data\textures\Bell412_Fuselage.paa", // Fuselage
			"\x\bnb_e\bnorway\data\textures\Bell412_Interior.paa" // Interior
		};
		hiddenselectionsmaterials[] = {"\x\bnb_e\bnorway\data\textures\Bell412_Fuselage.rvmat"};

		class TextureSources {
			class NorwayStandard {
				displayName="Norway (Standard)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\Bell412_Fuselage.paa", // Fuselage
					"\x\bnb_e\bnorway\data\textures\Bell412_Interior.paa" // Interior
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	//////////
	// M113 //
	//////////
	class Tank_F;
	class APC_Tracked_02_base_F : Tank_F {
		class AnimationSources;
	};

	class rhsusf_m113tank_base : APC_Tracked_02_base_F {
		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide;
		};
	};
	class rhsusf_m113_usarmy : rhsusf_m113tank_base {};
	class rhsusf_m113_usarmy_supply : rhsusf_m113_usarmy {};
	class rhsusf_m113_usarmy_unarmed : rhsusf_m113tank_base {};
	class rhsusf_m113_usarmy_medical : rhsusf_m113_usarmy_unarmed {};

	class B_NorwayArmy_M113 : rhsusf_m113_usarmy_unarmed {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "M113";
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide : IFF_Panels_Hide {
				initPhase = 1;
			};
		};

		class TextureSources {
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Light.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Light.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Thor
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Light_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Light_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Odin
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Light_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Light_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Light_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Light_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Light_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Light_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	class B_NorwayArmy_M113_M2 : rhsusf_m113_usarmy_supply {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "M113 (M2)";
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide : IFF_Panels_Hide {
				initPhase = 1;
			};
		};

		class TextureSources {
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Thor
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Odin
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	class B_NorwayArmy_M113_Medical : rhsusf_m113_usarmy_medical {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "M113 (Medical)";
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide : IFF_Panels_Hide {
				initPhase = 1;
			};
		};

		class TextureSources {
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Medical_Hull.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Medical_Hull.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Thor
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Medical_Hull_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Medical_Hull_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Odin
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Medical_Hull_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Medical_Hull_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Medical_Hull_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Medical_Hull_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Medical_Hull_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Medical_Hull_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	class B_NorwayArmy_M113_M2_Shield : rhsusf_m113_usarmy {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "M113 (M2 Shield)";
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide : IFF_Panels_Hide {
				initPhase = 1;
			};
		};

		class TextureSources {
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa", // Gun Mount
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Shield.paa" // Turret Shield
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa", // Gun Mount
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Shield.paa" // Turret Shield
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Thor
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Thor.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Odin
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Odin.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Mjolnir.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Hull_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
			};
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Hull_Heimdall.paa", // Hull
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_e\bnorway\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"B_NorwayArmy_Woodland",
					"B_NorwayArmy_Desert",
					"B_NorwayArmy_Arctic"
				};
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
	};

	#include "VehiclesArctic.hpp"
	#include "VehiclesDesert.hpp"
	#include "VehiclesMulticam.hpp"
	#include "VehiclesWoodland.hpp"
};
