class CfgEditorSubcategories
{
	class vehicleRaptor
	{
		displayName = "Raptor";
	};
	class vehicleRaptorAT
	{
		displayName = "Raptor - AT";
	};
};

class CfgVehicles
{
	class Car_F;
	class O_T_LSV_02_armed_black_F;
	class O_T_LSV_02_AT_F;
	class A3CN_LSV_01_BLACK: O_T_LSV_02_armed_black_F
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR BLACK";
		_generalMacro="A3CN_LSV_01_BLACK";
		scope=2;
		scopeCurator=2;
		scopeGarage = 2;
		transportMaxBackpacks = 25;

		editorSubcategory = "vehicleRaptor";
		
		class EventHandlers
		{
			init="(_this) call A3CN_fnc_menuActions;(_this select 0) removeMagazinesTurret [""500Rnd_65x39_Belt_Tracer_Green_Splash"",[0]];(_this select 0) addMagazineTurret [""2000Rnd_65x39_Belt_Tracer_Yellow_Splash"",[0]];(_this select 0) addMagazineTurret [""2000Rnd_65x39_Belt_Tracer_Yellow_Splash"",[0]];(_this select 0) addMagazineTurret [""2000Rnd_65x39_Belt_Tracer_Yellow_Splash"",[0]];(_this select 0) addMagazineTurret [""2000Rnd_65x39_Belt_Tracer_Yellow_Splash"",[0]];(_this select 0) addMagazineTurret [""2000Rnd_65x39_Belt_Tracer_Yellow_Splash"",[0]];(_this select 0) addMagazineTurret [""2000Rnd_65x39_Belt_Tracer_Yellow_Splash"",[0]];";
		};


		// Custom mods
		tf_hasLRradio = 1;
		tf_RadioType = "tf_rt1523g";
		tf_isolatedAmount = 0;
		ace_cargo_size = 4;  
		ace_cargo_canLoad = 1;

		class AcreRacks {
            
            class Rack_1 {
                displayName = "CFOD Radio Rack";      // Name displayed in the interaction menu
                shortName = "Radio";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Rack type (able to mount a PRC117F)
                allowedPositions[] = {"driver", {"cargo", 1}, "gunner"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
        };




		// Boost
		acceleration=10;
		enginePower=600;
	 	maxOmega=900;
		peakTorque=1300;
	 	maxSpeed=320; 
	 	fuelCapacity=80; 
	 	idleRpm=900;
		redRpm=3800; 
		clutchStrength = 200.0;
		class complexGearbox
		{
			GearboxRatios[] = {"R1", -5.367, "N", 0, "D1", 5.367, "D2", 3.67, "D3", 2.238, "D4", 1.00, "D5", 0.8};
			TransmissionRatios[] = {"High", 5.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.8;
			gearDownMaxCoef = 0.5;
			gearUpMinCoef = 0.45;
			gearDownMinCoef = 0.15;
			transmissionDelay = 1;
		};
		torqueCurve[] = {{0.0, 0.0}, {0.25, 0.65}, {0.3, 0.8}, {0.5, 0.95}, {0.7, 1.0}, {0.8, 0.9}, {0.9, 0.8}, {1.0, 0.5}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.05;
		latency = 0.2;

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
			"BLACK",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};

