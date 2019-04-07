if (!isServer) exitWith {};

params ["_unit","_anim"];

	IF ((_unit getVariable ["dam_uncondition_injured0",false]) or (!alive _unit)) exitWith {
	 _unit setVariable ["dam_uncondition_injured0",false,true]; 
	};
[_unit, _anim] remoteExecCall ["playMove", 0];
[{call UnconditionAnim0;}, [_unit, _anim], ((random 4)+2)] call CBA_fnc_waitAndExecute;
		
