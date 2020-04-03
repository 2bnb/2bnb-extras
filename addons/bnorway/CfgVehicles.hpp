class CBA_Extended_EventHandlers_base;
// Standard Vehicle inventory
#define VEHICLE_MAGAZINES \
class _xx_hlc_30rnd_556x45_SPR_PMAG { \
	magazine = "hlc_30rnd_556x45_SPR_PMAG"; \
	count = 15; \
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

#define VEHICLE_TOOLKIT_BACKPACK \
class _xx_B_NorwayArmy_Tookit_Backpack { \
	name = "B_NorwayArmy_Tookit_Backpack"; \
	count = 1; \
};


class CfgVehicles {

	class B_Soldier_F;
	class B_Soldier_F_OCimport_01 : B_Soldier_F { scope = 0; class EventHandlers; };
	class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 { class EventHandlers; };

	class B_NorwayArmy_Man : B_Soldier_F_OCimport_02 {
		author = "Capt. Arend";
		scope = 0;
		scopeCurator = 2;
		side = 1;

		genericNames="norwegian_names";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};
	};

	class B_mas_nor_Kitbag_d;
	class B_NorwayArmy_Toolkit_Backpack : B_mas_nor_Kitbag_d {
		class TransportItems {
			class _xx_Toolkit {
				name = "ToolKit";
				count = 1;
			};
		};
	};

	class I_MBT_03_cannon_F;
	class B_NorwayArmy_Leopard : I_MBT_03_cannon_F {
		author = "Arend";
		scope = 0;
		side = 1;

		class EventHandlers;
		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway Woodland";
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
				displayName="Norway Desert";
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
				displayName="Norway Arctic";
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
				displayName="Norway Kompis";
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
		VEHICLE_MAGAZINES
		class _xx_rhs_fim92_mag {
			weapon = "rhs_fim92_mag";
			count = 3;
		};
	};

	class TransportWeapons {
		VEHICLE_WEAPONS
		class _xx_rhs_weap_fim92 {
			weapon = "rhs_weap_fim92";
			count = 1;
		};
	};

		class TransportItems {
			VEHICLE_ITEMS
		};

		class TransportBackpacks {
			VEHICLE_TOOLKIT_BACKPACK
		};
	};

	#include "VehiclesArctic.hpp"
	#include "VehiclesDesert.hpp"
	#include "VehiclesMulticam.hpp"
	#include "VehiclesWoodland.hpp"
};
