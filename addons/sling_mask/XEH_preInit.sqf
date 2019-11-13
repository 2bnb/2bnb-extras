private _bnb_e_settings = [
	[
		"bnb_e_sling_mask_additionalList",
		"EDITBOX",
		["Additional Whitelist", "Classnames with double quotes, separated by commas"],
		["2BNB Gear", "Sling Masks"],
		"",
		true,
		{
			if !(isServer) exitWith {};
			(call compile format ["[%1]", _this]) call bnb_e_sling_mask_fnc_addMaskToWhitelist;
		}
	]
];

{_x call CBA_Settings_fnc_init;} forEach _bnb_e_settings;
