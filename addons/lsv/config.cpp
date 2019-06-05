
class CfgPatches
{
	class A3_Soft_F_Exp_LSV_02
	{
		addonRootClass="A3_Soft_F_Exp";
		requiredAddons[]=
		{
			"A3_Soft_F_Exp","a3cn_vehicles_main"
		};
		requiredVersion=0.1;
		units[]=
		{
			"A3CN_LSV_01_BLACK","A3CN_LSV_02_ADAX","A3CN_LSV_02_ATAK","A3CN_LSV_02_CASCAVEL","A3CN_LSV_02_EVEREST","A3CN_LSV_02_KAPPA","A3CN_LSV_02_KRAKEN","A3CN_LSV_02_MYTRA","A3CN_LSV_02_TAIPAN","A3CN_LSV_02_VIBORA"
			
		};
		weapons[]={};
	};
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
