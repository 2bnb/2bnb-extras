class bnb_e_public_server {
	text = "2BNB Public Server";
	textIsQuote = 0;
	picture = "\x\bnb_e\core\2bnb-tile.paa";
	video = "\x\bnb_e\core\2bnb-tile.ogv";
	action = "[""5.9.108.39"", 2350] call compile preprocessFileLineNumbers '\x\bnb_e\core\functions\direct_connect\fn_connectToServer.sqf'";
	actionText = "Connect";
	condition = true;
};

class bnb_e_operations_server {
	text = "2BNB Server";
	textIsQuote = 0;
	picture = "\x\bnb_e\core\2bnb-tile.paa";
	video = "\x\bnb_e\core\2bnb-tile.ogv";
	action = "[""5.9.108.39"", 2302] call compile preprocessFileLineNumbers '\x\bnb_e\core\functions\direct_connect\fn_connectToServer.sqf'";
	actionText = "Connect";
	condition = true;
};
