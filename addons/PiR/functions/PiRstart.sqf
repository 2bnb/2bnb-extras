

if (!isServer) exitWith {};
	 
private ["_unitP", "_numberOfKits", "_numberOfItems"];
sleep 5;
//Добавляем  юнитам отслеживание попадания
_units = [];
while { (true) } do {

	{

	
	
	IF  ((({"FirstAidKit" == _x} count (itemCargo _x)) > 0) or (({"Medikit" == _x} count (itemCargo _x)) > 0)) then {	

	 _numberOfKits = {"FirstAidKit" == _x} count (itemCargo _x);

		IF (_numberOfKits > 0) then {

		 _numberOfItems = itemCargo _x;
		 _numberOfItems = _numberOfItems - ["FirstAidKit"]; 
		 [_x, "FirstAidKit"] remoteExec ["removeItems", 0];
		 clearItemCargoGlobal _x;
		 _unitP = _x;
			{_unitP addItemCargoGlobal [_x, 1]} forEach _numberOfItems;

		 _x addItemCargoGlobal ["PiR_bint", _numberOfKits]; 
			for "_i" from 1 to _numberOfKits do { _x addItem "PiR_bint"};


		};

	 _numberOfKits = {"Medikit" == _x} count (itemCargo _x);

		IF (_numberOfKits > 0) then {

		 _numberOfItems = itemCargo _x;
		 _numberOfItems = _numberOfItems - ["Medikit"]; 
		 [_x, "Medikit"] remoteExec ["removeItems", 0];
		 clearItemCargoGlobal _x;
		 _unitP = _x;
			{_unitP addItemCargoGlobal [_x, 1]} forEach _numberOfItems;
		 _x addItemCargoGlobal ["PiR_apteka", _numberOfKits]; 
			for "_i" from 1 to _numberOfKits do { _x addItem "PiR_apteka"};

		};
	
	};	
	
	IF  (!(_x getVariable ["dam_ignore_hit0",false])) then {	

 	 _x setVariable ["dam_ignore_hit0",true,true];	
	
	
	
	
		IF ((_x isKindOf "Man")) then
        {

            IF ((alive _x)  && (("INJURED" == lifeState _x) or ("HEALTHY" == lifeState _x))) then 
			{
			 _units pushBack _x; 



			 _x setVariable ["dam_zdorovie_lecit0",0,true];

			 IF (!isplayer _x) then {
					IF !(PiR_injuriAI_on) exitwith {};
				IF (side _x == civilian ) then {
					IF !(PiR_civilian_on) exitwith {};
					PIRjipId = [_x, {
					_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
					_this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};
				IF (side _x == resistance ) then {
					IF !(PiR_resistance_on) exitwith {};
					PIRjipId = [_x, {
					_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
					_this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};				
				IF (side _x == west ) then {
					IF !(PiR_west_on) exitwith {};
					PIRjipId = [_x, {
					_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
					_this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};
				IF (side _x == east ) then {
					IF !(PiR_east_on) exitwith {};
					PIRjipId = [_x, {
					_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
					_this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};
					
				} ELSE {
					IF !(PiR_injuriplayer_on) exitwith {};
					IF (side _x == civilian ) then {
						IF !(PiR_civilian_on) exitwith {};
						PIR0jipId = [_x, {
						_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
						_this setVariable ["hitPartEhId", _ehId];
						}] remoteExec ["call", 0, true];
					};
					IF (side _x == resistance ) then {
						IF !(PiR_resistance_on) exitwith {};
						PIR0jipId = [_x, {
						_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
						_this setVariable ["hitPartEhId", _ehId];
						}] remoteExec ["call", 0, true];
					};				
					IF (side _x == west ) then {
						IF !(PiR_west_on) exitwith {};
						PIR0jipId = [_x, {
						_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
						_this setVariable ["hitPartEhId", _ehId];
						}] remoteExec ["call", 0, true];
					};
					IF (side _x == east ) then {
						IF !(PiR_east_on) exitwith {};
						PIR0jipId = [_x, {
						_ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
						_this setVariable ["hitPartEhId", _ehId];
						}] remoteExec ["call", 0, true];
					};
				};
			 };
		};
	};
	} forEach (allUnits + vehicles);

	
	sleep 30;

};








