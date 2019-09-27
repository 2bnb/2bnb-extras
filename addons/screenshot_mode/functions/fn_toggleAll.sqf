private _newState = param [0, true];

{
    [_newState] call _x;
} forEach [
    bnb_e_screenshotMode_fnc_toggleACENametags,
    bnb_e_screenshotMode_fnc_toggleSTHud,
    bnb_e_screenshotMode_fnc_toggleTFAR,
    bnb_e_screenshotMode_fnc_toggleVanillaHUD,
    bnb_e_screenshotMode_fnc_toggleDuiHud
];

false;
