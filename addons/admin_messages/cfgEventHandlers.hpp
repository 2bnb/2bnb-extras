class Extended_PostInit_EventHandlers {
    class bnb_e_admin_messages {
        serverInit = "call compile preprocessFileLineNumbers '\x\bnb_e\admin_messages\XEH_postInit.sqf'";
    };
};

class Extended_PreInit_EventHandlers {
    class bnb_e_admin_messages {
        clientInit = "call compile preprocessFileLineNumbers '\x\bnb_e\admin_messages\XEH_preClientInit.sqf'";
    };
};
