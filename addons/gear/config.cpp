class CfgPatches {
	class bnb_e_gear {
		name = "2BNB Extras - Gear";
		units[] = {};
		weapons[] = {};
		author[] = {
			"D. Ford",
			"Arend"
		};
	};
};



 class cfgWeapons
//////////////////////////////////////////////////////////////////////////////////////////////////
{
   class Uniform_Base;
   class UniformItem;
   class ItemInfo;
   class ItemCore;
   class VestItem;
	class HeadgearItem;


   class U_I_CombatUniform;

   class Adidas_Uniform: U_I_CombatUniform //Edited
   {
	scope = 2;
	displayName = "Adidas Uniform";
    author = "Ford";
    picture = "\gear\data\adidass.paa";


       class ItemInfo : UniformItem {
           uniformModel = "-";
           uniformClass = "Irish_Peacekeeper"; //Edited
           containerClass = "Supply70";
           mass = 20;
       };
   };

	class Adidas_Vest: ItemCore
    {
        author = "Ford";
        scope = 2;
		displayName = "Adidas Light Vest";
        allowedSlots[] = {901};         // This means the vest can be put into a backpack.
        picture = "\gear\data\adidass.paa";
        model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\gear\data\adidasV.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
            hiddenSelections[] = {"camo"};
            containerClass = Supply220;
            mass = 60;

           class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
					armor		= 8; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor		= 24;
					passThrough	= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 24;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor		= 24;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};
			};
        };
    };

	class Adidas_Berret: ItemCore
	{
		author = "Ford";
        scope = 2;
		displayName = "Adidas Berret";
		picture = "\gear\data\adidass.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\gear\data\adidasB.paa" };
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};


		class Adidas_Helmet: ItemCore
	{
		author = "Ford";
        scope = 2;
		displayName = "Adidas Helmet";
		picture = "\gear\data\adidass.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\gay.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class Adidas_BerretX: Adidas_Berret 
	{
		author = "Ford";
        scope = 2;
		displayName = "Adidas BerretX";
		picture = "\gear\data\adidass.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\gear\data\adidasB.paa" };
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo:HitpointsProtectionInfo
			{
				class Head:Head
				{
				};
			};
		};
	};
	
	
	
	

	
	
	
	
	/*
	class CUP_arifle_AK101;
	class Adidas_AK:CUP_arifle_AK101
	{
		author = "Ford";
        scope = 2;
		displayName = "Adidas AK 101";

		magazines[] = {"CUP_30Rnd_556x45_AK","CUP_30Rnd_TE1_Red_Tracer_556x45_AK","CUP_30Rnd_TE1_Green_Tracer_556x45_AK","CUP_30Rnd_TE1_Yellow_Tracer_556x45_AK","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag"};
		magazineWell[] = {"CBA_556x45_AK"};
		magazineReloadSwitchPhase = 0;
		magazineReloadTime = 0;
		modelOptics = "-";
	};
	*/

};

//////////////////////////////////////////////////////////////////////////////////////////////////
class CfgVehicles
{
   class I_Soldier_base_F;
   class I_soldier_F;
//////////////////////////////////////////////////////////////

   class Irish_Peacekeeper : I_soldier_F
   {
	scope = 1;
	displayName = "Adidas Warrior";
       author = "Ford";
       nakedUniform = "U_BasicBody";
	uniformClass = "Adidas_Uniform";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\gear\data\adidas.paa"};

       identityTypes[] = {"Head_NATO", "G_NATO_default"};
       side = 1;

       backpack = "B_Parachute";
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","FirstAidKit"};
	respawnLinkedItems[] = {"G_Combat","ItemMap","ItemCompass","ItemWatch","ItemRadio","FirstAidKit"};
       Weapons[] = {"Throw","Put"}; // only add rifle & / pistol classname, leave throw and put they are used for explosives and grenades
       respawnWeapons[] = {"Throw","Put"};
       Magazines[] = {};
       respawnMagazines[] = {};
   };
};
