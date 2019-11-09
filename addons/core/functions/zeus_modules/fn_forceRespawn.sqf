/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_forceRespawn

Description:
	Forces all the dead people to respawn in 2 seconds, lasts 6 seconds. After that the respawn is disabled once again.

Parameters:
	Nothing

Returns:
	Nothing

Examples:
	[] call bnb_e_core_fnc_forceRespawn;

Author:
	Arend
---------------------------------------------------------------------------- */

params [];

{setPlayerRespawnTime 2; sleep 6; setPlayerRespawnTime 99999;} remoteExec ["bis_fnc_call", 0];
