/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_forceRespawn

Description:
	Forces all the dead people to respawn in 2 seconds, lasts 6 seconds.
	After that the respawn is once again set to default timer value.

Parameters:
	Nothing

Returns:
	Nothing

Examples:
	[] call bnb_e_core_fnc_forceRespawn;

Author:
	Ford
	Arend
---------------------------------------------------------------------------- */
{
	setPlayerRespawnTime 1;
	sleep 3;

	if (missionNamespace getVariable ["bnb_e_respawn_timer_override", false]) then {
		setPlayerRespawnTime bnb_e_respawn_timer;
	} else {
		setPlayerRespawnTime (getMissionConfigValue ["respawnDelay", 0]);
	}
} remoteExec ["bis_fnc_call", 0];
