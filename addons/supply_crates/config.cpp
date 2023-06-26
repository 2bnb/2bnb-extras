class CfgPatches {
	class bnb_ex_supply_crates {
		// Addon identity
		name = "2BNB - Supply Crates";
		author = "2BNB";
		authors[] = {
			"Arend",
			"FarCry"
		};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"ace_medical_treatment",
			"ace_grenades",
			"ace_explosives",
			"CUP_Weapons_Ammunition"
		};

		// Addon items
		units[] = {
			"BNB_EX_Resupply",
			"BNB_EX_Resupply_Class_A",
			"BNB_EX_Resupply_Class_B",
			"BNB_EX_Resupply_Class_C"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};


class CfgVehicles {
	class B_supplyCrate_F;
	class BNB_EX_Resupply : B_supplyCrate_F {
		author = "Arend";
		vehicleClass = "Ammo";
		scope = 0;
		transportMaxWeapons = 9002;
		transportMaxMagazines = 9002;
		transportMaxItems = 9002;
		maximumload = 9002;
		ace_rearm_defaultSupply = 200;

		class TransportMagazines {};
		class TransportWeapons {};
		class TransportBackpacks {};
		class TransportItems {};
	};

	class BNB_EX_Resupply_Class_A : BNB_EX_Resupply {
		displayName = "[2BNB] Medical Crate";
		scope = 2;

		class TransportItems {
			class _xx_ACE_bloodIV {
				name = "ACE_bloodIV";
				count = 10;
			};
			class _xx_ACE_bloodIV_500 {
				name = "ACE_bloodIV_500";
				count = 10;
			};
			class _xx_ACE_bloodIV_250 {
				name = "ACE_bloodIV_250";
				count = 10;
			};
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 50;
			};
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 50;
			};
			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 50;
			};
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 10;
			};
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 30;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 30;
			};
			class _xx_ACE_adenosine {
				name = "ACE_adenosine";
				count = 30;
			};
			class _xx_ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 10;
			};
		};
	};

	class BNB_EX_Resupply_Class_B : BNB_EX_Resupply {
		displayName = "[2BNB] Ammo Crate";
		scope = 2;

		class TransportMagazines {
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag {
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 15;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag {
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 15;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Tracer_Dim {
				magazine = "ACE_30Rnd_556x45_Stanag_Dim";
				count = 15;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk318_PMAG {
				magazine = "rhs_mag_30Rnd_556x45_Mk318_PMAG";
				count = 15;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_PMAG {
				magazine = "rhs_mag_30Rnd_556x45_Mk262_PMAG";
				count = 15;
			};
			class _xx_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tacer_Red {
				magazine = "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tacer_Red";
				count = 15;
			};
			class _xx_rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red {
				magazine = "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red";
				count = 15;
			};
			class _xx_ACE_20Rnd_762x51_M993_AP_Mag {
				magazine = "ACE_20Rnd_762x51_M993_AP_Mag";
				count = 10;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer_Dim {
				magazine = "ACE_20Rnd_762x51_Mag_Tracer_Dim";
				count = 10;
			};
			class _xx_UK3CB_BAF_556_200Rnd_T {
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 10;
			};
			class _xx_UK3CB_BAF_556_200Rnd {
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 10;
			};
			class _xx_UK3CB_BAF_762_L42A1_20Rnd {
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 10;
			};
			class _xx_UK3CB_BAF_762_100Rnd_T {
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 10;
			};
			class _xx_UK3CB_BAF_762_100Rnd {
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 10;
			};
			class _xx_UK3CB_BAF_9_30Rnd {
				magazine = "UK3CB_BAF_9_30Rnd";
				count = 15;
			};
			class _xx_UK3CB_BAF_762_L42A1_20Rnd_T {
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 15;
			};
			class _xx_UK3CB_BAF_762_L42A1_20Rnd {
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 15;
			};
			class _xx_rhs_fim92_mag {
				magazine = "rhs_fim92_mag";
				count = 3;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag {
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 15;
			};
			class _xx_UK3CB_BAF_556_30Rnd {
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 15;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T {
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 15;
			};
			class _xx_ACE_HuntIR_M203 {
				magazine = "ACE_HuntIR_M203";
				count = 10;
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 30;
			};
			class _xx_SmokeShellBlue {
				magazine = "SmokeShellBlue";
				count = 15;
			};
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 15;
			};
			class _xx_ACE_Chemlight_HiGreen {
				magazine = "ACE_Chemlight_HiGreen";
				count = 10;
			};
			class _xx_6Rnd_GreenSignal_F {
				magazine = "6Rnd_GreenSignal_F";
				count = 10;
			};
			class _xx_6Rnd_RedSignal_F {
				magazine = "6Rnd_RedSignal_F";
				count = 10;
			};
		};

		class TransportWeapons {
			class _xx_hgun_Pistol_Signal_F {
				weapon = "hgun_Pistol_Signal_F";
				count = 2;
			};
			class _xx_rhs_weap_m72a7 {
				weapon = "rhs_weap_m72a7";
				count = 4;
			};
		};
	};

	class BNB_EX_Resupply_Class_C : BNB_EX_Resupply {
		displayName = "[2BNB] Explosive Crate";
		scope = 2;

		class TransportMagazines {
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 25;
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 5;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell {
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 5;
			};
			class _xx_ACE_40mm_Flare_ir {
				magazine = "ACE_40mm_Flare_ir";
				count = 10;
			};
			class _xx_ACE_HuntIR_M203 {
				magazine = "ACE_HuntIR_M203";
				count = 10;
			};
			class _xx_ACE_CTS9 {
				magazine = "ACE_CTS9";
				count = 10;
			};
			class _xx_MRAWS_HE_F {
				magazine = "MRAWS_HE_F";
				count = 4;
			};
			class _xx_MRAWS_HEAT55_F {
				magazine = "MRAWS_HEAT55_F";
				count = 4;
			};
			class _xx_MRAWS_HEAT_F {
				magazine = "MRAWS_HEAT_F";
				count = 8;
			};
		};
		class TransportWeapons {
			class _xx_rhs_weap_m72a7 {
				weapon = "rhs_weap_m72a7";
				count = 8;
			};
		};

		class TransportItems {
			class _xx_DemoCharge_Remote_Mag {
				name = "DemoCharge_Remote_Mag";
				count = 10;
			};
			class _xx_ACE_Clacker {
				name = "ACE_Clacker";
				count = 2;
			};
		};
	};
};