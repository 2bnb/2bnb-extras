/* ----------------------------------------------------------------------------
Config: Satcom

Description:
	Registers the ILBE Satcom to be compatible with ACE Items.

Author:
	Ford
---------------------------------------------------------------------------- */
class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class tfw_rf3080Item: ACE_ItemCore {
		class ItemInfo: CBA_MiscItem_ItemInfo{};
	};
};
