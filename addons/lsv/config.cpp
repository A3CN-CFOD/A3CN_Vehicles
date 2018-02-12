
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
			"A3CN_LSV_01_BLACK"
			
		};
		weapons[]={};
	};
};

class CfgFactionClasses
{
  class A3CN_Vehicles 
  {
    displayName = "A3CN - Vehicles";
    priority = 1;
    side = 1;
    //icon = "\aegis_units\ui\aegis_icon.paa";
  };
};

class CfgVehicles
{
	class Car_F;
	class O_T_LSV_02_armed_black_F;
	class A3CN_LSV_01_BLACK: O_T_LSV_02_armed_black_F
	{
		author="Toaster";
		displayName="LSV Víbora";
		_generalMacro="A3CN_LSV_01_BLACK";
		scope=2;
		scopeCurator=2;
		scopeGarage = 2;
		transportMaxBackpacks = 25;

		// Boost
		acceleration=10;
		enginePower=600;
	 	maxOmega=720;
		peakTorque=800;
	 	maxSpeed=325; 
	 	fuelCapacity=80; 
	 	idleRpm=900;
		redRpm=6900; 
		clutchStrength=55;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.2309999,
				"N",
				0,
				"D1",
				4.4619999,
				"D2",
				3.5699999,
				"D3",
				2.5710001,
				"D4",
				1.97,
				"D5",
				1.601,
				"D6",
				0.89999998,
				"D7",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				4.1110001
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.0099999998;
		};
		torqueCurve[]=
		{
			{0,0},
			{0.2,0.64999998},
			{0.30000001,0.80000001},
			{0.40000001,0.94999999},
			{0.60000002,1},
			{0.69999999,0.94999999},
			{0.89999998,0.89999998},
			{1,0.5}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.98000002,0.98000002,0.98000002,0.98000002,0.97000003,0.94999999,0.94999999};


		// Equipos
		class TransportMagazines 
		{ 
			class _xx_Titan_AT 
			{ 
				magazine="Titan_AT"; 
				count=2; 
			}; 
			
		}; 
		class TransportItems 
		{ 
			class _xx_FirstAidKit 
			{ 
				name="FirstAidKit"; 
				count=10; 
			};
			class _xx_Medikit
			{
				name="Medikit";
				count="5";
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count="1";
			};
			class _xx_B_UavTerminal
			{
				name="B_UavTerminal";
				count="2";
			};
			
