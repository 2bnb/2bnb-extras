    private ["_unit","_selection"];

_unit = (_this select 0);
_selection = (_this select 5);

[_unit, _selection ] remoteExec [ "PiR0", 2 ];
