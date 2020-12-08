[] spawn {

	if (
		hasInterface
		AND (isClass (configFile >> "CfgPatches" >> "zen_dialog"))
	) then {
		waituntil {!isnil "bis_fnc_init"};
		waitUntil {(count allCurators) > 0};
		waitUntil {sleep 2; count (allCurators select {!isNull getassignedcuratorunit _x}) > 0};

		_cat = "[FOX] Suicide Bomber";
		// ZEN is loaded, register the custom module.
		[_cat, "Suicide Bomber", {

			[(_this select 1)] call bnb_ex_suicide_bomber_fnc_suicideBomberZen;

		}] call zen_custom_modules_fnc_register;

		[_cat, "Carbomb", {

			if( (isNull (_this select 1) ) || !((_this select 1) isKindOf "Car") )exitWith {
				'Invalid object' call fox_suicide_bomber_fnc_curatorMessage;
			};

			if( (_this select 1) getVariable["fox_suicide_bomber_carbombActive",false] )exitWith {
				'Carbomb already assigned' call fox_suicide_bomber_fnc_curatorMessage;
			};
			'Carbomb assigned' call fox_suicide_bomber_fnc_curatorMessage;
			[(_this select 1)] remoteExec["fox_suicide_bomber_fnc_setupCarbomb",2];

		}] call zen_custom_modules_fnc_register;


		[_cat, "Carbomb KI", {
			params [["_position", [0,0,0], [[]], 3], ["_unit", objNull, [objNull]]];

			if (isNull _unit) exitWith {
				'No Unit Selected' call fox_suicide_bomber_fnc_curatorMessage;
			};

			_vehicles = nearestObjects [_unit, ["Car"], 30];
			_names = [];

			{
				if (alive _x) then {
					_text = getText (configFile >> "CfgVehicles" >> typeOf _x >> "displayname");
					_names pushBack (format["%1 (%2m)", _text, round (_unit distance _x)]);
				};
			} forEach _vehicles;
			[format["Pre-Carbomb KI: %1 %2 %3 %4", _this, _position, _unit, _vehicles], "suicide_bomber\XEH_postInit.sqf"] call bnb_es_core_fnc_log;

			if (count _vehicles == 0) exitWith {
				'No Cars found nearby' call fox_suicide_bomber_fnc_curatorMessage;
			};

			[
				"Carbomb KI",
				[
					["LIST", "Vehicle", [_vehicles, _names, 0]]
				],
				{
					private _vehicle = (_this select 0) select 0;
					private _unit = (_this select 1) select 0;
					[format["Carbomb KI: %1 %2 %3", _this, _vehicle, _unit], "suicide_bomber\XEH_postInit.sqf"] call bnb_es_core_fnc_log;
					[_vehicle,_unit] call fox_suicide_bomber_fnc_carbombRemoteAI;
				}, {}, [_unit]
			] call zen_dialog_fnc_create;

		}] call zen_custom_modules_fnc_register;

		[_cat, "Remote IED", {
			[format["Remote IED: %1", _this], "suicide_bomber\XEH_postInit.sqf"] call bnb_es_core_fnc_log;
			[(_this select 1)] call bnb_ex_suicide_bomber_fnc_aiRemoteIEDZen;

		}] call zen_custom_modules_fnc_register;
	};
};
