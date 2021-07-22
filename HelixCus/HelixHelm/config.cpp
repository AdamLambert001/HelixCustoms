

class CfgPatches 
{
	class My_Mod_Config 
    { 
        units[] = {"HelixHelm_Mod";}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F", "rhsusf_main", "rhsusf_c_weapons", "mas_cia_jsog", "rhsusf_c_troops", "rhs_infantry2"}; 
    }; 
};

class cfgWeapons 
{ 
    class ItemCore; 
    class UniformItem;
	class H_Watchcap_blk;
	class H_Beret_02;
    class rhsusf_hgu56p_visor_tan;
    class Hlx_OPSCORE_BASE;
    class H_MilCap_gry;
    class rhs_altyn;
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
    
	class H_Beret_Officers: H_Beret_02 {
		author = "Wallace";
		_generalMacro = "H_Beret_Officers";
		displayName = "[Helix] Officers Beret";
		picture = "\Helix_Base\UI\beret.paa";
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\beret_officer.paa"};
	};//rhsusf_hgu56p_visor_tan

    class H_Vib_MilCap: H_MilCap_gry {
		author = "Wallace";
		_generalMacro = "H_Vib_MilCap";
		displayName = "[Helix Customs] Vibro's Military Cap";
		picture = "";
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\Vib_Cap.paa"};
	};

    class H_Avi_Stnrd: rhsusf_hgu56p_visor_tan {
		author = "Wallace";
		_generalMacro = "H_Avi_Stnrd";
		displayName = "[Helix] Aviation HGU56";
		picture = "\Helix_Base\UI\avi.paa";
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\HGU_Avi.paa"};
	};

    class H_Medical_Ops: Hlx_OPSCORE_BASE {
		author = "Wallace";
		_generalMacro = "H_Medical_Ops";
		displayName = "[Helix] Ops (Medical)";
		picture = "\Helix_Base\UI\mhelm.paa";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\opshm1.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
	};

    class H_Ops_Winter_Blue: Hlx_OPSCORE_BASE {
		author = "Wallace";
		displayName = "[Helix] Winter Ops";
		picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\OpsWinter_Blue.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
    };

    class H_Ops_Winter_Red: Hlx_OPSCORE_BASE {
		author = "Wallace";
		displayName = "[Helix] Winter Medical Ops";
		picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\OpsWinter_Red.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
    };

    //----------------------------Customs----------------------------//
    class H_Ops_Bruon: Hlx_OPSCORE_BASE {
		author = "Wallace";
		displayName = "[Helix Customs] Bruon's Ops";
		picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\opsh_bruon.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
    };

    class H_Ops_Paddu: Hlx_OPSCORE_BASE {
		author = "Wallace";
		displayName = "[Helix Customs] Paddu's Ops";
		picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\OpsPad.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
    };

    class Hlx_Wallace_Airframe: H_HelmetB
    {
        displayName = "[Helix Customs] Wallace Airframe";
        picture = "\Helix_Base\UI\helm.paa";
        model = "\mas_cia_jsog\fast\mas_airframe_b.p3d";
        hiddenSelections[] = {"camo", "camo2"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\fast_cb.paa", "\mas_cia_jsog\fast\data\ops_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\mas_cia_jsog\fast\mas_airframe_b.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo", "camo2"};
            armor = "40";
            passThrough = 0.65;
			ace_hearing_lowerVolume = 0.10;
        	ace_hearing_protection = 0.80;
        };
    };

    class Srg_Airframe : Hlx_Wallace_Airframe 
    {
        author = "Wallace";
		displayName = "[Helix] SRG Airframe";
        picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"camo", "camo2"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\srg.paa", "\mas_cia_jsog\fast\data\ops_co.paa"};
    };

    class H_Aleksei_Altyn : rhs_altyn 
    {
        author = "Wallace";
		displayName = "[Helix Customs] Aleksei Altyn";
        picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\alekAltyn.paa"};
    };

    class H_C_Avi_Kroner: rhsusf_hgu56p_visor_tan {
		author = "Wallace";
		displayName = "[Helix Customs] Kronenberg HGU56";
		picture = "\Helix_Base\UI\avi.paa";
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\HGU_Kro.paa"};
	};

    class H_C_Avi_Marcos: rhsusf_hgu56p_visor_tan {
		author = "Kroner";
		displayName = "[Helix Customs] Marcos HGU56";
		picture = "\Helix_Base\UI\avi.paa";
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\HGU_Marcos.paa"};
	};
};