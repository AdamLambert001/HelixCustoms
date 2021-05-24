class CfgPatches 
{ 
    class Helix_Veh
    {
        units[] = {"Hlx_Cus_Faction", "HelixBlackHawk", "HelixPandur2"}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F", "rhsusf_main", "rhsusf_c_weapons", "mas_cia_jsog", "rhsusf_c_troops", "rhs_infantry2"}; 
    }; 
}; 
/*
Custom Editor info
Hlx_Categ_Cus
Hlx_Categ_Cus_heli
Hlx_Categ_Cus_armoured
Hlx_Categ_Cus_air
*/
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
    };//"Helix_vehicles\Data\UH1Y_Ven.paa"

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
    }; //RHS_UH1Y_FFAR_d

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

};