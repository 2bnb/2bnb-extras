private _newState = param [0, true];

if (_newState) then {
     showHUD bnb_e_screenshotMode_vanillaHUD;
} else {
     bnb_e_screenshotMode_vanillaHUD = shownHUD;
     showHUD [false,false,false,false,false,false,false,false];
};
