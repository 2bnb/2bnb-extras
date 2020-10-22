class CfgWeapons {
	class ItemCore;
	class H_HelmetB : ItemCore {
		class ItemInfo;
	};
	class BNB_EX_Surpat_Gear_Helmet1 : H_HelmetB {
		displayName = "SURPAT ECH";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\data\surpat_helmet.paa"};

		class ItemInfo : ItemInfo {
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName="HitHead";
					armor=30;
					passThrough=0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Helmet2 : H_HelmetB {
		displayName = "SURPAT ECH Lite";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\data\surpat_helmet.paa"};

		class ItemInfo : ItemInfo {
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName="HitHead";
					armor=30;
					passThrough=0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Helmet3 : H_HelmetB {
		displayName = "SURPAT Canvas Helmet";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "\A3\characters_F_Beta\indep\headgear_helmet_canvas";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\data\surpat_canvas_helmet.paa"};

		class ItemInfo : ItemInfo {
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "\A3\characters_F_Beta\indep\headgear_helmet_canvas";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName="HitHead";
					armor=30;
					passThrough=0.1;
				};
			};
		};
	};
	class BNB_EX_Surpat_Gear_Boonie : H_HelmetB {
		displayName = "SURPAT Boonie";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\data\surpat_boonie.paa"};

		class ItemInfo : ItemInfo {
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
	class BNB_EX_Surpat_Gear_Cap : H_HelmetB {
		displayName = "SURPAT Cap";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"x\bnb_ex\surpat_gear\data\surpat_cap.paa"};

		class ItemInfo : ItemInfo {
			mass = 10;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
};
