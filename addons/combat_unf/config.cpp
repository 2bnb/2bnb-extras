#define _ARMA_

class CfgPatches
{
	class LTF_CU_Config
	{
		units[] = {"_Mod"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicles
{
	class B_Soldier_F;
	class Surpat_Uniform: B_Soldier_F
	{
		author = "LTF";
		_generalMacro = "B_soldier_F";
		scope = 2;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat.paa"};
		hiddenSelectionsMaterials[] = {"\combat_unf\data\combat_unf.rvmat"};
	};
	class Surpat_Uniform_R: B_Soldier_F
	{
		author = "LTF";
		_generalMacro = "B_soldier_F";
		scope = 2;
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat.paa"};
		hiddenSelectionsMaterials[] = {"\combat_unf\data\combat_unf.rvmat"};
	};
	class Surpat_Uniform_TG: B_Soldier_F
	{
		author = "LTF";
		_generalMacro = "B_soldier_F";
		scope = 2;
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[] = {"Camo","Camo2"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat.paa","combat_unf\tex\tshirt_green.paa"};
		hiddenSelectionsMaterials[] = {"\combat_unf\data\combat_unf.rvmat"};
	};
	class Surpat_Uniform_TB: B_Soldier_F
	{
		author = "LTF";
		_generalMacro = "B_soldier_F";
		scope = 2;
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[] = {"Camo","Camo2"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat.paa","combat_unf\tex\tshirt_black.paa"};
		hiddenSelectionsMaterials[] = {"\combat_unf\data\combat_unf.rvmat"};
	};
	class Surpat_Uniform_Ghillie: B_Soldier_F
	{
		author = "LTF";
		_generalMacro = "B_soldier_F";
		scope = 2;
		model = "\A3\characters_F\BLUFOR\b_sniper.p3d";
		hiddenSelections[] = {"Camo","Camo3"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat.paa","A3\characters_F\Common\data\ghillie_1_ca.paa"};
		hiddenSelectionsMaterials[] = {"\combat_unf\data\combat_unf.rvmat"};
	};
};
class cfgWeapons
{
	class H_Cap_tan;
	class H_Booniehat_khk;
	class H_Booniehat_khk_hs;
	class H_HelmetIA;
	class Default;
	class ItemCore: Default{};
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class Cap_hs_Base: ItemCore
	{
		class ItemInfo;
	};
	class Surpat_Camo_Unf: Uniform_Base
	{
		scope = 2;
		displayName = "[CU]Surpat";
		author = "LTF";
		picture = "\combat_unf\ui\surpat_ui.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Surpat_Uniform";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class Surpat_Camo_Unf_R: Uniform_Base
	{
		scope = 2;
		displayName = "[CU]Surpat(RS)";
		author = "LTF";
		picture = "\combat_unf\ui\surpat_ui.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Surpat_Uniform_R";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class Surpat_Camo_Unf_TG: Uniform_Base
	{
		scope = 2;
		displayName = "[CU]Surpat(T)green";
		author = "LTF";
		picture = "\combat_unf\ui\surpat_ui.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Surpat_Uniform_TG";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class Surpat_Camo_Unf_TB: Uniform_Base
	{
		scope = 2;
		displayName = "[CU]Surpat(T)black";
		author = "LTF";
		picture = "\combat_unf\ui\surpat_ui.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Surpat_Uniform_TB";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class Surpat_Camo_Unf_Ghillie: Uniform_Base
	{
		scope = 2;
		displayName = "[CU]Surpat Ghillie";
		author = "LTF";
		picture = "\combat_unf\ui\surpat_ui.paa";
		model = "\A3\characters_F\BLUFOR\b_sniper.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Surpat_Uniform_Ghillie";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class Surpat_Boonie: H_Booniehat_khk
	{
		displayName = "[CU]Boonie (Surpat)";
		author = "LTF";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat_boonie.paa"};
		picture = "\combat_unf\ui\surpat_ui.paa";
	};
	class Surpat_Boonie_HS: H_Booniehat_khk_hs
	{
		displayName = "[CU]Boonie HS(Surpat)";
		author = "LTF";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat_boonie.paa"};
		picture = "\combat_unf\ui\surpat_ui.paa";
	};
	class Surpat_Cap: H_Cap_tan
	{
		displayName = "[CU]Cap (Surpat)";
		author = "LTF";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat_cap.paa"};
		picture = "\combat_unf\ui\surpat_ui.paa";
	};
	class Surpat_Helmet: H_HelmetIA
	{
		displayName = "[CU]Helmet (Surpat)";
		author = "LTF";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"combat_unf\tex\surpat_helmet.paa"};
		picture = "\combat_unf\ui\surpat_ui.paa";
	};
};
