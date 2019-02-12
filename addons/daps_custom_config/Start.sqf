#include "\a3\editor_f\Data\Scripts\dikCodes.h"
["Drongo's APS","Show Dialog",["Show Dialog","Shows the APS Rearm dialog"],"",{call daps_fnc_KeyPressed},[DIK_HOME,[false,false,false]],false,0,true] call cba_fnc_addKeybind;

private ["_scriptWait"];
sleep 3;
waitUntil{dapsReady};
sleep 1;
call DAPS_fnc_DisableAPSAll;  // Disable all currently running APS
sleep 2;  // Wait a bit to make sure the above is finished
_scriptWait=execVM "daps_custom_config\DefineVehicles.sqf";  // Run your own script
waitUntil{scriptDone _scriptWait};
call DAPS_fnc_StartNewDefinitions;  // Start the new definitions running
// systemChat format ["daps Light: %1",dapsLight];
