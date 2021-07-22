class CfgPatches {
	class bnb_ex_bettir_compat {
		// Addon identity
		name = "2BNB Extras - BettIR Compat";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Arend"
		};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class BettIR_Config {
	class CompatibleNightvisionGoggles {
		 class NVGoggles_mas_nor_h {
			offset[]={-0.027000001,0.28,0.15000001};
		};
		 class NVGoggles_mas_nor_hv : NVGoggles_mas_nor_h {
			offset[]={-0.027000001,0.28,0.15000001};
		};
		 class NVGoggles_mas_nor_hr : NVGoggles_mas_nor_h {
			offset[]={-0.027000001,0.28,0.15000001};
		};
	};
};
