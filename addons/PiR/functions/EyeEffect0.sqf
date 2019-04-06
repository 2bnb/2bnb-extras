params [ "_unit", "_anim", "_shans", "_shooter", "_effect1", "_effect2", "_effect3"];
  

if !(local _unit) exitWith {};

IF !(_unit getVariable ["dam_player_lecitsebiaKR0",false]) then {



_effect1 = ppEffectCreate ["ChromAberration", 200]; 
 
_effect1 ppeffectenable true;

_effect2 = ppEffectCreate ["RadialBlur", 100]; 
 
_effect2 ppeffectenable true; 

_effect3 = ppEffectCreate ["ColorCorrections", 1500];  
  
_effect3 ppeffectenable true; 

_unit setVariable ["dam_player_lecitsebiaKR0",true,true];
};


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
] remoteExecCall ["addAction", 0, _unit];
	 
	 
	 
	 
	 
	 
	 
	 
	 
//________________________________________________________________________________________________________________________________	 

};

IF ((!alive _unit) or ((damage _unit <= 0.1) && !(_unit getVariable ["dam_ignore_injured0",false]))) exitWith {
[_unit] remoteExecCall [ "removeAllActions", 0, true ];
_unit setVariable ["dam_player_lecitsebia0",false,true];
_unit setVariable ["dam_player_lecitsebiaKR0",false,true];
 	_effect3 ppEffectEnable false;
	ppEffectDestroy _effect3;
	
	_effect2 ppEffectEnable false;
	ppEffectDestroy _effect2;
	
	_effect1 ppEffectEnable false;
	ppEffectDestroy _effect1;

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

IF (((damage _unit) > 0.79) && !(_unit getVariable ["dam_ignore_injured0",false]) && (vehicle _unit == _unit)) then {
	 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
		_unit setVariable ["dam_ignore_injured0",true,true];	
    remoteExecCall ["", PIR0jipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExecCall ["call"];
	 [_unit, _anim, _shans, _shooter] remoteExecCall [ "Uncondition0", 2 ];

};


				10 cutRsc ["PIR_SCREEN_BLOOD","PLAIN",(5-5*(damage _unit))];



//___________________________Абберация_____________________________________



 
 
_effect1 ppeffectadjust [
0.07,   //Абберация по горизонтали (использую 0.01 и 0.02)
0.09,   //Абберация по вертикали  (использую 0.03 и 0.04)
false   //Короче, что-то ненужное)
];  


_effect1 ppeffectcommit 0.2;




//___________________________Круговое размытие_______________________________


 
_effect2 ppeffectadjust [
0.02,   // Размытие по горизонтали (использую 0.02 и 0.03)
0.02,   // Размытие по вертикали (использую 0.02 и 0.03)
0.22,   // Стягивание по горизонтали (использую 0.22 и 0.04)
0.22    // Стягивание по вертикали  (использую 0.22 и 0.04)
];  
_effect2 ppeffectcommit 0.2;



//___________________________Цветокоррекция____________________________________

 
  
_effect3 ppeffectadjust [ 
0.3,             // Яркость 0-2 
1.2,        // Контрастность 0- 
0,      // Смещение 
[0.150, 0.022, 0.018, 1],   //Цвет для смешивания 0-1 (0 - исходный цвет, 1 - смешанный цвет) 
[0.150, 0.022, 0.018, 0],   //Цвет для раскрашивания 0-1 (0 - исходный цвет, 1 - черно-белый, умноженный на цвет colorize) 
[1, 1, 1, 0],  //Цветовые веса RGB для десатурации 
 [ 
  0.8,        //Контур по горизонтали 
  0,    //Контур по вертикали 
  0,    //Вращение контура  
  0,    //Смещение контура по горизонтали -0.5 - 0.5 
  0,    //Смещение контура по вертикали -0.5 - 0.5 
  0.8,    //Коэффициент для внутреннего радиуса (где эффект не применяется) 
  0.06   //Коэффициент для интерполяции цвета между внутренним и внешним радиусом 
 ] 
];   
_effect3 ppeffectcommit 0.2;



//_____________________________________________________________________________________________________________________________________

[{

params [ "_unit", "_anim", "_shans", "_shooter", "_effect1", "_effect2", "_effect3"];
//_____________________________________________________________________________________________________________________________________


//___________________________Абберация_____________________________________




 
_effect1 ppeffectadjust [
0.02,   //Абберация по горизонтали (использую 0.01 и 0.02)
0.04,   //Абберация по вертикали  (использую 0.03 и 0.04)
false   //Короче, что-то ненужное)
];  


_effect1 ppeffectcommit 1;




//___________________________Круговое размытие_______________________________

 
 
_effect2 ppeffectadjust [
0.03,   // Размытие по горизонтали (использую 0.02 и 0.03)
0.03,   // Размытие по вертикали (использую 0.02 и 0.03)
0.04,   // Стягивание по горизонтали (использую 0.22 и 0.04)
0.04    // Стягивание по вертикали  (использую 0.22 и 0.04)
];  
_effect2 ppeffectcommit 1;



//___________________________Цветокоррекция____________________________________


  
_effect3 ppeffectadjust [ 
0.9,             // Яркость 0-2 
1.1,        // Контрастность 0- 
0,      // Смещение 
[0.150, 0.022, 0.018, 0.1],   //Цвет для смешивания 0-1 (0 - исходный цвет, 1 - смешанный цвет) 
[0.150, 0.022, 0.018, 0],   //Цвет для раскрашивания 0-1 (0 - исходный цвет, 1 - черно-белый, умноженный на цвет colorize) 
[1, 1, 1, 0],  //Цветовые веса RGB для десатурации 
 [ 
  0.8,        //Контур по горизонтали 
  (0.51-0.5*(damage _unit)),    //Контур по вертикали 
  0,    //Вращение контура  
  0,    //Смещение контура по горизонтали -0.5 - 0.5 
  0,    //Смещение контура по вертикали -0.5 - 0.5 
  0.06,    //Коэффициент для внутреннего радиуса (где эффект не применяется) 
  3.06   //Коэффициент для интерполяции цвета между внутренним и внешним радиусом 
 ] 
];   
_effect3 ppeffectcommit 1;


//_____________________________________________________________________________________________________________________________________


[{

params [ "_unit", "_anim", "_shans", "_shooter", "_effect1", "_effect2", "_effect3"];

//_____________________________________________________________________________________________________________________________________


	
[_unit, _anim, _shans, _shooter, _effect1, _effect2, _effect3] call EyeEffect0;		
 
 }, [_unit, _anim, _shans, _shooter, _effect1, _effect2, _effect3], (6 - (random 3))] call CBA_fnc_waitAndExecute;
 }, [_unit, _anim, _shans, _shooter, _effect1, _effect2, _effect3], 0.2] call CBA_fnc_waitAndExecute;
 
 

 