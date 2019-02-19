["2BNB Modules", "Add Contaminated Area",
{
	// Array of position AGLS, ObjNull or the object under the module as it's placed
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	[_position,_objectUnderCursor] call bnb_e_core_fnc_zeusAddContamAreaDialog;

	// Log the parameters
	systemChat str _position;
	systemChat str _objectUnderCursor;
}] call Ares_fnc_RegisterCustomModule;
