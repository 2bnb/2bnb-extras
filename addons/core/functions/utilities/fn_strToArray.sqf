/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_strToArray

Description:
	Turn a comma separated list from a string into an array of strings

Parameters:
	0: _in - comma separated list <STRING>
	1: _removeWhitespace - whether or not whitespace should be removed from
		list items <BOOLEAN>

Returns:
	Array of list items <ARRAY>

Examples:
	["C_supplyCrate_F,B_Slingload_01_Ammo_F", true] call bnb_e_core_fnc_strToArray;

Author:
	Arend
	JSHOCK
---------------------------------------------------------------------------- */
params [["_in","",[""]],["_removeWhitespace",true,[false]]];
private _str = _in splitString ",";
if (_removeWhitespace) then {
	private _temp = [];
	{
		_temp pushBack ((_x splitString " ") joinString "");
	} forEach _str;
	_temp;

} else {
	_str;
};
