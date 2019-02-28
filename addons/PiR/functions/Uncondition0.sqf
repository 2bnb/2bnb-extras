if (!isServer) exitWith {};



_unit = (_this select 0);
_anim = (_this select 1);
_shans = (_this select 2);


private ["_unit","_anim", "_shans", "_Pos","_dummy","_nearestunits","_dragger","_emptyHouse","_nearesthouses",
"_houseList","_randomHouse","_dis", "_randomSmoke", "_unitGrp","_draggerGrp","_ls","_future","_nearPlayers","_isFriendly","_bloodtime","_tashit","_statys","_dummypos","_unitGrpPR","_pos0","_dummyV","_numberOfKits"];

IF !(PiR_captive_on) then {
_unit setcaptive true;
};

IF (alive _unit) then {

_unitGrp = group _unit;
_unitGrpPR = str side group _unit;
_bloodtime = (time +  130 + random 65);
_statys = 1;
_pos0 = [0,0,0];

	 _numberOfKits = 15;
	 [_unit, "firstaidkit"] remoteExec ["removeItems", 0];
 	 _magsremove = magazines _unit;
	 {_unit removeMagazineGlobal _x} forEach magazines _unit;	 
	 
	 [ _unit, true ] remoteExec [ "setUnconscious", _unit ];	 
	 waitUntil { sleep 0.1; ((AnimationState _unit == "UnconsciousReviveDefault") or (!alive _unit)) };
	 [_unit, _anim] remoteExec ["switchMove", 0];
	 [_unit, _anim] remoteExec ["playMove", 0];	
	 











//__________________Добавляем действие на самоубийство для игрока__________________________________________________

[
	_unit,											// Object the action is attached to
	localize "STR_Kill_yourself",										// Title of the action
	"PiR\Icons\cherep_CA.paa",	// Иконка действия
	"PiR\Icons\netpulsa_CA.paa",	// Иконка прогресса
	"_this == _target ",						// Условие к созданию действия
	"((inputAction 'Action') > 0)",						// Условие на выполнение действия
	{// Старт
	

	
	},												
	{//  На каждое деление
	
     _unit = (_this select 0);
	IF ((damage _unit) < 0.89) then {
	 _unit setDamage ((damage _unit) + (damage _unit)*0.08);
	};
	},													
	{// Финиш 
	
     _unit = (_this select 0);
	
	_unit setDamage 1;
	 
	},
	{// Прервано


		 
	},										
	[],													// Arguments passed to the scripts as _this select 3
	(15 + (random 10)),													// Action duration [s]
	4,													// Priority
	true,												// Remove on completion
	true												// Show in unconscious state 
] remoteExec ["BIS_fnc_holdActionAdd", 0, _unit];	// MP compatible implementation



//________________________________________________________________________________________________________________________________












	 
	 
//__________________Добавляем действие на перетаскивание для игрока__________________________________________________	 
	 
	 

	 
 [_unit, 
[
    "<img size='3'  image='PiR\Icons\ruka_CA.paa'/>", 
    {

		
		_unit = (_this select 0);
		_dragger = (_this select 1);
	 _numberOfKits = 15;
	 _dragger removeItems "FirstAidKit";	
	 _unit setVariable ["dam_player_lecit0",true,true];
     _unit setVariable ["dam_uncondition_injured0",true,true];
	 
	 [ _unit, false ] remoteExec [ "setUnconscious", _unit ];
	 [ _dragger, "grabDrag" ] remoteExec [ "playAction", _dragger ];
	 
	  sleep 0.1;
	  [_unit, "AinjPpneMrunSnonWnonDb"] remoteExec ["switchMove", 0];

	_unit attachTo [_dragger, [0, 1.1, 0.05]]; 
	[_unit, 180] remoteExec ["setDir", 0];

sleep 2; 

        waituntil { sleep 0.1; ((inputAction "MoveBack" != 1) or (!alive _unit) or (!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false]))
		};

		
		
			IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) then {	

			detach _unit;
		 [_unit,""] remoteExec ["switchMove", 0]; 
		 [ _unit, true ] remoteExec [ "setUnconscious", _unit ];

		 


		};

		IF (!alive _unit) then {

		detach _unit;
					 [_dragger,"AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon"] remoteExec ["playMove", 0]; 


		};
		
		
		
		
				IF (inputAction "MoveBack" != 1) then {
		
					 detach _unit;
					 [_dragger,"AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon"] remoteExec ["playMove", 0]; 
					 [_unit,"AinjPpneMrunSnonWnonDb_release"] remoteExec ["playMove", 0];
					 sleep 1;
					 [ _unit, true ] remoteExec [ "setUnconscious", _unit ];					 


				};							 
			IF (_numberOfKits > 0 ) then {
				for "_i" from 1 to _numberOfKits do { _dragger addItem "FirstAidKit"};
			};
		sleep 2;
		 _unit setVariable ["dam_player_lecit0",false,true];		
		 _unit setVariable ["dam_uncondition_injured0",false,true];


	},
    [],
    1.5, 
    true, 
    true, 
    "",
    "(_this distance _target < 2) && (_this != _target) && !(_target getVariable ['dam_uncondition_injured0',false]) && !(_target getVariable ['dam_player_lecit0',false]) && !(_this getVariable ['dam_ignore_injured0',false])", // _target, _this, _originalTarget
    2,
    true,
    "",
    ""
]	 
] remoteExec ["addAction",0];
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
//________________________________________________________________________________________________________________________________	 

