[	bnb_e_sc_enable,
	true,
	true,
	true,
	"ACE",
	bnb_e_sc_damage,
	call compile (bnb_e_sc_vehicles),
	{},     // On Crash Code
	{},     // crew Post Crash code
	{       // veh post crash code
		params["_veh"];
		sleep (40 + random 40);
		_veh allowDamage true;
		_veh setDamage 1;
	}
] call compile preprocessFileLineNumbers "\r0ed_SurvivableCrashes\functions\init\init_survivableCrashes.sqf";

