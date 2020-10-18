class CfgPatches {
	class bnb_ex_maps {
		name = "2BNB Extras - Maps";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"vt7"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Arend",
			"Warlords"
		};
	};
};

class CfgWorlds {
	class CAWorld;
	// Find the classnames in the `altis_map.pbo` file
	// For other maps, look in the same place but for the  respective mmap
	// See: https://github.com/2bnb/2bnb-extras/wiki/Renaming-Map-Locations
	#include "altis.hpp"
};

#include "vt7_china.hpp"