//__________________Добавляем действие на лечение для игрока__________________________________________________

[
	_unit,											// Object the action is attached to
	localize "STR_Provide_medical_care",										// Title of the action
	"PiR\Icons\krest_CA.paa",	// Иконка действия
	"PiR\Icons\estpuls_CA.paa",	// Иконка прогресса
	"(_this distance _target < 2) && !(_target getVariable ['dam_uncondition_injured0',false]) && !(_this getVariable ['dam_ignore_injured0',false]) || (({'FirstAidKit' == _x} count (items _this) > 0) or ({'Medikit' == _x} count (items _this) > 0))",						// Условие к созданию действия
	"(_this distance _target < 2) && ((inputAction 'Action') > 0) && (alive _this) && (alive _target) && !(_this getVariable ['dam_ignore_injured0',false])",						// Условие на выполнение действия
	{// Старт
	
	_unit = (_this select 0);
	_dragger = (_this select 1);
	
	[_dragger,"AinvPknlMstpSnonWrflDr_medic4_old"] remoteExec ["playmove", 0];

	_unit setVariable ["dam_player_lecit0",true,true];



	
	
	
	
	},												
	{//  На каждое деление
	
		 _dragger = (_this select 1);
								IF (AnimationState _dragger == "AinvPknlMstpSnonWrflDnon_medicEnd" or  AnimationState _dragger == "AinvPknlMstpSnonWrflDr_medic0S" ) then {
						 	 [_dragger, (selectRandom ["AinvPknlMstpSnonWrflDr_medic0_old", "AinvPknlMstpSnonWrflDr_medic1_old", "AinvPknlMstpSnonWrflDr_medic2_old", "AinvPknlMstpSnonWrflDr_medic3_old", "AinvPknlMstpSnonWrflDr_medic4_old", "AinvPknlMstpSnonWrflDr_medic5_old"])] remoteExec ["playMove", 0];	
							};

	
	},													
	{// Финиш 
	
     _unit = (_this select 0);
	 _dragger = (_this select 1);

	 [_dragger,"AinvPknlMstpSnonWrflDnon_medicEnd"] remoteExec ["switchMove", 0];

	 _unit setDamage 0;
	 _unit setVariable ["dam_uncondition_injured0",true,true];
	 [ _unit, false ] remoteExec [ "setUnconscious", _unit ];
	 	 _unit setVariable ["dam_conec_istorii0",true,true]; 
		IF ({"Medikit" == _x} count (items _dragger) == 0) then {
		 _dragger removeItem "FirstAidKit";
		};
	 sleep 2;
	 _unit setVariable ["dam_player_lecit0",false,true];
	 
	},
	{// Прервано

	 _unit = (_this select 0);
	 _dragger = (_this select 1);

	IF ((_unit distance _dragger) < 2) then { 
	 [_dragger,"AinvPknlMstpSnonWrflDnon_medicEnd"] remoteExec ["switchMove", 0];	
	};

	 sleep 2;
	 _unit setVariable ["dam_player_lecit0",false,true];
		 
	},										
	[],													// Arguments passed to the scripts as _this select 3
	(20 + (random 15)),													// Action duration [s]
	4,													// Priority
	true,												// Remove on completion
	true												// Show in unconscious state 
] remoteExec ["BIS_fnc_holdActionAdd", 0, _unit];	// MP compatible implementation



