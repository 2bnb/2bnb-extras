if (!isServer) exitWith {};
params [ "_unit", "_anim", "_shans", "_shooter", "_weapon", "_weaponHolder", "_weaponHolder0", "_shar", "_shar0", "_nvg" ];


_weapon = headgear _unit;
_nvg = hmd _unit;	 
_weaponHolder = "WeaponHolderSimulated" createVehicle [0,0,0];
_weaponHolder addItemCargoGlobal [_weapon,1];

_shar = "Land_Shar_Prozrachniy" createVehicle [0,0,0];
_shar0 = "Land_Shar_Prozrachniy" createVehicle [0,0,0];


IF (_nvg != "") then {
 _unit unassignitem _nvg;
 _weaponHolder0 = "WeaponHolderSimulated" createVehicle [0,0,0];
 _weaponHolder0 addItemCargoGlobal [_nvg,1];
 _weaponHolder0 attachTo [_shar0, [-0.1,-0.62,-0.7]]; 
 _weaponHolder0 setVectorDirAndUp [[0, 0, 0.5],[0, -0.5, -1]];
 _shar0 setCenterOfMass [0,0,0.02];
};

_shar setMass 4;	 
_shar0 setMass 2; 
_weaponHolder attachTo [_shar, [-0.1,-0.62,-0.7]]; 
_weaponHolder setVectorDirAndUp [[0, 0, 0.5],[0, -0.5, -1]];

IF ("STAND" == stance _unit )  then {
 _shar setPos (_unit modelToWorld [0.02,0.05,1.7]); 
 _shar0 setPos (_unit modelToWorld [0.02,0.05,1.73]);
};

IF ("CROUCH" == stance _unit ) then {
 _shar setPos (_unit modelToWorld [0.02,0.05,1.1]); 
 _shar0 setPos (_unit modelToWorld [0.02,0.05,1.13]);		
};

IF ("PRONE" == stance _unit ) then {
 _shar setPos (_unit modelToWorld [0.02,0.75,0.4]); 
 _shar0 setPos (_unit modelToWorld [0.02,0.75,0.43]);
};

IF ("UNDEFINED" == stance _unit ) then {
 _shar setPos (_unit modelToWorld [0.02,0.05,1.4]); 
 _shar0 setPos (_unit modelToWorld [0.02,0.05,1.43]);
};

_shar setDir (getdir _unit);
_shar0 setDir (getdir _unit);

_shar setVelocity [2 * sin(random(360)), 2 * cos(random(360)),6]; 
[{removeHeadgear (_this select 0);}, [_unit], 0.1] call CBA_fnc_waitAndExecute;

IF (_nvg == "") then {
 [{deleteVehicle (_this select 0);}, [_shar0], 0.1] call CBA_fnc_waitAndExecute;

 } ELSE {
 _unit removeItem _nvg;
};

//__________________________________________________________Выход_______________________________________________________________


IF (alive _unit) then {
 [_unit, _anim, _shans, _shooter] call Uncondition0;

} ELSE {
 _unit setVariable ["dam_ignore_injured0",false,true];	
};

//_______________________________________________________________________________________________________________________________
[{(_this select 0) hideObjectGlobal true;}, [_shar], (8 + random 4)] call CBA_fnc_waitAndExecute;

IF (_nvg != "") then {
 [{(_this select 0) hideObjectGlobal true;}, [_shar0], (8 + random 4)] call CBA_fnc_waitAndExecute;
};



		 
		 