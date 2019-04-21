if(missionNamespace getVariable ["r0ed_SurvivableCrashes_Initialized", false]) exitWith {};

[	bnb_e_sc_enable,  // Mod Enabled
	true,   //VFX
	true,   //SFX
	true,   // Exag FX
	"AUTO", // Med Sys
	bnb_e_sc_damage,      // dmg Multi
	["Air"],// Veh whitelist
	{},     // On Crash Code
	{},     // crew Post Crash code
	{       // veh post crash code
		params["_veh"];
		sleep (40 + random 40);
		_veh allowDamage true;
		_veh setDamage 1;
	}
] call compile preprocessFileLineNumbers "\r0ed_SurvivableCrashes\functions\init\init_survivableCrashes.sqf";

