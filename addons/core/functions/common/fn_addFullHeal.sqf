/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addFullHeal

Description:
	Adds a custom ACE "Full Heal" interaction to the object in question.

	WARNING: This function is NOT Global!

Parameters:
	0: _objects - single or multiple objects to apply the fullheal to
		<OBJECT|ARRAY>

Returns:
	Nothing

Examples:
	[] call bnb_e_core_fnc_addFullHeal;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_objects", objNull, [objNull, []]]];

if (_objects isEqualTo objNull || _objects isEqualTo []) exitWith {
	[format["Failed to apply Full Heal interaction: No object given! %1", _objects], "core\functions\common\fn_addFullHeal.sqf"] call bnb_e_core_fnc_log;
};

if (typeName _objects isEqualTo "OBJECT") then {
	_objects = [_objects];
};

private _action = [];

{
	_object = _x;

	if ({(_x select 0) select 0 isEqualTo "bnb_e_fullHeal"} count (_object getVariable ["ace_interact_menu_actions", []]) == 0) then {
		_action = [
			"bnb_e_fullHeal",
			"Full Heal",
			"x\bnb_e\core\red-cross.paa",
			{[player, player] call ace_medical_treatment_fnc_fullHeal;},
			{true}
		] call ace_interact_menu_fnc_createAction;

		if !(_action isEqualTo []) then {
			[_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
			[format["Added full heal interaction to %1. Action: %2", _object, _action], "core\functions\common\fn_addFullHeal.sqf"] call bnb_e_core_fnc_log;
		};
	};
} foreach _objects;
