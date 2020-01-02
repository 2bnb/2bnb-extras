class CfgPatches
{
	class bnb_e_intel
	{
		name = "2BNB Extras - Intel";
		units[]={};
		weapons[]=
		{
			"Intel_Item_Base",
			"Intel_VideoCamera",
			"Intel_FileDoc",
			"Intel_FilePic",
			"Intel_Map",
			"Intel_Laptop",
			"Intel_MobileO",
			"Intel_MobileN",
			"Intel_Walkie"
		};
		requiredVersion=0.1;
		version=1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Weapons_F",
			"cba_settings"
		};
		author[]=
		{
			"D. Ford"
		};
	};
};

class CfgFunctions {
	class bnb_e_intel {
		class functions {
			file = "\x\bnb_e\intel\functions";
			class addIntel {};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class bnb_e_intel_preInit {
		init = "call compile preprocessFileLineNumbers '\x\bnb_e\intel\XEH_preInit.sqf'";
	};
};

#include "Intel1.hpp"
class cfgMagazines
{
	class CA_Magazine;
	class 2bnb_suitcase: CA_Magazine
	{
		mass=25;
		scope=2;
		author="Ford";
		displayName="Suitcase";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model="\A3\structures_f\items\luggage\suitcase_f";
	};
	class 2bnb_Laptop: CA_Magazine
	{
		mass=20;
		scope=2;
		author="Ford";
		displayName="2bnb_Laptop";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model="\A3\structures_f\Items\electronics\laptop_unfolded_F";
	};
	class 2bnb_files1: CA_Magazine
	{
		mass=1;
		scope=2;
		author="Ford";
		displayName="Docs 1";
		picture = "\x\bnb_e\gear\data\adidass.paa";
		model="\A3\structures_f\items\documents\File1_f";
	};
};