//________________________________________________________________________________________________________________________________





	 
/////////////////// Основной цикл ////////////////////////////////////////
while {true}                  
do {

//__________________Проверка на выход___________________________________________________

	IF (_unit getVariable ["dam_conec_istorii0",false]) exitWith {
	
	 [_unit,"UnconsciousOutProne"] remoteExec ["switchMove", 0];
	 sleep 0.1;
	
	 [_unit] joinSilent _unitGrp;
	 { _unit reveal _x; } forEach allUnits;	
					PIR0jipId = [_unit, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) spawn PiRredirect0;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
	};
//______________________________________________________________________________________

//__________________ Проигрывание анимаций в бессознательном____________________________
	IF (_statys == 1) then {

	 _null = [_unit, _anim] spawn UnconditionAnim0;
		
	};

//______________________________________________________________________________________	
	
 _statys = 0;
 _tashit = 0;
 
 sleep 5 + (random 10);

 
 //__________________Ищем потаскуна_____________________________________________________
	while {true}                  
    do {

	 sleep 5;
	
		if ((!alive _unit) or (_tashit == 1) or (_unit getVariable ["dam_conec_istorii0",false]) or (time >= _bloodtime)) exitWith {
		};


     _nearestunits = _unit nearEntities ["CAManBase", 50];

     _nearPlayers = 0; 
        { 
        IF ((_x distance _unit) <= 50) then 
            { 
             _nearPlayers = _nearPlayers + 1;                                  
            }; 
        } forEach switchableUnits;
		        { 
        IF ((_x distance _unit) <= 50) then 
            { 
             _nearPlayers = _nearPlayers + 1;                                  
            }; 
        } forEach playableUnits;


        IF ((count _nearestunits) - _nearPlayers > 1) then {


		_dragger = selectRandom (_nearestunits - (playableUnits + switchableUnits + [_unit]));

            IF ((alive _dragger) && ( _unitGrpPR == str side _dragger) && (side _dragger != civilian) && (!isPlayer _dragger) && (_dragger != _unit) && !(_dragger getVariable ["dam_ignore_dragger0",false]) && !(_dragger getVariable ["dam_ignore_injured0",false]) && !(_unit getVariable ["dam_player_lecit0",false])) exitWith {
			 _dragger setVariable ["dam_ignore_dragger0",true,true];
		     _tashit = 1;
            };
        };

    };

	IF (!alive _unit) exitWith {
	};
 
 	IF (time >= _bloodtime) exitWith {
     _unit setDamage 1;

		IF (_shans == 10)  then {
		 _unit setHitPointDamage ["hitBody", 0];

		 _unit setHitPointDamage ["hitHands", 0];

		 _unit setHitPointDamage ["hitLegs", 0];
		};


		IF ((_shans == 7) or (_shans == 9))  then {
		 _unit setHitPointDamage ["hitHead", 0];

		 _unit setHitPointDamage ["hitHands", 0];

		 _unit setHitPointDamage ["hitLegs", 0];
		};

		IF ((_shans == 1) or (_shans == 3)) then {
		 _unit setHitPointDamage ["hitHead", 0];

		 _unit setHitPointDamage ["hitBody", 0];

		 _unit setHitPointDamage ["hitLegs", 0];
		};

		IF ((_shans == 2) or (_shans == 4) or (_shans == 6)) then {
		 _unit setHitPointDamage ["hitHead", 0];

		 _unit setHitPointDamage ["hitBody", 0];

		 _unit setHitPointDamage ["hitHands", 0];
		};
	 
	};

 	IF (_unit getVariable ["dam_conec_istorii0",false]) exitWith {
	
	 [_unit,"UnconsciousOutProne"] remoteExec ["switchMove", 0];
	 sleep 0.1;	
	 [_unit] joinSilent _unitGrp;
	 { _unit reveal _x; } forEach allUnits;	
					PIR0jipId = [_unit, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) spawn PiRredirect0;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
	};
 
 
 
 //______________________________________________________________________________________



//__________________Потаскун подбирается к раненному____________________________________

    IF ((alive _dragger) && (alive _unit) && !(_dragger getVariable ["dam_ignore_injured0",false]) && !(_unit getVariable ["dam_conec_istorii0",false]) && !(_unit getVariable ["dam_player_lecit0",false]) ) then {



	 [ _dragger, "MIDDLE"] remoteExec [ "setUnitPos", _dragger ];
	 [ _dragger, getpos _unit] remoteExec [ "doMove", _dragger ];


     _future = (time +  30 + random 15);

        waituntil { sleep 0.1; (_dragger distance _unit < 5) or (!alive _unit) or (!alive _dragger) or (time >= _future) or (_dragger getVariable ["dam_ignore_injured0",false]) or (_unit getVariable ["dam_conec_istorii0",false]) or (_unit getVariable ["dam_player_lecit0",false]) };

	 sleep 1;
		
        IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) exitWith {
		 _dragger setVariable ["dam_ignore_dragger0",false,true];
		}; 

        IF ((!alive _unit) or (time >= _future) or (_unit getVariable ["dam_conec_istorii0",false]) or (_unit getVariable ["dam_player_lecit0",false])) exitWith {
         [ _dragger, "AUTO" ] remoteExec [ "setUnitPos", _dragger ];
         dostop _dragger;
		 _dragger setVariable ["dam_ignore_dragger0",false,true];
		 }; 



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
		 private ["_dummy", "_dummygrp", "_dragger","_dummyV"];
		 _dragger = _this;
	
		 _dummygrp = createGroup civilian;
		 _dummy = _dummygrp createUnit ["C_Soldier_VR_F", [0,0,0], [], 0, "FORM"];
		 _dummy hideObjectGlobal true;
		 _dummy setDamage 0.6;
		 _dummy allowdammage false;
		 _dummy setBehaviour "CARELESS";
		 _dummy disableAI "FSM";	
		 _dummy setUnitPos "UP";
		 dostop _dragger;
		 sleep 0.3;
		 _dummyV = vectorDir (_dragger);		 
		 _dummy setPos ([_dragger, 0.6, (getDir _dragger)] call BIS_fnc_relPos);
		 _dummy	setDir ((getDir _dragger) - 180);	

		_dummy doMove ([_dragger, 10, ((getDir _dragger) - 180)] call BIS_fnc_relPos);
		 
		 sleep 0.1;		 
		 _dragger attachTo [_dummy, [0, 0.6, 0]]; 
		 [ _dragger, 180 ] remoteExec [ "setDir", _dragger ];
		 [ _dragger, _dummyV ] remoteExec [ "setVectorDir", _dragger ];	 
		 _dummypos = position _dummy;
		 _dummy
	
		};

	 _dummy = _dragger call _DummyClone;


	 [ _unit, false ] remoteExec [ "setUnconscious", _unit ];
	 [ _dragger, "grabDrag"] remoteExec [ "playAction", _dragger ];

	 sleep 0.1;
	 _unit setDir (_unit getdir _dragger);
	 [_unit,"AinjPpneMrunSnonWnonDb"] remoteExec ["switchMove", 0]; 	


	 
		waitUntil { sleep 0.1; (AnimationState _dragger == "amovpercmstpslowwrfldnon_acinpknlmwlkslowwrfldb_2") or (AnimationState _dragger == "amovpercmstpsnonwnondnon_acinpknlmwlksnonwnondb_2") or (!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false]) or (!alive _unit)
		}; 

		
		
		IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) exitwith {	
		 [ _dragger, "ANIM" ] remoteExec [ "enableAI", _dragger ];	
		 detach _dragger;
		 detach _dummy;
		 deleteVehicle _dummy;
		 [_unit,""] remoteExec ["switchMove", 0]; 
		 [ _unit, true ] remoteExec [ "setUnconscious", _unit ];
		 [_unit, _anim] remoteExec ["playMove", 0];
 		 _dragger setVariable ["dam_ignore_dragger0",false,true];
		 _statys = 1;
		};

		IF (!alive _unit) exitwith {
		 detach _dragger;
		 detach _dummy;
		 deleteVehicle _dummy;
		 [_dragger,""] remoteExec ["switchMove", 0]; 

		 [ _dragger, "ANIM" ] remoteExec [ "enableAI", _dragger ];
		 [ _dragger, "RED" ] remoteExec [ "setCombatMode", _dragger ];
		 [ _dragger, "AWARE" ] remoteExec [ "setBehaviour", _dragger ];
		 [ _dragger, "AUTO" ] remoteExec [ "setUnitPos", _dragger ];
		 
 		 _dragger setVariable ["dam_ignore_dragger0",false,true];
		 { _dragger reveal _x; } forEach allUnits;

		};

		_unit attachTo [_dummy, [-0.1, -0.5, 0]];
		 [_unit] joinSilent grpNull;

		 [_dragger, "AcinPknlMwlkSrasWrflDb"] remoteExec ["playMove", 0];
		 [ _dragger, "ANIM" ] remoteExec [ "disableAI", _dragger ];	

