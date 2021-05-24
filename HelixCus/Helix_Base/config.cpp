class CfgPatches 
{ 
    class HelixBase 
    {
        units[] = {"Hlx_Cus_Faction", "Helix_Digi", "Helix_M81", "Helix_Cus_Wallace", "Helix_Digi_Grey"}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F", "rhsusf_main", "rhsusf_c_weapons", "mas_cia_jsog", "rhsusf_c_troops", "rhs_infantry2"}; 
    }; 
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class Hlx_Cus_Faction 
    { 
		scope=2;
		scopeCurator = 2;
        displayName = "Helix Company"; 
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class CfgEditorSubcategories
{
	class Hlx_Categ_Cus
	{
		displayName="Helix Custom Men";
	};
	class Hlx_Categ_Cus_heli
	{
		displayName="Helix Custom Helicopter";
	};
	class Hlx_Categ_Cus_armoured
	{
		displayName="Helix Custom Armoured";
	};
	class Hlx_Categ_Cus_air
	{
		displayName="Helix Custom Planes";
	};
};

class CfgUnitInsignia
{
    class Custom_Insignia
    {
        displayName = "My Custom Patch"; // Name displayed in Arsenal
        author = "Wallace"; // Author displayed in Arsenal
        texture = "\Helix_Base\UI\custom_patch_co.paa"; // Image path
        textureVehicle = ""; // Does nothing currently, reserved for future use
    };
}; 

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = ""; 
}; 

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class B_Soldier_F; 

    class Helix_Digi: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Full Digi"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_M81: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Full M81"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		uniformclass = "Helix_Full_M81"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\M81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_Digi_Blk: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Digital (Black)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		uniformclass = "Helix_blk_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\blackDigi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_M81_Blk: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] M81 (Black)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		uniformclass = "Helix_blk_M81"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\blackM81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_Digi_OD: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Digital (OD Green)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		uniformclass = "Helix_OD_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\ODDigi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_M81_OD: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] M81 (OD Green)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		uniformclass = "Helix_OD_M81"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\ODM81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};

    class Helix_Digi_Grey: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Digital (Grey)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		uniformclass = "Helix_grey_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\GreyDigi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};

    class Helix_M81_Grey: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] M81 (Grey)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		uniformclass = "Helix_grey_M81"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\GreyM81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};

    class Helix_Digi_SS: B_soldier_F //selects what base to use
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Full Digi"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_Full_Digi_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_M81_SS: B_soldier_F //selects what base to use
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Full M81"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_Full_M81_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\M81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_Digi_Blk_SS: B_soldier_F //selects what base to use
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Digital (Black)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_blk_Digi_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\blackDigi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_M81_Blk_SS: B_soldier_F //selects what base to use
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] M81 (Black)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_blk_M81_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\blackM81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_Digi_OD_SS: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Digital (OD Green)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_OD_Digi_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\ODDigi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};
    class Helix_M81_OD_SS: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] M81 (OD Green)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_OD_M81_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\ODM81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};

    class Helix_Digi_Grey_SS: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Digital (Grey)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_grey_Digi_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\GreyDigi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};

    class Helix_M81_Grey_SS: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] M81 (Grey)"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_grey_M81_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\GreyM81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_OP_Black"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_OP_Black"};
	};

	//-------------------------------------------------------------------------------------------Customs-------------------------------------------------------------------------------------------//
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

	class Helix_Cus_Wallace: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix Custom] Wallace"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		editorSubcategory = "Hlx_Categ_Cus"; //the sub faction you want it under
		uniformclass = "Helix_Cus_Wallace_Uni"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\wallyfat.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_Wallace"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_Wallace"};
	};

    //\A3\characters_f_beta\INDEP\ia_soldier_02.p3d
    class B_AssaultPack_Base;
	class tfw_ilbe_A_coy;
	class tfw_ilbe_gr;

	class Matt_R_Backpack_Cus: tfw_ilbe_A_coy 
	{
		
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix Custom] Matt Radio Backpack";
        picture = "";
        hiddenSelectionsTextures[] = {"Helix_Base\Data\Cus_M_ROB.paa"};
	};
    
    class Custom_Backpack_Compact: tfw_ilbe_gr {
        
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Radio Backpack";
        picture = "";
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Helix_Base\Data\H_RB.paa"};
    };
};


