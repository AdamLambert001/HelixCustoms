class CfgPatches 
{ 
    class Helix_Veh
    { 
        units[] = {"Helix_Company";}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F"}; 
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

    class Helixm1a2: RHS_M2A2
    {
        side = 1;
        scope = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "Helix Bradely";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
    };

    class HelixBlackHawk: RHS_UH60M
    {
        side = 1;
        scope = 2;
        crew = "Helix_Digi_Grey";
        faction = "Hlx_Cus_Faction";
        displayName = "Helix UH-60";
        hiddenSelections[] = {""}; //Camo1,Camo2,Camo3 refer to the texture selection.
        hiddenSelectionsTextures[] = {""};
    };

};