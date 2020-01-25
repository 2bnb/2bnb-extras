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

	#include "VehiclesWoodland.hpp"
	#include "VehiclesDesert.hpp"
	#include "VehiclesArctic.hpp"
};
