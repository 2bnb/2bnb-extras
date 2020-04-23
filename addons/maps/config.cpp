class CfgPatches {
	class bnb_e_maps {
		name = "2BNB Extras - Maps";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"CUP_Chernarus_Winter_Config"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Arend"
		};
	};
};

class CfgWorlds {
	class CAWorld;
	// Find the classnames in the `altis_map.pbo` file
	// For other maps, look in the same place but for the  respective mmap
	// See: https://github.com/2bnb/2bnb-extras/wiki/Renaming-Map-Locations
	#include "chernarus_winter.hpp";
	#include "altis.hpp";
};
