class CfgGroups {
	class WEST {

		class B_NorwayArmy_Woodland {
			name = "Norwegian Army (Woodland)";

			class Infantry {
				name = "Infantry";

				class b_norwayarmy_infantry_sentry_woodland {
					name = "Sentry";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
				};

				class b_norwayarmy_infantry_section_base_woodland {
					name = "Section (Base)";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
				};

				class b_norwayarmy_infantry_section_blank_woodland {
					name = "Section (Blank)";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Woodland";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Woodland";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Woodland";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Woodland";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Woodland";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Woodland";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Woodland";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Woodland";
					};
				};

				class b_norwayarmy_infantry_fireteam_charlie_woodland {
					name = "Fireteam Charlie";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Woodland";
					};
				};

				class b_norwayarmy_infantry_fireteam_delta_woodland {
					name = "Fireteam Delta";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Woodland";
					};
				};

				class b_norwayarmy_infantry_buddy_team_lmg_762_woodland {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
				};

				class b_norwayarmy_infantry_buddy_team_at_woodland {
					name = "Buddy Team - AT";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
				};

				class b_norwayarmy_infantry_buddy_team_marksman_woodland {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
				};

				class b_norwayarmy_infantry_1section_woodland {
					name = "1 Section";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Woodland";
					};
				};

				class b_norwayarmy_infantry_2section_woodland {
					name = "2 Section";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Engineer_EOD_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Woodland";
					};
				};

				class b_norwayarmy_infantry_3section_woodland {
					name = "3 Section";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Woodland";
					};
				};
			};

			class Motorized {
				name = "Motorized Infantry";

				class b_norwayarmy_motorized_infantry_section {
					name = "Infantry Section";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Scania_Covered_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Woodland";
					};
				};

				class b_norwayarmy_motorized_humvee_team {
					name = "Land Rover Team";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Armed_Humvee_M2_Woodland";
					};
					class Unit1 {
						position[] = {5,-9,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Command_Humvee_Woodland";
					};
					class Unit2 {
						position[] = {-5,-9,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Woodland";
					};
					class Unit3 {
						position[] = {-10,-14,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Woodland";
					};
					class Unit4 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit5 {
						position[] = {-15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Woodland";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class b_norwayarmy_mechanized_infantry_scout {
					name = "Humvee Scout";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Armed_Humvee_M2_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Woodland";
					};
				};

				class b_norwayarmy_mechanized_stryker_section {
					name = "Stryker Section";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Stryker_Woodland";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Stryker_Woodland";
					};
				};

				class b_norwayarmy_mechanized_m113_section {
					name = "M113 Section";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_M113_M2_Woodland";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_M113_M2_Woodland";
					};
				};

			};

			class Armored {
				name = "Armor";

				class b_norwayarmy_armored_tank_section {
					name = "Tank Section";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Leopard_2SG_Woodland";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Leopard_2SG_Woodland";
					};
				};
			};

			class Artillery {
				name = "Artillery";

				class b_norwayarmy_artillery_mortar_team {
					name = "Mortar Team";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Mortar_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Mortar_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Mortar_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Woodland";
					};
				};
			};

			class Air {
				name = "Air";

				class b_norwayarmy_air_littlebird_cas_flight {
					name = "Apache Multi Team";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Littlebird_CAS_Woodland";
					};
					class Unit1 {
						position[] = {20,-26,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Littlebird_CAS_Woodland";
					};
				};

				class b_norwayarmy_air_huey_cas_flight {
					name = "Huey CAS Flight";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Huey_Gunship_Woodland";
					};
					class Unit1 {
						position[] = {17,-21,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Huey_Gunship_Woodland";
					};
				};

				class b_norwayarmy_air_fighter_team {
					name = "Fighter Team";
					side = 1;
					faction = "B_NorwayArmy_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_JAS_39_Gripen_Woodland";
					};
					class Unit1 {
						position[] = {17,-29,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_JAS_39_Gripen_Woodland";
					};
				};
			};
		};

		class B_NorwayArmy_Multicam {
			name = "Norwegian Army (Multicam)";

			class Infantry {
				name = "Infantry";

				class b_norwayarmy_infantry_sentry_multicam {
					name = "Sentry";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
				};

				class b_norwayarmy_infantry_section_base_multicam {
					name = "Section (Base)";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
				};

				class b_norwayarmy_infantry_section_blank_multicam {
					name = "Section (Blank)";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Multicam";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Multicam";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Multicam";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Multicam";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Multicam";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Multicam";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Multicam";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Multicam";
					};
				};

				class b_norwayarmy_infantry_fireteam_charlie_multicam {
					name = "Fireteam Charlie";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Multicam";
					};
				};

				class b_norwayarmy_infantry_fireteam_delta_multicam {
					name = "Fireteam Delta";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Multicam";
					};
				};

				class b_norwayarmy_infantry_buddy_team_lmg_762_multicam {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
				};

				class b_norwayarmy_infantry_buddy_team_at_multicam {
					name = "Buddy Team - AT";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
				};

				class b_norwayarmy_infantry_buddy_team_marksman_multicam {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
				};

				class b_norwayarmy_infantry_1section_multicam {
					name = "1 Section";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Multicam";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Multicam";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Multicam";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Multicam";
					};
				};

				class b_norwayarmy_infantry_2section_multicam {
					name = "2 Section";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Engineer_EOD_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Multicam";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Multicam";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Multicam";
					};
				};

				class b_norwayarmy_infantry_3section_multicam {
					name = "3 Section";
					side = 1;
					faction = "B_NorwayArmy_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Multicam";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Multicam";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Multicam";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Multicam";
					};
				};
			};
		};

		class B_NorwayArmy_Desert {
			name = "Norwegian Army (Desert)";

			class Infantry {
				name = "Infantry";

				class b_norwayarmy_infantry_sentry_desert {
					name = "Sentry";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
				};

				class b_norwayarmy_infantry_section_base_desert {
					name = "Section (Base)";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
				};

				class b_norwayarmy_infantry_section_blank_desert {
					name = "Section (Blank)";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Desert";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Desert";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Desert";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Desert";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Desert";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Desert";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Desert";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Desert";
					};
				};

				class b_norwayarmy_infantry_fireteam_charlie_desert {
					name = "Fireteam Charlie";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Desert";
					};
				};

				class b_norwayarmy_infantry_fireteam_delta_desert {
					name = "Fireteam Delta";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Desert";
					};
				};

				class b_norwayarmy_infantry_buddy_team_lmg_762_desert {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
				};

				class b_norwayarmy_infantry_buddy_team_at_desert {
					name = "Buddy Team - AT";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
				};

				class b_norwayarmy_infantry_buddy_team_marksman_desert {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
				};

				class b_norwayarmy_infantry_1section_desert {
					name = "1 Section";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Desert";
					};
				};

				class b_norwayarmy_infantry_2section_desert {
					name = "2 Section";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Engineer_EOD_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Desert";
					};
				};

				class b_norwayarmy_infantry_3section_desert {
					name = "3 Section";
					side = 1;
					faction = "B_NorwayArmy_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Desert";
					};
				};
			};
		};

		class B_NorwayArmy_Arctic {
			name = "Norwegian Army (Arctic)";

			class Infantry {
				name = "Infantry";

				class b_norwayarmy_infantry_sentry_arctic {
					name = "Sentry";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
				};

				class b_norwayarmy_infantry_section_base_arctic {
					name = "Section (Base)";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
				};

				class b_norwayarmy_infantry_section_blank_arctic {
					name = "Section (Blank)";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Arctic";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Arctic";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Arctic";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Arctic";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Arctic";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Arctic";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Arctic";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Man_Arctic";
					};
				};

				class b_norwayarmy_infantry_fireteam_charlie_arctic {
					name = "Fireteam Charlie";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Arctic";
					};
				};

				class b_norwayarmy_infantry_fireteam_delta_arctic {
					name = "Fireteam Delta";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Arctic";
					};
				};

				class b_norwayarmy_infantry_buddy_team_lmg_762_arctic {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
				};

				class b_norwayarmy_infantry_buddy_team_at_arctic {
					name = "Buddy Team - AT";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
				};

				class b_norwayarmy_infantry_buddy_team_marksman_arctic {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
				};

				class b_norwayarmy_infantry_1section_arctic {
					name = "1 Section";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_AT_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Arctic";
					};
				};

				class b_norwayarmy_infantry_2section_arctic {
					name = "2 Section";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Engineer_EOD_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Marksman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Arctic";
					};
				};

				class b_norwayarmy_infantry_3section_arctic {
					name = "3 Section";
					side = 1;
					faction = "B_NorwayArmy_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_NorwayArmy_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Medic_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_556_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_NorwayArmy_2IC_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_NorwayArmy_LMG_762_Arctic";
					};
				};
			};
		};
	};
};
