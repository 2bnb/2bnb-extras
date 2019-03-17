if (!isServer) exitWith {};

 			 _unit = _this select 0;
			 _anim = _this select 1;
			 private ["_unit","_anim"];

				while {true} do {

					if ((_unit getVariable ["dam_uncondition_injured0",false]) or (!alive _unit)) exitWith {
					};
				  [_unit, _anim] remoteExec ["playMove", 0];
				 sleep ((random 4)+4);
				};	
		_unit setVariable ["dam_uncondition_injured0",false,true]; 
