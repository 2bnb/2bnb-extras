/* ----------------------------------------------------------------------------
Config: Resupply Crates

Description:
	Registers supply crates for A, B or C class resupplies.

Author:
	Arend
---------------------------------------------------------------------------- */
class CfgVehicles {
	class B_supplyCrate_F;
	class BNB_E_Resupply : B_supplyCrate_F {
		author = "Arend";
		vehicleClass="Ammo";
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

	class BNB_E_Resupply_Class_A : BNB_E_Resupply {
		displayName = "[2BNB] Resupply Crate (Medical) - Class A";
		scope = 2;

		class TransportItems {
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
				count = 10;
			};
			class _xx_ACE_salineIV_500 {
				name = "ACE_salineIV_500";
				count = 10;
			};
			class _xx_ACE_salineIV_250 {
				name = "ACE_salineIV_250";
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

	class BNB_E_Resupply_Class_B : BNB_E_Resupply {
		displayName = "[2BNB] Resupply Crate (Ammo) - Class B";
		scope = 2;

		class TransportMagazines {
			class _xx_rhsusf_200rnd_556x45_mixed_box {
				magazine = "rhsusf_200rnd_556x45_mixed_box";
				count = 15;
			};
			class _xx_rhsusf_100Rnd_762x51_m61_ap {
				magazine = "rhsusf_100Rnd_762x51_m61_ap";
				count = 5;
			};
			class _xx_rhsusf_100Rnd_762x51_m62_tracer {
				magazine = "rhsusf_100Rnd_762x51_m62_tracer";
				count = 10;
			};
			class _xx_rhsusf_100Rnd_762x51_m80a1epr {
				magazine = "rhsusf_100Rnd_762x51_m80a1epr";
				count = 10;
			};
			class _xx_hlc_30rnd_556x45_SPR_PMAG {
				magazine = "hlc_30rnd_556x45_SPR_PMAG";
				count = 70;
			};
			class _xx_hlc_30rnd_556x45_SOST_PMAG {
				magazine = "hlc_30rnd_556x45_SOST_PMAG";
				count = 15;
			};
			class _xx_hlc_30rnd_556x45_t_PMAG {
				magazine = "hlc_30rnd_556x45_t_PMAG";
				count = 15;
			};
			class _xx_hlc_30rnd_556x45_TDim_PMAG {
				magazine = "hlc_30rnd_556x45_TDim_PMAG";
				count = 15;
			};
			class _xx_hlc_30rnd_556x45_MDim_PMAG {
				magazine = "hlc_30rnd_556x45_MDim_PMAG";
				count = 15;
			};
			class _xx_ACE_20Rnd_762x51_Mk319_Mod_0_Mag {
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 15;
			};
			class _xx_ACE_20Rnd_762x51_M993_AP_Mag {
				magazine = "ACE_20Rnd_762x51_M993_AP_Mag";
				count = 5;
			};
			class _xx_rhs_mag_m67 {
				magazine = "rhs_mag_m67";
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
		};

		class TransportWeapons {
			class _xx_rhs_weap_rsp30_white {
				weapon = "rhs_weap_rsp30_white";
				count = 10;
			};
			class _xx_rhs_weap_rsp30_green {
				weapon = "rhs_weap_rsp30_green";
				count = 10;
			};
		};
	};

	class BNB_E_Resupply_Class_C : BNB_E_Resupply {
		displayName = "[2BNB] Resupply Crate (Special) - Class C";
		scope = 2;

		class TransportMagazines {
			class _xx_rhs_mag_M441_HE {
				magazine = "rhs_mag_M441_HE";
				count = 25;
			};
			class _xx_rhs_mag_M433_HEDP {
				magazine = "rhs_mag_M433_HEDP";
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
			class _xx_rhs_mag_m662_red {
				magazine = "rhs_mag_m662_red";
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
			class _xx_rhs_mag_m7a3_cs {
				magazine = "rhs_mag_m7a3_cs";
				count = 10;
			};
		};

		class TransportWeapons {
			class _xx_rhs_weap_m72a7 {
				weapon = "rhs_weap_m72a7";
				count = 8;
			};
		};

		class TransportItems {
			class _xx_rhsusf_m112_mag {
				name = "rhsusf_m112_mag";
				count = 10;
			};
			class _xx_ACE_Clacker {
				name = "ACE_Clacker";
				count = 2;
			};
		};
	};
};
