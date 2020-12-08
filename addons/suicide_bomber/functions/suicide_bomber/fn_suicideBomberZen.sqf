_bomber = param[0,objNull];

if ([_bomber] call fox_suicide_bomber_fnc_checkBomber) exitWith {};

_sounds = getArray(configFile >> "fox_suicice_bomber_settings" >> "sounds");

if (!isNil("fox_suicice_bomber_customSounds")) then {
	diag_log format[">>>[FOX] Suicice Bomber: Adding custom sounds: %1",str fox_suicice_bomber_customSounds];
	_sounds append fox_suicice_bomber_customSounds;
};

_r = floor random count _sounds;
[
	"Suicide Bomber",
	[
		["COMBO", "Sound", [_sounds, _sounds, _r]],
		["SIDES", "Side to Target", west],
		["SLIDER", "Search radius", [0, 500, 25, 0]],
		["CHECKBOX", "Fake Bomber", false],
		["CHECKBOX", "Only Deadman switch", false]
	],
	{
		(_this select 0) params ["_sound","_side","_radius","_isFakeBomber","_isOnlyDeadmanSwitch"];
		_bomber = (_this select 1) select 0;

		_params = [_side,["LandVehicle","Man","Tank"], _radius];
		diag_log format["FN ARES: %1",str _this];
		if (_isFakeBomber) then {
				[_bomber] call fox_suicide_bomber_fnc_enableFakeBomber;
		};

		if (_isOnlyDeadmanSwitch) then {
				[_bomber] call fox_suicide_bomber_fnc_setDeadmanSwitchOnly;
		};

		[_bomber, _sound] call fox_suicide_bomber_fnc_setCustomSound;
		[_bomber,_params] call fox_suicide_bomber_fnc_setupBomber;
	}, {}, [_bomber]
] call zen_dialog_fnc_create;
