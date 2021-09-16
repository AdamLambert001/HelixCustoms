class CfgPatches 
{ 
    class HelixBase 
    {
        units[] = {"Hlx_Cus_Faction", "Helix_Digi", "Helix_M81", "Helix_Cus_Wallace", "Helix_Digi_Grey", "I_Helix_Soldier_Pvt"}; 
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
	class Hlx_Cus_Faction_IDEP 
    { 
		scope=2;
		scopeCurator = 2;
        displayName = "Helix Company"; 
        priority = 3; // Position in list. 
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };
};

class CfgEditorSubcategories
{
	class Hlx_Categ_Cus
	{
		displayName="Helix Custom Men";
	};
	class Hlx_Categ_Infantry
	{
		displayName="Helix Infantry";
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
	class Hlx_Categ_Uniforms
	{
		displayName="Helix Uniforms";
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
	class B_medic_F;
	class B_Soldier_TL_F;
	class B_Soldier_SL_F;
	class B_officer_F;
	class B_CTRG_Soldier_base_F;

	class Helix_Soldier_Pvt: B_soldier_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Soldier"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class Helix_Soldier_Pvt_Digi02: B_soldier_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Soldier"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi_02"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Hlx_Digi_02.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class Helix_Soldier_Med: B_medic_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Combat Medic"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class Helix_Soldier_TL: B_Soldier_TL_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] FireTeam Lead"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = 
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = 
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class Helix_Soldier_SL: B_Soldier_SL_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Squad Leader"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class Helix_Soldier_Ser: B_Soldier_SL_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Sergeant"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class Helix_Soldier_Off: B_officer_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Officer"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class B_Helix_Pilot: B_medic_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Kroner";
		displayName = "[Helix] Pilot"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "U_B_Helix_Pilot"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\VSM_Avi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "H_Avi_Stnrd"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "H_Avi_Stnrd"};
	};

	//--------------------------------------------------Independant----------------------------------------------//
	class I_Survivor_F;
	class I_soldier_F;
	class I_medic_F;
	class I_soldier_SL_F;
	class I_pilot_F;
	class I_officer_F;

	class I_Helix_Soldier_Pvt: I_soldier_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Soldier"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction_IDEP"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class I_Helix_Soldier_Pvt_Digi02: I_soldier_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Soldier"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction_IDEP"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi_02"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Hlx_Digi_02.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class I_Helix_Soldier_Med: I_medic_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Combat Medic"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction_IDEP"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class I_Helix_Soldier_TL: I_Soldier_SL_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] FireTeam Lead"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction_IDEP"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = 
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = 
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class I_Helix_Soldier_SL: I_Soldier_SL_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Squad Leader"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction_IDEP"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class I_Helix_Soldier_Ser: I_Soldier_SL_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Sergeant"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction_IDEP"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class I_Helix_Soldier_Off: I_officer_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Officer"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction_IDEP"; //what faction you want it displayed under
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "Helix_Full_Digi"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\Digi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class I_Helix_Pilot: I_pilot_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Kroner";
		displayName = "[Helix] Pilot"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction_IDEP"; //what faction you want it displayed under
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Infantry";
		uniformclass = "U_B_Helix_Pilot"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\VSM_Avi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "H_Avi_Stnrd"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "H_Avi_Stnrd"};
	};

