

class CfgPatches 
{
	class My_Mod_Config 
    { 
        units[] = {"HelixHelm_Mod";}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F"}; 
    }; 
};

class cfgWeapons 
{ 
    class ItemCore; 
    class UniformItem;
	class H_Watchcap_blk;
	class H_Beret_02;
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
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
	class Hlx_OPSCORE_BASEMedic: H_HelmetB
    {
        displayName = "[Helix] Medical Ops";
        picture = "";
        model = "\VSM_Helmets\models\VSM_ops";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\opshm1.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
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
	class Hlx_Beanie: H_HelmetB
    {
        displayName = "[Helix] Punk's Beanie";
        picture = "";
        model = "\A3\Characters_F\Civil\headgear_beaniehat01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {""};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            armor = "0";
            passThrough = 0.65;
        };
    };
	class H_Beret_Officers: H_Beret_02 {
		author = "Wallace";
		_generalMacro = "H_Beret_Officers";
		displayName = "[Helix] Officers Beret";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_EPC\BLUFOR\Data\headgear_beret02_colonel_co.paa"};
	};

    //----------------------------Customs----------------------------//
    class Hlx_OPSCORE_Bruon: H_HelmetB
    {
        displayName = "[Helix Customs] Bruon Ops";
        picture = "";
        model = "\VSM_Helmets\models\VSM_ops";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\opsh_bruon.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
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