﻿//RU
/*class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;*/

/*class Rifle_Base_F;
class rhs_weap_ak74m_Base_F: Rifle_Base_F
{
	class Single: Mode_SemiAuto{};
	class FullAuto: Mode_FullAuto{};
};*/
class rhs_weap_ak74m_Base_F;
class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
{
	class Single;
	class FullAuto;
};
class softair_weap_ak74m: rhs_weap_ak74m
{
	displayName      = "$STR_SA_WEAP_AK74M";
	descriptionShort = "$STR_SA_WEAP_RIFLE_DESC";
	baseWeapon       = "softair_weap_ak74m";
	dlc = "SoftAir";

	magazines[] = 
	{
		"softair_mag_130Rnd_6mm_AK"
	};

	recoil = "softair_recoil_ak74m";
	class Single: Single
	{
		reloadTime = 0.05;
		dispersion = 0.001;
	};
	class FullAuto: FullAuto
	{
		reloadTime = 0.05;
		dispersion = 0.001;
	};
};

//USA
class rhs_weap_m4a1;
class softair_weap_m4a1: rhs_weap_m4a1
{
	displayName      = "$STR_SA_WEAP_M4A1";
	descriptionShort = "$STR_SA_WEAP_RIFLE_DESC";
	baseWeapon       = "softair_weap_m4a1";
	dlc = "SoftAir";

	magazines[] = 
	{
		"softair_mag_130Rnd_6mm_STANAG"
	};
};