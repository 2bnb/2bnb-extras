params ["_unit", "_a", "_veh"];

if(hasInterface) then {
	if(_unit == player) then {
		[_veh] call r0ed_SurvivableCrashes_VehicleInit;
	};
} else {
	[_veh] call r0ed_SurvivableCrashes_VehicleInit;
};