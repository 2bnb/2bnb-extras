/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_addFullHeal

Description:
	Adds a custom ACE "Full Heal" interaction to the object in question.

	WARNING: This function is NOT Global!

Parameters:
	0: _objects - single or multiple objects to apply the arsenal to
		<OBJECT|ARRAY>

Returns:
	Nothing

Examples:
	[] call bnb_e_core_fnc_addFullHeal;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_objects", objNull, [objNull, []]]];

if (_objects isEqualTo []) exitWith {
	["Failed to apply Full Heal interaction: No object given! %1", _objects] call bnb_e_core_fnc_log;
};

if (_objects isEqualTo objNull) then {
	_objects = this;
};

if (typeName _objects != "ARRAY") then {
	_objects = [_objects];
};

if (isNil "bnb_e_EHIDs") then {
	bnb_e_EHIDs = [];
};

private _action = [];
{
	_object = _x;
	if (isMultiplayer && ({_object in _x} count bnb_e_EHIDs) == 0) then {
		_id = ["bnb_e_event_addFullHeal", [_object]] call CBA_fnc_globalEventJIP;
		[_id, _object] call CBA_fnc_removeGlobalEventJIP;
		[format["Object: %1, EHIDs: %2", _object, bnb_e_EHIDs]] call bnb_e_core_fnc_log;

		bnb_e_EHIDs pushBack [_id, _object];
		publicVariable "bnb_e_EHIDs";
		[format["Event ""bnb_e_event_addFullHeal"":%1 raised for %2", _id, _object], "core\functions\common\fn_addFulleHeal.sqf"] call bnb_e_core_fnc_log;
	};

	if ({(_x select 0) select 0 isEqualTo "bnb_e_fullHeal"} count (_object getVariable ["ace_interact_menu_actions", []]) == 0) then {
		_action = [
			"bnb_e_fullHeal",
			"Full Heal",
			"z\ace\addons\medical\ui\icons\medical_crossRed.paa",
			{[player, player] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;},
			{true},
			{},
			[],
			[0,0,0],
			100
		] call ace_interact_menu_fnc_createAction;

		// [_object, 0, ["ACE_MainActions"], _action] remoteExec ["ace_interact_menu_fnc_addActionToObject"];
		[_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
		[format["Added full heal interaction to %1. Action: %2", _object, _action], "core\functions\common\fn_addFulleHeal.sqf"] call bnb_e_core_fnc_log;
	};
} foreach _objects;
