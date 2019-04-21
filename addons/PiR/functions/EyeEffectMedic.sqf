if (!isServer) exitWith {}; 

params ["_unit", "_future", "_dragger", "_nearestunits", "_nearPlayers", "_tashit"];

_tashit = 0;

IF (alive _unit) then {

		IF ((!alive _unit) or (_unit getVariable ["dam_ignore_injured0",false]) or ((damage _unit) > 0.79) or (damage _unit <= 0.1)) exitWith {
		 _dragger setVariable ["dam_ignore_dragger0",false,true];
		};

	 _nearestunits = units group _unit; 

		 _dragger = selectRandom (_nearestunits - (playableUnits + switchableUnits + [_unit]));

            IF ((alive _dragger) && (side _dragger != civilian) && (!isPlayer _dragger) && (_dragger != _unit) && !(_dragger getVariable ["dam_ignore_dragger0",false]) && !(_dragger getVariable ["dam_ignore_injured0",false]) && (({'PiR_apteka' == _x} count (items _dragger) > 0) or ({'Medikit' == _x} count (items _dragger) > 0))) then {
			 _dragger setVariable ["dam_ignore_dragger0",true,true];
		     _tashit = 1;
            };
//        };

		IF (_tashit != 1) then {
			[{
			 params ["_unit"];
			 [_unit] call EyeEffectMedic;
			}, [_unit], 1] call CBA_fnc_waitAndExecute;
		};		
};		



