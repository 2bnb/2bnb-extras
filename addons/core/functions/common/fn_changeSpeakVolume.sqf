/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_changeSpeakVolume

Description:
	Change the direct speech volume to be one up or down from the previous
	volume. This does not cycle through from yelling to whisper nor vice versa.

	These upper and lower stops make it possible to bind the function to a
	scroll wheel without fear of cycling through to the opposite speaking volume
	to what was intended.

Parameters:
	0: _increase - whether volume should be increased <BOOLEAN>

Returns:
	Nothing

Examples:
	[] call bnb_e_core_fnc_changeSpeakVolume;

Author:
	Arend
---------------------------------------------------------------------------- */
diag_log _this;
params [["_increase", true, [true]]];

private _currentSpeakVolume = toLower TF_speak_volume_level;
private _speakVolumes = ["whispering", "normal", "yelling"];
private _speakMeters = [5, 20, 60];

private _modifier = 1;
if (!_increase) then {
	_modifier = -1;
};

private _nextSpeakVolumeIndex = (_speakVolumes find _currentSpeakVolume) + _modifier;


if (_nextSpeakVolumeIndex < 0 || 2 < _nextSpeakVolumeIndex) exitWith {};

private _nextSpeakVolume = _speakVolumes select _nextSpeakVolumeIndex;
[format["Found the next speak volume: %1 %2", _nextSpeakVolume, _speakVolumes], "core\functions\fn_changeSpeakVolume.sqf"] call bnb_e_core_fnc_log;

TF_speak_volume_level = _nextSpeakVolume;
TF_speak_volume_meters = _speakMeters select _nextSpeakVolumeIndex;


// Source: https://github.com/michail-nikolaev/task-force-arma-3-radio/blob/master/addons/core/functions/events/keys/fnc_onSpeakVolumeChange.sqf
if (TFAR_oldVolumeHint) then {
	private _hintText = format[localize "STR_TFAR_CORE_voice_volume", localize format["STR_TFAR_CORE_voice_%1", _nextSpeakVolume]];
	[parseText (_hintText), 5] call TFAR_fnc_showHint;
} else {
	if (!TFAR_ShowVolumeHUD) then {
		("tfar_core_HUDVolumeIndicatorRsc" call BIS_fnc_rscLayer) cutRsc ["tfar_core_HUDVolumeIndicatorRsc", "PLAIN", 0, true];
		TFAR_volumeIndicatorFlashIndex = TFAR_volumeIndicatorFlashIndex + 1;
		[{
			if (TFAR_volumeIndicatorFlashIndex == _this select 0) then {
				("tfar_core_HUDVolumeIndicatorRsc" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			};
		}, [TFAR_volumeIndicatorFlashIndex], 5] call CBA_fnc_waitAndExecute;
	};
};
call TFAR_fnc_updateSpeakVolumeUI;

//							unit, range
["OnSpeakVolume", [TFAR_currentUnit, TF_speak_volume_meters]] call TFAR_fnc_fireEventHandlers;
