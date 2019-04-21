class bnb_e_name_server {
	text = "[Name] Server";
	textIsQuote = 0;
	picture = "\x\bnb_e\core\2bnb-tile.paa";
	video = "\x\bnb_e\core\2bnb-tile.ogv";
	action = "[""888.888.888.888"", 2302] call compile preprocessFileLineNumbers '\x\bnb_e\core\functions\direct_connect\fn_connectToServer.sqf'";
	actionText = "Connect";
	condition = true;
};
