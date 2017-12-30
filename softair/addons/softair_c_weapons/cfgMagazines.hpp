class CfgMagazines
{
	class CA_Magazine;
	class softair_mag_130Rnd_6mm_Base : CA_Magazine
	{
		Author_Macro
		scope            = 0;
		initSpeed        = 130;
		mass             = 9.35;
		ammo             = "softair_B_6mm_BB";
		count            = 130;
		displayNameShort = "";
		tracersEvery     = 1;
		lastRoundsTracer = 0;
	};
	class softair_mag_130Rnd_6mm_STANAG : softair_mag_130Rnd_6mm_Base
	{
		Author_Macro
		scope            = 2;
		mass             = 9.35;
		displayName      = "$STR_SA_CFGMAGAZINES_130RND_6MM_STANAG_MAG";
		descriptionShort = "$STR_SA_CFGMAGAZINES_130RND_6MM_STANAG_MAG_DESC";
		picture          = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		model            = "\A3\weapons_F\ammo\mag_univ.p3d";
	};
	class softair_mag_130Rnd_6mm_AK : softair_mag_130Rnd_6mm_Base
	{
		Author_Macro
		scope            = 2;
		mass             = 9.35;
		displayName      = "$STR_SA_CFGMAGAZINES_130RND_6MM_AK_MAG";
		descriptionShort = "$STR_SA_CFGMAGAZINES_130RND_6MM_AK_MAG_DESC";
		picture          = "\A3\weapons_f_exp\data\ui\icon_30rnd_545x39_mag_f_ca.paa";
		model            = "\A3\weapons_F\ammo\mag_univ.p3d";
	};		
};