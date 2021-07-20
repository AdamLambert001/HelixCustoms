class CfgPatches 
{ 
    class Helix_Veh
    {
        units[] = {"HelixPandur2", "HelixUH1Y_Unarmed", "HelixUH1Y_MG", "HelixUH1Y_CAS", "HelixLilBirb_CAS", "HelixLilBirb_Transport", "HelixBlackHawk", "O_mas_chi_MRAP_02_F_2"}; 
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

    class B_Helix_Hunter: B_MRAP_01_F 
    {
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] Hunter";
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"#(ai,64,64,1)Fresnel(1.3,7)", "#(ai,64,64,1)Fresnel(1.3,7)"};
    };

    class O_Helix_Hunter: O_MRAP_02_F 
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
    };//I_Helix_Soldier_Pvt Hlx_Cus_Faction_IDEP

    class I_HelixPandur2: I_APC_Wheeled_03_cannon_F
    {
        side = 2;
        scope=2;
		scopeCurator = 2;
        vehicleClass = "Armoured";
        crew = "I_Helix_Soldier_Pvt";
        faction = "Hlx_Cus_Faction_IDEP";
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
    
    class HelixBlackHawk: RHS_UH60M
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "[Helix] UH-60";
        hiddenSelections[] = {""}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {""};
    };

    class I_HelixUH1Y_Unarmed: RHS_UH1Y_UNARMED_d
    {
        side = 2;
        scope=2;
		scopeCurator = 2;
        crew = "I_Helix_Soldier_Pvt";
        faction = "Hlx_Cus_Faction_IDEP";
        displayName = "[Helix] UH-1Y (Unarmed)";
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\UH1Y_Ven.paa"};
    };

    class I_HelixUH1Y_MG: RHS_UH1Y_d
    {
        side = 2;
        scope=2;
		scopeCurator = 2;
        crew = "I_Helix_Soldier_Pvt";
        faction = "Hlx_Cus_Faction_IDEP";
        displayName = "[Helix] UH-1Y (MG)";
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\UH1Y_Ven.paa"};
    };

    class I_HelixUH1Y_CAS: RHS_UH1Y_FFAR_d
    {
        side = 2;
        scope=2;
		scopeCurator = 2;
        crew = "I_Helix_Soldier_Pvt";
        faction = "Hlx_Cus_Faction_IDEP";
        displayName = "[Helix] UH-1Y (CAS)";
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\UH1Y_Ven.paa"};
    };

    class I_HelixLilBirb_CAS: RHS_MELB_AH6M
    {
        side = 2;
        scope=2;
		scopeCurator = 2;
        crew = "I_Helix_Soldier_Pvt";
        faction = "Hlx_Cus_Faction_IDEP";
        displayName = "[Helix] AH-6M (CAS)";
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\LittleB_01_BB.paa"};
    };

    class I_HelixLilBirb_Transport: RHS_MELB_MH6M
    {
        side = 2;
        scope=2;
		scopeCurator = 2;
        crew = "I_Helix_Soldier_Pvt";
        faction = "Hlx_Cus_Faction_IDEP";
        displayName = "[Helix] MH-6M (Transport)";
        hiddenSelections[] = {"camo1"}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {"Helix_vehicles\Data\LittleB_Helix.paa"};
    };

};