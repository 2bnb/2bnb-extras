if (!isServer) exitWith {};
	 
params ["_unitP", "_numberOfKits", "_numberOfKitsU", "_numberOfKitsV", "_numberOfKitsB", "_numberOfItems", "_units"];

//Добавляем  юнитам отслеживание попадания
_units = [];
{
_units pushBack _x;

_unitP = _x;

IF  (PiR_injuriplayer_on) then {

 _numberOfKits = {"FirstAidKit" == _x} count (itemCargo _unitP);

	IF (_numberOfKits > 0) then {
	
		IF  (_unitP isKindOf "Man") then {
		 _numberOfKitsU = {"FirstAidKit" == _x} count (uniformItems _unitP);
		 _numberOfKitsV = {"FirstAidKit" == _x} count (vestItems _unitP);
		 _numberOfKitsB = {"FirstAidKit" == _x} count (backpackItems _unitP);

		 [_unitP, "FirstAidKit"] remoteExec ["removeItems", 0];
	 		 
			IF (_numberOfKitsU > 0) then { 
			 for "_i" from 1 to _numberOfKitsU do { [ _unitP, "PiR_bint"] remoteExecCall [ "addItemToUniform", _unitP ]};

			};
			IF (_numberOfKitsV > 0) then { 
			 for "_i" from 1 to _numberOfKitsV do {[ _unitP, "PiR_bint"] remoteExecCall [ "addItemToVest", _unitP ]};

			};
			IF (_numberOfKitsB > 0) then { 
			 for "_i" from 1 to _numberOfKitsB do {[ _unitP, "PiR_bint"] remoteExecCall [ "addItemToBackpack", _unitP ]};
			
			};

		} ELSE {
		 _numberOfItems = itemCargo _unitP;
		 _numberOfItems = _numberOfItems - ["FirstAidKit"];
		 clearItemCargoGlobal _unitP;
		 {_unitP addItemCargoGlobal [_x, 1]} forEach _numberOfItems;
		 _unitP addItemCargoGlobal ["PiR_bint", _numberOfKits];

		};
	};
	
 _numberOfKits = {"Medikit" == _x} count (itemCargo _unitP);	
	
	IF (_numberOfKits > 0) then {
	
		IF  (_unitP isKindOf "Man") then {
		 _numberOfKitsU = {"Medikit" == _x} count (uniformItems _unitP);
		 _numberOfKitsV = {"Medikit" == _x} count (vestItems _unitP);
		 _numberOfKitsB = {"Medikit" == _x} count (backpackItems _unitP);
		 [_unitP, "Medikit"] remoteExec ["removeItems", 0];
			IF (_numberOfKitsU > 0) then { 
			 for "_i" from 1 to _numberOfKitsU do { [ _unitP, "PiR_apteka"] remoteExecCall [ "addItemToUniform", _unitP ]};
			};
			IF (_numberOfKitsV > 0) then { 
			 for "_i" from 1 to _numberOfKitsV do {[ _unitP, "PiR_apteka"] remoteExecCall [ "addItemToVest", _unitP ]};
			};
			IF (_numberOfKitsB > 0) then { 
			 for "_i" from 1 to _numberOfKitsB do {[ _unitP, "PiR_apteka"] remoteExecCall [ "addItemToBackpack", _unitP ]};
			};

		} ELSE {
		 _numberOfItems = itemCargo _unitP;
		 _numberOfItems = _numberOfItems - ["Medikit"];
		 clearItemCargoGlobal _unitP;
		 {_unitP addItemCargoGlobal [_x, 1]} forEach _numberOfItems;
		 _unitP addItemCargoGlobal ["PiR_apteka", _numberOfKits];

		};
	};
};	
	
	IF  (!(_unitP getVariable ["dam_ignore_hit0",false]) && (_unitP isKindOf "Man") && (alive _unitP)) then {	

 	 _unitP setVariable ["dam_ignore_hit0",true,true];	
	 _unitP setVariable ["dam_zdorovie_lecit0",0,true];

			 IF (!isplayer _unitP) then {
				IF !(PiR_injuriAI_on) exitwith {};
				IF (side _unitP == civilian ) then {
					IF !(PiR_civilian_on) exitwith {};
					PIRjipId = [_unitP, {
					_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
					_this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};
				IF (side _unitP == resistance ) then {
					IF !(PiR_resistance_on) exitwith {};
					PIRjipId = [_unitP, {
					_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
					_this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};				
				IF (side _unitP == west ) then {
					IF !(PiR_west_on) exitwith {};
					PIRjipId = [_unitP, {
					_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
					_this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};
				IF (side _unitP == east ) then {
					IF !(PiR_east_on) exitwith {};
					PIRjipId = [_unitP, {
					_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
					_this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};
					
				} ELSE {
					IF !(PiR_injuriplayer_on) exitwith {};
					IF (side _unitP == civilian ) then {
						IF !(PiR_civilian_on) exitwith {};	
						_unitP addMPEventHandler ["MPRespawn", {[(_this select 0)] call PiRrespawn0;}];
						PIR0jipId = [_unitP, {
						_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
						_this setVariable ["hitPartEhId", _ehId];
						}] remoteExec ["call", 0, true];
					};	
					IF (side _unitP == resistance ) then {
						IF !(PiR_resistance_on) exitwith {};
						_unitP addMPEventHandler ["MPRespawn", {[(_this select 0)] call PiRrespawn0;}];
						PIR0jipId = [_unitP, {
						_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
						_this setVariable ["hitPartEhId", _ehId];
						}] remoteExec ["call", 0, true];
					};						
					IF (side _unitP == west ) then {
						IF !(PiR_west_on) exitwith {};
						_unitP addMPEventHandler ["MPRespawn", {[(_this select 0)] call PiRrespawn0;}];
						PIR0jipId = [_unitP, {
						_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
						_this setVariable ["hitPartEhId", _ehId];
						}] remoteExec ["call", 0, true];
					};
					IF (side _unitP == east ) then {
						IF !(PiR_east_on) exitwith {};
						_unitP addMPEventHandler ["MPRespawn", {[(_this select 0)] call PiRrespawn0;}];
						PIR0jipId = [_unitP, {
						_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
						_this setVariable ["hitPartEhId", _ehId];
						}] remoteExec ["call", 0, true];
					};
				};
	};
} forEach (allUnits + vehicles);

	
[{call PiRstart;}, [], 30] call CBA_fnc_waitAndExecute;










