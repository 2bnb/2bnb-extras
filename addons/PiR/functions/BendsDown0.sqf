if (!isServer) exitWith {}; 

_unit = _this select 0;
_anim = _this select 1;
_shans = _this select 2;
_shooter = _this select 3;

_unitGrp = group _unit;
_unitGrpPR = str side group _unit;

private [ "_unit", "_anim", "_shans", "_unitGrp", "_unitGrpPR", "_numberOfKits", "_stanceu", "_shooter" ];


IF !(PiR_captive_on) then {
_unit setcaptive true;
};


IF  (alive _unit) then {
[_unit] remoteExec [ "removeAllActions", 0, true ];
_stanceu = 0;
			IF ("STAND" == stance _unit )  then {
			 [_unit,(selectRandom ["AinvPknlMstpSlayWrflDnon_healed", "AinvPknlMstpSlayWrflDnon_healed2"])] remoteExec ["playMove", 0];	
			 _stanceu = 1;
			} ELSE {
				IF ("CROUCH" == stance _unit ) then {
				 _stanceu = 2;
				 [_unit,"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon"] remoteExec ["switchMove", 0];		
				 sleep 0.76;
				 [_unit,(selectRandom ["AinvPknlMstpSlayWrflDnon_healed", "AinvPknlMstpSlayWrflDnon_healed2"])] remoteExec ["switchMove", 0];
				} ELSE {
					IF ("PRONE" == stance _unit ) then {
					 [_unit,"AmovPpneMstpSrasWrflDnon_healed"] remoteExec ["playMove", 0];					
					} ELSE {
						IF ("UNDEFINED" == stance _unit ) then {
						[_unit,(selectRandom ["AinvPknlMstpSlayWrflDnon_healed", "AinvPknlMstpSlayWrflDnon_healed2"])] remoteExec ["playMove", 0];		
						};
					};
				};
			};


	waitUntil { sleep 0.1; ((AnimationState _unit == "AinvPknlMstpSlayWrflDnon_healed") or (AnimationState _unit == "AinvPknlMstpSlayWrflDnon_healed2") or (AnimationState _unit == "AmovPpneMstpSrasWrflDnon_healed") or (!alive _unit)) 
	};
 sleep (3 + (random 2));	 
	IF (!alive _unit) exitWith {
	 _unit setVariable ["dam_ignore_injured0",false,true];
	};

	 
//__________________________________________________________Выход_______________________________________________________________	 
	 

	IF  (alive _unit) then {
	IF ((_shans - (random 15)) >=0) then {

		IF (_stanceu == 0) then {
		 [_unit,"AmovPpneMstpSrasWrflDnon"] remoteExec ["switchMove", 0];	
		} ELSE {
		 [_unit,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon"] remoteExec ["switchMove", 0];	
		};
		 sleep 0.05;

		IF ((_shans - (random 18)) >=0) then {		


		 _null = [_unit, _anim, _shans, _shooter] spawn Crawl0;
	
		} ELSE {	
		 _null = [_unit, _anim, _shans, _shooter] spawn Uncondition0;

		};

	} ELSE {
					
				waitUntil { sleep 0.1; (((AnimationState _unit != "AinvPknlMstpSlayWrflDnon_healed") && (AnimationState _unit != "AinvPknlMstpSlayWrflDnon_healed2") && (AnimationState _unit != "AmovPpneMstpSrasWrflDnon_healed")) or (!alive _unit)) 
				};
	
				IF (_stanceu == 1) then {	
				 [_unit,"AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];
					waitUntil { sleep 0.1; (((AnimationState _unit != "AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon") && (AnimationState _unit != "AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon") && (AnimationState _unit != "AinvPknlMstpSlayWrflDnon") && (AnimationState _unit != "AinvPknlMstpSlayWrflDnon_1") && (AnimationState _unit != "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon")) or (!alive _unit)) 
					};
				 [_unit,"AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];
				 
				};
				IF (_stanceu == 2) then {
				 [_unit,"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon"] remoteExec ["switchMove", 0];
					waitUntil { sleep 0.1; (((AnimationState _unit != "AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon") && (AnimationState _unit != "AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon") && (AnimationState _unit != "AinvPknlMstpSlayWrflDnon") && (AnimationState _unit != "AinvPknlMstpSlayWrflDnon_1") && (AnimationState _unit != "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon")) or (!alive _unit)) 
					};		 
					IF ("STAND" == stance _unit )  then {
					 [_unit,"AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];
					} Else {
					 [_unit,"AmovPknlMstpSrasWrflDnon"] remoteExec ["switchMove", 0];
					};

				};
				 _unit setVariable ["dam_ignore_injured0",false,true];
				 _unit setVariable ["dam_player_lecitsebia0",false,true];
					PIR0jipId = [_unit, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];

					IF !(PiR_captive_on) then {
					 _unit setcaptive false;
					};

			};	 
	};
//_______________________________________________________________________________________________________________________________					

};

	IF !(alive _unit) then {
	 _unit setVariable ["dam_ignore_injured0",false,true];
 	 _unit setVariable ["dam_ignore_hit0",false,true];		

	IF !(PiR_captive_on) then {
	 _unit setcaptive false;
	};

	};		 
