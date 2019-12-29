/* ----------------------------------------------------------------------------
Config: Barrel Swaps

Description:
	Registers modded and vanilla machineguns to be able to use the
	ACE barrel swap framework.

Author:
	Arend
---------------------------------------------------------------------------- */
class CfgWeapons {
	class Rifle_Long_Base_F;
	class UK3CB_BAF_L110_Base : Rifle_Long_Base_F {
		ace_overheating_allowSwapBarrel = 1;
	};
	class UK3CB_BAF_L7A2 : Rifle_Long_Base_F {
		ace_overheating_allowSwapBarrel = 1;
	};

	class LMG_03_base_F;
	class LMG_03_F : LMG_03_base_F {
		ace_overheating_allowSwapBarrel = 1;
	};
};
