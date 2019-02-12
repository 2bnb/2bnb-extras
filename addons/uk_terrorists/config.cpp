#include "CfgPatches.hpp"
#include "autogen.hpp"

// Copy this part to your config.cpp
#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

// Copy this part to your CfgVehicles config. Switch the Arma 3 vanilla boxes for CUP ones if necessary (replace all instances).
    class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    class Box_East_Uniforms_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class O_UKTerrorists_Black_AmmoBox : Box_East_Ammo_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Terrorists Ammo Box;
        class TransportMagazines {
            mag_xx(rhsusf_mag_17Rnd_9x19_FMJ,50);
            mag_xx(ACE_30Rnd_556x45_Stanag_Mk262_mag,50);
            mag_xx(rhs_mag_mk84,50);
            mag_xx(ACE_Chemlight_HiGreen,50);
            mag_xx(CUP_HandGrenade_L109A1_HE,50);
            mag_xx(CUP_HandGrenade_L109A2_HE,50);
            mag_xx(SmokeShell,50);
            mag_xx(SmokeShellBlue,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(SMA_30Rnd_762x39_SKS_7n23_AP,50);
            mag_xx(SMA_30Rnd_762x39_SKS_FMJ,50);
            mag_xx(SMA_30Rnd_762x39_7n23_AP_Red,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class O_UKTerrorists_Black_WeaponsBox : Box_East_Wps_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Terrorists Weapons Box;
        class TransportMagazines {
            mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
            mag_xx(rhsusf_mag_17Rnd_9x19_JHP,50);
            mag_xx(SMA_30Rnd_762x39_7n23_AP_Red,50);
        };
        class TransportWeapons {
            weap_xx(SMA_ACRREMblk_N,10);
            weap_xx(rhsusf_weap_glock17g4,10);
            weap_xx(SMA_SKS_F,10);
        };
        class TransportItems {
            item_xx(SMA_supp1b_556,10);
            item_xx(rhsusf_acc_anpeq15A,10);
            item_xx(sma_spitfire_03_rds_black,10);
            item_xx(rhsusf_acc_omega9k,10);
            item_xx(acc_flashlight_pistol,10);
            item_xx(SMA_supp_762,10);
        };
    };
    class O_UKTerrorists_Black_LaunchersBox : Box_East_WpsLaunch_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Terrorists Launchers Box;
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class O_UKTerrorists_Black_UniformBox : Box_East_Uniforms_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Terrorists Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(rhs_uniform_g3_blk,15);
        };
    };
    class O_UKTerrorists_Black_SupportBox : Box_East_Support_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Terrorists Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Laserdesignator_01_khk_F,10);
            item_xx(V_PlateCarrier2_blk,10);
            item_xx(rhsusf_opscore_bk,10);
            item_xx(VSM_Balaclava2_black_Goggles,10);
            item_xx(B_ViperLightHarness_blk_F,10);
            item_xx(A3_GPNVG18b_BLK_F,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(TFAR_microdagr,10);
            item_xx(TFAR_anprc152,10);
            item_xx(ItemGPS,10);
            item_xx(CUP_B_USPack_Black,10);
        };
    };
    class O_UKTerrorists_Black_SupplyBox : O_SupplyCrate_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Terrorists Supply Box;
        class TransportMagazines {
            mag_xx(rhsusf_mag_17Rnd_9x19_FMJ,50);
            mag_xx(ACE_30Rnd_556x45_Stanag_Mk262_mag,50);
            mag_xx(rhs_mag_mk84,50);
            mag_xx(ACE_Chemlight_HiGreen,50);
            mag_xx(CUP_HandGrenade_L109A1_HE,50);
            mag_xx(CUP_HandGrenade_L109A2_HE,50);
            mag_xx(SmokeShell,50);
            mag_xx(SmokeShellBlue,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(SMA_30Rnd_762x39_SKS_7n23_AP,50);
            mag_xx(SMA_30Rnd_762x39_SKS_FMJ,50);
            mag_xx(SMA_30Rnd_762x39_7n23_AP_Red,50);
        };
        class TransportWeapons {
            weap_xx(SMA_ACRREMblk_N,10);
            weap_xx(rhsusf_weap_glock17g4,10);
            weap_xx(SMA_SKS_F,10);
        };
        class TransportItems {
            item_xx(SMA_supp1b_556,10);
            item_xx(rhsusf_acc_anpeq15A,10);
            item_xx(sma_spitfire_03_rds_black,10);
            item_xx(rhsusf_acc_omega9k,10);
            item_xx(acc_flashlight_pistol,10);
            item_xx(SMA_supp_762,10);
            item_xx(Laserdesignator_01_khk_F,10);
            item_xx(V_PlateCarrier2_blk,10);
            item_xx(rhsusf_opscore_bk,10);
            item_xx(VSM_Balaclava2_black_Goggles,10);
            item_xx(B_ViperLightHarness_blk_F,10);
            item_xx(A3_GPNVG18b_BLK_F,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(TFAR_microdagr,10);
            item_xx(TFAR_anprc152,10);
            item_xx(ItemGPS,10);
            item_xx(CUP_B_USPack_Black,10);
            item_xx(rhs_uniform_g3_blk,10);
        };
    };





		class Attribute0
		{
			property="ace_arsenal_DefaultLoadoutsListAttribute";
			expression="if (!is3DEN) then {ace_arsenal_defaultLoadoutsList= _value}";
			class Value
			{
				class data
				{
					class type
					{
						type[]=
						{
							"ARRAY"
						};
					};
					class value
					{
						items=2;
						class Item0
						{
							class data
							{
								class type
								{
									type[]=
									{
										"ARRAY"
									};
								};
								class value
								{
									items=2;
									class Item0
									{
										class data
										{
											class type
											{
												type[]=
												{
													"STRING"
												};
											};
											value="x";
										};
									};
									class Item1
									{
										class data
										{
											class type
											{
												type[]=
												{
													"ARRAY"
												};
											};
											class value
											{
												items=10;
												class Item0
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=7;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="arifle_MX_SW_F";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item2
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="acc_pointer_IR";
																};
															};
															class Item3
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item4
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																	class value
																	{
																		items=2;
																		class Item0
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"STRING"
																					};
																				};
																				value="100Rnd_65x39_caseless_mag";
																			};
																		};
																		class Item1
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"SCALAR"
																					};
																				};
																				value=100;
																			};
																		};
																	};
																};
															};
															class Item5
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																};
															};
															class Item6
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="bipod_01_F_snd";
																};
															};
														};
													};
												};
												class Item1
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
													};
												};
												class Item2
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=7;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="hgun_P07_F";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item2
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item3
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item4
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																	class value
																	{
																		items=2;
																		class Item0
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"STRING"
																					};
																				};
																				value="16Rnd_9x21_Mag";
																			};
																		};
																		class Item1
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"SCALAR"
																					};
																				};
																				value=17;
																			};
																		};
																	};
																};
															};
															class Item5
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																};
															};
															class Item6
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
														};
													};
												};
												class Item3
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=2;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="U_B_CombatUniform_mcam_tshirt";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																	class value
																	{
																		items=5;
																		class Item0
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																			};
																		};
																		class Item1
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="SmokeShell";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																		class Item2
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="HandGrenade";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																		class Item3
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="SmokeShellGreen";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																		class Item4
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="Chemlight_green";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																	};
																};
															};
														};
													};
												};
												class Item4
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=2;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="V_PlateCarrier2_rgr";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																	class value
																	{
																		items=3;
																		class Item0
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="100Rnd_65x39_caseless_mag";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=5;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=100;
																						};
																					};
																				};
																			};
																		};
																		class Item1
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="16Rnd_9x21_Mag";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=2;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=17;
																						};
																					};
																				};
																			};
																		};
																		class Item2
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="Chemlight_green";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																	};
																};
															};
														};
													};
												};
												class Item5
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
													};
												};
												class Item6
												{
													class data
													{
														class type
														{
															type[]=
															{
																"STRING"
															};
														};
														value="H_HelmetB_grass";
													};
												};
												class Item7
												{
													class data
													{
														class type
														{
															type[]=
															{
																"STRING"
															};
														};
														value="G_Combat";
													};
												};
												class Item8
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
													};
												};
												class Item9
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=6;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="ItemMap";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item2
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="ItemRadio";
																};
															};
															class Item3
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="ItemCompass";
																};
															};
															class Item4
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="ItemWatch";
																};
															};
															class Item5
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="NVGoggles";
																};
															};
														};
													};
												};
											};
										};
									};
								};
							};
						};
						class Item1
						{
							class data
							{
								class type
								{
									type[]=
									{
										"ARRAY"
									};
								};
								class value
								{
									items=2;
									class Item0
									{
										class data
										{
											class type
											{
												type[]=
												{
													"STRING"
												};
											};
											value="test123";
										};
									};
									class Item1
									{
										class data
										{
											class type
											{
												type[]=
												{
													"ARRAY"
												};
											};
											class value
											{
												items=10;
												class Item0
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=7;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="arifle_MX_SW_F";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item2
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="acc_pointer_IR";
																};
															};
															class Item3
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item4
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																	class value
																	{
																		items=2;
																		class Item0
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"STRING"
																					};
																				};
																				value="100Rnd_65x39_caseless_mag";
																			};
																		};
																		class Item1
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"SCALAR"
																					};
																				};
																				value=100;
																			};
																		};
																	};
																};
															};
															class Item5
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																};
															};
															class Item6
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="bipod_01_F_snd";
																};
															};
														};
													};
												};
												class Item1
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
													};
												};
												class Item2
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=7;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="hgun_P07_F";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item2
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item3
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item4
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																	class value
																	{
																		items=2;
																		class Item0
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"STRING"
																					};
																				};
																				value="16Rnd_9x21_Mag";
																			};
																		};
																		class Item1
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"SCALAR"
																					};
																				};
																				value=17;
																			};
																		};
																	};
																};
															};
															class Item5
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																};
															};
															class Item6
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
														};
													};
												};
												class Item3
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=2;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="U_B_CombatUniform_mcam_tshirt";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																	class value
																	{
																		items=5;
																		class Item0
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																			};
																		};
																		class Item1
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="SmokeShell";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																		class Item2
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="HandGrenade";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																		class Item3
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="SmokeShellGreen";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																		class Item4
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="Chemlight_green";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																	};
																};
															};
														};
													};
												};
												class Item4
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=2;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="V_PlateCarrier2_rgr";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"ARRAY"
																		};
																	};
																	class value
																	{
																		items=3;
																		class Item0
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="100Rnd_65x39_caseless_mag";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=5;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=100;
																						};
																					};
																				};
																			};
																		};
																		class Item1
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="16Rnd_9x21_Mag";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=2;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=17;
																						};
																					};
																				};
																			};
																		};
																		class Item2
																		{
																			class data
																			{
																				class type
																				{
																					type[]=
																					{
																						"ARRAY"
																					};
																				};
																				class value
																				{
																					items=3;
																					class Item0
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"STRING"
																								};
																							};
																							value="Chemlight_green";
																						};
																					};
																					class Item1
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																					class Item2
																					{
																						class data
																						{
																							class type
																							{
																								type[]=
																								{
																									"SCALAR"
																								};
																							};
																							value=1;
																						};
																					};
																				};
																			};
																		};
																	};
																};
															};
														};
													};
												};
												class Item5
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
													};
												};
												class Item6
												{
													class data
													{
														class type
														{
															type[]=
															{
																"STRING"
															};
														};
														value="H_HelmetB_grass";
													};
												};
												class Item7
												{
													class data
													{
														class type
														{
															type[]=
															{
																"STRING"
															};
														};
														value="G_Combat";
													};
												};
												class Item8
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
													};
												};
												class Item9
												{
													class data
													{
														class type
														{
															type[]=
															{
																"ARRAY"
															};
														};
														class value
														{
															items=6;
															class Item0
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="ItemMap";
																};
															};
															class Item1
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="";
																};
															};
															class Item2
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="ItemRadio";
																};
															};
															class Item3
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="ItemCompass";
																};
															};
															class Item4
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="ItemWatch";
																};
															};
															class Item5
															{
																class data
																{
																	class type
																	{
																		type[]=
																		{
																			"STRING"
																		};
																	};
																	value="NVGoggles";
																};
															};
														};
													};
												};
											};
										};
									};
								};
							};
						};
					};
				};
			};
		};
	};