IF (_tashit == 1) then {


	 [ _unit, "Path"] remoteExecCall [ "disableAI", _unit ];
	 [ _dragger, "MIDDLE"] remoteExecCall [ "setUnitPos", _dragger ];
	 [ _dragger, getPosatl _unit] remoteExecCall [ "doMove", _dragger ];
     _future = (time +  15 + random 15);
	 

	[{(((_this select 2) distance (_this select 0) < 2) && ((((getPosatl (_this select 0)) select 2) - ((getPosatl (_this select 2)) select 2)) < 0.5)) or (!alive (_this select 0)) or (!alive (_this select 2)) or (time >= (_this select 1)) or ((_this select 2) getVariable ["dam_ignore_injured0",false]) or ((_this select 0) getVariable ["dam_ignore_injured0",false]) or ((_this select 0) getVariable ["dam_ignore_dragger0",false]) or (damage (_this select 0) <= 0.1)
	}, {		 
	 params ["_unit", "_future", "_dragger"];	 
	 
		IF ((!alive _unit) or (_unit getVariable ["dam_ignore_injured0",false]) or (damage _unit <= 0.1)) then {

			IF (true) exitwith {
			 [ _unit, "Path"] remoteExecCall [ "enableAI", _unit ];
			 _unit setVariable ["dam_player_lecitmedic0",false,true];
			 [ _dragger, "AUTO"] remoteExecCall [ "setUnitPos", _dragger ];
			 _dragger setVariable ["dam_ignore_dragger0",false,true];
			};
		} ELSE {

			IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false]) or (time >= _future) or (_unit getVariable ["dam_ignore_dragger0",false])) then {
			 [ _dragger, "AUTO"] remoteExecCall [ "setUnitPos", _dragger ];
			 [ _unit, "Path"] remoteExecCall [ "enableAI", _unit ];
			 _dragger setVariable ["dam_ignore_dragger0",false,true];

				IF true exitWith {
					[{
					 params ["_unit"];
					 [_unit] call EyeEffectMedic;
					 }, [_unit], 10] call CBA_fnc_waitAndExecute;
				};
		
			} ELSE {

			 [ _unit, "ANIM" ] remoteExecCall [ "disableAI", _unit ];

				IF (currentWeapon _unit == handgunWeapon _unit) then {

					IF ("STAND" == stance _unit )  then {
					 [_unit,"AinvPercMstpSrasWpstDnon_G01"] remoteExecCall ["switchMove", 0];
					} ELSE {

						IF ("CROUCH" == stance _unit ) then {
						 [_unit,"AinvPknlMstpSrasWpstDnon_G01"] remoteExecCall ["switchMove", 0];
						} ELSE {

							IF ("PRONE" == stance _unit ) then {
							 [ _dragger, "DOWN"] remoteExecCall [ "setUnitPos", _dragger ];					
							 [_unit,"AinvPpneMstpSrasWpstDnon_G01"] remoteExecCall ["switchMove", 0];
							}; 
						};
					};

				} ELSE {
		
					IF ("STAND" == stance _unit )  then {
					 [_unit,"AinvPercMstpSrasWrflDnon_G01"] remoteExecCall ["switchMove", 0];

					} ELSE {

						IF ("CROUCH" == stance _unit ) then {
						 [_unit,"AinvPknlMstpSrasWrflDnon_G01"] remoteExecCall ["switchMove", 0];

						} ELSE {

							IF ("PRONE" == stance _unit ) then {	
							 [ _dragger, "DOWN"] remoteExecCall [ "setUnitPos", _dragger ];
							 [_unit,"AinvPpneMstpSrasWrflDnon_G01"] remoteExecCall ["switchMove", 0];
							}; 
						};
					};
				};	
		
				[{
				 params ["_unit", "_dragger"];		 		

					IF ((!alive _unit) or (_unit getVariable ["dam_ignore_injured0",false])) then {

						IF (true) exitwith {
						 [ _unit, "Path"] remoteExecCall [ "enableAI", _unit ];
						 _unit setVariable ["dam_player_lecitmedic0",false,true];
						 [ _dragger, "AUTO"] remoteExecCall [ "setUnitPos", _dragger ];
						 _dragger setVariable ["dam_ignore_dragger0",false,true];
						};
					} ELSE {

						IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false]) or (_unit getVariable ["dam_ignore_dragger0",false]) or (damage _unit <= 0.1)) then {
						 [ _dragger, "AUTO"] remoteExecCall [ "setUnitPos", _dragger ];
						 [ _unit, "Path"] remoteExecCall [ "enableAI", _unit ];
						 _dragger setVariable ["dam_ignore_dragger0",false,true];

							IF true exitWith {
								[{
								 params ["_unit"];
								 [_unit] call EyeEffectMedic;
								}, [_unit], 10] call CBA_fnc_waitAndExecute;
							};
		
						} ELSE {

							IF ("PRONE" == stance _dragger ) then {

								IF ((currentWeapon _dragger) == (handgunWeapon _dragger)) then {
								 [_dragger, "AinvPpneMstpSlayWpstDnon_medicOther"] remoteExecCall ["playMove", 0];

								} ELSE {
								 [_dragger, "AinvPpneMstpSlayWpstDnon_medicOther"] remoteExecCall ["playMove", 0];
								};	

							} ELSE {

								IF ((currentWeapon _dragger) == (handgunWeapon _dragger)) then {
								 [_dragger, "AinvPknlMstpSlayWpstDnon_medicOther"] remoteExecCall ["playMove", 0];

								} ELSE {

								 [_dragger, "AinvPknlMstpSlayWrflDnon_medicOther"] remoteExecCall ["playMove", 0];
								};	
							};		 	
			
						 _unit setDamage 0;	
						 _unit setVariable ["dam_player_lecitmedic0",false,true];
						 _dragger setVariable ["dam_ignore_dragger0",false,true];

							[{
							 params ["_unit", "_dragger"];
							 [ _dragger, "AUTO"] remoteExecCall [ "setUnitPos", _dragger ];
							 [_unit, "ANIM" ] remoteExecCall [ "enableAI", _unit ];
							 [ _unit, "Path"] remoteExecCall [ "enableAI", _unit ];
							}, [_unit, _dragger], 5] call CBA_fnc_waitAndExecute;
						};
					};	
				}, [_unit, _dragger], 1.5] call CBA_fnc_waitAndExecute;	
			};
		};	
	}, [_unit, _future, _dragger]] call CBA_fnc_waitUntilAndExecute;	
};

IF !(alive _unit) then {
_unit setVariable ["dam_player_lecitmedic0",false,true];
};
 
