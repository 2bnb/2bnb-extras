if (!isServer) exitWith {}; 

params ["_unit", "_anim", "_shans", "_shooter", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_unitStance", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs", "_udalenie", "_unitLdr"];    

IF  (alive _unit) then {

_unitGrp = group _unit;
_unitLdr = leader _unit;
_unitGrpPR = str side group _unit;
_unitStance = stance _unit;
_udalenie = 0;

	IF !(PiR_captive_on) then {
	 [ _unit, true ] remoteExecCall [ "setcaptive", _unit ];
	};

[ _unit, true ] remoteExecCall [ "setUnconscious", _unit ];
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
};

[{(AnimationState (_this select 0) == "UnconsciousReviveDefault") or (!alive (_this select 0))
}, {	
params ["_unit", "_anim", "_shans", "_shooter", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_unitStance", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs", "_udalenie", "_unitLdr"];

	IF (alive _unit) then {
	 _udalenie = 1;

	 [_unit, (primaryWeapon _unit)] remoteExecCall ["removeWeapon", 0];
	 [_unit, (secondaryWeapon _unit)] remoteExecCall ["removeWeapon", 0];		 
	 [_unit, (handgunWeapon _unit)] remoteExecCall ["removeWeapon", 0];		 
	 [_unit, (binocular _unit)] remoteExecCall ["removeWeapon", 0];
		 
 	 _magsremove = magazines _unit;
	 {_unit removeMagazineGlobal _x} forEach magazines _unit;

	 [ _unit, false ] remoteExecCall [ "setUnconscious", _unit ];
	 [_unit,"UnconsciousOutProne"] remoteExecCall ["switchMove", 0];
	};

	[{		
	 params ["_unit", "_anim", "_shans", "_shooter", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_unitStance", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs", "_udalenie", "_unitLdr"];

		IF (alive _unit) then {
		 [_unit, "ApanPpneMstpSnonWnonDnon"] remoteExecCall ["switchMove", 0];
		};

		[{		
		 params ["_unit", "_anim", "_shans", "_shooter", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_unitStance", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs", "_udalenie", "_unitLdr"];
			 
			IF (alive _unit) then {
		
				IF ("CROUCH" ==  _unitStance ) then {
				 [ _unit, "AUTO" ] remoteExecCall [ "setUnitPos", _unit ];
				};

			 [ _unit, "CARELESS" ] remoteExecCall [ "setBehaviour", _unit ];

			 _dis = ((PiR_crawl_on) + random ((PiR_crawlM_on max PiR_crawl_on) - (PiR_crawl_on min PiR_crawlM_on)));  
			 _Pos = [_unit, _dis,(((getDir _unit)-25) + (random 50))] call BIS_fnc_relPos;

   			 _timer = (time +  ((PiR_crawl_on) + (random ((PiR_crawlM_on max PiR_crawl_on) - (PiR_crawl_on min PiR_crawlM_on))) / 2));   
			 [ _unit, _Pos ] remoteExecCall [ "domove", _unit ];	
			 [ _unit, "FULL" ] remoteExecCall [ "setSpeedMode", _unit ];
			 
			};

			[{		
			 params ["_unit", "_anim", "_shans", "_shooter", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_unitStance", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs", "_udalenie", "_unitLdr"];
			 
				IF (alive _unit) then {
			 	 [ _unit, "DOWN" ] remoteExecCall [ "setUnitPos", _unit ];

//__________________Добавляем действие на перетаскивание для игрока__________________________________________________	 
	 
	 

	 
[_unit, 
[
    "<img size='3'  image='PiR\Icons\klast_CA.paa'/>", 
    {

		
		params ["_unit", "_dragger"];

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
	 
	 
	 
	 
	 
	 
	 
	 
	 
//________________________________________________________________________________________________________________________________	 

				 [_unit, _Pos, _timer] call CrawlAnim;
				};

				[{((_this select 0) getVariable ["dam_player_Crawl0",false]) or (!alive (_this select 0))
				}, {	
				 params ["_unit", "_anim", "_shans", "_shooter", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_unitStance", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs", "_udalenie", "_unitLdr"];

					 [_unit] remoteExecCall [ "removeAllActions", 0, true ];
					 _unit setVariable ["dam_player_lecit0",false,true];
					 {_unit addMagazine [_x, 9999]} forEach _magsremove;

					IF (alive _unit) then {

					 _unit doMove getpos _unit;
//__________________________________________________________Выход_______________________________________________________________			 
			 

							IF ((_shans - (random 10)) >=0) then {

							 [_unit] joinSilent _unitGrp;

								IF (_unit == _unitLdr) then {
								 _unitGrp selectLeader _unit;
								};
								 [_unit, _anim, _shans, _shooter] call Uncondition;

									[{	
									 params ["_unit"];
									 _unit setVariable ["dam_player_Crawl0",false,true];
									}, [_unit], 6] call CBA_fnc_waitAndExecute; 

							} Else {

								IF ((_shans - (random 10)) >=0) then {
								 _unit setdamage 1;

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
	 
								 _unit setVariable ["dam_ignore_injured0",false,true];
				 
									[{	
									params ["_unit"];

									 _unit setVariable ["dam_player_Crawl0",false,true];
									}, [_unit], 1] call CBA_fnc_waitAndExecute; 

								} Else {

								 [ _unit, true ] remoteExecCall [ "setUnconscious", _unit ];
	
									[{(AnimationState (_this select 0) == "UnconsciousReviveDefault") or (!alive (_this select 0))
									}, {
									 params ["_unit", "_unitLdr", "_unitGrp"];

									 [ _unit, false ] remoteExecCall [ "setUnconscious", _unit ];
									 _unit setVariable ["dam_ignore_injured0",false,true];
									 [ _unit, "AUTO" ] remoteExecCall [ "setUnitPos", _unit ];					 
									 [ _unit, "RED" ] remoteExecCall [ "setCombatMode", _unit ];
									 [ _unit, "COMBAT" ] remoteExecCall [ "setBehaviour", _unit ];

									 [_unit] joinSilent _unitGrp;

										IF (_unit == _unitLdr) then {
										 _unitGrp selectLeader _unit;
										};

									 _unit setVariable ["dam_player_lecitsebia0",false,true];

										PIRjipId = [_unit, {
										 _ehId = _this addEventHandler ["HitPart", {(_this select 0) call PiRredirect;}];
										 _this setVariable ["hitPartEhId", _ehId];
										}] remoteExecCall ["call", 0, true];

									 _unit setVariable ["dam_player_Crawl0",false,true];

										IF !(PiR_captive_on) then {
										 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
										};
									}, [_unit, _unitLdr, _unitGrp]] call CBA_fnc_waitUntilAndExecute;					
								};
							};


					};

					[{!((_this select 0) getVariable ["dam_player_Crawl0",false]) or (!alive (_this select 0))
					}, {
					 params ["_unit", "_anim", "_shans", "_shooter", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_unitStance", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs", "_udalenie", "_unitLdr"];
					 _unit setVariable ["dam_player_Crawl0",false,true];
						[{	
						 params ["_unit", "_anim", "_shans", "_shooter", "_unitGrp", "_unitGrpPR", "_pWeapon", "_sWeapon", "_hWeapon", "_magsremove", "_unitStance", "_dis", "_Pos", "_timer", "_pWItems", "_sWItems", "_hWItems", "_pmag", "_smag", "_hmag", "_binocs", "_udalenie", "_unitLdr"];

							IF (_udalenie == 1) then {

								IF (_sWeapon != "") then {
									IF ((_smag select 0) != "") then {
									 _unit addMagazine [(_smag select 0), 9999];
									};	
								 [_unit, _sWeapon] remoteExecCall ["addWeapon", 0];
								 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", 0]} forEach _sWItems;
								};
	
								IF (_pWeapon != "") then {
									IF ((_pmag select 0) != "") then {
									 _unit addMagazine [(_pmag select 0), 9999];
									};
								 [_unit, _pWeapon] remoteExecCall ["addWeapon", 0];
								 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", 0]} forEach _pWItems;
								};

								IF (_hWeapon != "") then {
									IF ((_hmag select 0) != "") then {
									 _unit addMagazine [(_hmag select 0), 9999];
									};
								 [_unit, _hWeapon] remoteExecCall ["addWeapon", 0];
								 {[_unit, _x] remoteExecCall ["addprimaryWeaponItem", 0]} forEach _hWItems;
								};

								IF (_binocs != "") then {
								 [_unit, _binocs] remoteExecCall ["addWeapon", 0];
								};
							};	

							IF (!alive _unit) then {
							 _unit setVariable ["dam_ignore_injured0",false,true]; 

								IF !(PiR_captive_on) then {
								 [ _unit, false ] remoteExecCall [ "setcaptive", _unit ];
								};
							};
						}, [_unit, _anim, _shans, _shooter, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremove, _unitStance, _dis, _Pos, _timer, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _udalenie, _unitLdr], 2] call CBA_fnc_waitAndExecute;	
					}, [_unit, _anim, _shans, _shooter, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremove, _unitStance, _dis, _Pos, _timer, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _udalenie, _unitLdr]] call CBA_fnc_waitUntilAndExecute;	
				}, [_unit, _anim, _shans, _shooter, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremove, _unitStance, _dis, _Pos, _timer, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _udalenie, _unitLdr]] call CBA_fnc_waitUntilAndExecute;	
			}, [_unit, _anim, _shans, _shooter, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremove, _unitStance, _dis, _Pos, _timer, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _udalenie, _unitLdr], 2] call CBA_fnc_waitAndExecute;	
		}, [_unit, _anim, _shans, _shooter, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremove, _unitStance, _dis, _Pos, _timer, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _udalenie, _unitLdr], 2] call CBA_fnc_waitAndExecute;	
	}, [_unit, _anim, _shans, _shooter, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremove, _unitStance, _dis, _Pos, _timer, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _udalenie, _unitLdr], 5.033] call CBA_fnc_waitAndExecute; 
}, [_unit, _anim, _shans, _shooter, _unitGrp, _unitGrpPR, _pWeapon, _sWeapon, _hWeapon, _magsremove, _unitStance, _dis, _Pos, _timer, _pWItems, _sWItems, _hWItems, _pmag, _smag, _hmag, _binocs, _udalenie, _unitLdr]] call CBA_fnc_waitUntilAndExecute;



