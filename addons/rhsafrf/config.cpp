class CfgPatches {
	class bnb_e_turkarmy {
		name = "2BNB Extras - Russia (VDV/UN)";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"rhs_c_troops"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"SeeOne"
		};
	};
};


class CfgGroups {
	class WEST {
		class bnb_e_rhsafrf_vdvun {
			name = "Russia (VDV/UN)";

			class Infantry {
				name = "Infantry";

				class rus_vdv_inf_emr_un {
					name = "Infantry Section (EMR) (UN)";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "rhs_vdv_sergeant";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "rhs_vdv_medic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "rhs_vdv_arifleman";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "rhs_vdv_grenadier";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "rhs_vdv_engineer";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "rhs_vdv_rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "rhs_vdv_rifleman";
					};
				};
			};
		};
	};
};
