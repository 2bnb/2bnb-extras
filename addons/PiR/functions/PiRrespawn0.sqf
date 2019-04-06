params ["_unit"];
if !(local _unit) exitWith {};
[{
params ["_unit"];

IF !(PiR_captive_on) then {
[ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
};

_unit setVariable ["dam_ignore_injured0",false,true];

IF  ((({"FirstAidKit" == _x} count (itemCargo _unit)) > 0) or (({"Medikit" == _x} count (itemCargo _unit)) > 0)) then {
 _numberOfKits = {"FirstAidKit" == _x} count (itemCargo _unit);

	IF (_numberOfKits > 0) then {
	 _numberOfItems = itemCargo _unit;
	 _numberOfItems = _numberOfItems - ["FirstAidKit"]; 
	 [_unit, "FirstAidKit"] remoteExec ["removeItems", 0];
	 clearItemCargoGlobal _unit;
		{_unit addItemCargoGlobal [_x, 1]} forEach _numberOfItems;
	 _unit addItemCargoGlobal ["PiR_bint", _numberOfKits]; 
		for "_i" from 1 to _numberOfKits do { _unit addItem "PiR_bint"};
	};

	 _numberOfKits = {"Medikit" == _x} count (itemCargo _unit);

	IF (_numberOfKits > 0) then {
	 _numberOfItems = itemCargo _unit;
	 _numberOfItems = _numberOfItems - ["Medikit"]; 
	 [_unit, "Medikit"] remoteExec ["removeItems", 0];
	 clearItemCargoGlobal _unit;
		{_unit addItemCargoGlobal [_x, 1]} forEach _numberOfItems;
	 _unit addItemCargoGlobal ["PiR_apteka", _numberOfKits]; 
		for "_i" from 1 to _numberOfKits do { _unit addItem "PiR_apteka"};
	};
};	

PIR0jipId = [_unit, {
_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
_this setVariable ["hitPartEhId", _ehId];
}] remoteExec ["call", 0, true];

}, [_unit], 1] call CBA_fnc_waitAndExecute;