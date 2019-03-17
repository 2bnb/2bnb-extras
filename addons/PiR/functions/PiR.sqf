
if (!isServer) exitWith {};

// Назначение действий на попадание ИИ




	private ["_unit","_selection","_shans", "_shooter"];

	_unit = (_this select 0) ;
	_selection = (_this select 1);	
	_shooter = (_this select 2);
	

IF !(_unit getVariable ["dam_ignore_injured0",false]) then {

IF ((str _shooter != "") && (_shooter != _unit)) then {
	IF (side _shooter == side _unit) then {
	 _shooter = (_unit getDir _shooter);
	} ELSE {
	 _shooter = (_shooter getDir _unit);
	};
};





//________________________________Распределение анимаций по частям тела______________________________________________________________________		

	_anim = selectRandom [
	"UnconsciousReviveArms_A","UnconsciousReviveArms_B","UnconsciousReviveArms_C","UnconsciousReviveBody_A",
	"UnconsciousReviveBody_B","UnconsciousReviveDefault_A","UnconsciousReviveDefault_B","UnconsciousReviveDefault_C","UnconsciousReviveHead_A",
	"UnconsciousReviveHead_B","UnconsciousReviveHead_C","UnconsciousReviveLegs_A","UnconsciousReviveLegs_B"];
		
_shans = 8;
					
	if (vehicle _unit != _unit) exitWith {
	
		IF !(_unit getVariable ["dam_ignore_effect0",false]) then {

		 _unit setVariable ["dam_ignore_effect0",true];	
		 _null = [_unit, _anim, _shans, _shooter] spawn EyeEffect;
		};
	
	};					

		if ("head" in _selection) then {
		_anim = selectRandom [
		"UnconsciousReviveHead_A","UnconsciousReviveHead_B","UnconsciousReviveHead_C"];
_shans = 10;
		};


		if ("spine1" in _selection) then {
		_anim = selectRandom [
		"UnconsciousReviveBody_A","UnconsciousReviveBody_B","UnconsciousReviveDefault_A"];
_shans = 7;
		};

		if ("spine3" in _selection) then {
		_anim = selectRandom [
		"UnconsciousReviveDefault_A","UnconsciousReviveDefault_B","UnconsciousReviveDefault_C"];
_shans = 9;
		};	

		if (("leftforearm" in _selection) or ("rightforearm" in _selection)) then {
		_anim = selectRandom [
		"UnconsciousReviveArms_A","UnconsciousReviveArms_B","UnconsciousReviveArms_C"];
_shans = 1;
		};

		if (("leftarm" in _selection) or ("rightarm" in _selection)) then {
		_anim = selectRandom [
		"UnconsciousReviveArms_A","UnconsciousReviveArms_B","UnconsciousReviveArms_C"];
_shans = 3;
		};

		if (("leftupleg" in _selection) or ("rightupleg" in _selection)) then {
		_anim = selectRandom [
		"UnconsciousReviveLegs_A","UnconsciousReviveLegs_B"];
_shans = 6;
		};

		if (("leftleg" in _selection) or ("rightleg" in _selection)) then {
		_anim = selectRandom [
		"UnconsciousReviveLegs_A","UnconsciousReviveLegs_B"];
_shans = 4;
		};

		if (("leftfoot" in _selection) or ("rightfoot" in _selection)) then {
		_anim = selectRandom [
		"UnconsciousReviveLegs_A","UnconsciousReviveLegs_B"];
_shans = 2;
		};


//_____________________________________________________________________________________________________________________





// Голова	
IF ((_shans == 10) && !(_unit getVariable ["dam_ignore_injured0",false])) then {

		_unit setVariable ["dam_ignore_injured0",true];	
    remoteExec ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExec ["call"];

		IF (((_shans - (random 25)) >=0) && (PiR_helmet_on)) then {
		_null = [_unit, _anim, _shans, _shooter] spawn Helmet;
		} ELSE {

		_null = [_unit, _anim, _shans, _shooter] spawn Uncondition;	
		};
		};


//	Живот и Грудь		
IF (((_shans == 7) or (_shans == 9)) && ((_shans - (random 10)) >=0) && !(_unit getVariable ["dam_ignore_injured0",false])) then {

		_unit setVariable ["dam_ignore_injured0",true];	
    remoteExec ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExec ["call"];

		IF ((_shans - (random 22)) >=0) then {
		_null = [_unit, _anim, _shans, _shooter] spawn BendsDown;
		} ELSE {
			IF ((_shans - (random 14)) >=0) then {
		     _null = [_unit, _anim, _shans, _shooter] spawn Crawl;	
			} ELSE {
			_null = [_unit, _anim, _shans, _shooter] spawn Uncondition;
			 };
		};	
		};

// Верх руки и Низ руки
IF (((_shans == 1) or (_shans == 3)) && ((7 - (random 10)) >=0) && !(_unit getVariable ["dam_ignore_injured0",false])) then {

		_unit setVariable ["dam_ignore_injured0",true];	
    remoteExec ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExec ["call"];

		IF (((_shans - (random 8)) <=0) && (currentWeapon _unit != "") && !(_unit getVariable ["dam_ignore_dragger0",false])  && (PiR_weapon_on)) then {
		_null = [_unit, _anim, _shans] spawn DropWeapon;
		} ELSE {
			IF ((_shans - (random 10)) >=0) then {
		     _null = [_unit, _anim, _shans, _shooter] spawn Uncondition;	
			} ELSE {
			_null = [_unit, _anim, _shans, _shooter] spawn Crawl;
			 };
		};	
		};	

// Бедро, голень и стопа
IF (((_shans == 6) or (_shans == 4) or (_shans == 2)) && ((_shans - (random 10)) >=0) && !(_unit getVariable ["dam_ignore_injured0",false])) then {

		_unit setVariable ["dam_ignore_injured0",true];	
    remoteExec ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExec ["call"];

		IF ((_shans - (random 22)) >=0) then {
		_null = [_unit, _anim, _shans, _shooter] spawn Uncondition;
		} ELSE {
		     _null = [_unit, _anim, _shans, _shooter] spawn Crawl;	

		};	
		};	

// Подрыв
IF ((((damage _unit) - (_unit getVariable "dam_zdorovie_lecit0") ) > 0.04) && (_shans == 8) && ((_shans - (random 10)) >=0) && !(_unit getVariable ["dam_ignore_injured0",false])) then {

		_unit setVariable ["dam_ignore_injured0",true];	
    remoteExec ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExec ["call"];

		IF ((_shans - (random 16)) >=0) then {
		_null = [_unit, _anim, _shans, _shooter] spawn Crawl;
		} ELSE {
			IF ((_shans - (random 12)) >=0) then {
		     _null = [_unit, _anim, _shans, _shooter] spawn Uncondition;	
			} ELSE {
			IF (((_shans - (random 12)) >=0) && (PiR_helmet_on)) then {
		     _null = [_unit, _anim, _shans, _shooter] spawn Helmet0;	
			} ELSE { 
			 _null = [_unit, _anim, _shans, _shooter] spawn BendsDown0;
			 };
		};	
		};		
		};
	
	
	
	//_____________________________________________________________________________________________________________________	

	//________________________________Крик при попадании_______________________________________________________________________

  IF (_shans !=10 ) then {
   [_unit, (selectRandom ["Hit1", "Hit2", "Hit3", "Hit4", "Hit5", "Hit6", "Hit7", "Hit8", "Hit9", "Hit10"]) ] remoteExec [ "say3D", 0];
  };


	 
	 
//__________________________________________________________________________________________________________________________	



//________________________________Эффекты крови_____________________________________________________________________________

	IF !(_unit getVariable ["dam_ignore_effect0",false]) then {

	 _unit setVariable ["dam_ignore_effect0",true];	
	 _null = [_unit, _anim, _shans, _shooter] spawn EyeEffect;
	};

//__________________________________________________________________________________________________________________________



//________________________________Стоны при ранении_________________________________________________________________________
		while {true} do {

	 		 sleep (40 + random 20);
			 
		 if (!(_unit getVariable ["dam_ignore_injured0",false]) or !(alive _unit)) exitWith {};	


	
		 [_unit, (selectRandom ["pain1", "pain2", "pain3", "pain4", "pain5", "pain6", "pain7", "pain8", "pain9"]) ] remoteExec [ "say3D", 0];


		 
		};
		

//__________________________________________________________________________________________________________________________
	

	sleep 1;	
	if !(alive _unit) then {
 	_unit setVariable ["dam_ignore_hit0",false];
    remoteExec ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExec ["call"];	
	
	};
	};







