private _staminaBar = uiNamespace getVariable ["ace_advanced_fatigue_staminaBarContainer", controlNull];
private _aceEnabled = !(isNull _staminaBar);
private _newState = param [0, true];

if (!_aceEnabled) exitWith {};

if (_newState) then {
    _staminaBar ctrlShow bnb_e_screenshotMode_staminaBarContainer;
    ace_nametags_showplayernames = bnb_e_screenshotMode_playerNames;
} else {
    bnb_e_screenshotMode_staminaBarContainer = ctrlShown _staminaBar;
    bnb_e_screenshotMode_playerNames = ace_nametags_showplayernames;

    _staminaBar ctrlShow false;
    ace_nametags_showplayernames = 0;
};
