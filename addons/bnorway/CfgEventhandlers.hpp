///////////////////////////
// Add Extra Spare Parts //
///////////////////////////
// Note: ACE already sticks 1 of the appropriate part in for us, these will add
// 		 on top of that.
#define ADD_PARTS(number,part) init = "[_this select 0, number, part] call ace_repair_fnc_addSpareParts;";
#define ADD_MULTIPLE_PARTS(number_1,part_1,number_2,part_2) init = "[_this select 0, number_1, part_1] call ace_repair_fnc_addSpareParts;[_this select 0, number_2, part_2] call ace_repair_fnc_addSpareParts;";

class Extended_InitPost_EventHandlers {
	class B_NorwayArmy_Leopard { ADD_PARTS(1,'ACE_Track') };
	class B_NorwayArmy_CV90 { ADD_PARTS(1,'ACE_Track') };
	class B_NorwayArmy_M113 { ADD_PARTS(1,'ACE_Track') };
	class B_NorwayArmy_M113_M2 { ADD_PARTS(1,'ACE_Track') };
	class B_NorwayArmy_M113_M2_Shield { ADD_PARTS(1,'ACE_Track') };
	class B_NorwayArmy_M113_Medical { ADD_PARTS(1,'ACE_Track') };
	class B_NorwayArmy_Scania_Utility { ADD_MULTIPLE_PARTS(1,'ACE_Wheel',2,'ACE_Track') };
};
