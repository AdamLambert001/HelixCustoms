class CfgPatches 
{ 
    class Helix_Vest_Config 
    { 
        units[] = {"Hlx_Cus_Faction";}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F", "rhsusf_main", "rhsusf_c_weapons", "mas_cia_jsog", "rhsusf_c_troops", "rhs_infantry2"}; 
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
        scope=2; 
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
        scope=2; 
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
        scope=2; 
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
	class Helix_Vest_Base;
	class Helix_Vest_Breach_Base;
	class Helix_Vest_Gunner_Black;

	class H_Vest_OP_M81: Helix_Vest_Base {
		author = "Wallace";
		displayName = "[Helix] M81 Vest (Operator)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtM81.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
    };

	class H_Vest_OP_Black: Helix_Vest_Base {
		author = "Wallace";
		displayName = "[Helix] Black Vest (Operator)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtBlack.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
    };

	class Helix_Vest_Breach_M81: Helix_Vest_Breach_Base {
		author = "Wallace";
		displayName = "[Helix] M81 Vest (Breacher)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtM81.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
    };

	class Helix_Vest_Breach_Black: Helix_Vest_Breach_Base {
		author = "Wallace";
		displayName = "[Helix] Black Vest (Breacher)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtBlack.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
    };

	class Helix_Vest_Gunner_Digi: Helix_Vest_Gunner_Black {
		author = "Wallace";
		displayName = "[Helix] Digi Vest (Gunner)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_boxMag", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase"};
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "Helix_vests\Data\VSMLBT\boxmag.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtDigi.paa"}; 
    };

	class Helix_Vest_Gunner_M81: Helix_Vest_Gunner_Black {
		author = "Wallace";
		displayName = "[Helix] M81 Vest (Gunner)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_boxMag", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase"};
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "Helix_vests\Data\VSMLBT\boxmag.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtM81.paa"}; 
    };
	//************************************************************************************************************************************************************************************************
    //*****            Customs              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	class Helix_Vest_Breach_Wallace: Helix_Vest_Breach_Base {
		author = "Wallace";
		displayName = "[Helix Customs] Wallace's (Breacher)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\wallylbt.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
    };
	
	class H_Vest_OP_Bruon: Helix_Vest_Base {
		author = "Wallace";
		displayName = "[Helix Customs] Bruon's Vest (Operator)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\Gear_bruon.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\lbtM81.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
    };

	class H_Vest_OP_Yeet: Helix_Vest_Base {
		author = "Wallace";
		displayName = "[Helix Customs] Yeet's Vest (Operator)";
		picture = "";
        hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch"}; 
        hiddenSelectionsTextures[] = {"Helix_vests\Data\VSMLBT\ChestRigblk.paa", "Helix_vests\Data\VSMLBT\BattleBeltBlk.paa", "vsm_vests\lbt6094\textures\vsm_dropholster.paa", "vsm_vests\spectergear_rav\data\serpa.paa", "Helix_vests\Data\VSMLBT\YeetGear.paa", "Helix_vests\Data\VSMLBT\radio_pouch.paa", "Helix_vests\Data\VSMLBT\YeetLbt.paa", "Helix_vests\Data\VSMLBT\Pouches.paa", "Helix_vests\Data\VSMLBT\Buttpouchblk.paa"}; 
    };

    //************************************************************************************************************************************************************************************************
    //*****            Headgear              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    };

	class Hlx_OPSCORE_BASE: H_HelmetB
    {
        displayName = "[Helix] Ops";
        picture = "";
        model = "\VSM_Helmets\models\VSM_ops";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\opsh1.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\VSM_Helmets\models\VSM_ops";
            modelSides[] = {3,1};
            hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
            armor = "20";
            passThrough = 0.65;
			ace_hearing_lowerVolume = 0.10;
        	ace_hearing_protection = 0.80;
        };
    };
}; 


