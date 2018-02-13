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
		
		// Init Handler
		/* if (isClass (configfile >> "CfgPatches" >> "ace_cargo")) then { */
		/* 	class EventHandlers: EventHandlers */
		/* 	{ */
		/* 		init="[""ACE_Wheel"", (_this select 0)] call ace_cargo_fnc_loadItem"; */
		/* 	}; */
		/* }; */

		
		class EventHandlers
		{
			init="(_this select 0) removeMagazinesTurret [""500Rnd_65x39_Belt_Tracer_Green_Splash"",[0]];(_this select 0) addMagazineTurret [""500Rnd_65x39_Belt_Tracer_Red_Splash"",[0]];(_this select 0) addMagazineTurret [""500Rnd_65x39_Belt_Tracer_Red_Splash"",[0]];(_this select 0) addMagazineTurret [""500Rnd_65x39_Belt_Tracer_Red_Splash"",[0]];(_this select 0) addMagazineTurret [""500Rnd_65x39_Belt_Tracer_Red_Splash"",[0]];(_this select 0) addMagazineTurret [""500Rnd_65x39_Belt_Tracer_Red_Splash"",[0]];(_this select 0) addMagazineTurret [""500Rnd_65x39_Belt_Tracer_Red_Splash"",[0]];";
		};


		// Custom mods
		tf_hasLRradio = 1;
		tf_RadioType = "tf_rt1523g";
		tf_isolatedAmount = 0;
		ace_cargo_size = 4;  
		ace_cargo_canLoad = 1;


		// Boost
		acceleration=10;
		enginePower=600;
	 	maxOmega=720;
		peakTorque=800;
	 	maxSpeed=245; 
	 	fuelCapacity=80; 
	 	idleRpm=500;
		redRpm=7900; 
		clutchStrength=30;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.2309999,
				"N",
				0,
				"D1",
				3.4619999,
				"D2",
				4.5699999,
				"D3",
				4.5710001,
				"D4",
				3.97,
				"D5",
				2.601,
				"D6",
				0.89999998,
				"D7",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				5.1110001
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
			/* if (isClass (configfile >> "CfgPatches" >> "ace_medical")) then { */
				
			/* 	// Medical */ 
			/* 	class _xx_ACE_fieldDressing */
			/* 	{ */
			/* 		name="ACE_fieldDressing"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_elasticBandage */
			/* 	{ */
			/* 		name="ACE_elasticBandage"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_quikclot */
			/* 	{ */
			/* 		name="ACE_quikclot"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_packingBandage */
			/* 	{ */
			/* 		name="ACE_packingBandage"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_morphine */
			/* 	{ */
			/* 		name="ACE_morphine"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_epinephrine */
			/* 	{ */
			/* 		name="ACE_epinephrine"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_salineIV_500 */
			/* 	{ */
			/* 		name="ACE_salineIV_500"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_plasmaIV_500 */
			/* 	{ */
			/* 		name="ACE_plasmaIV_500"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_bloodIV_500 */
			/* 	{ */
			/* 		name="ACE_bloodIV_500"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_tourniquet */
			/* 	{ */
			/* 		name="ACE_tourniquet"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_bodyBag */
			/* 	{ */
			/* 		name="ACE_bodyBag"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_surgicalKit */
			/* 	{ */
			/* 		name="ACE_surgicalKit"; */
			/* 		count="1"; */
			/* 	}; */
			/* 	class _xx_ACE_personalAidKit */
			/* 	{ */
			/* 		name="ACE_personalAidKit"; */
			/* 		count="1"; */
			/* 	}; */
			/* } else { */

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

			/* }; */
		
			/* if (isClass (configfile >> "CfgPatches" >> "ace_explosives")) then { */

			/* 	// EOD */
			/* 	class _xx_ACE_DefusalKit */
			/* 	{ */
			/* 		name="ACE_DefusalKit"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_M26_Clacker */
			/* 	{ */
			/* 		name="ACE_M26_Clacker"; */
			/* 		count="10"; */
			/* 	}; */
			/* 	class _xx_ACE_Clacker */
			/* 	{ */
			/* 		name="ACE_Clacker"; */
			/* 		count="10"; */
			/* 	}; */
			/* }; */

/* 				// Misc */
/* 			if (isClass (configfile >> "CfgPatches" >> "ace_captive")) then { */
/* 				class _xx_ACE_CableTie */
/* 				{ */
/* 					name="ACE_CableTie"; */
/* 					count="10"; */
/* 				}; */
/* 			}; */

/* 			if (isClass (configfile >> "CfgPatches" >> "ace_hearing")) then { */
/* 				class _xx_ACE_EarPlugs */
/* 				{ */
/* 					name="ACE_EarPlugs"; */
/* 					count="10"; */
/* 				}; */
/* 			}; */

/* 			// Radio */
/* 			if (isClass (configfile >> "CfgPatches" >> "task_force_radio")) then { */
/* 				class _xx_tf_anprc152 */
/* 				{ */
/* 					name = "tf_anprc152"; */
/* 					count = "2"; */
/* 				}; */
/* 			}; */


			
			
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
			class _xx_MineDetector
			{
			 weapon="MineDetector";
			 count="1";
			};
		}; 
		class TransportBackpacks
		{
			class _xx_B_UAV_01_backpack_F
			{
				backpack="B_UAV_01_backpack_F";
				count=1;
			};

			/* if (isClass (configfile >> "CfgPatches" >> "task_force_radio")) then { */
			/* 	class _xx_tf_rt1523g */
			/* 	{ */
			/* 		backpack = "tf_rt1523g"; */
			/* 		count = "1"; */
			/* 	}; */
			/* }; */
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = "1";
			};
			class _xx_B_AssaultPack_cbr
			{
				backpack = "B_AssaultPack_cbr";
				count = "1";
			};
			class _xx_B_Carryall_cbr
			{
				backpack = "B_Carryall_cbr";
				count = "1";
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
};

