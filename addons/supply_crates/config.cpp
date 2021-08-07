class CfgPatches {
	class bnb_ex_supply_crates {
		// Addon identity
		name = "2BNB Extras - Supply Crates";
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
		requiredAddons[] = {
			"ace_medical"
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
		displayName = "[2BNB] Resupply Crate (Medical) - Class A";
		scope = 2;

		class TransportItems {
			class _xx_ACE_plasmaIV {
				name = "ACE_plasmaIV";
				count = 10;
			};
			class _xx_ACE_plasmaIV_500 {
				name = "ACE_plasmaIV_500";
				count = 10;
			};
			class _xx_ACE_plasmaIV_250 {
				name = "ACE_plasmaIV_250";
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
		displayName = "[2BNB] Resupply Crate (Ammo) - Class B";
		scope = 2;

		class TransportMagazines {
			class _xx_BWA3_120Rnd_762x51_soft {
				magazine = "BWA3_120Rnd_762x51_soft";
				count = 15;
			};
			class _xx_BWA3_120Rnd_762x51_Tracer_soft {
				magazine = "BWA3_120Rnd_762x51_Tracer_soft";
				count = 5;
			};
			class _xx_BWA3_120Rnd_762x51 {
				magazine = "BWA3_120Rnd_762x51";
				count = 10;
			};
			class _xx_BWA3_120Rnd_762x51_Tracer {
				magazine = "BWA3_120Rnd_762x51_Tracer";
				count = 10;
			};
			class _xx_BWA3_30Rnd_556x45_G36 {
				magazine = "BWA3_30Rnd_556x45_G36";
				count = 70;
			};
			class _xx_BWA3_30Rnd_556x45_G36_Tracer {
				magazine = "BWA3_30Rnd_556x45_G36_Tracer";
				count = 15;
			};
			class _xx_BWA3_30Rnd_556x45_G36_AP {
				magazine = "BWA3_30Rnd_556x45_G36_AP";
				count = 15;
			};
			class _xx_BWA3_30Rnd_556x45_G36_SD {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 15;
			};
			class _xx_BWA3_30Rnd_556x45_G36_Tracer_Dim {
				magazine = "BWA3_30Rnd_556x45_G36_Tracer_Dim";
				count = 15;
			};
			class _xx_BWA3_20Rnd_762x51_G28 {
				magazine = "BWA3_20Rnd_762x51_G28";
				count = 15;
			};
			class _xx_BWA3_20Rnd_762x51_G28_AP {
				magazine = "BWA3_20Rnd_762x51_G28_AP";
				count = 5;
			};
			class _xx_BWA3_20Rnd_762x51_G28_SD {
				magazine = "BWA3_20Rnd_762x51_G28_SD";
				count = 5;
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
		};
	};

	class BNB_EX_Resupply_Class_C : BNB_EX_Resupply {
		displayName = "[2BNB] Resupply Crate (Special) - Class C";
		scope = 2;

		class TransportMagazines {
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 25;
			};
			class _xx_CUP_1Rnd_HEDP_M203 {
				magazine = "CUP_1Rnd_HEDP_M203";
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
			class _xx_CUP_1Rnd_StarFlare_Red_M203 {
				magazine = "CUP_1Rnd_StarFlare_Red_M203";
				count = 10;
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
			class _xx_BWA3_PzF3_Tandem_Loaded {
				weapon = "BWA3_PzF3_Tandem_Loaded";
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