class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class ItemCore; 
    class UniformItem;
    class U_B_CombatUniform_mcam_worn;
    class Uniform_Base: ItemCore
    { 
        class ItemInfo; 
    }; 

    class Helix_Full_Digi: Uniform_Base
    { 
         
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Full Digi"; 
        picture = ""; 
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_Digi"; 
            containerClass = "Supply30"; 
            mass = 35; 
        }; 
    };
    class Helix_Full_M81: Uniform_Base 
    { 
         
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Full M81"; 
        picture = ""; 
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_M81"; 
            containerClass = "Supply30"; 
            mass = 35; 
        }; 
    };

    class Helix_blk_Digi: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (Black)";
		author = "Wallace";
		picture = "";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_Blk";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_blk_M81: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Black)";
		author = "Wallace";
		picture = "";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_Blk";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_OD_Digi: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (OD Green)";
		author = "Wallace";
		picture = "";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_OD";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_OD_M81: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (OD Green)";
		author = "Wallace";
		picture = "";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_OD";
			containerClass = "Supply30";
			mass = 35;
		};
	};

        class Helix_grey_Digi: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (Grey)";
		author = "Wallace";
		picture = "";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_Grey";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_grey_M81: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Grey)";
		author = "Wallace";
		picture = "";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_Grey";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_Full_Digi_SS: Uniform_Base
    { 
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Full Digi (Rolled)"; 
        picture = ""; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_Digi_SS"; 
            containerClass = "Supply30"; 
            mass = 35; 
        }; 
    };
    class Helix_Full_M81_SS: Uniform_Base 
    { 
         
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Full M81 (Rolled)"; 
        picture = ""; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_M81_SS"; 
            containerClass = "Supply30"; 
            mass = 35; 
        }; 
    };

    class Helix_blk_Digi_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (Black Rolled)";
		author = "Wallace";
		picture = "";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_Blk_SS";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_blk_M81_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Black Rolled)";
		author = "Wallace";
		picture = "";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_Blk_SS";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_OD_Digi_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (OD Green Rolled)";
		author = "Wallace";
		picture = "";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_OD_SS";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_OD_M81_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (OD Green Rolled)";
		author = "Wallace";
		picture = "";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_OD_SS";
			containerClass = "Supply30";
			mass = 35;
		};
	};

        class Helix_grey_Digi_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (Grey Rolled)";
		author = "Wallace";
		picture = "";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_Grey_SS";
			containerClass = "Supply30";
			mass = 35;
		};
	};

    class Helix_grey_M81_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Grey Rolled)";
		author = "Wallace";
		picture = "";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_Grey_SS";
			containerClass = "Supply30";
			mass = 35;
		};
	};

	//-------------------------------------------------------------------------------------------Customs-------------------------------------------------------------------------------------------//
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

	class Helix_Cus_Wallace_Uni: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix Customs] Wallace Uniform";
		author = "Wallace";
		picture = "";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Cus_Wallace";
			containerClass = "Supply30";
			mass = 35;
		};
	};


    //\A3\characters_f_beta\INDEP\ia_soldier_02.p3d

    //************************************************************************************************************************************************************************************************
    //*****             Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class VestItem;
    class Vest_Camo_Base: ItemCore 
    { 
        class ItemInfo;
    };

    class Helix_Vest_Base: Vest_Camo_Base 
    { 
        scope=2; 
        displayName = "[Helix] Digi Vest (Operator)"; 
        picture = "\Helix_Base\UI\vest.paa"; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtDigi.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; 
            containerClass = "Supply200"; 
            mass = 80;
			modelsides[] = {6};
            class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 25;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.2;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.2;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20;
					passThrough = 0.2;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			}; 
            hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        }; 
    };

	class Helix_Vest_Breach_Base: Vest_Camo_Base 
    { 
        scope=2; 
        displayName = "[Helix] Digi Vest (Breacher)"; 
        picture = "\Helix_Base\UI\vest.paa"; 
        model = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtDigi.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; 
            containerClass = "Supply200"; 
            mass = 80;
			modelsides[] = {6};
            class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 25;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.2;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.2;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20;
					passThrough = 0.2;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			}; 
            hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        }; 
    };

	class Helix_Vest_Gunner_Black: Vest_Camo_Base 
    { 
        scope=2; 
        displayName = "[Helix] Black Vest (Gunner)"; 
        picture = "\Helix_Base\UI\vest.paa"; 
        model = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_boxMag", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase"};
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "Helix_vests\Data\VSMLBT\boxmag.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtBlack.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
            hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_boxMag", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase"}; 
            containerClass = "Supply200"; 
            mass = 80;
			modelsides[] = {6};
            class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.2;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 25;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.2;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.2;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20;
					passThrough = 0.2;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			}; 
        }; 
    };

    //************************************************************************************************************************************************************************************************
    //*****            Headgear              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    };
}; 


