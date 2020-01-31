class CBA_Extended_EventHandlers_base;

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
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag {
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 15;
			};
		};

		class TransportWeapons {
			class _xx_rhs_weap_hk416d10 {
				weapon = "rhs_weap_hk416d10";
				count = 3;
			};
			class _xx_rhs_weap_m72a7 {
				weapon = "rhs_weap_m72a7";
				count = 1;
			};
		};

		class TransportItems {
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 15;
			};
			class _xx_ACE_EarPlugs {
				name = "ACE_EarPlugs";
				count = 5;
			};
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 15;
			};
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 10;
			};
		};
	};

	#include "VehiclesWoodland.hpp"
	#include "VehiclesDesert.hpp"
	#include "VehiclesArctic.hpp"
};