		frontRearSplit = 0.7;

		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.32";
				mass=50;
				MOI=6;
				dampingRate=1;
				dampingRateDamaged=5;
				dampingRateInAir=0.80000001;
				dampingRateDestroyed=5000;
				maxBrakeTorque=4000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				maxDroop=0.1;
				sprungMass=-1;
				springStrength=62400;
				springDamperRate=6233;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[] = {{0,0}, {0.25,0.0}, {0.5,0.25}, {0.75,0.5}, {0.8,0.5}, {0.85,0.6}, {0.9,0.65}, {1,0.8}};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=8000;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 0.75}, {1, 0.5}};
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=8000;
				
			};
		};

		weapons[]=
		{
			"SportCarHorn",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
	};
	class A3CN_LSV_02_ADAX: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR ADAX";
		_generalMacro="A3CN_LSV_02_ADAX";
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
			"ADAX",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_adax_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};

	class A3CN_LSV_02_ATAK: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR ATAK";
		_generalMacro="A3CN_LSV_02_ATAK";
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
			"ATAK",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_atak_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};

	class A3CN_LSV_02_CASCAVEL: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR CASCAVEL";
		_generalMacro="A3CN_LSV_02_CASCAVEL";
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
			"ATAK",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_cascavel_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};

	class A3CN_LSV_02_EVEREST: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR EVEREST";
		_generalMacro="A3CN_LSV_02_EVEREST";
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
			"EVEREST",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_everest_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};

	class A3CN_LSV_02_KAPPA: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR KAPPA";
		_generalMacro="A3CN_LSV_02_KAPPA";
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
			"KAPPA",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_kappa_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};


	class A3CN_LSV_02_KRAKEN: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR KRAKEN";
		_generalMacro="A3CN_LSV_02_KRAKEN";
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
			"KRAKEN",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_kraken_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};


	class A3CN_LSV_02_MYTRA: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR MYTRA";
		_generalMacro="A3CN_LSV_02_MYTRA";
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
			"MYTRA",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_mytra_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};


	class A3CN_LSV_02_TAIPAN: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR TAIPAN";
		_generalMacro="A3CN_LSV_02_TAIPAN";
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
			"TAIPAN",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_taipan_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};


	class A3CN_LSV_02_VIBORA: A3CN_LSV_01_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR VÍBORA";
		_generalMacro="A3CN_LSV_02_VIBORA";
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
			"VÍBORA",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_vibora_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa"
		};
	};
	




	class A3CN_LSV_01_AT_BLACK: O_T_LSV_02_AT_F
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT BLACK";
		_generalMacro="A3CN_LSV_01_AT_BLACK";
		scope=2;
		scopeCurator=2;
		scopeGarage = 2;
		transportMaxBackpacks = 25;
		editorSubcategory = "vehicleRaptorAT";
		class EventHandlers
		{
			init="(_this) call A3CN_fnc_menuActions;(_this select 0) addMagazineTurret [""Vorona_HEAT"",[0]];(_this select 0) addMagazineTurret [""Vorona_HEAT"",[0]];(_this select 0) addMagazineTurret [""Vorona_HEAT"",[0]];(_this select 0) addMagazineTurret [""Vorona_HEAT"",[0]];";
		};




		// Custom mods
		tf_hasLRradio = 1;
		tf_RadioType = "tf_rt1523g";
		tf_isolatedAmount = 0;
		ace_cargo_size = 4;  
		ace_cargo_canLoad = 1;

		class AcreRacks {
            
            class Rack_1 {
                displayName = "CFOD Radio Rack";      // Name displayed in the interaction menu
                shortName = "Radio";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Rack type (able to mount a PRC117F)
                allowedPositions[] = {"driver", {"cargo", 1}, "gunner"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
        };




		// Boost
		acceleration=10;
		enginePower=600;
	 	maxOmega=900;
		peakTorque=1300;
	 	maxSpeed=320; 
	 	fuelCapacity=80; 
	 	idleRpm=900;
		redRpm=3800; 
		clutchStrength = 200.0;
		class complexGearbox
		{
			GearboxRatios[] = {"R1", -5.367, "N", 0, "D1", 5.367, "D2", 3.67, "D3", 2.238, "D4", 1.00, "D5", 0.8};
			TransmissionRatios[] = {"High", 5.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.8;
			gearDownMaxCoef = 0.5;
			gearUpMinCoef = 0.45;
			gearDownMinCoef = 0.15;
			transmissionDelay = 1;
		};
		torqueCurve[] = {{0.0, 0.0}, {0.25, 0.65}, {0.3, 0.8}, {0.5, 0.95}, {0.7, 1.0}, {0.8, 0.9}, {0.9, 0.8}, {1.0, 0.5}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.05;
		latency = 0.2;

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
			"BLACK",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_black.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_black.paa"
		};

		frontRearSplit = 0.7;

		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.32";
				mass=50;
				MOI=6;
				dampingRate=1;
				dampingRateDamaged=5;
				dampingRateInAir=0.80000001;
				dampingRateDestroyed=5000;
				maxBrakeTorque=4000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				maxDroop=0.1;
				sprungMass=-1;
				springStrength=62400;
				springDamperRate=6233;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[] = {{0,0}, {0.25,0.0}, {0.5,0.25}, {0.75,0.5}, {0.8,0.5}, {0.85,0.6}, {0.9,0.65}, {1,0.8}};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=8000;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 0.75}, {1, 0.5}};
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=8000;
				
			};

		};
		weapons[]=
		{
			"SportCarHorn",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
	};




	class A3CN_LSV_02_AT_ADAX: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT ADAX";
		_generalMacro="A3CN_LSV_02_AT_ADAX";
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
			"ADAX",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_adax_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_desert.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_desert.paa"

		};
	};

	class A3CN_LSV_02_AT_ATAK: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT ATAK";
		_generalMacro="A3CN_LSV_02_AT_ATAK";
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
			"ATAK",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_atak_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_black.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_black.paa"
		};
	};

	class A3CN_LSV_02_AT_CASCAVEL: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT CASCAVEL";
		_generalMacro="A3CN_LSV_02_AT_CASCAVEL";
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
			"ATAK",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_cascavel_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_desert.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_desert.paa"
		};
	};

	class A3CN_LSV_02_AT_EVEREST: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT EVEREST";
		_generalMacro="A3CN_LSV_02_AT_EVEREST";
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
			"EVEREST",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_everest_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_white.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_white.paa"
		};
	};

	class A3CN_LSV_02_AT_KAPPA: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT KAPPA";
		_generalMacro="A3CN_LSV_02_AT_KAPPA";
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
			"KAPPA",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_kappa_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_green.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_green.paa"
		};
	};


	class A3CN_LSV_02_AT_KRAKEN: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT KRAKEN";
		_generalMacro="A3CN_LSV_02_AT_KRAKEN";
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
			"KRAKEN",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_kraken_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_black.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_black.paa"
		};
	};


	class A3CN_LSV_02_AT_MYTRA: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT MYTRA";
		_generalMacro="A3CN_LSV_02_AT_MYTRA";
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
			"MYTRA",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_mytra_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_green.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_green.paa"
		};
	};


	class A3CN_LSV_02_AT_TAIPAN: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT TAIPAN";
		_generalMacro="A3CN_LSV_02_AT_TAIPAN";
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
			"TAIPAN",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_taipan_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_black.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_black.paa"
		};
	};


	class A3CN_LSV_02_AT_VIBORA: A3CN_LSV_01_AT_BLACK
	{
		author="NFC3SPECTRO / Toaster";
		displayName="RAPTOR AT VÍBORA";
		_generalMacro="A3CN_LSV_02_AT_VIBORA";
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
			"VÍBORA",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\x\a3cn_vehicles\addons\lsv\data\cfod_lsv_02_vibora_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_02_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\a3cn_lsv_vibora_03_co.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_desert.paa",
			"\x\a3cn_vehicles\addons\lsv\data\vorona_desert.paa"
		};
	};

};

