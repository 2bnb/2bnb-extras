class CfgPatches {
	class bnb_e_core {
		name = "2BNB Extras - HK416 Sound Compat";
		weapons[] = {};
		requiredAddons[] = {
			"a3_sounds_f",
			"a3_weapons_f",
			"a3_sounds_f_exp",
			"a3_weapons_f_exp",
			"rhs_c_weaponsounds",
			"rhsusf_sounds",
			"rhsusf_c_weaponsounds",
			"rhs_sounds"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Arend"
		};
	};
};

#define HK416_SOUNDS  \
reloadMagazineSound[] = { \
	"\x\bnb_e\hk416_sound_compat\sounds\weapons\m4a1\reload.ogg", \
	5.5, \
	1, \
	30 \
}; \
class Single: Mode_SemiAuto { \
	class BaseSoundModeType {}; \
	class StandardSound: BaseSoundModeType { \
		soundSetShot[] = { \
			"bnb_e_HK416_Shot_SoundSet", \
			"bnb_e_HK416_Tail_SoundSet", \
			"bnb_e_rifle_shells_SoundSet" \
		}; \
	}; \
	class SilencedSound: BaseSoundModeType { \
		soundSetShot[] = { \
			"bnb_e_HK416_ShotSD_SoundSet", \
			"bnb_e_HK416_TailSD_SoundSet", \
			"bnb_e_rifle_shells_SoundSet" \
		}; \
	}; \
}; \
class Burst: Mode_Burst { \
	class BaseSoundModeType {}; \
	class StandardSound: BaseSoundModeType { \
		soundSetShot[] = { \
			"bnb_e_HK416_Shot_SoundSet", \
			"bnb_e_HK416_Tail_SoundSet", \
			"bnb_e_rifle_shells_SoundSet" \
		}; \
	}; \
	class SilencedSound: BaseSoundModeType { \
		soundSetShot[] = { \
			"bnb_e_HK416_ShotSD_SoundSet", \
			"bnb_e_HK416_TailSD_SoundSet", \
			"bnb_e_rifle_shells_SoundSet" \
		}; \
	}; \
}; \
class FullAuto: Mode_FullAuto { \
	class BaseSoundModeType {}; \
	class StandardSound: BaseSoundModeType { \
		soundSetShot[] = { \
			"bnb_e_HK416_Shot_SoundSet", \
			"bnb_e_HK416_Tail_SoundSet", \
			"bnb_e_rifle_shells_SoundSet" \
		}; \
	}; \
	class SilencedSound: BaseSoundModeType { \
		soundSetShot[] = { \
			"bnb_e_HK416_ShotSD_SoundSet", \
			"bnb_e_HK416_TailSD_SoundSet", \
			"bnb_e_rifle_shells_SoundSet" \
		}; \
	}; \
};

class CfgDistanceFilters {
	class bnb_e_defaultDistanceFilter {
		type = "lowPassFilter";
		minCutoffFrequency= 150;
		qFactor = 1;
		innerRange = 400;
		range = 2600;
		powerFactor = 32;
	};
};

class CfgSoundCurves {
	class bnb_e_basic {
		points[] = {
			{0,1},
			{0.1,0.75},
			{0.2,0.5},
			{0.30000001,0.2},
			{0.40000001,0.1},
			{0.5,0.050000001},
			{0.60000002,0.0099999998},
			{0.69999999,0.0074999998},
			{0.80000001,0.0024999999},
			{0.89999998,0.001},
			{1,0}
		};
	};
};

