

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
    class H_mas_cia_helmet_ops_gog_b;
    class H_Booniehat_khk;
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

    class H_Ops_Paddu: Hlx_OPSCORE_BASE {
		author = "Wallace";
		displayName = "[Helix Customs] Paddu's Ops";
		picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\OpsPad.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
    };

    class H_Ops_Matt: Hlx_OPSCORE_BASE {
		author = "Wallace";
		displayName = "[Helix Customs] Matt's Ops";
		picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\MattOps.paa", "vsm_helmets\textures\vsm_helmet_pouch.paa", "vsm_helmets\textures\secco2.paa", "vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
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

    class Helix_Helmet_Rib: H_mas_cia_helmet_ops_gog_b {
		_generalMacro = "Helix_Helmet_Rib";
		displayName = "[Helix Customs] Opscore goggles (Rib)";
		picture = "\Helix_Base\UI\mhelm.paa";
		hiddenSelectionsTextures[] = 
		{
			"\HelixHelm\Data\Ribs_Helm_Cover.paa",
			"", //velcro gay
			"\HelixHelm\Data\Ribs_Helm_Acc.paa",
			"\HelixHelm\Data\Ribs_Helm_Gog.paa"
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

    class H_Behnki_Altyn : rhs_altyn 
    {
        author = "Wallace";
		displayName = "[Helix Customs] Behnki Altyn";
        picture = "\Helix_Base\UI\helm.paa";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\BehnkAltyn.paa"};
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

    class H_Boon_Caro: H_Booniehat_khk {
		author = "Wallace";
		displayName = "[Helix Customs] De Caro's Boonie";
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\CaroBoon.paa"};
	};

    class H_HelmetHBK_headset_base_F;
    class H_HelmetHBK_headset_F;
    class HeadgearItem;

    class H_Adv_Irish: H_HelmetHBK_headset_F {
		author = "Wallace";
		displayName = "[Helix Customs] Irish's Helmet";
		picture = "\Helix_Base\UI\helm.paa";
        hiddenSelectionsTextures[] = {"\HelixHelm\Data\IrishLDF.paa"};
    };
};