if (!isServer) exitWith {}; 

_unit = (_this select 0);
_anim = (_this select 1);
_shans = (_this select 2);

private ["_unit", "_anim", "_shans", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_weapon", "_weaponHolder", "_weaponHolder0", "_ranpos", "_dis", "_Pos", "_timer","_numberOfKits", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs","_unitLdr"];    

_unitGrp = group _unit;
_unitLdr = leader _unit;
_unitGrpPR = str side group _unit;
 


IF !(PiR_captive_on) then {
_unit setcaptive true;
};

		
 

	IF (alive _unit) then {

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
	 
	 _magsremove = magazines _unit;
	 {_unit removeMagazineGlobal _x} forEach magazines _unit;

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

	 sleep 0.1;
	 clearWeaponCargoGlobal _weaponHolder0;
	 deleteVehicle _weaponHolder0;
	 
	 [_unit, (primaryWeapon _unit)] remoteExec ["removeWeapon", 0];
	 [_unit, (secondaryWeapon _unit)] remoteExec ["removeWeapon", 0];		 
	 [_unit, (handgunWeapon _unit)] remoteExec ["removeWeapon", 0];
	 [_unit, (binocular _unit)] remoteExec ["removeWeapon", 0];		 
//______________________________________________________________________________________________________________________________

//_________________________________________________Бежит в панике_______________________________________________________________

	 _ranpos = selectRandom [1,2,3];

		IF (alive _unit) then {
			IF ("STAND" == stance _unit )  then {

				IF (_ranpos == 1) then {
				 [_unit, "ApanPercMstpSnonWnonDnon_G01"] remoteExec ["switchMove", 0];
				};
				IF (_ranpos == 2) then {
				 [_unit, "ApanPercMstpSnonWnonDnon_ApanPknlMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
				};
				IF (_ranpos == 3) then {
				 [_unit, "ApanPercMstpSnonWnonDnon_ApanPpneMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
				};			
			} ELSE {
				IF ("CROUCH" == stance _unit ) then {
		
					IF (_ranpos == 1) then {
					[_unit, "ApanPknlMstpSnonWnonDnon_ApanPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
					};
					IF (_ranpos == 2) then {
					[_unit, "ApanPknlMstpSnonWnonDnon_G01"] remoteExec ["switchMove", 0];
					};
					IF (_ranpos == 3) then {
					[_unit, "ApanPknlMstpSnonWnonDnon_ApanPpneMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
					};		 
				} ELSE {
					IF ("PRONE" == stance _unit ) then {

					IF (_ranpos == 1) then {
					[_unit, "ApanPpneMstpSnonWnonDnon_ApanPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
					};
					IF (_ranpos == 2) then {
					[_unit, ""] remoteExec ["switchMove", _unit];
					[_unit, "ApanPpneMstpSnonWnonDnon_ApanPknlMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
					};
					IF (_ranpos == 3) then {
					[_unit, "ApanPpneMstpSnonWnonDnon_G01"] remoteExec ["switchMove", 0];
					};
					} ELSE {
						IF ("UNDEFINED" == stance _unit ) then {

							IF (_ranpos == 1) then {
							 [_unit, "ApanPknlMstpSnonWnonDnon_ApanPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
							};
							IF (_ranpos == 2) then {
							 [_unit, "ApanPknlMstpSnonWnonDnon_G01"] remoteExec ["switchMove", 0];
							};
							IF (_ranpos == 3) then {
							 [_unit, "ApanPknlMstpSnonWnonDnon_ApanPpneMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
							};	
						};
					};
				};
			};


		 _dis = ((PiR_drop_on) + random ((PiR_dropM_on max PiR_drop_on) - (PiR_drop_on min PiR_dropM_on)));  
		 _Pos = getPos _unit;

   
		 _timer = (time +  (((PiR_drop_on) * 2) + random ((PiR_dropM_on max PiR_drop_on) - (PiR_drop_on min PiR_dropM_on))));   		

		 
//__________________Добавляем действие на перетаскивание для игрока__________________________________________________	 
	 
	 

	 
[_unit, 
[
    "<img size='3'  image='PiR\Icons\klast_CA.paa'/>", 
    {

		
		_unit = (_this select 0);
		_dragger = (_this select 1);

		IF (alive _unit) then {
			IF ("STAND" == stance _dragger )  then {
			 [_dragger, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["playMove", 0];
			} ELSE {
				IF ("CROUCH" == stance _dragger ) then {
				 [_dragger, "AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"] remoteExec ["playMove", 0];
				} ELSE {
					IF ("PRONE" == stance _dragger ) then {
					 [_dragger, "AinvPpneMstpSrasWrflDnon_Putdown_AmovPpneMstpSrasWrflDnon"] remoteExec ["playMove", 0];
					} ELSE {
						IF ("UNDEFINED" == stance _dragger ) then {
						 [_dragger, "AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"] remoteExec ["playMove", 0];
						};	
					};
				};
			};
		};

	 sleep 1;		
	 _unit setVariable ["dam_player_lecit0",true,true];




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
] remoteExec ["addAction",0];
	 
	 
	 
	 
	 
	 
	 
	 
	 
//________________________________________________________________________________________________________________________________	 
		 
		 
		 
		 
			waituntil { sleep 0.5; ((_unit distance _Pos >= _dis) or (!alive _unit) or (time >= _timer) or (_unit getVariable ['dam_player_lecit0',false]))
			};	 
			 [_unit] remoteExec [ "removeAllActions", 0, true ];
			 _unit setVariable ["dam_player_lecit0",false,true];
		};
		 sleep 0.5;
		IF (alive _unit) then {

		IF (_ranpos == 1) then {

			 [_unit,"AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon"] remoteExec ["switchMove", 0];			 
			};
			IF (_ranpos == 2) then {

			 [_unit,"AmovPknlMstpSnonWnonDnon_AwopPknlMstpSoptWbinDnon"] remoteExec ["switchMove", 0];
			};
			IF (_ranpos == 3) then {

			 [_unit,"AmovPpneMstpSnonWnonDnon_AinvPpneMstpSnonWnonDnon"] remoteExec ["switchMove", 0];
			};			 

			 [_unit,"AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon"] remoteExec ["playMove", 0];
		 

		 sleep 2;

		};

//______________________________________________________________________________________________________________________________


//_________________________________________________Выход________________________________________________________________________




	 
	IF 	( _weapon ==  _sWeapon ) then {
		IF (_pWeapon != "") then {
			IF ((_pmag select 0) != "") then {
			 _unit addMagazine [(_pmag select 0), 9999];
			 };
		 [_unit, _pWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _pWItems;
		};
		IF (_hWeapon != "") then {
			IF ((_hmag select 0) != "") then {
			 _unit addMagazine [(_hmag select 0), 9999];
			}; 
		 [_unit, _hWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _hWItems;
		};	
		IF (_binocs != "") then {
		 [_unit, _binocs] remoteExec ["addWeapon", 0];
		};
	};
	
	IF ( _weapon ==  _pWeapon ) then {
		IF (_sWeapon != "") then {
			IF ((_smag select 0) != "") then {
			 _unit addMagazine [(_smag select 0), 9999];
			};
		 [_unit, _sWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _sWItems;
		};
		IF (_hWeapon != "") then {
			IF ((_hmag select 0) != "") then {
			 _unit addMagazine [(_hmag select 0), 9999];
			};
		 [_unit, _hWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _hWItems;
		};	
		IF (_binocs != "") then {
		 [_unit, _binocs] remoteExec ["addWeapon", 0];
		};
	};
	
	IF ( _weapon ==  _hWeapon ) then {
		IF (_sWeapon != "") then {
			IF ((_Smag select 0) != "") then {
			 _unit addMagazine [(_smag select 0), 9999];
			}; 
		 [_unit, _sWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _sWItems;
		};
		IF (_pWeapon != "") then {
			IF ((_pmag select 0) != "") then {
			 _unit addMagazine [(_pmag select 0), 9999];
			};
		[_unit, _pWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _pWItems;
		};
		 IF (_binocs != "") then {
		 [_unit, _binocs] remoteExec ["addWeapon", 0];
		};	
	};

	IF ( _weapon ==  _binocs ) then {
		IF (_sWeapon != "") then {
			IF ((_smag select 0) != "") then {
			 _unit addMagazine [(_smag select 0), 9999];
			};
		 [_unit, _sWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _sWItems;
		};
		IF (_pWeapon != "") then {
			IF ((_pmag select 0) != "") then {
			 _unit addMagazine [(_pmag select 0), 9999];
			};
		 [_unit, _pWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _pWItems;
		};
		IF (_hWeapon != "") then {
			IF ((_hmag select 0) != "") then {
			 _unit addMagazine [(_hmag select 0), 9999];
			}; 
		 [_unit, _hWeapon] remoteExec ["addWeapon", 0];
		 {[_unit, _x] remoteExec ["addprimaryWeaponItem", 0]} forEach _hWItems;
		};
	};	


	{_unit addMagazine [_x, 9999]} forEach _magsremove;	
	

	 [_unit] joinSilent _unitGrp;
	 IF (_unit == _unitLdr) then {_unitGrp selectLeader _unit};


	 };

	 _unit setVariable ["dam_ignore_injured0",false,true];	 
	 _unit setVariable ["dam_player_lecitsebia0",false,true];	 
	 IF !(alive _unit) then {
 	 _unit setVariable ["dam_ignore_hit0",false,true];		
	} ELSE {
					PIR0jipId = [_unit, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect0;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
	 };

IF !(PiR_captive_on) then {
_unit setcaptive false;
};
