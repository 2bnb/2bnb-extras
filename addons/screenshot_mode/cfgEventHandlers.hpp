class Extended_PostInit_EventHandlers {
	bnb_e_screenshotMode = "[] call bnb_e_screenshotMode_fnc_postInit;";
};

class Extended_PreInit_EventHandlers {
    class bnb_e_screenshotMode {
        clientInit = "call compile preprocessFileLineNumbers '\x\bnb_e\screenshot_mode\XEH_preClientInit.sqf';";
    };
};
