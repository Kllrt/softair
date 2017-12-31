#include "cfgPatches.hpp"

class CfgMods
{
	class Mod_Base;
	class SoftAir : Mod_Base
	{
		author    = "Kllrt";
		picture   = "softair\addons\softair_main\data\softair_logo_ca.paa";
		logo      = "softair\addons\softair_main\data\softair_logo_small_ca.paa";
		logoOver  = "softair\addons\softair_main\data\softair_logo_small_ca.paa";
		logoSmall = "softair\addons\softair_main\data\softair_logo_small_ca.paa";

		hideName     = 1;
		hidePicture  = 0;
		tooltip      = "SoftAir";
		tooltipOwned = "SoftAir";
		name         = "SoftAir - Airsoft mod";
		overview     = "Play with Airsoft guns, just like in real life!";
		action       = "https://github.com/Kllrt/softair";
		dir          = "softair";
		dlcColor[]   = { 0, 0, 0, 1 };
		//fieldManualTopicAndHint[] = {};
	};
};

class CfgMissions
{
	class MPMissions
	{
		class MP_TVT_RealSoftAir
		{
			briefingName="RealSoftAir";
			directory="A3\missions_f\mpscenarios\MP_COOP_m01.Stratis";
		};
	};
};