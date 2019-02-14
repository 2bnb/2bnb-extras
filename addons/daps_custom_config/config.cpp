class CfgPatches {
	// You can edit this class name to whatever you like. Author and name too, but don't change the other stuff
	class DrongosAPScustom {
		author = "Drongo";
		name = "Drongo's APS Custom";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"CBA_main","DrongosAPS"};
	};
};

class Extended_PostInit_EventHandlers {
	dapscInit = "execVM '\daps_custom_config\Start.sqf'";
};