			class _xx_DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count="2";
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				name="SatchelCharge_Remote_Mag";
				count="2";
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				name="SLAMDirectionalMine_Wire_Mag";
				count="2";
			};
			class _xx_ATMine_Range_Mag
			{
				name="ATMine_Range_Mag";
				count="2";
			};
		}; 
		class TransportWeapons 
		{
			class _xx_launch_O_Titan_short_F 
			{
				weapon="launch_O_Titan_short_F"; 
				count=1; 
			}; 
		}; 
		class TransportBackpacks
		{
			class _xx_B_UAV_01_backpack_F
			{
				backpack="B_UAV_01_backpack_F";
				count=1;
			};
		};




		side = 1;
		faction = "A3CN_Vehicles";
		crew="B_T_Soldier_F"; 
	 	typicalCargo[]= 
	 	{ 
	 		"B_T_Soldier_F" 
	 	};
		DLC="Expansion";
		textureList[]=
		{
			"Víbora",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_01_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};
	/* class LSV_02_base_F: Car_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	mapSize=6.0599999; */
	/* 	_generalMacro="LSV_02_base_F"; */
	/* 	scope=0; */
	/* 	scopeCurator=0; */
	/* 	displayName="$STR_A3_CfgVehicles_LSV_02_base_F0"; */
	/* 	model="\A3\Soft_F_Exp\LSV_02\LSV_02_F.p3d"; */
	/* 	DLC="Expansion"; */
	/* 	icon="\A3\Soft_F_Exp\LSV_02\Data\UI\map_LSV_02_base_CA.paa"; */
	/* 	picture="\A3\Soft_F_Exp\LSV_02\Data\UI\LSV_02_base_CA.paa"; */
	/* 	editorSubcategory="EdSubcat_Cars"; */
	/* 	class Library */
	/* 	{ */
	/* 		libTextDesc="$STR_A3_CfgVehicles_LSV_02_base_F_Library0"; */
	/* 	}; */
	/* 	accuracy=0.25; */
	/* 	cost=50000; */
	/* 	armor=75; */
	/* 	armorLights=0.02; */
	/* 	fuelExplosionPower=2; */
	/* 	maxFordingDepth=-0.1; */
	/* 	weapons[]= */
	/* 	{ */
	/* 		"SportCarHorn" */
	/* 	}; */
	/* 	enableManualFire=0; */
	/* 	maximumLoad=4000; */
	/* 	transportMaxBackpacks=0; */
	/* 	class TransportMagazines */
	/* 	{ */
	/* 		class _xx_30Rnd_65x39_caseless_green */
	/* 		{ */
	/* 			magazine="30Rnd_65x39_caseless_green"; */
	/* 			count=16; */
	/* 		}; */
	/* 		class _xx_150Rnd_762x54_Box */
	/* 		{ */
	/* 			magazine="150Rnd_762x54_Box"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_HandGrenade */
	/* 		{ */
	/* 			magazine="HandGrenade"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_SmokeShell */
	/* 		{ */
	/* 			magazine="SmokeShell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellRed */
	/* 		{ */
	/* 			magazine="SmokeShellRed"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellYellow */
	/* 		{ */
	/* 			magazine="SmokeShellYellow"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellOrange */
	/* 		{ */
	/* 			magazine="SmokeShellOrange"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_HE_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_HE_Grenade_shell"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_1Rnd_Smoke_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_Smoke_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeYellow_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeYellow_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeOrange_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeOrange_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeRed_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeRed_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_16Rnd_9x21_Mag */
	/* 		{ */
	/* 			magazine="16Rnd_9x21_Mag"; */
	/* 			count=12; */
	/* 		}; */
	/* 		class _xx_RPG32_F */
	/* 		{ */
	/* 			magazine="RPG32_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportItems */
	/* 	{ */
	/* 		class _xx_FirstAidKit */
	/* 		{ */
	/* 			name="FirstAidKit"; */
	/* 			count=10; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportWeapons */
	/* 	{ */
	/* 		class _xx_arifle_Katiba_F */
	/* 		{ */
	/* 			weapon="arifle_Katiba_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* 	showNVGCargo[]={1}; */
	/* 	soundAttenuationCargo[]={0}; */
	/* 	memoryPointTaskMarker="TaskMarker_1_pos"; */
	/* 	slingLoadCargoMemoryPoints[]= */
	/* 	{ */
	/* 		"SlingLoadCargo1", */
	/* 		"SlingLoadCargo2", */
	/* 		"SlingLoadCargo3", */
	/* 		"SlingLoadCargo4" */
	/* 	}; */
	/* 	hiddenSelections[]= */
	/* 	{ */
	/* 		"Camo1", */
	/* 		"Camo2", */
	/* 		"Camo3" */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" */
	/* 	}; */
	/* 	class HitPoints: HitPoints */
	/* 	{ */
	/* 		class HitLFWheel */
	/* 		{ */
	/* 			armor=0.375; */
	/* 			explosionShielding=4; */
	/* 			material=-1; */
	/* 			name="wheel_1_1_steering"; */
	/* 			passThrough=0; */
	/* 			visual=""; */
	/* 		}; */
	/* 		class HitLF2Wheel */
	/* 		{ */
	/* 			armor=0.375; */
	/* 			explosionShielding=4; */
	/* 			material=-1; */
	/* 			name="wheel_1_2_steering"; */
	/* 			passThrough=0; */
	/* 			visual=""; */
	/* 		}; */
	/* 		class HitRFWheel */
	/* 		{ */
	/* 			armor=0.375; */
	/* 			explosionShielding=4; */
	/* 			material=-1; */
	/* 			name="wheel_2_1_steering"; */
	/* 			passThrough=0; */
	/* 			visual=""; */
	/* 		}; */
	/* 		class HitRF2Wheel */
	/* 		{ */
	/* 			armor=0.375; */
	/* 			explosionShielding=4; */
	/* 			material=-1; */
	/* 			name="wheel_2_2_steering"; */
	/* 			passThrough=0; */
	/* 			visual=""; */
	/* 		}; */
	/* 		class HitFuel */
	/* 		{ */
	/* 			armor=0.25; */
	/* 			explosionShielding=1.5; */
	/* 			material=-1; */
	/* 			name="Fuel_hitpoint"; */
	/* 			passThrough=0.5; */
	/* 			visual=""; */
	/* 		}; */
	/* 		class HitHull */
	/* 		{ */
	/* 			armor=1.5; */
	/* 			explosionShielding=0.5; */
	/* 			material=-1; */
	/* 			minimalHit=0.1; */
	/* 			name="Fuel_hitpoint"; */
	/* 			passThrough=0; */
	/* 			visual=""; */
	/* 		}; */
	/* 		class HitEngine */
	/* 		{ */
	/* 			armor=0.80000001; */
	/* 			explosionShielding=0.5; */
	/* 			material=-1; */
	/* 			name="Engine_hitpoint"; */
	/* 			passThrough=0.5; */
	/* 			visual=""; */
	/* 		}; */
	/* 		class HitBody */
	/* 		{ */
	/* 			armor=0.5; */
	/* 			explosionShielding=1.5; */
	/* 			material=-1; */
	/* 			name="Body_hitpoint"; */
	/* 			passThrough=1; */
	/* 			visual="zbytek"; */
	/* 		}; */
	/* 	}; */
	/* 	precision=10; */
	/* 	brakeDistance=50; */
	/* 	turnCoef=3.5; */
	/* 	extCameraPosition[]={0,1.5,-7}; */
	/* 	class PlayerSteeringCoefficients */
	/* 	{ */
	/* 		turnIncreaseConst=0.69999999; */
	/* 		turnIncreaseLinear=2.5; */
	/* 		turnIncreaseTime=0; */
	/* 		turnDecreaseConst=8; */
	/* 		turnDecreaseLinear=0; */
	/* 		turnDecreaseTime=0; */
	/* 		maxTurnHundred=1; */
	/* 	}; */
	/* 	driverAction="driver_lsv_02"; */
	/* 	cargoAction[]= */
	/* 	{ */
	/* 		"passenger_low01" */
	/* 	}; */
	/* 	cargoIsCoDriver[]={1,0}; */
	/* 	getInAction="GetInLow"; */
	/* 	getOutAction="GetOutLow"; */
	/* 	cargoGetInAction[]= */
	/* 	{ */
	/* 		"GetInLow" */
	/* 	}; */
	/* 	cargoGetOutAction[]= */
	/* 	{ */
	/* 		"GetOutLow" */
	/* 	}; */
	/* 	driverCompartments="Compartment1"; */
	/* 	cargoCompartments[]= */
	/* 	{ */
	/* 		"Compartment1" */
	/* 	}; */
	/* 	driverLeftHandAnimName="drivewheel"; */
	/* 	driverRightHandAnimName="drivewheel"; */
	/* 	fireResistance=5; */
	/* 	wheelDestroyRadiusCoef=0.75; */
	/* 	thrustDelay=0.5; */
	/* 	brakeIdleSpeed=1.78; */
	/* 	maxSpeed=160; */
	/* 	fuelCapacity=55; */
	/* 	wheelCircumference=2.924; */
	/* 	antiRollbarForceCoef=2.0999999; */
	/* 	antiRollbarForceLimit=7; */
	/* 	antiRollbarSpeedMin=10; */
	/* 	antiRollbarSpeedMax=150; */
	/* 	idleRpm=400; */
	/* 	redRpm=5500; */
	/* 	class complexGearbox */
	/* 	{ */
	/* 		GearboxRatios[]= */
	/* 		{ */
	/* 			"R1", */
	/* 			-4, */
	/* 			"N", */
	/* 			0, */
	/* 			"D1", */
	/* 			"4.5*(0.62^0)", */
	/* 			"D2", */
	/* 			"4.5*(0.62^1)", */
	/* 			"D3", */
	/* 			"4.5*(0.62^2)", */
	/* 			"D4", */
	/* 			"4.5*(0.62^3)", */
	/* 			"D5", */
	/* 			"4.5*(0.62^4)", */
	/* 			"D6", */
	/* 			"4.5*(0.62^5)" */
	/* 		}; */
	/* 		TransmissionRatios[]= */
	/* 		{ */
	/* 			"High", */
	/* 			7 */
	/* 		}; */
	/* 		gearBoxMode="auto"; */
	/* 		moveOffGear=1; */
	/* 		driveString="D"; */
	/* 		neutralString="N"; */
	/* 		reverseString="R"; */
	/* 		gearUpMaxCoef=0.94999999; */
	/* 		gearDownMaxCoef=0.85000002; */
	/* 		gearUpMinCoef=0.64999998; */
	/* 		gearDownMinCoef=0.55000001; */
	/* 		transmissionDelay=2; */
	/* 	}; */
	/* 	simulation="carx"; */
	/* 	dampersBumpCoef=3; */
	/* 	differentialType="all_limited"; */
	/* 	frontRearSplit=0.69999999; */
	/* 	frontBias=1.5; */
	/* 	rearBias=1.8; */
	/* 	centreBias=1.5; */
	/* 	clutchStrength=20; */
	/* 	enginePower=350; */
	/* 	maxOmega=530; */
	/* 	peakTorque=920; */
	/* 	dampingRateFullThrottle=0.079999998; */
	/* 	dampingRateZeroThrottleClutchEngaged=0.5; */
	/* 	dampingRateZeroThrottleClutchDisengaged=0.34999999; */
	/* 	torqueCurve[]= */
	/* 	{ */
			
	/* 		{ */
	/* 			"(0/5500)", */
	/* 			"(0/920)" */
	/* 		}, */
			
	/* 		{ */
	/* 			"(500/5500)", */
	/* 			"(450/920)" */
	/* 		}, */
			
	/* 		{ */
	/* 			"(2000/5500)", */
	/* 			"(850/920)" */
	/* 		}, */
			
	/* 		{ */
	/* 			"(2500/5500)", */
	/* 			"(900/920)" */
	/* 		}, */
			
	/* 		{ */
	/* 			"(3000/5500)", */
	/* 			"(920/920)" */
	/* 		}, */
			
	/* 		{ */
	/* 			"(3500/5500)", */
	/* 			"(830/920)" */
	/* 		}, */
			
	/* 		{ */
	/* 			"(4000/5500)", */
	/* 			"(450/920)" */
	/* 		}, */
			
	/* 		{ */
	/* 			"(6000/5500)", */
	/* 			"(0/920)" */
	/* 		} */
	/* 	}; */
	/* 	changeGearMinEffectivity[]={1,0.15000001,1,1,1,1,1,1}; */
	/* 	switchTime=0.11; */
	/* 	latency=1.5; */
	/* 	class Wheels */
	/* 	{ */
	/* 		class LF */
	/* 		{ */
	/* 			side="left"; */
	/* 			suspTravelDirection[]={-0.125,-1,0}; */
	/* 			boneName="wheel_1_1_damper"; */
	/* 			steering=1; */
	/* 			center="wheel_1_1_axis"; */
	/* 			boundary="wheel_1_1_bound"; */
	/* 			width="0.32"; */
	/* 			mass=50; */
	/* 			MOI=6; */
	/* 			dampingRate=1; */
	/* 			dampingRateDamaged=5; */
	/* 			dampingRateInAir=0.80000001; */
	/* 			dampingRateDestroyed=5000; */
	/* 			maxBrakeTorque=4000; */
	/* 			maxHandBrakeTorque=0; */
	/* 			suspForceAppPointOffset="wheel_1_1_axis"; */
	/* 			tireForceAppPointOffset="wheel_1_1_axis"; */
	/* 			maxCompression=0.1; */
	/* 			maxDroop=0.050000001; */
	/* 			sprungMass=970; */
	/* 			springStrength=62400; */
	/* 			springDamperRate=6233; */
	/* 			longitudinalStiffnessPerUnitGravity=10000; */
	/* 			latStiffX=2.5; */
	/* 			latStiffY=18; */
	/* 			frictionVsSlipGraph[]= */
	/* 			{ */
	/* 				{0,1.75}, */
	/* 				{0.5,1.35}, */
	/* 				{1,1.2} */
	/* 			}; */
	/* 		}; */
	/* 		class LR: LF */
	/* 		{ */
	/* 			boneName="wheel_1_2_damper"; */
	/* 			steering=0; */
	/* 			center="wheel_1_2_axis"; */
	/* 			boundary="wheel_1_2_bound"; */
	/* 			suspForceAppPointOffset="wheel_1_2_axis"; */
	/* 			tireForceAppPointOffset="wheel_1_2_axis"; */
	/* 			maxHandBrakeTorque=8000; */
	/* 			frictionVsSlipGraph[]= */
	/* 			{ */
	/* 				{0,2}, */
	/* 				{0.5,1.53}, */
	/* 				{1,1.36} */
	/* 			}; */
	/* 		}; */
	/* 		class RF: LF */
	/* 		{ */
	/* 			side="right"; */
	/* 			suspTravelDirection[]={0.125,-1,0}; */
	/* 			boneName="wheel_2_1_damper"; */
	/* 			center="wheel_2_1_axis"; */
	/* 			boundary="wheel_2_1_bound"; */
	/* 			suspForceAppPointOffset="wheel_2_1_axis"; */
	/* 			tireForceAppPointOffset="wheel_2_1_axis"; */
	/* 		}; */
	/* 		class RR: RF */
	/* 		{ */
	/* 			boneName="wheel_2_2_damper"; */
	/* 			steering=0; */
	/* 			center="wheel_2_2_axis"; */
	/* 			boundary="wheel_2_2_bound"; */
	/* 			suspForceAppPointOffset="wheel_2_2_axis"; */
	/* 			tireForceAppPointOffset="wheel_2_2_axis"; */
	/* 			maxHandBrakeTorque=8000; */
	/* 			frictionVsSlipGraph[]= */
	/* 			{ */
	/* 				{0,2.3}, */
	/* 				{0.5,2.0999999}, */
	/* 				{1,2} */
	/* 			}; */
	/* 		}; */
	/* 	}; */
	/* 	transportSoldier=0; */
	/* 	cargoProxyIndexes[]={}; */
	/* 	getInProxyOrder[]={1,4,3,2,5}; */
	/* 	class CargoTurret; */
	/* 	class Turrets: Turrets */
	/* 	{ */
	/* 		class CargoTurret_01: CargoTurret */
	/* 		{ */
	/* 			gunnerAction="passenger_inside_7"; */
	/* 			gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1"; */
	/* 			memoryPointsGetInGunner="pos codriver"; */
	/* 			memoryPointsGetInGunnerDir="pos codriver dir"; */
	/* 			gunnerCompartments="Compartment1"; */
	/* 			proxyIndex=1; */
	/* 			isPersonTurret=1; */
	/* 			class dynamicViewLimits */
	/* 			{ */
	/* 			}; */
	/* 			class TurnIn */
	/* 			{ */
	/* 				limitsArrayTop[]= */
	/* 				{ */
	/* 					{-10.0308,-77.8106}, */
	/* 					{23.9652,-22.232}, */
	/* 					{7.6953001,-8.7068996} */
	/* 				}; */
	/* 				limitsArrayBottom[]= */
	/* 				{ */
	/* 					{-41.2052,-81.312798}, */
	/* 					{-26.763599,-14.0276} */
	/* 				}; */
	/* 			}; */
	/* 			class TurnOut: TurnIn */
	/* 			{ */
	/* 			}; */
	/* 		}; */
	/* 		class CargoTurret_02: CargoTurret_01 */
	/* 		{ */
	/* 			gunnerAction="passenger_inside_7"; */
	/* 			gunnerName="$STR_A3_TURRETS_CARGOTURRET_L2"; */
	/* 			memoryPointsGetInGunner="pos cargo LR"; */
	/* 			memoryPointsGetInGunnerDir="pos cargo LR dir"; */
	/* 			gunnerCompartments="Compartment1"; */
	/* 			proxyIndex=2; */
	/* 			class TurnIn */
	/* 			{ */
	/* 				limitsArrayTop[]= */
	/* 				{ */
	/* 					{21.6077,37.6922}, */
	/* 					{30.6283,94.8965} */
	/* 				}; */
	/* 				limitsArrayBottom[]= */
	/* 				{ */
	/* 					{-41.057499,37.428101}, */
	/* 					{-44.889,95} */
	/* 				}; */
	/* 			}; */
	/* 			class TurnOut: TurnIn */
	/* 			{ */
	/* 			}; */
	/* 		}; */
	/* 		class CargoTurret_03: CargoTurret_01 */
	/* 		{ */
	/* 			gunnerAction="passenger_inside_7"; */
	/* 			gunnerName="$STR_A3_TURRETS_CARGOTURRET_R2"; */
	/* 			memoryPointsGetInGunner="pos cargo RF"; */
	/* 			memoryPointsGetInGunnerDir="pos cargo RF dir"; */
	/* 			gunnerCompartments="Compartment1"; */
	/* 			proxyIndex=3; */
	/* 			class TurnIn */
	/* 			{ */
	/* 				limitsArrayTop[]= */
	/* 				{ */
	/* 					{32.719398,-95}, */
	/* 					{25.963499,-12.7207} */
	/* 				}; */
	/* 				limitsArrayBottom[]= */
	/* 				{ */
	/* 					{-17.610399,-88.914001}, */
	/* 					{-32.643902,-19.315201} */
	/* 				}; */
	/* 			}; */
	/* 			class TurnOut: TurnIn */
	/* 			{ */
	/* 			}; */
	/* 		}; */
	/* 		class CargoTurret_04: CargoTurret_01 */
	/* 		{ */
	/* 			gunnerAction="passenger_inside_7"; */
	/* 			gunnerName="$STR_A3_TURRETS_CARGOTURRET_L1"; */
	/* 			memoryPointsGetInGunner="pos cargo LF"; */
	/* 			memoryPointsGetInGunnerDir="pos cargo LF dir"; */
	/* 			gunnerCompartments="Compartment1"; */
	/* 			proxyIndex=4; */
	/* 			class TurnIn */
	/* 			{ */
	/* 				limitsArrayTop[]= */
	/* 				{ */
	/* 					{6.8428998,29.275499}, */
	/* 					{24.9081,83.4132} */
	/* 				}; */
	/* 				limitsArrayBottom[]= */
	/* 				{ */
	/* 					{-23.8466,32.445702}, */
	/* 					{-36.599602,74.549896} */
	/* 				}; */
	/* 			}; */
	/* 			class TurnOut: TurnIn */
	/* 			{ */
	/* 			}; */
	/* 		}; */
	/* 		class CargoTurret_05: CargoTurret_01 */
	/* 		{ */
	/* 			gunnerAction="passenger_inside_7"; */
	/* 			gunnerName="$STR_A3_TURRETS_CARGOTURRET_R3"; */
	/* 			memoryPointsGetInGunner="pos cargo RR"; */
	/* 			memoryPointsGetInGunnerDir="pos cargo RR dir"; */
	/* 			gunnerCompartments="Compartment1"; */
	/* 			proxyIndex=5; */
	/* 			class TurnIn */
	/* 			{ */
	/* 				limitsArrayTop[]= */
	/* 				{ */
	/* 					{44.8284,-94.993896}, */
	/* 					{44.8284,94.993896} */
	/* 				}; */
	/* 				limitsArrayBottom[]= */
	/* 				{ */
	/* 					{-4.0748,-94.0037}, */
	/* 					{-3.3255,-53.525799}, */
	/* 					{-5.5226998,-22.3762}, */
	/* 					{-11.507,18.5184}, */
	/* 					{-36.7649,26.4793}, */
	/* 					{-44.884701,95} */
	/* 				}; */
	/* 			}; */
	/* 			class TurnOut: TurnIn */
	/* 			{ */
	/* 			}; */
	/* 		}; */
	/* 	}; */
	/* 	class TextureSources */
	/* 	{ */
	/* 		class Black */
	/* 		{ */
	/* 			displayName="$STR_A3_TEXTURESOURCES_BLACK0"; */
	/* 			author="$STR_A3_Bohemia_Interactive"; */
	/* 			textures[]= */
	/* 			{ */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa", */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" */
	/* 			}; */
	/* 			factions[]= */
	/* 			{ */
	/* 				"OPF_T_F", */
	/* 				"OPF_F" */
	/* 			}; */
	/* 		}; */
	/* 		class GreenHex */
	/* 		{ */
	/* 			displayName="$STR_A3_TEXTURESOURCES_GREENHEX0"; */
	/* 			author="$STR_A3_Bohemia_Interactive"; */
	/* 			textures[]= */
	/* 			{ */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa", */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa", */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa" */
	/* 			}; */
	/* 			factions[]= */
	/* 			{ */
	/* 				"OPF_T_F", */
	/* 				"OPF_F" */
	/* 			}; */
	/* 		}; */
	/* 		class Arid */
	/* 		{ */
	/* 			displayName="$STR_A3_TextureSources_Arid0"; */
	/* 			author="$STR_A3_Bohemia_Interactive"; */
	/* 			textures[]= */
	/* 			{ */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa", */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa", */
	/* 				"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa" */
	/* 			}; */
	/* 			factions[]= */
	/* 			{ */
	/* 				"OPF_T_F", */
	/* 				"OPF_F" */
	/* 			}; */
	/* 		}; */
	/* 	}; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		1, */
	/* 		"GreenHex", */
	/* 		1, */
	/* 		"Arid", */
	/* 		1 */
	/* 	}; */
	/* 	class VehicleTransport */
	/* 	{ */
	/* 		class Cargo */
	/* 		{ */
	/* 			parachuteClass="O_Parachute_02_F"; */
	/* 			parachuteHeightLimit=5; */
	/* 			canBeTransported=1; */
	/* 			dimensions[]= */
	/* 			{ */
	/* 				"BBox_1_1_pos", */
	/* 				"BBox_1_2_pos" */
	/* 			}; */
	/* 		}; */
	/* 	}; */
	/* 	aggregateReflectors[]= */
	/* 	{ */
			
	/* 		{ */
	/* 			"Light_1", */
	/* 			"Light_2" */
	/* 		} */
	/* 	}; */
	/* 	class Reflectors */
	/* 	{ */
	/* 		class Light_1 */
	/* 		{ */
	/* 			color[]={1900,1800,1700}; */
	/* 			ambient[]={5,5,5}; */
	/* 			intensity=1; */
	/* 			size=1; */
	/* 			innerAngle=100; */
	/* 			outerAngle=179; */
	/* 			coneFadeCoef=10; */
	/* 			position="Light_1_pos"; */
	/* 			direction="Light_1_dir"; */
	/* 			hitpoint="Light_1"; */
	/* 			selection="Light_1"; */
	/* 			useFlare=1; */
	/* 			flareSize=1; */
	/* 			flareMaxDistance=250; */
	/* 			dayLight=0; */
	/* 			class Attenuation */
	/* 			{ */
	/* 				start=1; */
	/* 				constant=0; */
	/* 				linear=1; */
	/* 				quadratic=0.25; */
	/* 				hardLimitStart=60; */
	/* 				hardLimitEnd=120; */
	/* 			}; */
	/* 		}; */
	/* 		class Light_2: Light_1 */
	/* 		{ */
	/* 			position="Light_2_pos"; */
	/* 			direction="Light_2_dir"; */
	/* 			hitpoint="Light_2"; */
	/* 			selection="Light_2"; */
	/* 		}; */
	/* 	}; */
	/* 	class Exhausts */
	/* 	{ */
	/* 		class Exhaust_1 */
	/* 		{ */
	/* 			position="Exhaust_1_pos"; */
	/* 			direction="Exhaust_1_dir"; */
	/* 			effect="ExhaustEffectOffroad"; */
	/* 		}; */
	/* 		class Exhaust_2 */
	/* 		{ */
	/* 			position="Exhaust_2_pos"; */
	/* 			direction="Exhaust_2_dir"; */
	/* 			effect="ExhaustEffectOffroad"; */
	/* 		}; */
	/* 	}; */
	/* 	class Damage */
	/* 	{ */
	/* 		tex[]={}; */
	/* 		mat[]= */
	/* 		{ */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01.rvmat", */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_damage.rvmat", */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_destruct.rvmat", */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02.rvmat", */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_damage.rvmat", */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_destruct.rvmat", */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03.rvmat", */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_damage.rvmat", */
	/* 			"a3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_destruct.rvmat" */
	/* 		}; */
	/* 	}; */
	/* 	class EventHandlers: EventHandlers */
	/* 	{ */
	/* 		init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};"; */
	/* 	}; */
	/* 	class AnimationSources: AnimationSources */
	/* 	{ */
	/* 		class Unarmed_Doors_Hide */
	/* 		{ */
	/* 			displayName="$STR_A3_CfgVehicles_LSV_02_base_F_AnimationSources_HideDoor10"; */
	/* 			author="$STR_A3_Bohemia_Interactive"; */
	/* 			source="user"; */
	/* 			initPhase=0; */
	/* 			animPeriod=0.001; */
	/* 			mass=-25; */
	/* 		}; */
	/* 		class Unarmed_Main_Turret_Hide */
	/* 		{ */
	/* 			displayName="$STR_A3_CfgVehicles_LSV_01_base_F_AnimationSources_Unarmed_Main_Turret_Hide0"; */
	/* 			author="$STR_A3_Bohemia_Interactive"; */
	/* 			scope=0; */
	/* 			source="user"; */
	/* 			initPhase=0; */
	/* 			mass=-120; */
	/* 			animPeriod=0.001; */
	/* 			forceAnimatePhase=0; */
	/* 			forceAnimate[]={}; */
	/* 		}; */
	/* 		class Minigun */
	/* 		{ */
	/* 			source="revolving"; */
	/* 			weapon="LMG_Minigun_Transport"; */
	/* 		}; */
	/* 		class muzzle_rot */
	/* 		{ */
	/* 			source="ammorandom"; */
	/* 			weapon="LMG_Minigun_Transport"; */
	/* 		}; */
	/* 		class muzzle_hide */
	/* 		{ */
	/* 			source="reload"; */
	/* 			weapon="LMG_Minigun_Transport"; */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class LSV_02_armed_base_F: LSV_02_base_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SpeechVariants */
	/* 	{ */
	/* 		class Default */
	/* 		{ */
	/* 			speechSingular[]= */
	/* 			{ */
	/* 				"veh_vehicle_armedcar_s" */
	/* 			}; */
	/* 			speechPlural[]= */
	/* 			{ */
	/* 				"veh_vehicle_armedcar_p" */
	/* 			}; */
	/* 		}; */
	/* 	}; */
	/* 	textSingular="$STR_A3_nameSound_veh_vehicle_armedcar_s"; */
	/* 	textPlural="$STR_A3_nameSound_veh_vehicle_armedcar_p"; */
	/* 	nameSound="veh_vehicle_armedcar_s"; */
	/* 	_generalMacro="LSV_02_armed_base_F"; */
	/* 	scope=0; */
	/* 	scopeCurator=0; */
	/* 	displayName="$STR_A3_CfgVehicles_LSV_02_armed_base_F0"; */
	/* 	overviewPicture="\A3\Data_F_Exp\Images\VehicleQilin_ca.paa"; */
	/* 	DLC="Expansion"; */
	/* 	memoryPointTaskMarker="TaskMarker_2_pos"; */
	/* 	class Turrets: Turrets */
	/* 	{ */
	/* 		class MainTurret: MainTurret */
	/* 		{ */
	/* 			disableSoundAttenuation=1; */
	/* 			gunnerLeftHandAnimName="otocHlaven"; */
	/* 			gunnerRightHandAnimName="otocHlaven"; */
	/* 			body="mainTurret"; */
	/* 			gun="mainGun"; */
	/* 			animationSourceBody="mainTurret"; */
	/* 			animationSourceGun="mainGun"; */
	/* 			weapons[]= */
	/* 			{ */
	/* 				"LMG_Minigun_Transport" */
	/* 			}; */
	/* 			magazines[]= */
	/* 			{ */
	/* 				"500Rnd_65x39_Belt_Tracer_Green_Splash", */
	/* 				"500Rnd_65x39_Belt_Tracer_Green_Splash", */
	/* 				"500Rnd_65x39_Belt_Tracer_Green_Splash" */
	/* 			}; */
	/* 			minElev=-10; */
	/* 			maxElev=40; */
	/* 			soundServo[]= */
	/* 			{ */
	/* 				"A3\sounds_f\dummysound", */
	/* 				9.9999977e-007, */
	/* 				1 */
	/* 			}; */
	/* 			gunnerAction="gunner_lsv_02"; */
	/* 			gunnerCompartments="Compartment1"; */
	/* 			ejectDeadGunner=0; */
	/* 			castGunnerShadow=1; */
	/* 			stabilizedInAxes=0; */
	/* 			gunBeg="muzzle_beg"; */
	/* 			gunEnd="muzzle_end"; */
	/* 			memoryPointGunnerOptics="Eye"; */
	/* 			optics=0; */
	/* 			gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F"; */
	/* 			memoryPointsGetInGunner="pos cargo"; */
	/* 			memoryPointsGetInGunnerDir="pos cargo dir"; */
	/* 			class ViewOptics: ViewOptics */
	/* 			{ */
	/* 				minFov=0.25; */
	/* 				maxFov=1.25; */
	/* 				initFov=0.75; */
	/* 			}; */
	/* 			class ViewGunner: ViewGunner */
	/* 			{ */
	/* 			}; */
	/* 			commanding=-2; */
	/* 			primaryGunner=1; */
	/* 		}; */
	/* 		class CargoTurret_01: CargoTurret_01 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_02: CargoTurret_02 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_03: CargoTurret_03 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_04: CargoTurret_04 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_05: CargoTurret_05 */
	/* 		{ */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class LSV_02_unarmed_base_F: LSV_02_base_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	_generalMacro="LSV_02_unarmed_base_F"; */
	/* 	scope=0; */
	/* 	scopeCurator=0; */
	/* 	displayName="$STR_A3_CfgVehicles_LSV_02_unarmed_base_F0"; */
	/* 	DLC="Expansion"; */
	/* 	unitInfoType="RscUnitInfoNoWeapon"; */
	/* 	getInProxyOrder[]={6,1,4,3,2,5}; */
	/* 	class Turrets: Turrets */
	/* 	{ */
	/* 		class CargoTurret_01: CargoTurret_01 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_02: CargoTurret_02 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_03: CargoTurret_03 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_04: CargoTurret_04 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_05: CargoTurret_05 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_06: CargoTurret_01 */
	/* 		{ */
	/* 			proxyIndex=6; */
	/* 			gunnerAction="vehicle_passenger_stand_2"; */
	/* 			gunnerName="$STR_POSITION_GUNNER"; */
	/* 			memoryPointsGetInGunner="pos cargo"; */
	/* 			memoryPointsGetInGunnerDir="pos cargo dir"; */
	/* 			allowLauncherIn=1; */
	/* 			allowLauncherOut=1; */
	/* 			class TurnIn */
	/* 			{ */
	/* 				limitsArrayTop[]= */
	/* 				{ */
	/* 					{45,-95}, */
	/* 					{45,95} */
	/* 				}; */
	/* 				limitsArrayBottom[]= */
	/* 				{ */
	/* 					{-30,-95}, */
	/* 					{-20,-30}, */
	/* 					{-20,30}, */
	/* 					{-30,95} */
	/* 				}; */
	/* 			}; */
	/* 			class TurnOut: TurnIn */
	/* 			{ */
	/* 			}; */
	/* 		}; */
	/* 	}; */
	/* 	animationList[]= */
	/* 	{ */
	/* 		"Unarmed_Main_Turret_hide", */
	/* 		1 */
	/* 	}; */
	/* 	class AnimationSources: AnimationSources */
	/* 	{ */
	/* 		class Unarmed_Main_Turret_Hide: Unarmed_Main_Turret_Hide */
	/* 		{ */
	/* 			initPhase=1; */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_armed_F: LSV_02_armed_base_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=1; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.591; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_LSV_02_armed_F.jpg"; */
	/* 	_generalMacro="O_T_LSV_02_armed_F"; */
	/* 	scope=2; */
	/* 	scopeCurator=2; */
	/* 	DLC="Expansion"; */
	/* 	side=0; */
	/* 	faction="OPF_T_F"; */
	/* 	crew="O_T_Soldier_F"; */
	/* 	typicalCargo[]= */
	/* 	{ */
	/* 		"O_T_Soldier_F" */
	/* 	}; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		0, */
	/* 		"GreenHex", */
	/* 		1, */
	/* 		"Arid", */
	/* 		0 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa" */
	/* 	}; */
	/* 	class TransportMagazines */
	/* 	{ */
	/* 		class _xx_30Rnd_580x42_Mag_F */
	/* 		{ */
	/* 			magazine="30Rnd_580x42_Mag_F"; */
	/* 			count=16; */
	/* 		}; */
	/* 		class _xx_100Rnd_580x42_Mag_F */
	/* 		{ */
	/* 			magazine="100Rnd_580x42_Mag_F"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_HandGrenade */
	/* 		{ */
	/* 			magazine="HandGrenade"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_SmokeShell */
	/* 		{ */
	/* 			magazine="SmokeShell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellRed */
	/* 		{ */
	/* 			magazine="SmokeShellRed"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellYellow */
	/* 		{ */
	/* 			magazine="SmokeShellYellow"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellOrange */
	/* 		{ */
	/* 			magazine="SmokeShellOrange"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_HE_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_HE_Grenade_shell"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_1Rnd_Smoke_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_Smoke_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeYellow_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeYellow_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeOrange_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeOrange_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeRed_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeRed_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_16Rnd_9x21_Mag */
	/* 		{ */
	/* 			magazine="16Rnd_9x21_Mag"; */
	/* 			count=12; */
	/* 		}; */
	/* 		class _xx_RPG32_F */
	/* 		{ */
	/* 			magazine="RPG32_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportItems */
	/* 	{ */
	/* 		class _xx_FirstAidKit */
	/* 		{ */
	/* 			name="FirstAidKit"; */
	/* 			count=10; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportWeapons */
	/* 	{ */
	/* 		class _xx_arifle_CTAR_blk_F */
	/* 		{ */
	/* 			weapon="arifle_CTAR_blk_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_armed_viper_F: O_T_LSV_02_armed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_T_LSV_02_armed_viper_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=0; */
	/* 	DLC="Expansion"; */
	/* 	crew="O_V_Soldier_ghex_F"; */
	/* 	class Turrets: Turrets */
	/* 	{ */
	/* 		class CargoTurret_01: CargoTurret_01 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_02: CargoTurret_02 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_03: CargoTurret_03 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_04: CargoTurret_04 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_05: CargoTurret_05 */
	/* 		{ */
	/* 		}; */
	/* 		class MainTurret: MainTurret */
	/* 		{ */
	/* 			dontCreateAi=1; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportMagazines */
	/* 	{ */
	/* 		class _xx_30Rnd_65x39_caseless_green */
	/* 		{ */
	/* 			magazine="30Rnd_65x39_caseless_green"; */
	/* 			count=16; */
	/* 		}; */
	/* 		class _xx_10Rnd_50BW_Mag_F */
	/* 		{ */
	/* 			magazine="10Rnd_50BW_Mag_F"; */
	/* 			count=8; */
	/* 		}; */
	/* 		class _xx_HandGrenade */
	/* 		{ */
	/* 			magazine="HandGrenade"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_SmokeShell */
	/* 		{ */
	/* 			magazine="SmokeShell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellRed */
	/* 		{ */
	/* 			magazine="SmokeShellRed"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellYellow */
	/* 		{ */
	/* 			magazine="SmokeShellYellow"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellOrange */
	/* 		{ */
	/* 			magazine="SmokeShellOrange"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_HE_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_HE_Grenade_shell"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_1Rnd_Smoke_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_Smoke_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeYellow_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeYellow_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeOrange_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeOrange_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeRed_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeRed_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_16Rnd_9x21_Mag */
	/* 		{ */
	/* 			magazine="16Rnd_9x21_Mag"; */
	/* 			count=12; */
	/* 		}; */
	/* 		class _xx_RPG32_F */
	/* 		{ */
	/* 			magazine="RPG32_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportItems */
	/* 	{ */
	/* 		class _xx_FirstAidKit */
	/* 		{ */
	/* 			name="FirstAidKit"; */
	/* 			count=10; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportWeapons */
	/* 	{ */
	/* 		class _xx_arifle_ARX_blk_F */
	/* 		{ */
	/* 			weapon="arifle_ARX_blk_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_unarmed_F: LSV_02_unarmed_base_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=1; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.591; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_LSV_02_unarmed_F.jpg"; */
	/* 	_generalMacro="O_T_LSV_02_unarmed_F"; */
	/* 	scope=2; */
	/* 	scopeCurator=2; */
	/* 	DLC="Expansion"; */
	/* 	side=0; */
	/* 	faction="OPF_T_F"; */
	/* 	crew="O_T_Soldier_F"; */
	/* 	typicalCargo[]= */
	/* 	{ */
	/* 		"O_T_Soldier_F" */
	/* 	}; */
	/* 	forceInGarage=1; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		0, */
	/* 		"GreenHex", */
	/* 		1, */
	/* 		"Arid", */
	/* 		0 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa" */
	/* 	}; */
	/* 	class TransportMagazines */
	/* 	{ */
	/* 		class _xx_30Rnd_580x42_Mag_F */
	/* 		{ */
	/* 			magazine="30Rnd_580x42_Mag_F"; */
	/* 			count=16; */
	/* 		}; */
	/* 		class _xx_100Rnd_580x42_Mag_F */
	/* 		{ */
	/* 			magazine="100Rnd_580x42_Mag_F"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_HandGrenade */
	/* 		{ */
	/* 			magazine="HandGrenade"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_SmokeShell */
	/* 		{ */
	/* 			magazine="SmokeShell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellRed */
	/* 		{ */
	/* 			magazine="SmokeShellRed"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellYellow */
	/* 		{ */
	/* 			magazine="SmokeShellYellow"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellOrange */
	/* 		{ */
	/* 			magazine="SmokeShellOrange"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_HE_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_HE_Grenade_shell"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_1Rnd_Smoke_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_Smoke_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeYellow_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeYellow_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeOrange_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeOrange_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeRed_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeRed_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_16Rnd_9x21_Mag */
	/* 		{ */
	/* 			magazine="16Rnd_9x21_Mag"; */
	/* 			count=12; */
	/* 		}; */
	/* 		class _xx_RPG32_F */
	/* 		{ */
	/* 			magazine="RPG32_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportItems */
	/* 	{ */
	/* 		class _xx_FirstAidKit */
	/* 		{ */
	/* 			name="FirstAidKit"; */
	/* 			count=10; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportWeapons */
	/* 	{ */
	/* 		class _xx_arifle_CTAR_blk_F */
	/* 		{ */
	/* 			weapon="arifle_CTAR_blk_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_unarmed_viper_F: O_T_LSV_02_unarmed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.591; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_T_LSV_02_unarmed_viper_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=0; */
	/* 	DLC="Expansion"; */
	/* 	crew="O_V_Soldier_ghex_F"; */
	/* 	forceInGarage=0; */
	/* 	class TransportMagazines */
	/* 	{ */
	/* 		class _xx_30Rnd_65x39_caseless_green */
	/* 		{ */
	/* 			magazine="30Rnd_65x39_caseless_green"; */
	/* 			count=16; */
	/* 		}; */
	/* 		class _xx_10Rnd_50BW_Mag_F */
	/* 		{ */
	/* 			magazine="10Rnd_50BW_Mag_F"; */
	/* 			count=8; */
	/* 		}; */
	/* 		class _xx_HandGrenade */
	/* 		{ */
	/* 			magazine="HandGrenade"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_SmokeShell */
	/* 		{ */
	/* 			magazine="SmokeShell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellRed */
	/* 		{ */
	/* 			magazine="SmokeShellRed"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellYellow */
	/* 		{ */
	/* 			magazine="SmokeShellYellow"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellOrange */
	/* 		{ */
	/* 			magazine="SmokeShellOrange"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_HE_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_HE_Grenade_shell"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_1Rnd_Smoke_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_Smoke_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeYellow_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeYellow_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeOrange_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeOrange_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeRed_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeRed_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_16Rnd_9x21_Mag */
	/* 		{ */
	/* 			magazine="16Rnd_9x21_Mag"; */
	/* 			count=12; */
	/* 		}; */
	/* 		class _xx_RPG32_F */
	/* 		{ */
	/* 			magazine="RPG32_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportItems */
	/* 	{ */
	/* 		class _xx_FirstAidKit */
	/* 		{ */
	/* 			name="FirstAidKit"; */
	/* 			count=10; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportWeapons */
	/* 	{ */
	/* 		class _xx_arifle_ARX_blk_F */
	/* 		{ */
	/* 			weapon="arifle_ARX_blk_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_armed_F: LSV_02_armed_base_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=1; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.40000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.14; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_LSV_02_armed_F.jpg"; */
	/* 	_generalMacro="O_LSV_02_armed_F"; */
	/* 	scope=2; */
	/* 	scopeCurator=2; */
	/* 	DLC="Expansion"; */
	/* 	side=0; */
	/* 	faction="OPF_F"; */
	/* 	crew="O_Soldier_F"; */
	/* 	typicalCargo[]= */
	/* 	{ */
	/* 		"O_Soldier_F" */
	/* 	}; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		0, */
	/* 		"GreenHex", */
	/* 		0, */
	/* 		"Arid", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_armed_viper_F: O_LSV_02_armed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_LSV_02_armed_viper_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=0; */
	/* 	DLC="Expansion"; */
	/* 	crew="O_V_Soldier_hex_F"; */
	/* 	class Turrets: Turrets */
	/* 	{ */
	/* 		class CargoTurret_01: CargoTurret_01 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_02: CargoTurret_02 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_03: CargoTurret_03 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_04: CargoTurret_04 */
	/* 		{ */
	/* 		}; */
	/* 		class CargoTurret_05: CargoTurret_05 */
	/* 		{ */
	/* 		}; */
	/* 		class MainTurret: MainTurret */
	/* 		{ */
	/* 			dontCreateAi=1; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportMagazines */
	/* 	{ */
	/* 		class _xx_30Rnd_65x39_caseless_green */
	/* 		{ */
	/* 			magazine="30Rnd_65x39_caseless_green"; */
	/* 			count=16; */
	/* 		}; */
	/* 		class _xx_10Rnd_50BW_Mag_F */
	/* 		{ */
	/* 			magazine="10Rnd_50BW_Mag_F"; */
	/* 			count=8; */
	/* 		}; */
	/* 		class _xx_HandGrenade */
	/* 		{ */
	/* 			magazine="HandGrenade"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_SmokeShell */
	/* 		{ */
	/* 			magazine="SmokeShell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellRed */
	/* 		{ */
	/* 			magazine="SmokeShellRed"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellYellow */
	/* 		{ */
	/* 			magazine="SmokeShellYellow"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellOrange */
	/* 		{ */
	/* 			magazine="SmokeShellOrange"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_HE_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_HE_Grenade_shell"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_1Rnd_Smoke_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_Smoke_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeYellow_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeYellow_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeOrange_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeOrange_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeRed_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeRed_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_16Rnd_9x21_Mag */
	/* 		{ */
	/* 			magazine="16Rnd_9x21_Mag"; */
	/* 			count=12; */
	/* 		}; */
	/* 		class _xx_RPG32_F */
	/* 		{ */
	/* 			magazine="RPG32_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportItems */
	/* 	{ */
	/* 		class _xx_FirstAidKit */
	/* 		{ */
	/* 			name="FirstAidKit"; */
	/* 			count=10; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportWeapons */
	/* 	{ */
	/* 		class _xx_arifle_ARX_blk_F */
	/* 		{ */
	/* 			weapon="arifle_ARX_blk_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_unarmed_F: LSV_02_unarmed_base_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=1; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_LSV_02_unarmed_F.jpg"; */
	/* 	_generalMacro="O_LSV_02_unarmed_F"; */
	/* 	scope=2; */
	/* 	scopeCurator=2; */
	/* 	DLC="Expansion"; */
	/* 	side=0; */
	/* 	faction="OPF_F"; */
	/* 	crew="O_Soldier_F"; */
	/* 	typicalCargo[]= */
	/* 	{ */
	/* 		"O_Soldier_F" */
	/* 	}; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		0, */
	/* 		"GreenHex", */
	/* 		0, */
	/* 		"Arid", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_unarmed_viper_F: O_LSV_02_unarmed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_LSV_02_unarmed_viper_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=0; */
	/* 	DLC="Expansion"; */
	/* 	crew="O_V_Soldier_hex_F"; */
	/* 	class TransportMagazines */
	/* 	{ */
	/* 		class _xx_30Rnd_65x39_caseless_green */
	/* 		{ */
	/* 			magazine="30Rnd_65x39_caseless_green"; */
	/* 			count=16; */
	/* 		}; */
	/* 		class _xx_10Rnd_50BW_Mag_F */
	/* 		{ */
	/* 			magazine="10Rnd_50BW_Mag_F"; */
	/* 			count=8; */
	/* 		}; */
	/* 		class _xx_HandGrenade */
	/* 		{ */
	/* 			magazine="HandGrenade"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_SmokeShell */
	/* 		{ */
	/* 			magazine="SmokeShell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellRed */
	/* 		{ */
	/* 			magazine="SmokeShellRed"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellYellow */
	/* 		{ */
	/* 			magazine="SmokeShellYellow"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_SmokeShellOrange */
	/* 		{ */
	/* 			magazine="SmokeShellOrange"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_HE_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_HE_Grenade_shell"; */
	/* 			count=10; */
	/* 		}; */
	/* 		class _xx_1Rnd_Smoke_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_Smoke_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeYellow_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeYellow_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeOrange_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeOrange_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_1Rnd_SmokeRed_Grenade_shell */
	/* 		{ */
	/* 			magazine="1Rnd_SmokeRed_Grenade_shell"; */
	/* 			count=4; */
	/* 		}; */
	/* 		class _xx_16Rnd_9x21_Mag */
	/* 		{ */
	/* 			magazine="16Rnd_9x21_Mag"; */
	/* 			count=12; */
	/* 		}; */
	/* 		class _xx_RPG32_F */
	/* 		{ */
	/* 			magazine="RPG32_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportItems */
	/* 	{ */
	/* 		class _xx_FirstAidKit */
	/* 		{ */
	/* 			name="FirstAidKit"; */
	/* 			count=10; */
	/* 		}; */
	/* 	}; */
	/* 	class TransportWeapons */
	/* 	{ */
	/* 		class _xx_arifle_ARX_blk_F */
	/* 		{ */
	/* 			weapon="arifle_ARX_blk_F"; */
	/* 			count=2; */
	/* 		}; */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_armed_black_F: O_T_LSV_02_armed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.591; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_T_LSV_02_armed_black_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_armed_ghex_F: O_T_LSV_02_armed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.591; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_T_LSV_02_armed_ghex_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"GreenHex", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_armed_arid_F: O_T_LSV_02_armed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_T_LSV_02_armed_arid_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Arid", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_unarmed_black_F: O_T_LSV_02_unarmed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_T_LSV_02_unarmed_black_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_unarmed_ghex_F: O_T_LSV_02_unarmed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.591; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_T_LSV_02_unarmed_ghex_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"GreenHex", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_T_LSV_02_unarmed_arid_F: O_T_LSV_02_unarmed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_T_LSV_02_unarmed_arid_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Arid", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_armed_black_F: O_LSV_02_armed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.14; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_LSV_02_armed_black_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_armed_ghex_F: O_LSV_02_armed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.14; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_LSV_02_armed_ghex_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"GreenHex", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_armed_arid_F: O_LSV_02_armed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0.33000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_LSV_02_armed_arid_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Arid", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_unarmed_black_F: O_LSV_02_unarmed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.14; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_LSV_02_unarmed_black_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Black", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_unarmed_ghex_F: O_LSV_02_unarmed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.30000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.40000001 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.59; */
	/* 		verticalOffsetWorld=-0.14; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_LSV_02_unarmed_ghex_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"GreenHex", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa" */
	/* 	}; */
	/* }; */
	/* class O_LSV_02_unarmed_arid_F: O_LSV_02_unarmed_F */
	/* { */
	/* 	author="$STR_A3_Bohemia_Interactive"; */
	/* 	class SimpleObject */
	/* 	{ */
	/* 		eden=0; */
	/* 		animate[]= */
	/* 		{ */
				
	/* 			{ */
	/* 				"damagehide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidevez", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"damagehidehlaven", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_destruct_unhide", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_3_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_4_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"daylights", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"reverse_light", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damage", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_damage_backanim", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper", */
	/* 				0.28999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper", */
	/* 				0.38999999 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper", */
	/* 				0.38 */
	/* 			}, */
				
	/* 			{ */
	/* 				"drivingwheel", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"indicatorspeed", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"fuel", */
	/* 				1 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_1_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"steering_2_1", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"hidegunner", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"mainturret", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"maingun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"minigun", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_1_2_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_1_damper_land_hack", */
	/* 				0 */
	/* 			}, */
				
	/* 			{ */
	/* 				"wheel_2_2_damper_land_hack", */
	/* 				0 */
	/* 			} */
	/* 		}; */
	/* 		hide[]= */
	/* 		{ */
	/* 			"clan", */
	/* 			"zasleh", */
	/* 			"light_1", */
	/* 			"light_2", */
	/* 			"zadni svetlo", */
	/* 			"brzdove svetlo", */
	/* 			"podsvit pristroju", */
	/* 			"poskozeni" */
	/* 		}; */
	/* 		verticalOffset=1.591; */
	/* 		verticalOffsetWorld=-0.139; */
	/* 		init="[this, '', []] call bis_fnc_initVehicle"; */
	/* 	}; */
	/* 	_generalMacro="O_LSV_02_unarmed_arid_F"; */
	/* 	scope=1; */
	/* 	scopeCurator=1; */
	/* 	DLC="Expansion"; */
	/* 	textureList[]= */
	/* 	{ */
	/* 		"Arid", */
	/* 		1 */
	/* 	}; */
	/* 	hiddenSelectionsTextures[]= */
	/* 	{ */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa", */
	/* 		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa" */
	/* 	}; */
	/* }; */
};
