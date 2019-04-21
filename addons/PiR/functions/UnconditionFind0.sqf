if (!isServer) exitWith {}; 

params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];



//__________________Проверка на выход___________________________________________________

IF (_unit getVariable ["dam_conec_istorii0",false]) exitWith {
	
[_unit,"UnconsciousOutProne"] remoteExec ["switchMove", 0];
[_unit] joinSilent _unitGrp;

	IF (_unit == _unitLdr) then {
	 _unitGrp selectLeader _unit;
	};
	 
{(uniformContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveU select 1) select _forEachIndex)]} forEach (_magsremoveU select 0);
{(vestContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveV select 1) select _forEachIndex)]} forEach (_magsremoveV select 0);
{(backpackContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveB select 1) select _forEachIndex)]} forEach (_magsremoveB select 0);
_unit setVariable ["dam_conec_istorii0",false,true];
[_unit] remoteExecCall [ "removeAllActions", 0, true ];
_unit setVariable ["dam_ignore_injured0",false,true];

	IF !(PiR_captive_on) then {
	 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
	};	 
	 
	PIR0jipId = [_unit, {
	 _ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
	 _this setVariable ["hitPartEhId", _ehId];
	}] remoteExec ["call", 0, true];
};
//______________________________________________________________________________________

//__________________ Проигрывание анимаций в бессознательном____________________________

IF (_statys == 1) then {
[_unit, _anim] call UnconditionAnim;
};

//______________________________________________________________________________________	
	
 _statys = 0;
 _tashit = 0;

//__________________Ищем потаскуна_____________________________________________________

