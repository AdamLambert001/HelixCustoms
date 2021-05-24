class CfgPatches
{
	class ws_blockii
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"Helix_Base"
		};
	};
};
class cfgweapons
{
	class rhs_weap_m4a1_blockII;
	class rhs_weap_m4a1_blockII_KAC;
	class rhs_weap_m4a1_carryhandle_mstock;
	class rhs_weap_mk18;
	class rhs_weap_mk18_KAC;
    class hlc_rifle_RU556;
    class rhsusf_weap_glock17g4;
	class rhs_weap_ak104_zenitco01_b33;
    class hlc_pistol_p226US;
    class hlc_rifle_auga2;
	class hlc_rifle_ak12;
	#define Grip_Macro(numb,name) \
    handAnim[] = {"OFP2_ManSkeleton",\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_##name##.rtm};\
    class LinkedItems\
    {\
        class LinkedItemsUnder\
        {\
            item = rhsusf_acc_grip##numb##;\
            slot = "UnderBarrelSlot";\
        };\
    };
/////////////////////////M4A1 Block II/////////////////////////
///ALPHA-14.5, painted lower, tan magpul ctr
	class ws_m4a1_blockII_a : rhs_weap_m4a1_blockII
	{
		scope=2;
		picture="";
		displayName="[Helix] M4A1 SOPMOD Alpha";
		author="Wallace + RHS";
		hiddenSelectionsTextures[] =
		{
			"custom_weapons\Data\m4a1_actual_a_co.paa",
			"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_t_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa",
		};
		rhs_grip1_change = "ws_m4a1_blockII_grip_a";
		rhs_grip2_change = "ws_m4a1_blockII_grip2_a";
		rhs_grip3_change = "ws_m4a1_blockII_grip_a";

		baseWeapon = "ws_m4a1_blockII_a";
	};
	class ws_m4a1_blockII_grip_a : ws_m4a1_blockII_a
	{
		Grip_Macro(1,m16a4)
	};
	class ws_m4a1_blockII_grip2_a : ws_m4a1_blockII_grip_a
	{
		Grip_Macro(2,m4a1_afg)
	};
///Weaponend
    class helixAr15 : hlc_rifle_RU556
	{
		scope=2;
		picture="";
		displayName="[Helix] AR15";
		author="Wallace + NIArms";
        hiddenSelections[] = {"Camo"}; 
		hiddenSelectionsTextures[] =
		{
			"custom_weapons\Data\m4a1_actual_a_co.paa"
		};

		baseWeapon = "helixAr15";
	};
    //AUG
    class helixAuga2 : hlc_rifle_auga2
	{
		scope=2;
		picture="";
		displayName="[Helix] Aug";
		author="Wallace + NIArms";
        hiddenSelections[] = {"Camo"}; 
		hiddenSelectionsTextures[] =
		{
			"custom_weapons\Data\aug.paa"
		};

		baseWeapon = "helixAuga2";
	};
    //AUG
    class helixAuga22 : hlc_rifle_auga2
	{
		scope=2;
		picture="";
		displayName="[Helix] Aug";
		author="Wallace + NIArms";
        hiddenSelections[] = {"Camo"}; 
		hiddenSelectionsTextures[] =
		{
			"custom_weapons\Data\aug2.paa"
		};

		baseWeapon = "helixAuga22";
	};
	// ak104 Rob
	class ak104Rob : hlc_rifle_ak12
	{
		scope=2;
		picture="";
		displayName="[Helix Custom] Rib AK12";
		author="Wallace + NIArms";
        hiddenSelections[] = {"Main","Foregrip", "Bracket"};
		hiddenSelectionsTextures[] =
		{
			"custom_weapons\Data\ak104.paa",
			"custom_weapons\Data\ak104.paa",
			"custom_weapons\Data\ak104.paa"
		};

		baseWeapon = "ak104Rob";
	};
	class ak104Rob2 : hlc_rifle_ak12
	{
		scope=2;
		picture="";
		displayName="[Helix Custom] Rib AK12 2";
		author="Wallace + NIArms";
        hiddenSelections[] = {"Camo0"};
		hiddenSelectionsTextures[] =
		{
			"custom_weapons\Data\ak104.paa"
		};

		baseWeapon = "ak104Rob2";
	};
    //Glock 17 Helix
    class devhelixG17 : rhsusf_weap_glock17g4
	{
		scope=2;
		picture="\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_p_glock17g4_ca.paa";
		displayName="[Helix] Glock 17";
		author="Wallace + RHS";
		hiddenSelectionsTextures[] =
		{
			"custom_weapons\Data\Glock17\devGlock.paa"
		};

		baseWeapon = "devhelixG17";
	};
    //Glock 17 Helix
    class devhelixp226 : hlc_pistol_p226US
	{
		scope=2;
		picture="\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_p_glock17g4_ca.paa";
		displayName="[Helix] P226";
		author="Wallace + RHS";
		hiddenSelectionsTextures[] =
		{
			"custom_weapons\Data\Glock17\devGlock.paa"
		};

		baseWeapon = "devhelixp226";
	};
};