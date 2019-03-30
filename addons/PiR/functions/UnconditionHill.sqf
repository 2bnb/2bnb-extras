if (!isServer) exitWith {}; 

params ["_unit", "_dragger", "_future"];

IF ((!alive _dragger) or (!alive _unit) or (_dragger getVariable ["dam_ignore_injured0",false]) or (time >= _future)) exitWith {
 detach _dragger;
 detach _unit;
};

IF ((AnimationState _dragger == "AinvPknlMstpSnonWrflDnon_medicEnd") or  (AnimationState _dragger == "AinvPknlMstpSnonWrflDr_medic0S" )) then {
[_dragger, (selectRandom ["AinvPknlMstpSnonWrflDr_medic0_old", "AinvPknlMstpSnonWrflDr_medic1_old", "AinvPknlMstpSnonWrflDr_medic2_old", "AinvPknlMstpSnonWrflDr_medic3_old", "AinvPknlMstpSnonWrflDr_medic4_old", "AinvPknlMstpSnonWrflDr_medic5_old"])] remoteExecCall ["playMove", 0]; 
};

[{
params ["_unit", "_dragger", "_future"];
[_unit, _dragger, _future] call UnconditionHill;
}, [_unit, _dragger, _future], 1] call CBA_fnc_waitAndExecute;
								