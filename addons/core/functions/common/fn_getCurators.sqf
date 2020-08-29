/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_getCurators

Description:
	Get a list of players with the curator/zeus power.

Parameters:
	None

Returns:
	Array of players with curator powers <ARRAY>

Examples:
	call bnb_e_core_fnc_getCurators;

Author:
	Arend
---------------------------------------------------------------------------- */
private _curator = objNull;
private _curators = [];
{
	_curator = getAssignedCuratorUnit _x;
	if !(_curator isEqualTo objNull) then {
		_curators pushBack _curator;
	};
} foreach allCurators;

_curators;
