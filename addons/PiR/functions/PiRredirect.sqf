private ["_unit","_selection", "_shooter"];

_unit = (_this select 0);
_selection = (_this select 5);
_shooter = (_this select 1);

IF (!isplayer _unit) then {
[_unit, _selection, _shooter] remoteExecCall [ "PiR", 2 ];
} ELSE {
[_unit, _selection, _shooter] remoteExecCall [ "PiR0", 2 ];
};