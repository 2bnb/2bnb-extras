private _stHudEnabled = !(isNil "STHud_UIMode");
private _newState = param [0, true];

if (!_stHudEnabled) exitWith {};

if (_newState) then {
    STHud_UIMode = bnb_e_screenshotMode_stUIMode;
} else {
    bnb_e_screenshotMode_stUIMode = STHud_UIMode;
    STHud_UIMode = 0;
};