class CfgSoundShaders {
	class bnb_e_HK416_Close_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_outdoor_close.ogg",
				1
			},
		};
		volume = "1 * (1 - interior)";
		range = 200;
		rangeCurve[] = {
			{0,1},
			{50,0.8},
			{200,0}
		};
	};
	class bnb_e_HK416_Close_Tail_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_outdoor_close_tail.ogg",
				1
			},
		};
		volume = "1 * (1 - interior)";
		range = 200;
		rangeCurve[] = {
			{0,1},
			{50,0.8},
			{200,0}
		};
	};
	class bnb_e_HK416_Far_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_outdoor_far.ogg",
				1
			},
		};
		volume = "0.6 * (1 - interior)";
		range = 1600;
		rangeCurve[] = {
			{0,0},
			{100,0},
			{150,1},
			{700,0.7},
			{1600,0}
		};
	};
	class bnb_e_HK416_Far_Tail_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_outdoor_far_tail.ogg",
				1
			},
		};
		volume = "0.6 * (1 - interior)";
		range = 1600;
		rangeCurve[] = {
			{0,0},
			{100,0},
			{150,1},
			{700,0.7},
			{1600,0}
		};
	};
	class bnb_e_HK416_Close_Silenced_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_outdoor_silenced_close.ogg",
				1
			},
		};
		volume = "1 * (1 - interior)";
		range = 50;
		rangeCurve[] = {
			{0,1},
			{25,0.7},
			{50,0}
		};
	};
	class bnb_e_HK416_Close_Silenced_Tail_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_outdoor_silenced_close_tail.ogg",
				1
			},
		};
		volume = "1 * (1 - interior)";
		range = 50;
		rangeCurve[] = {
			{0,1},
			{25,0.7},
			{50,0}
		};
	};
	class bnb_e_HK416_Distant_Silenced_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_outdoor_silenced_distant.ogg",
				1
			},
		};
		volume = "1 * (1 - interior)";
		range = 650;
		rangecurve[] = {
			{0,0},
			{25,0.5},
			{50,1},
			{650,0}
		};
	};
	class bnb_e_HK416_Distant_Silenced_Tail_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_outdoor_silenced_distant_tail.ogg",
				1
			},
		};
		volume = "1 * (1 - interior)";
		range = 650;
		rangeCurve[] = {
			{0,0},
			{25,0.5},
			{50,1},
			{650,0}
		};
	};
	class bnb_e_HK416_Indoor_Close_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_indoor_close.ogg",
				1
			}
		};
		volume = "1.35 * interior";
		range = 50;
		rangeCurve[] = {
			{0,1},
			{25,0.7},
			{50,0}
		};
	};
	class bnb_e_HK416_Indoor_Close_Tail_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_indoor_close_tail.ogg",
				1
			}
		};
		volume = "1.35 * interior";
		range = 50;
		rangeCurve[] = {
			{0,1},
			{25,0.7},
			{50,0}
		};
	};
	class bnb_e_HK416_Indoor_Distant_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_indoor_distant.ogg",
				1
			}
		};
		volume = "1 * interior";
		range = 100;
		rangeCurve[] = {
			{0,0},
			{25,0},
			{50,1},
			{100,0}
		};
	};
	class bnb_e_HK416_Indoor_Distant_Tail_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_indoor_close_tail.ogg",
				1
			}
		};
		volume = "1 * interior";
		range = 100;
		rangeCurve[] = {
			{0,0},
			{25,0},
			{50,1},
			{100,0}
		};
	};
	class bnb_e_HK416_Indoor_Close_Silenced_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_indoor_silenced_close.ogg",
				1
			}
		};
		volume = "1 * interior";
		range = 50;
		rangeCurve[] = {
			{0,1},
			{25,0.7},
			{50,0}
		};
	};
	class bnb_e_HK416_Indoor_Close_Silenced_Tail_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_indoor_silenced_close_tail.ogg",
				1
			}
		};
		volume = "1 * interior";
		range = 50;
		rangeCurve[] = {
			{0,1},
			{25,0.7},
			{50,0}
		};
	};
	class bnb_e_HK416_Indoor_Distant_Silenced_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_indoor_silenced_distant.ogg",
				1
			}
		};
		volume = "1 * interior";
		range = 100;
		rangeCurve[] = {
			{0,0},
			{25,0},
			{50,1},
			{100,0}
		};
	};
	class bnb_e_HK416_Indoor_Distant_Silenced_Tail_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\weapons\hk416\hk416_indoor_silenced_distant_tail.ogg",
				1
			}
		};
		volume = "1 * interior";
		range = 100;
		rangeCurve[] = {
			{0,0},
			{25,0},
			{50,1},
			{100,0}
		};
	};
	class bnb_e_rifle_shells_SoundShader {
		samples[] = {
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_concrete1.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_concrete2.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_concrete3.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_soil1.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_soil2.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_soil3.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_metal1.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_metal2.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_metal3.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_wood1.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_wood2.ogg",
				1
			},
			{
				"\x\bnb_e\hk416_sound_compat\sounds\ammo\shells\556mm_shell_wood3.ogg",
				1
			}
		};
		volume = 1;
		range = 35;
		rangeCurve = "bnb_e_basic";
	};
};

