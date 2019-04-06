if (!isServer) exitWith {};
params ["_unit","_selection", "_shooter","_shans", "_anim"];
// Назначение действий на попадание ИИ

	

IF !(_unit getVariable ["dam_ignore_injured0",false]) then {

[_unit, "FirstAidKit"] remoteExecCall ["removeItems", 0];
[_unit, "Medikit"] remoteExecCall ["removeItems", 0];

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
					
	if ((vehicle _unit != _unit) or (str (surfaceIsWater position _unit) == "true")) exitWith {
	
		IF !(_unit getVariable ["dam_ignore_effect0",false]) then {

		 _unit setVariable ["dam_ignore_injured0",true,true];	
		 [_unit, _anim, _shans, _shooter] call EyeEffect;
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
		_unit setVariable ["dam_player_lecitsebia0",true,true];
		_unit setVariable ["dam_ignore_injured0",true,true];	
    remoteExecCall ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExecCall ["call"];

		IF (((_shans - (random 25)) >=0) && (PiR_helmet_on)) then {
		[_unit, _anim, _shans, _shooter] call Helmet;
		} ELSE {

		[_unit, _anim, _shans, _shooter] call Uncondition;	
		};
		};


//	Живот и Грудь		
IF (((_shans == 7) or (_shans == 9)) && ((_shans - (random 10)) >=0) && !(_unit getVariable ["dam_ignore_injured0",false])) then {
		_unit setVariable ["dam_player_lecitsebia0",true,true];
		_unit setVariable ["dam_ignore_injured0",true,true];	
    remoteExecCall ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExecCall ["call"];

		IF ((_shans - (random 22)) >=0) then {
		[_unit, _anim, _shans, _shooter] call BendsDown;
		} ELSE {
			IF ((_shans - (random 14)) >=0) then {
		     [_unit, _anim, _shans, _shooter] call Crawl;	
			} ELSE {
			 [_unit, _anim, _shans, _shooter] call Uncondition;
			};
		};	
		};

// Верх руки и Низ руки
IF (((_shans == 1) or (_shans == 3)) && ((7 - (random 10)) >=0) && !(_unit getVariable ["dam_ignore_injured0",false])) then {
		_unit setVariable ["dam_player_lecitsebia0",true,true];
		_unit setVariable ["dam_ignore_injured0",true,true];	
    remoteExecCall ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExecCall ["call"];

		IF (((_shans - (random 8)) <=0) && (currentWeapon _unit != "") && !(_unit getVariable ["dam_ignore_dragger0",false])  && (PiR_weapon_on)) then {
		[_unit, _anim, _shans] call DropWeapon;
		} ELSE {
			IF ((_shans - (random 10)) >=0) then {
		     [_unit, _anim, _shans, _shooter] call Uncondition;	
			} ELSE {
			 [_unit, _anim, _shans, _shooter] call Crawl;
			 };
		};	
		};	

// Бедро, голень и стопа
IF (((_shans == 6) or (_shans == 4) or (_shans == 2)) && ((_shans - (random 10)) >=0) && !(_unit getVariable ["dam_ignore_injured0",false])) then {
		_unit setVariable ["dam_player_lecitsebia0",true,true];
		_unit setVariable ["dam_ignore_injured0",true,true];	
    remoteExecCall ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExecCall ["call"];

		IF ((_shans - (random 22)) >=0) then {
		 [_unit, _anim, _shans, _shooter] call Uncondition;
		} ELSE {
		     [_unit, _anim, _shans, _shooter] call Crawl;	

		};	
		};	

[{

params ["_unit", "_shooter", "_shans", "_anim"];		
		
// Подрыв
IF ((((damage _unit) - (_unit getVariable "dam_zdorovie_lecit0") ) > 0.04) && (_shans == 8) && ((_shans - (random 10)) >=0) && !(_unit getVariable ["dam_ignore_injured0",false])) then {
		_unit setVariable ["dam_player_lecitsebia0",true,true];
		_unit setVariable ["dam_ignore_injured0",true,true];	
    remoteExecCall ["", PIRjipId];
    [_unit, {
     _ehId = _this getVariable ["hitPartEhId", -1];
     if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
    }] remoteExecCall ["call"];

		IF ((_shans - (random 16)) >=0) then {
		 [_unit, _anim, _shans, _shooter] call Crawl;
		} ELSE {
			IF ((_shans - (random 12)) >=0) then {
		     [_unit, _anim, _shans, _shooter] call Uncondition;	
			} ELSE {
			IF (((_shans - (random 12)) >=0) && (PiR_helmet_on)) then {
		    [_unit, _anim, _shans, _shooter] call Helmet;	
			} ELSE { 
			 [_unit, _anim, _shans, _shooter] call BendsDown;
			 };
		};	
		};		
		};
	
	
	
	//_____________________________________________________________________________________________________________________	

//________________________________Крик при попадании_______________________________________________________________________

  IF (_shans !=10 ) then {
   [_unit, (selectRandom ["hit1", "hit10", "hit100", "hit101", "hit102", "hit103", "hit104", "hit105", "hit106", "hit107", "hit108", "hit109", "hit11", "hit110", "hit111", "hit112", "hit113", "hit114", "hit115", "hit116", "hit117", "hit118", "hit119", "hit12", "hit120", "hit121", "hit122", "hit123", "hit124", "hit125", "hit126", "hit127", "hit128", "hit129", "hit13", "hit130", "hit131", "hit132", "hit133", "hit134", "hit135", "hit136", "hit137", "hit138", "hit139", "hit14", "hit140", "hit141", "hit142", "hit143", "hit144", "hit145", "hit146", "hit147", "hit148", "hit149", "hit15", "hit150", "hit151", "hit152", "hit153", "hit154", "hit155", "hit156", "hit157", "hit158", "hit159", "hit16", "hit160", "hit161", "hit162", "hit163", "hit164", "hit165", "hit166", "hit167", "hit168", "hit169", "hit17", "hit170", "hit171", "hit172", "hit173", "hit174", "hit175", "hit176", "hit177", "hit178", "hit179", "hit18", "hit180", "hit181", "hit182", "hit183", "hit184", "hit185", "hit186", "hit187", "hit188", "hit189", "hit19", "hit190", "hit191", "hit192", "hit193", "hit194", "hit195", "hit196", "hit197", "hit198", "hit199", "hit2", "hit20", "hit200", "hit201", "hit202", "hit203", "hit204", "hit205", "hit206", "hit207", "hit208", "hit209", "hit21", "hit210", "hit211", "hit212", "hit213", "hit214", "hit215", "hit216", "hit217", "hit218", "hit219", "hit22", "hit220", "hit221", "hit222", "hit223", "hit224", "hit225", "hit226", "hit227", "hit228", "hit229", "hit23", "hit230", "hit231", "hit232", "hit233", "hit234", "hit235", "hit236", "hit237", "hit238", "hit239", "hit24", "hit240", "hit241", "hit242", "hit243", "hit244", "hit245", "hit246", "hit247", "hit248", "hit249", "hit25", "hit250", "hit251", "hit252", "hit253", "hit254", "hit255", "hit256", "hit257", "hit258", "hit259", "hit26", "hit260", "hit261", "hit262", "hit263", "hit264", "hit265", "hit266", "hit267", "hit268", "hit269", "hit27", "hit270", "hit271", "hit272", "hit273", "hit274", "hit275", "hit276", "hit277", "hit278", "hit279", "hit28", "hit280", "hit281", "hit282", "hit283", "hit284", "hit285", "hit286", "hit287", "hit288", "hit289", "hit29", "hit290", "hit291", "hit292", "hit293", "hit294", "hit295", "hit296", "hit297", "hit298", "hit299", "hit3", "hit30", "hit300", "hit301", "hit302", "hit303", "hit304", "hit305", "hit306", "hit307", "hit308", "hit309", "hit31", "hit310", "hit311", "hit312", "hit313", "hit314", "hit315", "hit316", "hit317", "hit318", "hit319", "hit32", "hit320", "hit321", "hit322", "hit323", "hit324", "hit325", "hit326", "hit327", "hit328", "hit329", "hit33", "hit330", "hit331", "hit332", "hit333", "hit334", "hit34", "hit35", "hit36", "hit37", "hit38", "hit39", "hit4", "hit40", "hit41", "hit42", "hit43", "hit44", "hit45", "hit46", "hit47", "hit48", "hit49", "hit5", "hit50", "hit51", "hit52", "hit53", "hit54", "hit55", "hit56", "hit57", "hit58", "hit59", "hit6", "hit60", "hit61", "hit62", "hit63", "hit64", "hit65", "hit66", "hit67", "hit68", "hit69", "hit7", "hit70", "hit71", "hit72", "hit73", "hit74", "hit75", "hit76", "hit77", "hit78", "hit79", "hit8", "hit80", "hit81", "hit82", "hit83", "hit84", "hit85", "hit86", "hit87", "hit88", "hit89", "hit9", "hit90", "hit91", "hit92", "hit93", "hit94", "hit95", "hit96", "hit97", "hit98", "hit99"]) ] remoteExecCall [ "say3D", 0];
  };

//__________________________________________________________________________________________________________________________	


//________________________________Эффекты крови_____________________________________________________________________________

IF !(_unit getVariable ["dam_ignore_effect0",false]) then {

	 _unit setVariable ["dam_ignore_effect0",true,true];	
	 [_unit, _anim, _shans, _shooter] call EyeEffect;
	

//__________________________________________________________________________________________________________________________



//________________________________Стоны при ранении_________________________________________________________________________

[{
params ["_unit"];
[_unit] call PiRscreams;
}, [_unit], (15 + random 15)] call CBA_fnc_waitAndExecute;	
};		
//__________________________________________________________________________________________________________________________
	
	
	IF !(alive _unit) then {
	 _unit setVariable ["dam_ignore_injured0",false,true];
     remoteExecCall ["", PIRjipId];
		[_unit, {
		 _ehId = _this getVariable ["hitPartEhId", -1];
		 if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
		}] remoteExecCall ["call"];	
	};
}, [_unit, _shooter, _shans, _anim], 0.1] call CBA_fnc_waitAndExecute;
};
	IF !(alive _unit)then {	
	_unit setVariable ["dam_ignore_injured0",false,true];
     remoteExecCall ["", PIR0jipId];
		[_unit, {
		 _ehId = _this getVariable ["hitPartEhId", -1];
		 if (_ehId >= 0) then {_this removeEventHandler ["HitPart", _ehId];}
		}] remoteExecCall ["call"];
	};







