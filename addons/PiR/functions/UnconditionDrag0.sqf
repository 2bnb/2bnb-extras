if (!isServer) exitWith {};

 			 _unit = _this select 0;
			 private ["_unit"];

				while {true} do {

					if (!(_unit getVariable ["dam_uncondition_drag0",false]) or (!alive _unit)) exitWith {
					};
				  [_unit, "AinjPpneMrunSnonWnonDb"] remoteExec ["playMove", 0];

				 sleep 1;
				};
