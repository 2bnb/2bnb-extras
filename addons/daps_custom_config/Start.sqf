dapsDebug=true;
private ["_scriptWait"];
sleep 3;
waitUntil{dapsReady};
sleep 1;
call DAPS_fnc_DisableAPSAll;  // Disable all currently running APS
sleep 2;  // Wait a bit to make sure the above is finished
_scriptWait=execVM "daps_custom_config\DefineVehicles.sqf";  // Run your own script
waitUntil{scriptDone _scriptWait};
call DAPS_fnc_StartNewDefinitions;  // Start the new definitions running
systemChat format ["daps Light: %1",dapsLight];
