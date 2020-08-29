/* ----------------------------------------------------------------------------
Config: Unit Trainer Tools

Description:
	Registers ACE Interactions for Unit Trainers to use as tools of their trade.

Author:
	Arend
---------------------------------------------------------------------------- */
class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class BNB_E_FullHeal {
				displayName = "Heal player";
				condition = "[_player] call bnb_e_core_fnc_isCurator";
				statement = "[_target, _target] call ace_medical_treatment_fnc_fullHeal;hint ""Healed!"";";
				icon = "x\bnb_e\core\red-cross.paa";
				position = "(_target selectionPosition [""spine3"", ""Memory""]) vectorAdd [0,0.1,0]";
				distance = 4;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};
		};
	};
};

