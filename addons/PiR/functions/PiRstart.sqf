

if (!isServer) exitWith {};


sleep 5;
//Добавляем  юнитам отслеживание попадания
_units = [];
while { (true) } do {

	{

		if ((_x isKindOf "Man")) then
        {

            if ((alive _x) && !(_x getVariable ["dam_ignore_hit0",false]) && (("INJURED" == lifeState _x) or ("HEALTHY" == lifeState _x))) then
			{
			 _units pushBack _x;


 			 _x setVariable ["dam_ignore_hit0",true];
			 _x setVariable ["dam_zdorovie_lecit0",0,true];

			 IF (!isplayer _x) then {
				IF (side _x == civilian ) then {
				IF !(PiR_civilian_on) exitwith {};
					PIRjipId = [_x, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) spawn PiRredirect;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];

					} ELSE {

					PIRjipId = [_x, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) spawn PiRredirect;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
					};

				} ELSE {
					IF !(PiR_injuriplayer_on) exitwith {};
					PIR0jipId = [_x, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) spawn PiRredirect0;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
				};
			 };
		};

	} forEach allUnits;

sleep 30;

};
