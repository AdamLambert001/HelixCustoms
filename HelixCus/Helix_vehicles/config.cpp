class CfgPatches 
{ 
    class Helix_Veh
    {
        units[] = {"B_Helix_Hunter", "B_Helix_Ifrit_02", "HelixPandur2", "HelixUH1Y_Unarmed", "HelixUH1Y_MG", "HelixUH1Y_CAS", "HelixLilBirb_CAS", "HelixLilBirb_Transport", "HelixBlackHawk", "O_mas_chi_MRAP_02_F_2"}; 
        weapons[] = {}; 
        requiredversion = 1.740000; 
        requiredAddons[] = {"A3_Characters_F", "rhsusf_main", "rhsusf_c_weapons", "mas_cia_jsog", "rhsusf_c_troops", "rhs_infantry2"}; 
    }; 
}; 

class CfgVehicles 
{
    class LandVehicle;
    class RHS_M2A2;
    class B_Heli_Light_01_F;
    class RHS_UH60M;
    class I_APC_Wheeled_03_cannon_F;
    class RHS_UH1Y_UNARMED_d;
    class RHS_UH1Y_d;
    class RHS_UH1Y_FFAR_d;
    class RHS_MELB_AH6M;
    class RHS_MELB_MH6M;
    class O_LSV_02_unarmed_F;
    class O_MRAP_02_F;
    class LSV_02_unarmed_base_F;
    class LSV_01_unarmed_base_F;
    class B_LSV_01_unarmed_F;
    class B_MRAP_01_F;
    class vtx_MH60S_Pylons;
    class vtx_HH60;
    class vtx_MH60S_GAU21L;
    class rhsusf_CH53E_USMC;

    class B_Helix_Hunter: B_MRAP_01_F 
    {
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] Hunter";
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"#(ai,64,64,1)Fresnel(1.3,7)", "#(ai,64,64,1)Fresnel(1.3,7)"};
    };

    class B_Helix_Ifrit_02: O_MRAP_02_F 
    {
        side = 1;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] Ifrit (02)";
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\darf2.paa", "Helix_vehicles\Data\darb1.paa"};
        class EventHandlers 
        {
            init = "(_this select 0) setvariable [""BIS_enableRandomization"", false];"
        };
    };
    
    class HelixPandur2_Blk: I_APC_Wheeled_03_cannon_F
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        vehicleClass = "Armoured";
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] Pandur II (Black)";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[] = {"#(ai,64,64,1)Fresnel(1.3,7)", "#(ai,64,64,1)Fresnel(1.3,7)", "#(ai,64,64,1)Fresnel(1.3,7)", "#(ai,64,64,1)Fresnel(1.3,7)"};
    };

    class HelixPandur2: I_APC_Wheeled_03_cannon_F
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        vehicleClass = "Armoured";
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] Pandur II";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\APC_01_P6.paa", "Helix_vehicles\Data\APC_02_P3.paa", "Helix_vehicles\Data\APC_RCWS_02.paa", "Helix_vehicles\Data\APC_Rails_02.paa"};
    };

    //-------------------------------------------------Helicopters-------------------------------------------------//
    class HelixUH1Y_Unarmed: RHS_UH1Y_UNARMED_d
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] UH-1Y (Unarmed)";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\UH1Y_Ven.paa"};
    };

    class HelixUH1Y_MG: RHS_UH1Y_d
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] UH-1Y (MG)";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\UH1Y_Ven.paa"};
    };

    class HelixUH1Y_CAS: RHS_UH1Y_FFAR_d
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] UH-1Y (CAS)";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\UH1Y_Ven.paa"};
    };

    class HelixLilBirb_CAS: RHS_MELB_AH6M
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] AH-6M (CAS)";
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\LittleB_01_BB.paa"};
    };

    class HelixLilBirb_Transport: RHS_MELB_MH6M
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] MH-6M (Transport)";
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\LittleB_Helix.paa"};
    };

    class HS_HH60_Knghthawk_Pylons: vtx_MH60S_Pylons
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] Knighthawk (Pylons)";
        hiddenSelectionsTextures[] = 
        {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
        "Helix_vehicles\Data\Kh_Main_1.paa", 
        "Helix_vehicles\Data\Kh_Misc_1.paa", 
        "Helix_vehicles\Data\Kh_Tail_1.paa"
        };
    };

    class HS_HH60_Pavehawk: vtx_HH60
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] Pavehawk";
        hiddenSelectionsTextures[] = 
        {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
        "Helix_vehicles\Data\Kh_Main_1.paa", 
        "Helix_vehicles\Data\Kh_Misc_1.paa", 
        "Helix_vehicles\Data\Kh_Tail_1.paa", 
        "z\vtx\addons\UH60\Data\Exterior\Markings\Markings_ca.paa", "", "", "", "", 
        "z\vtx\addons\UH60\Data\FuelProbe\Fuel_probe_co.paa"
        };
    };

    class HS_HH60_Knghthawk_GAU21: vtx_MH60S_GAU21L
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] Knighthawk (GAU-21)";
        hiddenSelectionsTextures[] = 
        {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
        "Helix_vehicles\Data\Kh_Main_1.paa", 
        "Helix_vehicles\Data\Kh_Misc_1.paa", 
        "Helix_vehicles\Data\Kh_Tail_1.paa"
        };
    };


    class HS_CH53: rhsusf_CH53E_USMC
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] CH53E (Transport)";
        hiddenSelections[] = {"camo", "camo1", "n1", "n2"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = 
        {
        "\Helix_vehicles\Data\HS_CH53", 
        "rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa", 
        "rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa", 
        "rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa"
        };
    };
};