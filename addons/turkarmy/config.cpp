class CfgPatches {
	class bnb_e_turkarmy {
		name = "2BNB Extras - Turkish Army";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			// "TMT_Turkish_Army"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"SeeOne"
		};
	};
};


class CfgGroups {
	class WEST {

		class TMT_TR_Army {
			name = "Turkish Land Forces";

			class Infantry {
				name = "Infantry";

				class TMT_RifleSquad {
					name = "Rifle Squad";
					side = 1;
					faction = "TMT_TR_Army";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "TMT_KKK_Soldier_SL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "TMT_KKK_Rifleman_Medic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "TMT_KKK_Soldier_MG";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "TMT_KKK_Rifleman_AT";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "TMT_KKK_Soldier";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "TMT_KKK_Soldier_Engineer";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "TMT_KKK_Soldier_MG";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "TMT_KKK_Soldier";
					};
				};
			};
		};
	};
};
