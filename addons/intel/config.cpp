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

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class Intel_Item_Base: ItemCore
	{
		scope=1;
		access=3;
		displayName="-";
		detectRange=-1;
		simulation="ItemMineDetector";
		useAsBinocular=0;
		type=4096;
		picture="";
		descriptionShort="";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=1;
		};
	};
	class Intel_VideoCamera: Intel_Item_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="Video Camera";
		model = "\A3\structures_f\Items\Electronics\HandyCam_F.p3d";
		picture="\ODA_intel\cpccoy_ca.paa";
		descriptionShort="Video Camera";
		editorSubcategory="EdSubcat_Office";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Intel_FileDoc: Intel_Item_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="File of Documents";
		model = "\A3\structures_f\Items\Documents\File1_F.p3d";
		picture="\ODA_intel\cpccoy_ca.paa";
		descriptionShort="File full of documents";
		editorSubcategory="EdSubcat_Office";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Intel_FilePic: Intel_Item_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="File of Pictures";
		model = "\A3\structures_f\Items\Documents\FilePhotos_F.p3d";
		picture="\ODA_intel\cpccoy_ca.paa";
		descriptionShort="File full of pictures";
		editorSubcategory="EdSubcat_Office";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Intel_Map: Intel_Item_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="Sleeved Map";
		model = "\A3\structures_f\Items\Documents\Map_F.p3d";
		picture="\ODA_intel\cpccoy_ca.paa";
		descriptionShort="Sleeved map with marked locations";
		editorSubcategory="EdSubcat_Office";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Intel_Laptop: Intel_Item_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="Laptop";
		model = "\A3\structures_f\Items\Electronics\Laptop_F.p3d";
		picture="\ODA_intel\cpccoy_ca.paa";
		descriptionShort="Laptop";
		editorSubcategory="EdSubcat_Office";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Intel_MobileO: Intel_Item_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="Old Cellphone";
		model = "\A3\structures_f\Items\Electronics\MobilePhone_old_F.p3d";
		picture="\ODA_intel\cpccoy_ca.paa";
		descriptionShort="Old cellphone, like the one Sierra had";
		editorSubcategory="EdSubcat_Office";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Intel_MobileN: Intel_Item_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="New Cellphone";
		model = "\A3\structures_f\Items\Electronics\MobilePhone_smart_F.p3d";
		picture="\ODA_intel\cpccoy_ca.paa";
		descriptionShort="New cellphone, like the one Sierra has trouble using";
		editorSubcategory="EdSubcat_Office";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class Intel_Walkie: Intel_Item_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="Walkie Talkie";
		model = "\A3\structures_f\Items\Electronics\PortableLongRangeRadio_F.p3d";
		picture="\ODA_intel\cpccoy_ca.paa";
		descriptionShort="Radio Shack style walkie talkie";
		editorSubcategory="EdSubcat_Office";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
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
								condition = "(\"Intel_FileDoc\" in (items player))";

							};
							class Intel2 {
								displayName = 'Docs 2';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_2";
								condition = "(\"Intel_FileDoc\" in (items player))";

							};
							class Intel3 {
								displayName = 'Docs 3';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_3";
								condition = "(\"Intel_FileDoc\" in (items player))";

							};
							class Intel4 {
								displayName = 'Docs 4';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_4";
								condition = "(\"Intel_FileDoc\" in (items player))";

							};
							class Intel5 {
								displayName = 'Docs 5';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_5";
								condition = "(\"Intel_FileDoc\" in (items player))";

							};
							class Intel6 {
								displayName = 'Docs 6';
								statement = "createDialog \"Intel1\",_display = findDisplay 6699,( _display displayCtrl 7777 ) ctrlSetStructuredText parseText bnb_e_intel_6";
								condition = "(\"Intel_FileDoc\" in (items player))";
							};
                    };
                };
            };
        };
    };
};
