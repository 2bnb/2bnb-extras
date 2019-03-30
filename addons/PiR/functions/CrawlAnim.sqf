if (!isServer) exitWith {}; 

params ["_unit", "_Pos", "_timer"];    

IF ((_unit distance _Pos < 6 ) or (!alive _unit) or (time >= _timer) or (_unit getVariable ['dam_player_lecit0',false])) exitWith {
	_unit setVariable ["dam_player_Crawl0",true,true];				
};	 

	IF (( AnimationState _unit != "ApanPpneMstpSnonWnonDnon") && ( AnimationState _unit != "ApanPpneMstpSnonWnonDnon_G01") && ( AnimationState _unit != "ApanPpneMstpSnonWnonDnon_G02") && ( AnimationState _unit != "ApanPpneMstpSnonWnonDnon_G03") && ( AnimationState _unit != "ApanPpneMsprSnonWnonDf") && ( AnimationState _unit != "ApanPpneMrunSnonWnonDb") && ( AnimationState _unit != "ApanPpneMrunSnonWnonDbl") && ( AnimationState _unit != "ApanPpneMrunSnonWnonDbr") && ( AnimationState _unit != "ApanPpneMrunSnonWnonDf") && ( AnimationState _unit != "ApanPpneMrunSnonWnonDfl") && ( AnimationState _unit != "ApanPpneMrunSnonWnonDfr") && ( AnimationState _unit != "ApanPpneMrunSnonWnonDl") && ( AnimationState _unit != "ApanPpneMrunSnonWnonDr")) then {
	 [_unit, "ApanPpneMstpSnonWnonDnon_G02"] remoteExecCall ["playMove", 0];
		[{
		 params ["_unit", "_Pos", "_timer"];
		 [_unit, _Pos, _timer] call CrawlAnim;
		 }, [_unit, _Pos, _timer], 2.5] call CBA_fnc_waitAndExecute;
	} ELSE {
		[{
		 params ["_unit", "_Pos", "_timer"];
		 [_unit, _Pos, _timer] call CrawlAnim;
		 }, [_unit, _Pos, _timer], 0.5] call CBA_fnc_waitAndExecute;
	};
