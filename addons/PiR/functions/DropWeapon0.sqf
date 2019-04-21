if (!isServer) exitWith {}; 

params ["_unit", "_anim", "_shans", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremoveU", "_weapon", "_weaponHolder", "_weaponHolder0", "_ranpos", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs","_unitLdr", "_magsremoveV", "_magsremoveB"];    

IF (alive _unit) then {

_unitGrp = group _unit;
_unitLdr = leader _unit;
_unitGrpPR = str side group _unit;
_ranpos = selectRandom [1,2,3];
 
IF !(PiR_captive_on) then {
[ _unit, true ] remoteExecCall [ "setcaptive", _unit ];
};

	 [_unit] joinSilent grpNull;
 
	 _pWeapon = primaryWeapon _unit;
	 _sWeapon = secondaryWeapon _unit;
	 _hWeapon = handgunWeapon _unit;
	 _pWItems = primaryWeaponItems _unit;
	 _sWItems = secondaryWeaponItems _unit;				
	 _hWItems = handgunItems _unit;			 

	 _pmag	= primaryWeaponMagazine _unit;
	 _smag	= secondaryWeaponMagazine _unit;
	 _hmag	= handgunMagazine _unit;
	 
	 _binocs = binocular _unit;	 
	 
	 _magsremoveU = getMagazineCargo uniformContainer _unit;
	 _magsremoveV = getMagazineCargo vestContainer _unit;
	 _magsremoveB = getMagazineCargo backpackContainer _unit;

	 clearMagazineCargoGlobal (uniformContainer _unit); 
	 clearMagazineCargoGlobal (vestContainer _unit);
	 clearMagazineCargoGlobal (backpackContainer _unit);

	 _weapon = currentWeapon _unit;      



	 
//_________________________________________________Выбиваем оружие___________________________________________________________________	 
	 
	 _weaponHolder = "WeaponHolderSimulated" createVehicle [0,0,0];
	 _weaponHolder addWeaponCargoGlobal [_weapon,1];
	 _weaponHolder0 = "WeaponHolderSimulated" createVehicle [0,0,0];
	 _weaponHolder0 addWeaponCargoGlobal [_weapon,1];
	 


		IF ("STAND" == stance _unit )  then {
		 _weaponHolder setPos (_unit modelToWorld [0,0.2,1.2]); 
		 _weaponHolder0 setPos (_unit modelToWorld [0.08,0.22,1.22]);
		};
		IF ("CROUCH" == stance _unit ) then {
		 _weaponHolder setPos (_unit modelToWorld [0,0.2,0.8]); 
		 _weaponHolder0 setPos (_unit modelToWorld [0.08,0.22,0.82]);		
		};
		IF ("PRONE" == stance _unit ) then {
		 _weaponHolder setPos (_unit modelToWorld [0,0.7,0.2]); 
		 _weaponHolder0 setPos (_unit modelToWorld [0.08,0.72,0.22]);
    	};
		IF ("UNDEFINED" == stance _unit ) then {
		 _weaponHolder setPos (_unit modelToWorld [0,0.2,1.1]); 
		 _weaponHolder0 setPos (_unit modelToWorld [0.08,0.22,1.12]);
    	};



	 _weaponHolder setDir (getDir _unit);


	 _weaponHolder setVelocity [3 * sin(((getDir _unit)-80) + (random 160)), 3 * cos(((getDir _unit)-80) + (random 160)),4]; 

	 [{
	 clearWeaponCargoGlobal (_this select 0);
	 deleteVehicle (_this select 0);
	 }, [_weaponHolder0], 0.1] call CBA_fnc_waitAndExecute;
	 
	 
//______________________________________________________________________________________________________________________________

//_________________________________________________Бежит в панике_______________________________________________________________
	[{
	 params ["_unit", "_ranpos"];
	

     [_unit, (primaryWeapon _unit)] remoteExecCall ["removeWeapon", _unit];
	 [_unit, (secondaryWeapon _unit)] remoteExecCall ["removeWeapon", _unit];		 
	 [_unit, (handgunWeapon _unit)] remoteExecCall ["removeWeapon", _unit];
	 [_unit, (binocular _unit)] remoteExecCall ["removeWeapon", _unit];

		IF (alive _unit) then {
			IF ("STAND" == stance _unit )  then {

				IF (_ranpos == 1) then {
				 [_unit, "ApanPercMstpSnonWnonDnon_G01"] remoteExecCall ["switchMove", 0];
				};
				IF (_ranpos == 2) then {
				 [_unit, "ApanPercMstpSnonWnonDnon_ApanPknlMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
				};
				IF (_ranpos == 3) then {
				 [_unit, "ApanPercMstpSnonWnonDnon_ApanPpneMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
				};			
			} ELSE {
				IF ("CROUCH" == stance _unit ) then {
		
					IF (_ranpos == 1) then {
					[_unit, "ApanPknlMstpSnonWnonDnon_ApanPercMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
					};
					IF (_ranpos == 2) then {
					[_unit, "ApanPknlMstpSnonWnonDnon_G01"] remoteExecCall ["switchMove", 0];
					};
					IF (_ranpos == 3) then {
					[_unit, "ApanPknlMstpSnonWnonDnon_ApanPpneMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
					};		 
				} ELSE {
					IF ("PRONE" == stance _unit ) then {

					IF (_ranpos == 1) then {
					[_unit, "ApanPpneMstpSnonWnonDnon_ApanPercMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
					};
					IF (_ranpos == 2) then {
					[_unit, "ApanPpneMstpSnonWnonDnon_ApanPknlMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
					};
					IF (_ranpos == 3) then {
					[_unit, "ApanPpneMstpSnonWnonDnon_G01"] remoteExecCall ["switchMove", 0];
					};
					} ELSE {
						IF ("UNDEFINED" == stance _unit ) then {

							IF (_ranpos == 1) then {
							 [_unit, "ApanPknlMstpSnonWnonDnon_ApanPercMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
							};
							IF (_ranpos == 2) then {
							 [_unit, "ApanPknlMstpSnonWnonDnon_G01"] remoteExecCall ["switchMove", 0];
							};
							IF (_ranpos == 3) then {
							 [_unit, "ApanPknlMstpSnonWnonDnon_ApanPpneMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
							};	
						};
					};
				};
			};


  		

		 
//__________________Добавляем действие на перетаскивание для игрока__________________________________________________	 
	 
	 

	 
[_unit, 
[
    "<img size='3'  image='PiR\Icons\klast_CA.paa'/>", 
    {

		
		_unit = (_this select 0);
		_dragger = (_this select 1);

		IF (alive _unit) then {
			IF ("STAND" == stance _dragger )  then {
			 [_dragger, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExecCall ["playMove", 0];
			} ELSE {
				IF ("CROUCH" == stance _dragger ) then {
				 [_dragger, "AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"] remoteExecCall ["playMove", 0];
				} ELSE {
					IF ("PRONE" == stance _dragger ) then {
					 [_dragger, "AinvPpneMstpSrasWrflDnon_Putdown_AmovPpneMstpSrasWrflDnon"] remoteExecCall ["playMove", 0];
					} ELSE {
						IF ("UNDEFINED" == stance _dragger ) then {
						 [_dragger, "AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"] remoteExecCall ["playMove", 0];
						};	
					};
				};
			};
		};

	[{		
	 (_this select 0) setVariable ["dam_player_lecit0",true,true];
	}, [_unit], 1] call CBA_fnc_waitAndExecute;




	},
    [],
    6, 
    true, 
    true, 
    "",
    "(_this distance _target < 2) && !(_target getVariable ['dam_player_lecit0',false]) && !(_this getVariable ['dam_ignore_injured0',false])", // _target, _this, _originalTarget
    2,
    false,
    "",
    ""
]	 
] remoteExecCall ["addAction", 0, _unit];
	 
	 
	 
		};

	}, [_unit, _ranpos], 0.1] call CBA_fnc_waitAndExecute;

	

	
 _dis = ((PiR_drop_on) + random ((PiR_dropM_on max PiR_drop_on) - (PiR_drop_on min PiR_dropM_on)));  
 _Pos = getPos _unit;
 _timer = (time +  (((PiR_drop_on) * 2) + random ((PiR_dropM_on max PiR_drop_on) - (PiR_drop_on min PiR_dropM_on))));
	 
//________________________________________________________________________________________________________________________________	 
		 
[{((_this select 0) distance (_this select 12) >= (_this select 11)) or (!alive (_this select 0)) or (time >= (_this select 13)) or ((_this select 0) getVariable ['dam_player_lecit0',false])
}, {		 
params ["_unit", "_anim", "_shans", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremoveU", "_weapon", "_ranpos", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs","_unitLdr", "_magsremoveV", "_magsremoveB"];		 
		 
 
			 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
			 _unit setVariable ["dam_player_lecit0",false,true];



[{

params ["_unit", "_anim", "_shans", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremoveU", "_weapon", "_ranpos", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs","_unitLdr", "_magsremoveV", "_magsremoveB"]; 


		IF (alive _unit) then {

		 [_unit, "Down"] remoteExecCall ["playAction", 0];
			[{
			 params ["_unit"];

			 [_unit,"AmovPpneMstpSnonWnonDnon_AinvPpneMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];			 
			 [_unit,"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon"] remoteExecCall ["playMove", 0];
			}, [_unit], 1] call CBA_fnc_waitAndExecute;	

		};

//______________________________________________________________________________________________________________________________


//_________________________________________________Выход________________________________________________________________________

[{

params ["_unit", "_anim", "_shans", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremoveU", "_weapon", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs","_unitLdr", "_magsremoveV", "_magsremoveB"]; 


	 
	IF 	( _weapon ==  _sWeapon ) then {
		IF (_pWeapon != "") then {
			IF ((_pmag select 0) != "") then {
			 _unit addMagazine [(_pmag select 0), 9999];
			 };
		 [_unit, _pWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _pWItems;
		};
		IF (_hWeapon != "") then {
			IF ((_hmag select 0) != "") then {
			 _unit addMagazine [(_hmag select 0), 9999];
			}; 
		 [_unit, _hWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _hWItems;
		};	
		IF (_binocs != "") then {
		 [_unit, _binocs] remoteExecCall ["addWeapon", _unit];
		};
	};
	
	IF ( _weapon ==  _pWeapon ) then {
		IF (_sWeapon != "") then {
			IF ((_smag select 0) != "") then {
			 _unit addMagazine [(_smag select 0), 9999];
			};
		 [_unit, _sWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _sWItems;
		};
		IF (_hWeapon != "") then {
			IF ((_hmag select 0) != "") then {
			 _unit addMagazine [(_hmag select 0), 9999];
			};
		 [_unit, _hWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _hWItems;
		};	
		IF (_binocs != "") then {
		 [_unit, _binocs] remoteExecCall ["addWeapon", _unit];
		};
	};
	
	IF ( _weapon ==  _hWeapon ) then {
		IF (_sWeapon != "") then {
			IF ((_Smag select 0) != "") then {
			 _unit addMagazine [(_smag select 0), 9999];
			}; 
		 [_unit, _sWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _sWItems;
		};
		IF (_pWeapon != "") then {
			IF ((_pmag select 0) != "") then {
			 _unit addMagazine [(_pmag select 0), 9999];
			};
		[_unit, _pWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _pWItems;
		};
		 IF (_binocs != "") then {
		 [_unit, _binocs] remoteExecCall ["addWeapon", _unit];
		};	
	};

	IF ( _weapon ==  _binocs ) then {
		IF (_sWeapon != "") then {
			IF ((_smag select 0) != "") then {
			 _unit addMagazine [(_smag select 0), 9999];
			};
		 [_unit, _sWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _sWItems;
		};
		IF (_pWeapon != "") then {
			IF ((_pmag select 0) != "") then {
			 _unit addMagazine [(_pmag select 0), 9999];
			};
		 [_unit, _pWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _pWItems;
		};
		IF (_hWeapon != "") then {
			IF ((_hmag select 0) != "") then {
			 _unit addMagazine [(_hmag select 0), 9999];
			}; 
		 [_unit, _hWeapon] remoteExecCall ["addWeapon", _unit];
		 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", _unit]} forEach _hWItems;
		};
	};	


	 {(uniformContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveU select 1) select _forEachIndex)]} forEach (_magsremoveU select 0);
	 {(vestContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveV select 1) select _forEachIndex)]} forEach (_magsremoveV select 0);
	 {(backpackContainer _unit) addMagazineCargoGlobal [_x,  ((_magsremoveB select 1) select _forEachIndex)]} forEach (_magsremoveB select 0);	
	

	 [_unit] joinSilent _unitGrp;
	IF (_unit == _unitLdr) then {
	 _unitGrp selectLeader _unit;
	};




	 _unit setVariable ["dam_ignore_injured0",false,true];	 
	 _unit setVariable ["dam_player_lecitsebia0",false,true];	 
	 IF (alive _unit) then {
					PIR0jipId = [_unit, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExecCall ["call", 0, true];
	 };

IF !(PiR_captive_on) then {
[ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
};


}, [_unit, _anim, _shans, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremoveU, _weapon, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _unitLdr, _magsremoveV, _magsremoveB], 2] call CBA_fnc_waitAndExecute; 

}, [_unit, _anim, _shans, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremoveU, _weapon, _ranpos, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _unitLdr, _magsremoveV, _magsremoveB], 0.5] call CBA_fnc_waitAndExecute; 

}, [_unit, _anim, _shans, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremoveU, _weapon, _ranpos, _dis, _Pos, _timer, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _unitLdr, _magsremoveV, _magsremoveB]] call CBA_fnc_waitUntilAndExecute;

};