//--------------------------------------------------Uniforms----------------------------------------------//
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
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
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class B_Helix_Winter: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Winter Camo"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "Helix_grey_M81_SS"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\WinterCamo.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class B_Helix_Digi_Tan: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Winter Camo"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "U_B_Helix_Digi_Tan"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\G3_DesertDigi.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class B_Helix_M81_Tan: B_soldier_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix] Winter Camo"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		uniformclass = "U_B_Helix_M81_Tan"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\G3_DesertM81.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	//-------------------------------------------------------------------------------------------Customs-------------------------------------------------------------------------------------------//
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

	class Helix_Cus_Wallace: B_CTRG_Soldier_base_F //selects what base to use
	{
		
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[Helix Custom] Wallace"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		//model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		editorSubcategory="Hlx_Categ_Cus";
		uniformclass = "Helix_Cus_Wallace_Uni"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"Camo","Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"Helix_Base\Data\G3\wallyfat.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"Helix_Vest_Wallace"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"Helix_Vest_Wallace"};
	};

	class Helix_Rib: B_Soldier_TL_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[HelixCustoms] Rob"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d"; 
		backpack = "";
		editorSubcategory="Hlx_Categ_Cus";
		uniformclass = "Helix_Rib_uni"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"camo1", "camo2" ,"Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\HLX_R_BU.paa", "\Helix_Base\Data\G3\Hlx_Digi_02.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

	class Helix_Aleksei: B_Soldier_TL_F //selects what base to use Hlx_Categ_Infantry
	{
		scope=2;
		scopeCurator = 2;
		author = "Wallace";
		displayName = "[HelixCustoms] Aleksei"; //the display name for the arsenal
		faction = "Hlx_Cus_Faction"; //what faction you want it displayed under
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		editorSubcategory="Hlx_Categ_Cus";
		uniformclass = "Helix_Aleksei_uni"; //links up to the class in CfgWeapons
        hiddenSelections[] = {"camo1" ,"Insignia"}; 
		hiddenSelectionsTextures[] = //the two PAAs you want to change
			{"\Helix_Base\Data\G3\AlekUni.paa"};
		linkedItems[] = //what items you wish the unit to spawn with when placed down
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
		respawnLinkedItems[] = //the items you wish for the unit to respawn with
			{"H_Vest_OP_Black", "Hlx_OPSCORE_BASE"};
	};

    //\A3\characters_f_beta\INDEP\ia_soldier_02.p3d
    class B_AssaultPack_Base;
	class tfw_ilbe_A_coy;
	class tfw_ilbe_gr;
    class B_kitbag_Base;
    class B_Carryall_Base;

	class Matt_R_Backpack_Cus: tfw_ilbe_A_coy 
	{
		
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix Custom] Matt Radio Backpack";
        picture = "";
        hiddenSelectionsTextures[] = {"Helix_Base\Data\Cus_M_ROB.paa"};
		tf_range = 60000;
	};
    
    class Custom_Backpack_Compact: tfw_ilbe_gr {
        
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Radio Backpack";
        picture = "";
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Helix_Base\Data\H_RB.paa"};
		tf_range = 60000;
    };

	class HS_RadioBackpack_Med: tfw_ilbe_gr {
        
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Medical Radio Backpack";
        picture = "";
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Helix_Base\Data\H_RB_M.paa"};
		maximumLoad = 280;
		tf_range = 60000;
    };

	class Helix_Backpack_Carryall_Winter: B_Carryall_Base {
        
        scope=2;
        scopeCurator = 2;
        displayName = "[Helix] Winter Carryall";
        picture = "";
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Helix_Base\Data\Carryall_Winter.paa"};
    };

	class Helix_Backpack_Compact_Winter1: B_AssaultPack_Base {
        
        scope=2;
        scopeCurator = 2;
        displayName = "[Helix] Winter Compact";
        picture = "";
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Helix_Base\Data\Compact_Winter.paa"};
    };

	class Helix_Backpack_Kitbag_Winter: B_kitbag_Base {
        
        scope=2;
        scopeCurator = 2;
        displayName = "[Helix] Winter Kitbag";
        picture = "";
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Helix_Base\Data\Kitbag_Winter.paa"};
    };

	class Helix_Backpack_Compact_Winter: tfw_ilbe_gr {
        
        scope=2;
        scopeCurator = 2;
        displayName = "[Helix] Winter Radio Backpack";
        picture = "";
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Helix_Base\Data\H_WRB.paa"};
		tf_range = 60000;
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
        picture = "\Helix_Base\UI\digiIcon.paa"; 
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_Digi"; 
            containerClass = "Supply80"; 
            mass = 35; 
        }; 
    };
	class Helix_Full_Digi_02: Uniform_Base
    { 
         
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Alt Full Digi"; 
        picture = "\Helix_Base\UI\digi2Icon.paa"; 
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_Soldier_Pvt_Digi02"; 
            containerClass = "Supply80"; 
            mass = 35; 
        }; 
    };
    class Helix_Full_M81: Uniform_Base 
    { 
         
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Full M81"; 
        picture = "\Helix_Base\UI\m81Icon.paa"; 
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_M81"; 
            containerClass = "Supply80"; 
            mass = 35; 
        }; 
    };

    class Helix_blk_Digi: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (Black)";
		author = "Wallace";
		picture = "\Helix_Base\UI\digiIcon.paa";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_Blk";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_blk_M81: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Black)";
		author = "Wallace";
		picture = "\Helix_Base\UI\m81Icon.paa";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_Blk";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_OD_Digi: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (OD Green)";
		author = "Wallace";
		picture = "\Helix_Base\UI\digiIcon.paa";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_OD";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_OD_M81: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (OD Green)";
		author = "Wallace";
		picture = "\Helix_Base\UI\m81Icon.paa";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_OD";
			containerClass = "Supply80";
			mass = 35;
		};
	};

        class Helix_grey_Digi: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (Grey)";
		author = "Wallace";
		picture = "\Helix_Base\UI\digiIcon.paa";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_Grey";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_grey_M81: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Grey)";
		author = "Wallace";
		picture = "\Helix_Base\UI\m81Icon.paa";

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_Grey";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_Full_Digi_SS: Uniform_Base
    { 
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Full Digi (Rolled)"; 
        picture = "\Helix_Base\UI\digiIcon.paa"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_Digi_SS"; 
            containerClass = "Supply80"; 
            mass = 35; 
        }; 
    };
    class Helix_Full_M81_SS: Uniform_Base 
    { 
         
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Full M81 (Rolled)"; 
        picture = "\Helix_Base\UI\m81Icon.paa"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_M81_SS"; 
            containerClass = "Supply80"; 
            mass = 35; 
        }; 
    };

    class Helix_blk_Digi_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (Black Rolled)";
		author = "Wallace";
		picture = "\Helix_Base\UI\digiIcon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_Blk_SS";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_blk_M81_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Black Rolled)";
		author = "Wallace";
		picture = "\Helix_Base\UI\m81Icon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_Blk_SS";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_OD_Digi_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (OD Green Rolled)";
		author = "Wallace";
		picture = "\Helix_Base\UI\digiIcon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_OD_SS";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_OD_M81_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (OD Green Rolled)";
		author = "Wallace";
		picture = "\Helix_Base\UI\m81Icon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_OD_SS";
			containerClass = "Supply80";
			mass = 35;
		};
	};

        class Helix_grey_Digi_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digital (Grey Rolled)";
		author = "Wallace";
		picture = "\Helix_Base\UI\digiIcon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Digi_Grey_SS";
			containerClass = "Supply80";
			mass = 35;
		};
	};

    class Helix_grey_M81_SS: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Grey Rolled)";
		author = "Wallace";
		picture = "\Helix_Base\UI\m81Icon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_M81_Grey_SS";
			containerClass = "Supply80";
			mass = 35;
		};
	}; //U_B_Helix_M81_Tan

	class U_B_Hlx_Winter: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Winter";
		author = "Bruon + Paddu";
		picture = "\Helix_Base\UI\WinM81Icon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "B_Helix_Winter";
			containerClass = "Supply80";
			mass = 35;
		};
	};

	class U_B_Helix_M81_Tan: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] M81 (Desert Tan)";
		author = "Wallace";
		picture = "\Helix_Base\UI\TanM81Icon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "B_Helix_M81_Tan";
			containerClass = "Supply80";
			mass = 35;
		};
	};

	class U_B_Helix_Digi_Tan: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix] Digi (Desert Tan)";
		author = "Wallace";
		picture = "\Helix_Base\UI\TanDigiIcon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "B_Helix_Digi_Tan";
			containerClass = "Supply80";
			mass = 35;
		};
	};


	class U_B_Helix_Pilot: Uniform_Base
    { 
         
		scope=2;
		scopeCurator = 2;
        displayName = "[Helix] Aviation Uniform";
		author = "Kroner";
        picture = "\Helix_Base\UI\digiIcon.paa"; 
        class ItemInfo : UniformItem { 
            uniformClass = "B_Helix_Pilot";
            containerClass = "Supply80"; 
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
		picture = "\Helix_Base\UI\digiIcon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Cus_Wallace";
			containerClass = "Supply80";
			mass = 35;
		};
	};

	class Helix_Rib_Uni: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix Customs] Rib's Uniform";
		author = "Rib";
		picture = "\Helix_Base\UI\digiIcon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Rib";
			containerClass = "Supply80";
			mass = 35;
		};
	};

	class Helix_Aleksei_Uni: Uniform_Base {
		
		scope=2;
		scopeCurator = 2;
		displayName = "[Helix Customs] Aleksei's Uniform";
		author = "Rib";
		picture = "\Helix_Base\UI\digiIcon.paa";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 

		class ItemInfo: UniformItem {
			uniformClass = "Helix_Aleksei";
			containerClass = "Supply80";
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


