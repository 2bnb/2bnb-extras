/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_arrayFlatten

Description:
	A utility function to take a multi-dimensional array and flatten it into a
	single dimension.

Source:
	http://killzonekid.com/arma-scripting-tutorials-kk_fnc_arrayflatten-and-kk_fnc_arrayflattenunordered/

Parameters:
	0: _res - Resultant array <ARRAY>
	1: _fnc - This same function again, for iteration <CODE>

Returns:
	Flattened array <ARRAY>

Examples:
	[_multidimensionalArray] call bnb_e_core_fnc_arrayFlatten;

Author:
	KillzoneKid
---------------------------------------------------------------------------- */
private ["_res", "_fnc"];
_res = [];
_fnc = {
	{
		if (typeName _x isEqualTo "ARRAY") then [
			{_x call _fnc; false},
			{_res pushBack _x; false}
		];
	} count _this;
};
_this call _fnc;
_res
