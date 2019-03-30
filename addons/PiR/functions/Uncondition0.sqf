if (!isServer) exitWith {}; 

params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremove"];

IF (alive _unit) then {

	IF !(PiR_captive_on) then {
	 [ _unit, true ] remoteExecCall [ "setcaptive", _unit ];
	};

_unitGrp = group _unit;
_unitLdr = leader _unit;
_unitGrpPR = str side group _unit;
_bloodtime = (time +  ((PiR_bloodlosing_on) + random ((PiR_bloodlosingM_on max PiR_bloodlosing_on) - (PiR_bloodlosing_on min PiR_bloodlosingM_on))));
_statys = 1;
_pos = [0,0,0];
_pos0 = [0,0,0];

 _magsremove = magazines _unit;
{_unit removeMagazineGlobal _x} forEach magazines _unit;
		 
[ _unit, true ] remoteExecCall [ "setUnconscious", _unit ];	 

};

[{(AnimationState (_this select 0) == "UnconsciousReviveDefault") or (!alive (_this select 0))
}, {
params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremove"];

	IF (alive _unit) then {
		
	 [_unit, _anim] remoteExecCall ["switchMove", 0];
	 [_unit, _anim] remoteExecCall ["playMove", 0];	 

		IF ((str _shooter == "") or (str _shooter == str _unit)) then {
		 _shooterV = getPos _unit;
		} ELSE {
		 _shooterV =  _unit getPos [50, _shooter];
		};
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
	
     params ["_unit"];

		IF ((damage _unit) < 0.89) then {
		 _unit setDamage ((damage _unit) + (damage _unit)*0.08);
		};
	},													
	{// Финиш 
	
     params ["_unit"];
	
	 _unit setDamage 1;
	 
	},
	{// Прервано


		 
	},										
	[],													// Arguments passed to the scripts as _this select 3
	((PiR_bloodkill_on) + random ((PiR_bloodkill_on max PiR_bloodkill_on) - (PiR_bloodkill_on min PiR_bloodkill_on))),													// Action duration [s]
	6,													// Priority
	true,												// Remove on completion
	true												// Show in unconscious state 
] remoteExecCall ["BIS_fnc_holdActionAdd", 0, _unit];	// MP compatible implementation



//________________________________________________________________________________________________________________________________
 
 //__________________Добавляем действие на перетаскивание для игрока__________________________________________________	 
	 
	 

	 
[_unit, 
[
    "<img size='3'  image='PiR\Icons\ruka_CA.paa'/>", 
    {
	 params ["_unit", "_dragger","_coordinate"];
	
	 _unit setVariable ["dam_player_lecit0",true,true];
     _unit setVariable ["dam_uncondition_injured0",true,true];
	 
	 [ _unit, false ] remoteExecCall [ "setUnconscious", _unit ];
	 [ _dragger, "grabDrag" ] remoteExecCall [ "playAction", _dragger ];

		[{
		 params ["_unit", "_dragger","_coordinate"];
		 [_unit, "AinjPpneMrunSnonWnonDb_grab"] remoteExecCall ["switchMove", 0];
		 [_unit, "AinjPpneMrunSnonWnonDb"] remoteExecCall ["playMove", 0];

		 _unit attachTo [_dragger, [0, 1.1, 0.05]]; 
		 [_unit, 180] remoteExecCall ["setDir", 0];
		 [ _unit, (vectorDir (_dragger))] remoteExecCall [ "setVectorDir", _unit ];
		 _unit setVariable ["dam_uncondition_drag0",true,true];
		 [_unit] remoteExec [ "UnconditionDrag0", 2 ];

			[{
			 params ["_unit", "_dragger","_coordinate"];

				[{(inputAction "MoveBack" != 1) or (!alive (_this select 0)) or (!alive (_this select 1)) or ((_this select 1) getVariable ["dam_ignore_injured0",false])
				}, {

				 params ["_unit", "_dragger","_coordinate"];
				 detach _unit;		
				 _coordinate = ([_dragger, 1.1, (getDir _dragger)] call BIS_fnc_relPos);
				 _coordinate set [2, ((getPosatl _dragger) select 2)];
				 _unit setPos _coordinate;	
				 _unit setVariable ["dam_uncondition_drag0",false,true];

					IF ((!alive _dragger) or (_dragger getVariable ["dam_ignore_injured0",false])) then {	

					 [_unit,"AinjPpneMrunSnonWnonDb_release"] remoteExecCall ["switchMove", 0];
						[{		
						 [(_this select 0), true ] remoteExecCall [ "setUnconscious", (_this select 0)];			 
						}, [_unit], 0.3] call CBA_fnc_waitAndExecute;
							
					} ELSE {

					 [_dragger,"AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon"] remoteExecCall ["playMove", 0]; 
						[{
						 params ["_unit", "_dragger"];
							IF (alive _unit) then {
		
							[_unit,"AinjPpneMrunSnonWnonDb_release"] remoteExecCall ["switchMove", 0];
							[ _unit, true ] remoteExecCall [ "setUnconscious", _unit ];					 	

							};	

							IF ((AnimationState _dragger == "AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon") or (AnimationState _dragger == "AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon" )) then {
								[{(AnimationState (_this select 0) != "AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon") && (AnimationState (_this select 0) != "AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon" ) && (AnimationState (_this select 0) != "AcinPknlMwlkSrasWrflDb" )
								}, {
								 [(_this select 0),"AmovPknlMstpSrasWrflDnon"] remoteExecCall ["switchMove", 0];
								}, [_dragger]] call CBA_fnc_waitUntilAndExecute;
							};
						}, [_unit, _dragger], 0.3] call CBA_fnc_waitAndExecute;
					};


					[{
					 (_this select 0) setVariable ["dam_player_lecit0",false,true];		
					 (_this select 0) setVariable ["dam_uncondition_injured0",false,true];
					}, [_unit], 2] call CBA_fnc_waitAndExecute;
				}, [_unit, _dragger, _coordinate]] call CBA_fnc_waitUntilAndExecute;
			}, [_unit, _dragger, _coordinate], 2] call CBA_fnc_waitAndExecute; 
		}, [_unit, _dragger, _coordinate], 0.1] call CBA_fnc_waitAndExecute; 
	},
    [],
    5.9, 
    true, 
    true, 
    "",
    "(_this distance _target < 2) && (_this != _target) && !(_target getVariable ['dam_uncondition_injured0',false]) && !(_target getVariable ['dam_player_lecit0',false]) && !(_this getVariable ['dam_ignore_injured0',false])", // _target, _this, _originalTarget
    2,
    true,
    "",
    ""
]	 
] remoteExecCall["addAction", 0, _unit];
	 
	 
	 
	 
	 
	 
	 
	 
	 
//________________________________________________________________________________________________________________________________	 

//__________________Добавляем действие на лечение для игрока__________________________________________________

[
	_unit,											// Юнит, которому добавляется действие
	localize "STR_Provide_medical_care",										// Название действия
	"PiR\Icons\krest_CA.paa",	// Иконка действия
	"PiR\Icons\estpuls_CA.paa",	// Иконка прогресса
	"(_this distance _target < 2) && (_this != _target) && !(_target getVariable ['dam_uncondition_injured0',false]) && ('PRONE' != stance _target) && !(_this getVariable ['dam_ignore_injured0',false]) || (({'PiR_bint' == _x} count (items _this) > 0) or ({'PiR_apteka' == _x} count (items _this) > 0) or ({'PiR_bint' == _x} count (items _target) > 0) or ({'PiR_apteka' == _x} count (items _target) > 0))",						// Условие к созданию действия
	"(_this distance _target < 2) && ((inputAction 'Action') > 0) && (alive _this) && (alive _target) && !(_this getVariable ['dam_ignore_injured0',false])",						// Условие на выполнение действия
	{// Старт
	
	 params ["_unit", "_dragger"];	
	 [_dragger,"AinvPknlMstpSnonWrflDr_medic4_old"] remoteExecCall ["playmove", 0];
     _unit setVariable ["dam_player_lecit0",true,true];

	},												
	{//  На каждое деление
	
	 _dragger = (_this select 1);
	
		IF (AnimationState _dragger == "AinvPknlMstpSnonWrflDnon_medicEnd" or  AnimationState _dragger == "AinvPknlMstpSnonWrflDr_medic0S" ) then {
		 [_dragger, (selectRandom ["AinvPknlMstpSnonWrflDr_medic0_old", "AinvPknlMstpSnonWrflDr_medic1_old", "AinvPknlMstpSnonWrflDr_medic2_old", "AinvPknlMstpSnonWrflDr_medic3_old", "AinvPknlMstpSnonWrflDr_medic4_old", "AinvPknlMstpSnonWrflDr_medic5_old"])] remoteExecCall ["playMove", 0];	
		};

	},													
	{// Финиш 
	
     params ["_unit", "_dragger"];

	 [_dragger,"AinvPknlMstpSnonWrflDnon_medicEnd"] remoteExecCall ["switchMove", 0];
	 _unit setDamage 0;
	 _unit setVariable ["dam_uncondition_injured0",true,true];
	 [ _unit, false ] remoteExecCall [ "setUnconscious", _unit ];
	 _unit setVariable ["dam_conec_istorii0",true,true];
	 [_unit,"UnconsciousOutProne"] remoteExecCall ["switchMove", 0]; 

		IF (({"PiR_apteka" == _x} count (items _unit) != 0) or ({"PiR_bint" == _x} count (items _unit) != 0)) then {
			IF ({"PiR_apteka" == _x} count (items _unit) == 0) then {
			 _unit removeItem "PiR_bint";
			};
		} ELSE {
			IF ({"PiR_apteka" == _x} count (items _dragger) == 0) then {
			 _dragger removeItem "PiR_bint";
			};
		};
	
		[{
		 (_this select 0) setVariable ["dam_player_lecit0",false,true];
		}, [_unit], 2] call CBA_fnc_waitAndExecute;
	},
	{// Прервано

	 params ["_unit", "_dragger"];

		IF ((_unit distance _dragger) < 2) then { 
		 [_dragger,"AinvPknlMstpSnonWrflDnon_medicEnd"] remoteExecCall ["switchMove", 0];	
		};

		[{
		 (_this select 0) setVariable ["dam_player_lecit0",false,true];
		}, [_unit], 2] call CBA_fnc_waitAndExecute;
		 
	},										
	[],													// Arguments passed to the scripts as _this select 3
	((PiR_bloodhill_on) + random ((PiR_bloodhillM_on max PiR_bloodhill_on) - (PiR_bloodhill_on min PiR_bloodhillM_on))),	// Action duration [s]
	6,													// Priority
	true,												// Remove on completion
	true												// Show in unconscious state 
] remoteExec ["BIS_fnc_holdActionAdd", 0, _unit];	// MP compatible implementation



//________________________________________________________________________________________________________________________________

	[_unit, _anim] call UnconditionAnim0;
	
	 _statys = 0;

		[{	 
		 params ["_unit", "_anim", "_shans", "_shooter", "_Pos", "_dummy", "_nearestunits", "_dragger", "_emptyHouse", "_nearesthouses", "_houseList", "_randomHouse", "_dis", "_randomSmoke", "_unitGrp", "_draggerGrp", "_ls", "_future", "_nearPlayers", "_isFriendly", "_bloodtime", "_tashit", "_statys", "_dummypos", "_unitGrpPR", "_pos0", "_dummyV", "_shooterV", "_unitLdr", "_magsremove"];

	 	 [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremove] call UnconditionFind0;
		}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremove], (5 + (random 10))] call CBA_fnc_waitAndExecute;
	} ELSE {

	 {_unit addMagazine [_x, 9999]} forEach _magsremove;
	 _unit setVariable ["dam_ignore_injured0",false,true];
	 [_unit] remoteExecCall [ "removeAllActions", 0, true ];

		IF !(PiR_captive_on) then {
		 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
		};
	};

 
}, [_unit, _anim, _shans, _shooter, _Pos, _dummy, _nearestunits, _dragger, _emptyHouse, _nearesthouses, _houseList, _randomHouse, _dis, _randomSmoke, _unitGrp, _draggerGrp, _ls, _future, _nearPlayers, _isFriendly, _bloodtime, _tashit, _statys, _dummypos, _unitGrpPR, _pos0, _dummyV, _shooterV, _unitLdr, _magsremove]] call CBA_fnc_waitUntilAndExecute;	

IF !(alive _unit) then {		
 _unit setVariable ["dam_ignore_injured0",false,true];
	IF !(PiR_captive_on) then {
	 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
	};
 };


