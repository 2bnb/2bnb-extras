if (!isServer) exitWith {}; 
params [ "_unit", "_anim", "_shans", "_shooter", "_stanceu"];

IF  (alive _unit) then {

	IF !(PiR_captive_on) then {
	 _unit setcaptive true;
	};


[_unit] remoteExecCall [ "removeAllActions", 0, true ];	
_stanceu = 0;

[{
params [ "_unit", "_anim", "_shans", "_shooter", "_stanceu"];

IF  (alive _unit) then {
	IF ("STAND" == stance _unit )  then {
	 [_unit,(selectRandom ["AinvPknlMstpSlayWrflDnon_healed", "AinvPknlMstpSlayWrflDnon_healed2"])] remoteExecCall ["playMove", 0];	
	 _stanceu = 1;
	} ELSE {
		IF ("CROUCH" == stance _unit ) then {
		 _stanceu = 2;
		 [_unit,"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon"] remoteExecCall ["switchMove", 0];		
		 [{[(_this select 0),(selectRandom ["AinvPknlMstpSlayWrflDnon_healed", "AinvPknlMstpSlayWrflDnon_healed2"])] remoteExecCall ["switchMove", 0];}, [_unit], 0.76] call CBA_fnc_waitAndExecute;
		} ELSE {
			IF ("PRONE" == stance _unit ) then {
			 [_unit,"AmovPpneMstpSrasWrflDnon_healed"] remoteExecCall ["playMove", 0];					
			} ELSE {
				IF ("UNDEFINED" == stance _unit ) then {
				 [_unit,(selectRandom ["AinvPknlMstpSlayWrflDnon_healed", "AinvPknlMstpSlayWrflDnon_healed2"])] remoteExecCall ["playMove", 0];		
				};
			};
		};
	};
};	
}, [_unit, _anim, _shans, _shooter, _stanceu], 0.1] call CBA_fnc_waitAndExecute;

	[{(AnimationState (_this select 0) == "AinvPknlMstpSlayWrflDnon_healed") or (AnimationState (_this select 0) == "AinvPknlMstpSlayWrflDnon_healed2") or (AnimationState (_this select 0) == "AmovPpneMstpSrasWrflDnon_healed") or (!alive (_this select 0))
	}, {
	 params [ "_unit", "_anim", "_shans", "_shooter", "_stanceu"];

		[{
		 params [ "_unit", "_anim", "_shans", "_shooter", "_stanceu"];

 
			IF (!alive _unit) exitWith {
			 _unit setVariable ["dam_ignore_injured0",false,true];
			
				IF !(PiR_captive_on) then {
				 _unit setcaptive false;
				}
			};
//__________________________________________________________Выход_______________________________________________________________	 


			IF  (alive _unit) then { 

				IF ((_shans - (random 15)) >=0) then {

					IF (_stanceu == 0) then {
					 [_unit,"AmovPpneMstpSrasWrflDnon"] remoteExecCall ["switchMove", 0];	
					} ELSE {
					 [_unit,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon"] remoteExecCall ["switchMove", 0];	
					};

					IF ((_shans - (random 18)) >=0) then {		
						[{
						 params [ "_unit", "_anim", "_shans", "_shooter"];
						 [_unit, _anim, _shans, _shooter] call Crawl;
						}, [_unit, _anim, _shans, _shooter], 0.05] call CBA_fnc_waitAndExecute;
					} ELSE {	
						[{
						 params [ "_unit", "_anim", "_shans", "_shooter"];
						 [_unit, _anim, _shans, _shooter] call Uncondition;
						}, [_unit, _anim, _shans, _shooter], 0.05] call CBA_fnc_waitAndExecute;			  
					};

				} ELSE {
					[{((AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon_healed") && (AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon_healed2") && (AnimationState (_this select 0) != "AmovPpneMstpSrasWrflDnon_healed")) or (!alive (_this select 0)) 
					}, {
					 params [ "_unit", "_anim", "_shans", "_shooter", "_stanceu"];

						IF (_stanceu == 1) then {	
						 [_unit,"AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon"] remoteExecCall ["switchMove", 0];
							[{((AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon") && (AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon") && (AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon") && (AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon_1") && (AnimationState (_this select 0) != "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon")) or (!alive (_this select 0)) 
							}, {
							 [(_this select 0),"AmovPercMstpSrasWrflDnon"] remoteExecCall ["switchMove", 0];
							}, [_unit]] call CBA_fnc_waitUntilAndExecute;	
						};

						IF (_stanceu == 2) then {
						 [_unit,"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon"] remoteExecCall ["switchMove", 0];
							[{((AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon") && (AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon") && (AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon") && (AnimationState (_this select 0) != "AinvPknlMstpSlayWrflDnon_1") && (AnimationState (_this select 0) != "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon")) or (!alive (_this select 0)) 
							}, {		 

								IF ("STAND" == stance (_this select 0) )  then {
								 [(_this select 0),"AmovPercMstpSrasWrflDnon"] remoteExecCall ["switchMove", 0];
								} Else {
								 [(_this select 0),"AmovPknlMstpSrasWrflDnon"] remoteExecCall ["switchMove", 0];
								};
							}, [_unit]] call CBA_fnc_waitUntilAndExecute;
						};
					 _unit setVariable ["dam_ignore_injured0",false,true];
					 _unit setVariable ["dam_player_lecitsebia0",false,true];

						PIRjipId = [_unit, {
						 _ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
						 _this setVariable ["hitPartEhId", _ehId];
						}] remoteExecCall ["call", 0, true];

						IF !(PiR_captive_on) then {
						 _unit setcaptive false;
						};

					}, [_unit, _anim, _shans, _shooter, _stanceu]] call CBA_fnc_waitUntilAndExecute;
				};	 
			};
		
			IF !(alive _unit) then {
			 _unit setVariable ["dam_ignore_injured0",false,true];

				IF !(PiR_captive_on) then {
				 _unit setcaptive false;
				};
			};	
	
		}, [_unit, _anim, _shans, _shooter, _stanceu], (3 + random 2)] call CBA_fnc_waitAndExecute;
	}, [_unit, _anim, _shans, _shooter, _stanceu]] call CBA_fnc_waitUntilAndExecute;	
//_______________________________________________________________________________________________________________________________					

};

	IF !(alive _unit) then {
	 _unit setVariable ["dam_ignore_injured0",false,true];
	};		 
