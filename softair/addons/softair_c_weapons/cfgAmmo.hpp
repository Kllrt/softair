class CfgAmmo
{
	class BulletBase;
	class B_556x45_Ball: BulletBase
	{
		class HitEffects;
	};
	class softair_B_6mm_BB : B_556x45_Ball
	{
		hit                = 1;
		typicalSpeed       = 130;
		airFriction        = -0.000772;
		caliber            = 0.9;
		deflecting         = 90;
		deflectionSlowDown = 0.1;
		visibleFire        = 3;
		audibleFire        = 7;
		model              = "\softair\addons\softair_weapons\ammo\6mm_bb";
		tracerStartTime    = 0;
		tracerScale        = 3;
		tracerEndTime      = 20;
		cartridge          = "";
		class HitEffects: HitEffects
		{
			hitVirtual    = "ImpactPlastic";
			hitMetalPlate = "ImpactPlastic";
			hitMetal      = "ImpactPlastic";
			hitMan        = "ImpactPlastic";
			hitBuilding   = "ImpactPlastic";
		};
	};
};