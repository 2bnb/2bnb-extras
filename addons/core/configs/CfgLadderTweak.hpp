/* ----------------------------------------------------------------------------
Config: Ladder Tweak

Description:
	Changes the speed at which a unit climbs ladders.

Author:
	Arend
---------------------------------------------------------------------------- */
class CfgMovesBasic;
class CfgMovesMaleSdr : CfgMovesBasic {
	class States {
		class LadderCivilStatic;
		class LadderCivilUpLoop : LadderCivilStatic {
			speed = "1.05/(1/2)";
		};
	};
};

class CfgAnimation {
	ladderSpeed = "0.5/(1/2)";
};
