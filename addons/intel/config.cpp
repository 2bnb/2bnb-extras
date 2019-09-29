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
	class 2bnb_files2: 2bnb_files1
	{
		displayName="Docs 2";
	};
	class 2bnb_files3: 2bnb_files1
	{
		displayName="Docs 3";
	};
	class 2bnb_files4: 2bnb_files1
	{
		displayName="Docs 4";
	};
	class 2bnb_files5: 2bnb_files1
	{
		displayName="Docs 5";
	};
	class 2bnb_files6: 2bnb_files1
	{
		displayName="Docs 6";
	};


};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class adv_intel {
                    displayName = "Read Intel";
                    condition = TRUE;
                    statement = "";
                    showDisabled = 0;
                    priority = 3;
                    // icon = "z\ace\addons\trenches\UI\w_entrchtool_ca.paa";
                    exceptions[] = {"notOnMap"};
						class D_intel {
							displayName = "Documents";
							condition = TRUE;
							statement = "";
							showDisabled = 0;
							priority = 3;
							// icon = "z\ace\addons\trenches\UI\w_entrchtool_ca.paa";
							exceptions[] = {"notOnMap"};

							class Intel1 {
								displayName = 'Docs 1';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_1";
								condition = "(\"2bnb_files1\" in (magazines  player))";

							};
							class Intel2 {
								displayName = 'Docs 2';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_2";
								condition = "(\"2bnb_files2\" in (magazines  player))";

							};
							class Intel3 {
								displayName = 'Docs 3';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_3";
								condition = "(\"2bnb_files3\" in (magazines  player))";

							};
							class Intel4 {
								displayName = 'Docs 4';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_4";
								condition = "(\"2bnb_files4\" in (magazines  player))";

							};
							class Intel5 {
								displayName = 'Docs 5';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_5";
								condition = "(\"2bnb_files5\" in (magazines  player))";

							};
							class Intel6 {
								displayName = 'Docs 6';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_6";
								condition = "(\"2bnb_files6\" in (magazines  player))";
							};
                    };
                };
            };
        };
    };
};
