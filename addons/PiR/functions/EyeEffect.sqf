if (!isServer) exitWith {}; 
params [ "_unit", "_anim", "_shans", "_shooter"];

	 
   

IF ((alive _unit) && !(_unit getVariable ["dam_player_lecitsebia0",false])) then {


_unit setVariable ["dam_player_lecitsebia0",true,true];

//__________________Добавляем действие на лечение для игрока__________________________________________________	 
	 
	 

	 
[_unit, 
[
    "<img size='3'  image='PiR\Icons\sebia_CA.paa'/>", 
    {

		
		params ["_unit", "_dragger"];

		IF (_unit == _dragger) then {

			IF ("PRONE" == stance _dragger ) then {
				IF ((currentWeapon _dragger) == (handgunWeapon _dragger)) then {
				 [_dragger, "AinvPpneMstpSlayWpstDnon_medic"] remoteExecCall ["playMove", 0];
				} ELSE {
				 [_dragger, "AinvPpneMstpSlayWnonDnon_medic"] remoteExecCall ["playMove", 0];
				};	
			} ELSE {
				IF ((currentWeapon _dragger) == (handgunWeapon _dragger)) then {
				 [_dragger, "AinvPknlMstpSlayWpstDnon_medic"] remoteExecCall ["playMove", 0];
				} ELSE {
				 [_dragger, "AinvPknlMstpSlayWrflDnon_medic"] remoteExecCall ["playMove", 0];
				};	
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
		
		};

		IF ({"PiR_apteka" == _x} count (items _dragger) == 0) then {
		 _dragger removeItem "PiR_bint";
		 _unit setDamage 0.1;
		} ELSE {
		 _unit setDamage 0;
		};




	},
    [],
    5.8, 
    true, 
    true, 
    "",
    "(_this distance _target < 2) && !(_target getVariable ['dam_ignore_injured0',false]) && !(_this getVariable ['dam_ignore_injured0',false]) && (({'PiR_bint' == _x} count (items _this) > 0) or ({'PiR_apteka' == _x} count (items _this) > 0)) && (vehicle _target == _target)", // _target, _this, _originalTarget
    2,
    false,
    "",
    ""
]	 
] remoteExecCall ["addAction",0];

//________________________________________________________________________________________________________________________________	 

};

IF ((!alive _unit) or ((damage _unit <= 0.1) && !(_unit getVariable ["dam_ignore_injured0",false]))) exitWith {
[_unit] remoteExecCall [ "removeAllActions", 0, true ];
_unit setVariable ["dam_player_lecitsebia0",false,true];
		_unit setVariable ["dam_zdorovie_lecit0", (damage _unit) ,true];
 		_unit setVariable ["dam_ignore_effect0",false,true];
};


	IF ((damage _unit) < 0.89) then {
	 _unit setDamage ((damage _unit) + (damage _unit)*0.06);
	 
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
	_unit setVariable ["dam_zdorovie_lecit0", (damage _unit) ,true];

IF ((alive _unit) && ((damage _unit) > 0.79) && !(_unit getVariable ["dam_ignore_injured0",false]) && (vehicle _unit == _unit)) then {
	[_unit] remoteExecCall [ "removeAllActions", 0, true ];
		_unit setVariable ["dam_ignore_injured0",true,true];	
    remoteExecCall ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExecCall ["call"];

	 [_unit, _anim, _shans, _shooter] call Uncondition;

};

[{

params [ "_unit", "_anim", "_shans", "_shooter"];

IF ((alive _unit) && (damage _unit > 0.6) && ({"PiR_bint" == _x} count (items _unit) != 0) && !(_unit getVariable ["dam_ignore_injured0",false]) && !(_unit getVariable ["dam_ignore_dragger0",false]) && (vehicle _unit == _unit)) then {

			IF ("PRONE" == stance _unit ) then {
				IF ((currentWeapon _unit) == (handgunWeapon _unit)) then {
				 [_unit, "AinvPpneMstpSlayWpstDnon_medicOut"] remoteExecCall ["playMove", 0];
				} ELSE {
				 [_unit, "AinvPpneMstpSlayWpstDnon_medicOut"] remoteExecCall ["playMove", 0];
				};	
			} ELSE {
				IF ((currentWeapon _unit) == (handgunWeapon _unit)) then {
				 [_unit, "AinvPknlMstpSlayWpstDnon_medic"] remoteExecCall ["playMove", 0];
				} ELSE {
				 [_unit, "AinvPknlMstpSlayWrflDnon_medic"] remoteExecCall ["playMove", 0];
				};	
			};
	_unit setDamage 0;
	_unit removeItem "PiR_bint";
};






//_____________________________________________________________________________________________________________________________________


	
[_unit, _anim, _shans, _shooter] call EyeEffect;		
 
 }, [_unit, _anim, _shans, _shooter], (6 - (random 3))] call CBA_fnc_waitAndExecute;

