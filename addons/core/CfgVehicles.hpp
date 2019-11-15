// Register the m112(x4) explosive charges (RHS) with ACE Explosives
class ACE_Explosives_Place;
class rhsusf_explosive_m112 : ACE_Explosives_Place {};
class rhsusf_explosive_m112x4 : ACE_Explosives_Place {};

class B_supplyCrate_F;
class BNB_E_Resupply : B_supplyCrate_F {
	author = "Arend";
	vehicleClass="Ammo";
	scope = 0;
	transportMaxWeapons = 9002;
	transportMaxMagazines = 9002;
	transportMaxItems = 9002;
	maximumload = 9002;
};

class BNB_E_Resupply_Class_A : BNB_E_Resupply {
	displayName = "Resupply Crate - Class A";
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
			count = 10;
		};
		class _xx_ACE_atropine {
			name = "ACE_atropine";
			count = 10;
		};
		class _xx_ACE_bodyBag {
			name = "ACE_bodyBag";
			count = 5;
		};
	};
};

class BNB_E_Resupply_Class_B : BNB_E_Resupply {
	displayName = "Resupply Crate - Class B";
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
		class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
			count = 70;
		};
		class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag {
			magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
			count = 50;
		};
		class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag {
			magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
			count = 50;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m118_special_Mag {
			magazine = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
			count = 15;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m993_Mag {
			magazine = "rhsusf_20Rnd_762x51_SR25_m993_Mag";
			count = 5;
		};
		class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag {
			magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
			count = 50;
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
	displayName = "Resupply Crate - Class C";
	scope = 2;

	class TransportMagazines {
		class _xx_1Rnd_HE_Grenade_shell {
			magazine = "1Rnd_HE_Grenade_shell";
			count = 50;
		};
		class _xx_1Rnd_Smoke_Grenade_shell {
			magazine = "1Rnd_Smoke_Grenade_shell";
			count = 10;
		};
		class _xx_UK3CB_BAF_UGL_FlareWhite_F {
			magazine = "UK3CB_BAF_UGL_FlareWhite_F";
			count = 10;
		};
		class _xx_ACE_HuntIR_M203 {
			magazine = "ACE_HuntIR_M203";
			count = 10;
		};
		class _xx_rhs_mag_m7a3_cs {
			magazine = "rhs_mag_m7a3_cs";
			count = 20;
		};
	};

	class TransportWeapons {
		class _xx_rhs_weap_m72a7 {
			weapon = "rhs_weap_m72a7";
			count = 4;
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
