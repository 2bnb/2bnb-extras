if (!isServer) exitWith {}; 

_unit = (_this select 0);
_anim = (_this select 1);
_shans = (_this select 2);

private ["_unit", "_anim", "_shans", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_weapon", "_weaponHolder", "_weaponHolder0", "_ranpos", "_dis", "_Pos", "_timer","_numberOfKits", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs"];    

_unitGrp = group _unit;
_unitGrpPR = str side group _unit;
 


IF !(PiR_captive_on) then {
_unit setcaptive true;
};

		
 

	IF (alive _unit) then {

	 _numberOfKits = 15;	
	 [_unit, "firstaidkit"] remoteExec ["removeItems", 0];
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


		 _dis = (20 + random 65);  
		 _Pos = getPos _unit;

   
		 _timer = (time + 25 + (random 20));   		

			waituntil { sleep 0.1; ((_unit distance _Pos >= _dis) or (!alive _unit) or (time >= _timer))
			};	 
			 
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
		IF ((_sWeapon select 0) != "") then {
			IF (_Smag != "") then {
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
	
		IF (_numberOfKits > 0 ) then {
			for "_i" from 1 to _numberOfKits do { _unit addItem "FirstAidKit"};
		};

	 [_unit] joinSilent _unitGrp;


	 };

	 _unit setVariable ["dam_ignore_injured0",false,true];	 
	 
	 IF !(alive _unit) then {
 	 _unit setVariable ["dam_ignore_hit0",false];		
	} ELSE {
					PIR0jipId = [_unit, {
					 _ehId = _this addEventHandler ["HitPart", {(_this select 0) spawn PiRredirect0;}];
					 _this setVariable ["hitPartEhId", _ehId];
					}] remoteExec ["call", 0, true];
	 };

IF !(PiR_captive_on) then {
_unit setcaptive false;
};