IF (alive _unit) then {

		IF ((!alive _unit) or (_tashit == 1) or (_unit getVariable ["dam_conec_istorii0",false]) or (time >= _bloodtime)) exitWith {
		 _tashit = 1;
		};

	 _nearestunits = _unit nearEntities ["CAManBase", (PiR_dragger_on)];
     _nearPlayers = 0; 
        { 
        if ((_x distance _unit) <= (PiR_dragger_on)) then 
            { 
             _nearPlayers = _nearPlayers + 1;                                  
            }; 
        } forEach switchableUnits;
/*
		{ 
        if ((_x distance _unit) <= (PiR_dragger_on)) then 
            { 
             _nearPlayers = _nearPlayers + 1;                                  
            }; 
        } forEach playableUnits;
*/
        IF ((count _nearestunits) - _nearPlayers > 1) then {
		 _dragger = selectRandom (_nearestunits - (playableUnits + switchableUnits + [_unit]));

            IF ((alive _dragger) && ( _unitGrpPR == str side _dragger) && (side _dragger != civilian) && (!isPlayer _dragger) && (_dragger != _unit) && !(_dragger getVariable ["dam_ignore_dragger0",false]) && !(_dragger getVariable ["dam_ignore_injured0",false]) && !(_unit getVariable ["dam_player_lecit0",false])) then {
			 _dragger setVariable ["dam_ignore_dragger0",true,true];
		     _tashit = 1;
            };
        };
};
	IF ((_tashit != 1) && (alive _unit)) then {		
		[{		
		 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];
		 [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB] call UnconditionFind;		
		}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], 5] call CBA_fnc_waitAndExecute;
	} else {
//______________________________________________________________________________________


	IF (!alive _unit) exitWith {
	 {(uniformContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveU select 1) select _forEachIndex)]} forEach (_magsremoveU select 0);
	 {(vestContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveV select 1) select _forEachIndex)]} forEach (_magsremoveV select 0);
	 {(backpackContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveB select 1) select _forEachIndex)]} forEach (_magsremoveB select 0);
	 _unit setVariable ["dam_conec_istorii0",false,true];
	 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
	 _unit setVariable ["dam_ignore_injured0",false,true];

		IF !(PiR_captive_on) then {
		 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
		};
	};
 
 	IF (time >= _bloodtime) exitWith {
	 _unit setDamage 1;

		IF (_shans == 10)  then {
		 [ _unit, ["hitBody", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		 [ _unit, ["hitHands", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		 [ _unit, ["hitLegs", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		};

		IF ((_shans == 7) or (_shans == 9))  then {
		 [ _unit, ["hitHead", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		 [ _unit, ["hitHands", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		 [ _unit, ["hitLegs", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		};

		IF ((_shans == 1) or (_shans == 3)) then {
		 [ _unit, ["hitHead", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		 [ _unit, ["hitBody", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		 [ _unit, ["hitLegs", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		};

		IF ((_shans == 2) or (_shans == 4) or (_shans == 6)) then {
		 [ _unit, ["hitHead", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		 [ _unit, ["hitBody", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		 [ _unit, ["hitHands", 0]] remoteExecCall [ "setHitPointDamage", _unit ];
		};
	 {(uniformContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveU select 1) select _forEachIndex)]} forEach (_magsremoveU select 0);
	 {(vestContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveV select 1) select _forEachIndex)]} forEach (_magsremoveV select 0);
	 {(backpackContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveB select 1) select _forEachIndex)]} forEach (_magsremoveB select 0);
	 _unit setVariable ["dam_conec_istorii0",false,true];
	 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
	 _unit setVariable ["dam_ignore_injured0",false,true];

		IF !(PiR_captive_on) then {
		 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
		};
	};

 	IF (_unit getVariable ["dam_conec_istorii0",false]) exitWith {
	 [_unit,"UnconsciousOutProne"] remoteExec ["switchMove", 0];
	 [_unit] joinSilent _unitGrp;
		IF (_unit == _unitLdr) then {
		 _unitGrp selectLeader _unit;
		};
	 {(uniformContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveU select 1) select _forEachIndex)]} forEach (_magsremoveU select 0);
	 {(vestContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveV select 1) select _forEachIndex)]} forEach (_magsremoveV select 0);
	 {(backpackContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveB select 1) select _forEachIndex)]} forEach (_magsremoveB select 0);
	 _unit setVariable ["dam_conec_istorii0",false,true];
	 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
	 _unit setVariable ["dam_ignore_injured0",false,true];

		IF !(PiR_captive_on) then {
		 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
		};
		
		PIRjipId = [_unit, {
		 _ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
		 _this setVariable ["hitPartEhId", _ehId];
		}] remoteExecCall ["call", 0, true];
	};
 //______________________________________________________________________________________


//__________________Потаскун подбирается к раненному____________________________________

    IF ((alive _dragger) && (alive _unit) && !(_dragger getVariable ["dam_ignore_injured0",false]) && !(_unit getVariable ["dam_conec_istorii0",false]) && !(_unit getVariable ["dam_player_lecit0",false]) ) then {

	 [ _dragger, "MIDDLE"] remoteExecCall [ "setUnitPos", _dragger ];
	 [ _dragger, getPosatl _unit] remoteExecCall [ "doMove", _dragger ];

     _future = (time +  30 + random 15);

	 
		[{(((_this select 7) distance (_this select 0) < 3) && ((((getPosatl (_this select 0)) select 2) - ((getPosatl (_this select 7)) select 2)) < 0.5)) or (!alive (_this select 0)) or (!alive (_this select 7)) or (time >= (_this select 17)) or ((_this select 7) getVariable ["dam_ignore_injured0",false]) or ((_this select 0) getVariable ["dam_conec_istorii0",false]) or ((_this select 0) getVariable ["dam_player_lecit0",false])
		}, {	 
		 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];

			[{
			 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];
		
				IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) exitWith {
				 _dragger setVariable ["dam_ignore_dragger0",false,true];
				 	[{
					 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];

					 [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB] call UnconditionFind;
					}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], (5 + (random 10))] call CBA_fnc_waitAndExecute;
				}; 

				IF ((!alive _unit) or (time >= _future) or (_unit getVariable ["dam_conec_istorii0",false]) or (_unit getVariable ["dam_player_lecit0",false])) exitWith {
				 [ _dragger, "AUTO" ] remoteExecCall [ "setUnitPos", _dragger ];
				 _dragger doMove getpos _dragger;
				 _dragger setVariable ["dam_ignore_dragger0",false,true];

				 	[{
					 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];
					
					 [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB] call UnconditionFind;
					}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], (5 + (random 10))] call CBA_fnc_waitAndExecute;
				}; 

			 _unit setVariable ["dam_player_lecit0",true,true];

//__________________Пускаем дым_________________________________________________________	 
				IF (PiR_smoke_on) then { 
				 _randomSmoke = selectRandom [1,2,3];

					IF (_randomSmoke == 2) then {
					 createVehicle ["SmokeShell", _unit, [], (random 6), "CAN_COLLIDE"];
					};
				};	
//______________________________________________________________________________________

//__________________Потаскун цепляет раненного__________________________________________
			 _unit setVariable ["dam_uncondition_injured0",true,true];
				_DummyClone = {
				 params ["_dragger", "_dummy", "_dummygrp", "_dummyV", "_coordinate"];
	
				 _dummygrp = createGroup civilian;
				 _dummy = _dummygrp createUnit ["C_Soldier_VR_F", [0,0,0], [], 0, "FORM"];
				 _dummy setVariable ["dam_ignore_hit0",true,true];
				 _dummy hideObjectGlobal true;
				 _dummy setDamage 0.6;
				 _dummy allowdammage false;
				 _dummy setBehaviour "CARELESS";
				 _dummy disableAI "FSM";	
				 _dummy setUnitPos "UP";
				 dostop _dragger;
				 _dragger doMove getpos _dragger;

					[{
					 params ["_dragger", "_dummy", "_dummygrp", "_dummyV", "_coordinate"];
					 
					 _dummyV = vectorDir (_dragger);		 
					 _coordinate = ([_dragger, 0.6, (getDir _dragger)] call BIS_fnc_relPos);
					 _coordinate set [2, ((getPosatl _dragger) select 2)];
					 _dummy setPos _coordinate;
					 _dummy	setDir ((getDir _dragger) - 180);	
					 _dummy doMove ([_dragger, 10, ((getDir _dragger) - 180)] call BIS_fnc_relPos);
		 
						[{
						 params ["_dragger", "_dummy", "_dummygrp", "_dummyV", "_coordinate"];
						 
						 _dragger attachTo [_dummy, [0, 0.6, 0]]; 
						 [ _dragger, 180 ] remoteExecCall [ "setDir", _dragger ];
						 [ _dragger, _dummyV ] remoteExecCall [ "setVectorDir", _dragger ];
						}, [_dragger, _dummy, _dummygrp, _dummyV, _coordinate], 0.1] call CBA_fnc_waitAndExecute; 
					}, [_dragger, _dummy, _dummygrp, _dummyV, _coordinate], 0.3] call CBA_fnc_waitAndExecute; 
				 _dummy
				 };

			 _dummy = [_dragger] call _DummyClone;
			 _dummypos = getPosatl _dummy;

			 [ _unit, false ] remoteExecCall [ "setUnconscious", _unit ];
			 [ _dragger, "grabDrag"] remoteExecCall [ "playAction", _dragger ];



				[{
				 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];

				 [ _unit, (_unit getdir _dragger) ] remoteExecCall [ "setDir", _unit ];
				 [_unit, "AinjPpneMrunSnonWnonDb_grab"] remoteExecCall ["switchMove", 0];
				 [_unit, "AinjPpneMrunSnonWnonDb"] remoteExecCall ["playMove", 0]; 
				 _unit setVariable ["dam_uncondition_drag0",true,true];
				 [_unit] Call UnconditionDrag0;


					[{(AnimationState (_this select 7) == "amovpercmstpslowwrfldnon_acinpknlmwlkslowwrfldb_2") or (AnimationState (_this select 7) == "amovpercmstpsnonwnondnon_acinpknlmwlksnonwnondb_2") or (!alive (_this select 7)) or ((_this select 7) getVariable ["dam_ignore_injured0",false]) or (!alive (_this select 0))
					}, {	 
					 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];
				 
						IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) exitwith {	
						 [ _dragger, "ANIM" ] remoteExecCall [ "enableAI", _dragger ];	
						 detach _dragger;
						 detach _dummy;
						 deleteVehicle _dummy;
						 [_unit,"AinjPpneMrunSnonWnonDb_release"] remoteExecCall ["switchMove", 0];
						 _dragger setVariable ["dam_ignore_dragger0",false,true];		 
						 [ _unit, true ] remoteExecCall [ "setUnconscious", _unit ];	 

							[{((AnimationState (_this select 0) == "UnconsciousReviveDefault") or (!alive (_this select 0)))
							}, {
							 [(_this select 0), (_this select 1)] remoteExecCall ["switchMove", 0];
							 [(_this select 0), (_this select 1)] remoteExecCall ["playMove", 0];	
							 (_this select 0) setVariable ["dam_player_lecit0",false,true];
							}, [_unit, _anim]] call CBA_fnc_waitUntilAndExecute;
						 _statys = 1;
						 	[{
							 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];

							 [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB] call UnconditionFind;
							}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], (5 + (random 10))] call CBA_fnc_waitAndExecute;
						};

						IF (!alive _unit) exitwith {
						 _unit setVariable ["dam_uncondition_drag0",false,true];
						 detach _dragger;
						 detach _dummy;
						 deleteVehicle _dummy;
						 [_dragger,""] remoteExecCall ["switchMove", 0]; 
						 [ _dragger, "ANIM" ] remoteExecCall [ "enableAI", _dragger ];
						 [ _dragger, "RED" ] remoteExecCall [ "setCombatMode", _dragger ];
						 [ _dragger, "AWARE" ] remoteExecCall [ "setBehaviour", _dragger ];
						 [ _dragger, "AUTO" ] remoteExecCall [ "setUnitPos", _dragger ];
						 _dragger setVariable ["dam_ignore_dragger0",false,true];
						 _unit setVariable ["dam_player_lecit0",false,true];
						 {(uniformContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveU select 1) select _forEachIndex)]} forEach (_magsremoveU select 0);
						 {(vestContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveV select 1) select _forEachIndex)]} forEach (_magsremoveV select 0);
						 {(backpackContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveB select 1) select _forEachIndex)]} forEach (_magsremoveB select 0);
						 _unit setVariable ["dam_conec_istorii0",false,true];
						 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
						 _unit setVariable ["dam_ignore_injured0",false,true];

							IF !(PiR_captive_on) then {
							 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
							};
						};
	
					 _unit attachTo [_dummy, [-0.1, -0.5, 0]];
					 [_unit, 0] remoteExecCall ["setDir", 0];
					 [_unit] joinSilent grpNull;

					 [_dragger, "AcinPknlMwlkSrasWrflDb"] remoteExecCall ["playMove", 0]; 
					 [ _dragger, "ANIM" ] remoteExecCall [ "disableAI", _dragger ];	
//______________________________________________________________________________________

//__________________Выбираем точку эвакуации____________________________________________

					 _emptyHouse = [];
					 _nearesthouses = _shooterV nearObjects ["House",40];
					 _houseList = [];
						{
							for "_i" from 0 to 3 do {

								IF ( [(_x buildingPos _i), [0,0,0]] call BIS_fnc_arrayCompare ) exitWith {

									IF (_i > 0) then {
									 _houseList set [count _houseList, [_x, _i]];
									};
								};
							};    
						}forEach _nearesthouses;

						IF !(_houseList isEqualTo _emptyHouse) then {
						 _randomHouse = _houseList select (floor (random (count _houseList)));
						 _Pos = (_randomHouse select 0) buildingPos (floor (random (_randomHouse select 1)));
						} else { 
						 _dis = (20 + random 20);	
						 _Pos = [_shooterV, _dis, random 360] call BIS_fnc_relPos;
						};

						IF (_pos distance _pos0 < 10) then {
						 _dis = (30 + random 20);	
						 _Pos = [_unit, _dis, random 360] call BIS_fnc_relPos;
						};

					 _pos0 = _pos;
//______________________________________________________________________________________

//__________________Потаскун тащит раненного____________________________________________

					 _dummy doMove _Pos;
					 _future = time + 3;


						[{((_this select 5) distance (_this select 4) < 5) or (!alive (_this select 7)) or (!alive (_this select 0)) or ((_this select 7) getVariable ["dam_ignore_injured0",false]) or (time >= (_this select 17))
						}, {	 
						 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];

							IF (_dummy distance _dummypos < 0.5) then {
							 _pos = position _dummy;
							};

							 _future = (time + 40 + random 15);

							[{((_this select 5) distance (_this select 4) < 5) or (!alive (_this select 7)) or (!alive (_this select 0)) or ((_this select 7) getVariable ["dam_ignore_injured0",false]) or (time >= (_this select 17)) or ((_this select 0) distance (_this select 7) > 1.5) or (AnimationState (_this select 7) != "acinpknlmwlksraswrfldb") or ((AnimationState (_this select 0) != "ainjppnemrunsnonwnondb") && (AnimationState (_this select 0) != "ainjppnemrunsnonwnondb_still"))
							}, {	 
							 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];
//______________________________________________________________________________________
		
//__________________ Потаскун начинает лечение__________________________________________
	
		
								IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) then {
								 _unit setVariable ["dam_uncondition_drag0",false,true];
								 [ _dragger, "ANIM" ] remoteExecCall [ "enableAI", _dragger ];
								 detach _unit;	
								 detach _dragger;
								 detach _dummy;
								 deleteVehicle _dummy;
								 [_unit,"AinjPpneMrunSnonWnonDb_release"] remoteExecCall ["switchMove", 0];			
								 [_unit] joinSilent _unitGrp;

									IF (_unit == _unitLdr) then {
									 _unitGrp selectLeader _unit;
									};

								 _dragger setVariable ["dam_ignore_dragger0",false,true];
								 [ _unit, true ] remoteExecCall [ "setUnconscious", _unit ];	 

									[{((AnimationState (_this select 0) == "UnconsciousReviveDefault") or (!alive (_this select 0)))
									}, {
									 [(_this select 0), (_this select 1)] remoteExecCall ["switchMove", 0];
									 [(_this select 0), (_this select 1)] remoteExecCall ["playMove", 0];	
									 (_this select 0) setVariable ["dam_player_lecit0",false,true];
									}, [_unit, _anim]] call CBA_fnc_waitUntilAndExecute;

									IF (true) exitwith {
									 _statys = 1;
									 
										[{
										 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];

										 [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB] call UnconditionFind;
										}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], (5 + (random 10))] call CBA_fnc_waitAndExecute;
									 };

								} else {

									IF (!alive _unit) then {
									 _unit setVariable ["dam_uncondition_drag0",false,true];
									 detach _unit;
									 detach _dragger;
									 detach _dummy;
									 deleteVehicle _dummy;
									 [_dragger,""] remoteExecCall ["switchMove", 0]; 
									 [ _dragger, "ANIM" ] remoteExecCall [ "enableAI", _dragger ];
									 [ _dragger, "RED" ] remoteExecCall [ "setCombatMode", _dragger ];
									 [ _dragger, "AWARE" ] remoteExecCall [ "setBehaviour", _dragger ];
									 [ _dragger, "AUTO" ] remoteExecCall [ "setUnitPos", _dragger ];

									 _dragger setVariable ["dam_ignore_dragger0",false,true];	
									 _unit setVariable ["dam_player_lecit0",false,true];

										IF (true) exitwith {
										 {(uniformContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveU select 1) select _forEachIndex)]} forEach (_magsremoveU select 0);
										 {(vestContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveV select 1) select _forEachIndex)]} forEach (_magsremoveV select 0);
										 {(backpackContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveB select 1) select _forEachIndex)]} forEach (_magsremoveB select 0);
										 _unit setVariable ["dam_conec_istorii0",false,true];
										 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
										 _unit setVariable ["dam_ignore_injured0",false,true];

											IF !(PiR_captive_on) then {
											 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
											};
										};

									} else {

										IF ((_dummy distance _Pos < 5) or (time >= _future) or (AnimationState _dragger != "acinpknlmwlksraswrfldb") or ((AnimationState _unit != "ainjppnemrunsnonwnondb") && (AnimationState _unit != "ainjppnemrunsnonwnondb_still"))) then {
										 _unit setVariable ["dam_uncondition_drag0",false,true];
										 detach _unit;
										 detach _dragger;
										 detach _dummy;
										 deleteVehicle _dummy;
										 [_dragger,"AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon"] remoteExecCall ["playMove", 0]; 
										 [_unit,"AinjPpneMrunSnonWnonDb_release"] remoteExecCall ["switchMove", 0];
										 [ _unit, ((getdir _dragger) + 90) ] remoteExecCall [ "setDir", _unit ];
										 [ _unit, true ] remoteExecCall [ "setUnconscious", _unit ];

											[{
											 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];

											 _dis = 1;       
											 _future = (time +  ((PiR_bloodhill_on) + random ((PiR_bloodhillM_on max PiR_bloodhill_on) - (PiR_bloodhill_on min PiR_bloodhillM_on))));
											 
												IF ((alive _dragger) && (alive _unit) && !(_dragger getVariable ["dam_ignore_injured0",false])) then {

												 _dummyV = vectorDir (_unit);
												 _unit attachTo [_dragger, [-0.2, 0.7, 0]];
												 [ _unit, _dummyV ] remoteExecCall [ "setVectorDir", _unit ];
												 [ _unit, 90 ] remoteExecCall [ "setDir", _unit ];
												 _dis = 0;											
												 [_dragger, "AinvPknlMstpSnonWrflDr_medic4_old"] remoteExecCall ["playMove", 0]; 
												 [_unit, _dragger, _future] call UnconditionHill;
												 _future = _future + 1;
												};

												[{(!alive (_this select 7)) or (!alive (_this select 0)) or ((_this select 7) getVariable ["dam_ignore_injured0",false]) or (time >= (_this select 17))
												}, {	 
												 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];


													IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) then {

													 [_unit] joinSilent _unitGrp;

														IF (_unit == _unitLdr) then {
														 _unitGrp selectLeader _unit;
														};
													
													 [_unit,_anim] remoteExecCall ["switchMove", 0];
													 [_unit, _anim] remoteExecCall ["playMove", 0]; 
													 [ _dragger, "ANIM" ] remoteExecCall [ "enableAI", _dragger ];
													 _dragger setVariable ["dam_ignore_dragger0",false,true];
													 _unit setVariable ["dam_player_lecit0",false,true];
										
														IF ( _dis == 0 ) then {
														 [_dragger,""] remoteExecCall ["switchMove", 0];
														};

														IF (true) exitwith {
														 _statys = 1;
														 
														 	[{
															 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremoveU", "_magsremoveV", "_magsremoveB"];

															 [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB] call UnconditionFind;
															}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], (5 + (random 10))] call CBA_fnc_waitAndExecute;
														};

													} else {

													 [_dragger,"AinvPknlMstpSnonWrflDnon_medicEnd"] remoteExecCall ["switchMove", 0]; 
														[{
														 (_this select 0) setDamage 0;
														 [(_this select 0), false ] remoteExecCall [ "setUnconscious", (_this select 0) ];
														 [(_this select 0),"UnconsciousOutProne"] remoteExecCall ["switchMove", 0]; 
														}, [_unit], 1] call CBA_fnc_waitAndExecute;

													 [ _dragger, "ANIM" ] remoteExecCall [ "enableAI", _dragger ];
													 [ _dragger, "RED" ] remoteExecCall [ "setCombatMode", _dragger ];
													 [ _dragger, "AWARE" ] remoteExecCall [ "setBehaviour", _dragger ];
													 [ _dragger, "AUTO" ] remoteExecCall [ "setUnitPos", _dragger ];	
													 _dragger setVariable ["dam_ignore_dragger0",false,true];
													 _unit setVariable ["dam_player_lecit0",false,true];												
													 [_unit] joinSilent _unitGrp;

														IF (_unit == _unitLdr) then {
														 _unitGrp selectLeader _unit;
														};

														PIR0jipId = [_unit, {
														 _ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
														 _this setVariable ["hitPartEhId", _ehId];
														}] remoteExec ["call", 0, true];

														IF (true) exitwith {
														 _unit setVariable ["dam_conec_istorii0",true,true];
														 {(uniformContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveU select 1) select _forEachIndex)]} forEach (_magsremoveU select 0);
														 {(vestContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveV select 1) select _forEachIndex)]} forEach (_magsremoveV select 0);
														 {(backpackContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveB select 1) select _forEachIndex)]} forEach (_magsremoveB select 0);
														 _unit setVariable ["dam_conec_istorii0",false,true];
														 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
														 _unit setVariable ["dam_ignore_injured0",false,true];

															IF !(PiR_captive_on) then {
															 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
															};
														};
													};
												}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB]] call CBA_fnc_waitUntilAndExecute;
											}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], 4] call CBA_fnc_waitAndExecute;
										};
									};
								};
							}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB]] call CBA_fnc_waitUntilAndExecute;
						}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB]] call CBA_fnc_waitUntilAndExecute;
					}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB]] call CBA_fnc_waitUntilAndExecute;	
				}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], 0.4] call CBA_fnc_waitAndExecute; 
			}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB], 1] call CBA_fnc_waitAndExecute; 
		}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremoveU, _magsremoveV, _magsremoveB]] call CBA_fnc_waitUntilAndExecute;
	};	
//______________________________________________________________________________________
};
 