//______________________________________________________________________________________


//__________________Выбираем точку эвакуации____________________________________________


	 _emptyHouse = [];
	 _nearesthouses = _dragger nearObjects ["House",100];
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
	
		 _dis = (30 + random 20);	
		 _Pos = [_dragger, _dis, random 360] call BIS_fnc_relPos;
	
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

		waitUntil { sleep 0.1; (_dummy distance _Pos < 5) or (!alive _dragger) or (!alive _unit) or (_dragger getVariable ["dam_ignore_injured0",false]) or (time >= _future)
		};
		
		if (_dummy distance _dummypos < 0.5) then {
		 _pos = position _dummy;
		};

	 _future = (time + 40 + random 15);



		waituntil { sleep 0.1; (_dummy distance _Pos < 5) or (!alive _dragger) or (!alive _unit) or (_dragger getVariable ["dam_ignore_injured0",false]) or (time >= _future) or (_unit distance _dragger > 1.5) or (AnimationState _dragger != "acinpknlmwlksraswrfldb") or ((AnimationState _unit != "ainjppnemrunsnonwnondb") && (AnimationState _unit != "ainjppnemrunsnonwnondb_still"))
		};
//______________________________________________________________________________________
		
		
		
//__________________ Потаскун начинает лечение__________________________________________
	
		
			IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) then {	
			[ _dragger, "ANIM" ] remoteExec [ "enableAI", _dragger ];
			detach _unit;	
			detach _dragger;
			detach _dummy;
			deleteVehicle _dummy;
			[_unit,""] remoteExec ["switchMove", 0]; 
			[ _unit, true ] remoteExec [ "setUnconscious", _unit ];
			[_unit, _anim] remoteExec ["playMove", 0];
			[_unit] joinSilent _unitGrp;
			_dragger setVariable ["dam_ignore_dragger0",false,true];

				IF (true) exitwith {

				_statys = 1;

				};


			} else {

				IF (!alive _unit) then {
				 detach _unit;
				 detach _dragger;
				 detach _dummy;
				 deleteVehicle _dummy;
				 [_dragger,""] remoteExec ["switchMove", 0]; 

				 [ _dragger, "ANIM" ] remoteExec [ "enableAI", _dragger ];
				 [ _dragger, "RED" ] remoteExec [ "setCombatMode", _dragger ];
				 [ _dragger, "AWARE" ] remoteExec [ "setBehaviour", _dragger ];
				 [ _dragger, "AUTO" ] remoteExec [ "setUnitPos", _dragger ];

				 { _dragger reveal _x; } forEach allUnits;
				 dostop _dragger;
				 _dragger setVariable ["dam_ignore_dragger0",false,true];	

					IF (true) exitwith {
					};

				} else {

					IF ((_dummy distance _Pos < 5) or (time >= _future) or (AnimationState _dragger != "acinpknlmwlksraswrfldb") or ((AnimationState _unit != "ainjppnemrunsnonwnondb") && (AnimationState _unit != "ainjppnemrunsnonwnondb_still"))) then {
		
					 detach _unit;
					 detach _dragger;
					 detach _dummy;
					 deleteVehicle _dummy;
					 [_dragger,"AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon"] remoteExec ["playMove", 0]; 
					 [_unit,"AinjPpneMrunSnonWnonDb_release"] remoteExec ["playMove", 0];
					 sleep 1;
 					 [ _unit, ((getdir _dragger) + 90) ] remoteExec [ "setDir", _unit ];
					 [ _unit, true ] remoteExec [ "setUnconscious", _unit ];

					 sleep 4;
					 _dis = 1;       
					IF ((alive _dragger) && (alive _unit) && !(_dragger getVariable ["dam_ignore_injured0",false])) then {
					 _dummyV = vectorDir (_unit);
					 _unit attachTo [_dragger, [-0.2, 0.7, 0]];
					 [ _unit, _dummyV ] remoteExec [ "setVectorDir", _unit ];
					 [ _unit, 90 ] remoteExec [ "setDir", _unit ];
					 _dis = 0;
					 _future = time + 20 + (random 15);
					 [_dragger, "AinvPknlMstpSnonWrflDr_medic4_old"] remoteExec ["playMove", 0];

					 while {true}                  
						do {
							IF ((!alive _dragger) or (!alive _unit) or (_dragger getVariable ["dam_ignore_injured0",false]) or (time >= _future)) exitWith {
		
							};

							IF (AnimationState _dragger == "AinvPknlMstpSnonWrflDnon_medicEnd" or  AnimationState _dragger == "AinvPknlMstpSnonWrflDr_medic0S" ) then {
						 	 [_dragger, (selectRandom ["AinvPknlMstpSnonWrflDr_medic0_old", "AinvPknlMstpSnonWrflDr_medic1_old", "AinvPknlMstpSnonWrflDr_medic2_old", "AinvPknlMstpSnonWrflDr_medic3_old", "AinvPknlMstpSnonWrflDr_medic4_old", "AinvPknlMstpSnonWrflDr_medic5_old"])] remoteExec ["playMove", 0];	
							};
	
						 sleep 1;
						};

					 detach _dragger;
					 detach _unit;
					 };

						IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) then {


						 [_unit] joinSilent _unitGrp;
 						 [_unit,_anim] remoteExec ["switchMove", 0];

						 [_unit, _anim] remoteExec ["playMove", 0]; 
  						 [ _dragger, "ANIM" ] remoteExec [ "enableAI", _dragger ];
	
						 _dragger setVariable ["dam_ignore_dragger0",false,true];						
							IF ( _dis == 0 ) then {
							 [_dragger,""] remoteExec ["switchMove", 0];
							};
							IF (true) exitwith {
						
							 _statys = 1;

							};


						} else {

						 [_dragger,"AinvPknlMstpSnonWrflDnon_medicEnd"] remoteExec ["switchMove", 0]; 
						 sleep 3;
						 _unit setDamage 0;
						 [ _unit, false ] remoteExec [ "setUnconscious", _unit ];
						 [_unit,"UnconsciousOutProne"] remoteExec ["switchMove", 0]; 

						 [ _dragger, "ANIM" ] remoteExec [ "enableAI", _dragger ];
						 [ _dragger, "RED" ] remoteExec [ "setCombatMode", _dragger ];
						 [ _dragger, "AWARE" ] remoteExec [ "setBehaviour", _dragger ];
						 [ _dragger, "AUTO" ] remoteExec [ "setUnitPos", _dragger ];	

						 sleep 0.1;
	
						 { _dragger reveal _x; } forEach allUnits;
						 dostop _dragger;
						 _dragger setVariable ["dam_ignore_dragger0",false,true];	
							IF (true) exitwith {
							 _unit setVariable ["dam_conec_istorii0",true,true];

							};

						};

					};


				};

			};


		










	};


//______________________________________________________________________________________
 

};

//______________________________________________________________________________________
	 {_unit addMagazine [_x, 9999]} forEach _magsremove;

			IF (_numberOfKits > 0 ) then {
				for "_i" from 1 to _numberOfKits do { _unit addItem "FirstAidKit"};
			};
 



[_unit] remoteExec [ "removeAllActions", 0, true ];
 _unit setVariable ["dam_conec_istorii0",false,true];

};

 _unit setVariable ["dam_ignore_injured0",false,true];


	IF !(alive _unit) then {
 	 _unit setVariable ["dam_ignore_hit0",false];		
	};

	IF !(PiR_captive_on) then {
	 _unit setcaptive false;
	};