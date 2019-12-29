/* ----------------------------------------------------------------------------
Config: ACE Explosives

Description:
	Registers RHS explosives to ACE Explosives framework.

Author:
	Arend
---------------------------------------------------------------------------- */
class CfgMagazines {
	class CA_Magazine;
	class rhsusf_m112_mag : CA_Magazine {
		ACE_Explosives_Placeable = 1;
		useAction = 0;
		ACE_Explosives_SetupObject = "rhsusf_explosive_m112";
		ACE_Explosives_DelayTime = 1.5;

		class ACE_Triggers {
			SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
			class Timer {
				FuseTime = 0.5;
			};

			class Command {
				FuseTime = 0.5;
			};

			class MK16_Transmitter : Command {};
			class DeadmanSwitch : Command {};
		};
	};
	class rhsusf_m112x4_mag : rhsusf_m112_mag {
		ACE_Explosives_SetupObject = "rhsusf_explosive_m112x4";
	};
};

class CfgVehicles {
	class ACE_Explosives_Place;
	class rhsusf_explosive_m112 : ACE_Explosives_Place {};
	class rhsusf_explosive_m112x4 : ACE_Explosives_Place {};
};
