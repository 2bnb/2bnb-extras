bnb_e_screenshotMode_active = false;

[
    '2BNB',
    'bnb_e_screenshotMode_toggle',
    'Toggle Screenshot Mode',
    {
        bnb_e_screenshotMode_active = !bnb_e_screenshotMode_active;
        [!bnb_e_screenshotMode_active] call bnb_e_screenshotMode_fnc_toggleAll;
    },
    ''
] call CBA_fnc_addKeybind;
