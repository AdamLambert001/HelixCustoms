class CfgPatches 
{ 
    class Helix_FaceMasks 
    { 
        units[] = {"Helix_Company";}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F", "mas_cia_jsog"}; 
    }; 
};
class CfgGlasses
{
class G_Diving;
class G_mas_cia_wrap_T;

    class H_C_FM_Wallo: G_mas_cia_wrap_T {
		author = "Wallace";
		_generalMacro = "H_Beret_Officers";
		displayName = "[Helix Customs] Wallace Facemask";
		picture = "";
        hiddenSelectionsTextures[] = {"\Helix_Facemasks\data\wallyfm.paa"};
	};
};