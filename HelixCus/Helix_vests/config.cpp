class CfgPatches 
{ 
    class Helix_Vest_Config 
    { 
        units[] = {}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F"}; 
    }; 
}; 
class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class ItemCore; 
    class UniformItem;
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 

    class Custom_Camo: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Custom Camo"; 
        picture = ""; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_vests"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class Custom_Camo_SS: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Custom Camo (Rolled Sleeves)"; 
        picture = ""; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_vests_SS"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class Custom_Camo_TShirt: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Custom Camo (T-Shirt)"; 
        picture = ""; 
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Helix_vests_TShirt"; 
            containerClass = "Supply30"; 
            mass = 35; 
        }; 
    }; 

    //************************************************************************************************************************************************************************************************
    //*****             Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class VestItem;
    class VSM_LBT6094_breacher_OCP;
    class Vest_Camo_Base: ItemCore 
    { 
        class ItemInfo;
    }; 

    class Helix_Vest_OP_Digi: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix] Digi Vest (Operator)"; 
        picture = ""; 
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
    class Helix_Vest_OP_M81: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix] M81 Vest (Operator)"; 
        picture = ""; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtM81.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
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
    class Helix_Vest_OP_Black: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix] Black Vest (Operator)"; 
        picture = ""; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtBlack.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
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
    class Helix_Vest_Breach_Digi: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix] Digi Vest (Breacher)"; 
        picture = ""; 
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
    class Helix_Vest_Breach_M81: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix] M81 Vest (Breacher)"; 
        picture = ""; 
        model = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtM81.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
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
    class Helix_Vest_Breach_Black: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix] Black Vest (Breacher)"; 
        picture = ""; 
        model = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtBlack.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
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
        scope = 2; 
        displayName = "[Helix] Black Vest (Gunner)"; 
        picture = ""; 
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
    class Helix_Vest_Gunner_Digi: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix] Digi Vest (Gunner)"; 
        picture = ""; 
        model = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_boxMag", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase"};
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "Helix_vests\Data\VSMLBT\boxmag.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtDigi.paa"}; 
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
    class Helix_Vest_Gunner_M81: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix] M81 Vest (Gunner)"; 
        picture = ""; 
        model = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_boxMag", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase"};
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "Helix_vests\Data\VSMLBT\boxmag.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtM81.paa"}; 
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
    //*****            Customs              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	class Helix_Vest_Wallace: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix Customs] Wallace's Vest"; 
        picture = ""; 
        model = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\wallylbt.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d";
            hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"};  
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
	class Helix_Vest_OP_Bruon: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "[Helix Customs] Bruon Vest (Operator)"; 
        picture = ""; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear_bruon.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtM81.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
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

    //************************************************************************************************************************************************************************************************
    //*****            Headgear              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    }; 
     
    
}; 