class CfgSoundSets {
	class bnb_e_HK416_Shot_SoundSet {
		soundShaders[] = {
			"bnb_e_HK416_Close_SoundShader",
			"bnb_e_HK416_Far_SoundShader",
			"bnb_e_HK416_Indoor_Close_SoundShader",
			"bnb_e_HK416_Indoor_Distant_SoundShader"
		};
		volumeFactor = 1.5;
		volumeCurve = "bnb_e_rifleSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "bnb_e_rifleShotDistanceFilter";
		occlusionFactor = 0.15;
		obstructionFactor = 0.15;
		spatial= 1;
		doppler = 0;
		loop= 0;
	};
	class bnb_e_HK416_Tail_SoundSet {
		soundShaders[] = {
			"bnb_e_HK416_Close_Tail_SoundShader",
			"bnb_e_HK416_Far_Tail_SoundShader",
			"bnb_e_HK416_Indoor_Close_Tail_SoundShader",
			"bnb_e_HK416_Indoor_Distant_Tail_SoundShader"
		};
		volumeFactor = 1.5;
		volumeCurve = "bnb_e_tailSoundCurve";
		sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
		distanceFilter = "bnb_e_rifleTailDistanceFilter";
		occlusionFactor = 0.15;
		obstructionFactor = 0.15;
		spatial= 1;
		doppler = 0;
		loop= 0;
	};
	class bnb_e_HK416_ShotSD_SoundSet {
		soundShaders[] = {
			"bnb_e_HK416_Close_Silenced_SoundShader",
			"bnb_e_HK416_Distant_Silenced_SoundShader",
			"bnb_e_HK416_Indoor_Close_Silenced_SoundShader",
			"bnb_e_HK416_Indoor_Distant_Silenced_SoundShader"
		};
		volumeFactor = 1.5;
		volumeCurve = "bnb_e_rifleSoundCurve";
		sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
		distanceFilter = "bnb_e_rifleShotDistanceFilter";
		occlusionFactor = 0.15;
		obstructionFactor = 0.15;
		spatial= 1;
		doppler = 0;
		loop= 0;
	};
	class bnb_e_HK416_TailSD_SoundSet {
		soundShaders[] = {
			"bnb_e_HK416_Close_Silenced_Tail_SoundShader",
			"bnb_e_HK416_Distant_Silenced_Tail_SoundShader",
			"bnb_e_HK416_Indoor_Close_Silenced_Tail_SoundShader",
			"bnb_e_HK416_Indoor_Distant_Silenced_Tail_SoundShader"
		};
		volumeFactor = 1.5;
		volumeCurve = "bnb_e_tailSoundCurve";
		sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
		distanceFilter = "bnb_e_rifleTailDistanceFilter";
		occlusionFactor = 0.15;
		obstructionFactor = 0.15;
		spatial= 1;
		doppler = 0;
		loop= 0;
	};
	class bnb_e_rifle_shells_SoundSet {
		soundShaders[] = {
			"bnb_e_rifle_shells_SoundShader"
		};
		volumeFactor = 0.35;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "RHSUSF_Shot_light_3DProcessingType";
		distanceFilter = "bnb_e_defaultDistanceFilter";
		occlusionFactor = 0;
		obstructionFactor = 0;
		spatial= 1;
		doppler = 0;
		loop= 0;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class baseSoundModeType;
class CfgWeapons {
	class Rifle_Base_F;
	class hlc_HK416_base : Rifle_Base_F {
		zeroingSound[]  = {"A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",0.316228,1,5};
		changeFiremodeSound[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\weapons\m4a1\weap_fireselctor.ogg",
			5,
			1,
			5
		};
		drySound[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\weapons\m4a1\weap_trigger_empty.ogg",
			3,
			1,
			10
		};
		HK416_SOUNDS
		bullet1[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_concrete1.ogg",
			0.801,
			1,
			10
		};
		bullet2[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_concrete2.ogg",
			0.801,
			1,
			10
		};
		bullet3[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_concrete3.ogg",
			0.801,
			1,
			10
		};
		bullet4[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_metal1.ogg",
			0.801,
			1,
			10
		};
		bullet5[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_metal2.ogg",
			0.801,
			1,
			10
		};
		bullet6[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_metal3.ogg",
			0.801,
			1,
			10
		};
		bullet7[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_soil1.ogg",
			0.801,
			1,
			10
		};
		bullet8[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_soil2.ogg",
			0.801,
			1,
			10
		};
		bullet9[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_soil3.ogg",
			0.801,
			1,
			10
		};
		bullet10[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_wood1.ogg",
			0.801,
			1,
			10
		};
		bullet11[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_wood2.ogg",
			0.801,
			1,
			10
		};
		bullet12[] = {
			"\x\bnb_e\hk416_sound_compat\sounds\ammo\556mm_shell_wood3.ogg",
			0.801,
			1,
			10
		};
		soundbullet[] = {};
	};

	class hlc_rifle_416D145 : hlc_HK416_base {
		HK416_SOUNDS
	};

	class hlc_rifle_416D10 : hlc_rifle_416D145 {
		HK416_SOUNDS
	};

	class hlc_rifle_416C : hlc_rifle_416D10 {
		HK416_SOUNDS
	};

	class hlc_rifle_BAB : hlc_rifle_416C {
		HK416_SOUNDS
	};

	class hlc_rifle_416D165 : hlc_rifle_416D145 {
		HK416_SOUNDS
	};

	class hlc_rifle_416D20 : hlc_rifle_416D145 {
		HK416_SOUNDS
	};
};
