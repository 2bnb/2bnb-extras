/* ----------------------------------------------------------------------------
Config: Direct Connect

Description:
	Registers direct connection tiles to the main menu spotlight.

Author:
	Arend
---------------------------------------------------------------------------- */
class CfgMainMenuSpotlight {
	class bnb_e_public_server {
		text = "2BNB 2nd Server";
		textIsQuote = 0;
		picture = "\x\bnb_e\core\2bnb-tile.paa";
		video = "\x\bnb_e\core\2bnb-tile.ogv";
		action = "[""5.9.108.39"", 2369] call compile preprocessFileLineNumbers '\x\bnb_e\core\functions\common\fn_connectToServer.sqf'";
		actionText = "Connect";
		condition = true;
	};

	class bnb_e_operations_server {
		text = "2BNB Server";
		textIsQuote = 0;
		picture = "\x\bnb_e\core\2bnb-tile.paa";
		video = "\x\bnb_e\core\2bnb-tile.ogv";
		action = "[""5.9.108.39"", 2302] call compile preprocessFileLineNumbers '\x\bnb_e\core\functions\common\fn_connectToServer.sqf'";
		actionText = "Connect";
		condition = true;
	};
};
