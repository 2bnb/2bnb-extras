if (!isServer) exitWith {};

params ["_unit"];

	IF (!(_unit getVariable ["dam_uncondition_drag0",false]) or (!alive _unit)) exitWith {
	};
[_unit, "AinjPpneMrunSnonWnonDb"] remoteExecCall ["playMove", 0];
[{call UnconditionDrag0;}, [_unit], 1] call CBA_fnc_waitAndExecute;

	

