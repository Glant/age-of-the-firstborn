//---------------------------------------------------------------------------------------------
// Noldor Class
//---------------------------------------------------------------------------------------------

CreateAHeroClass
	NameTag		   = CreateAHero:ClassName_Noldor
	DescriptionTag = CreateAHero:ClassDesc_Noldor
	PowersDescTag  = CreateAHero:ClassPowersDesc_Noldor
	UpgradeName	   = Upgrade_CreateAHero_ClassNoldor
	IconImage	   = Archetype_Elf																					
																						
	SubClass // Captain Of Gondor
		NameTag				  =	CreateAHero:SubClassName_Noldor
		DescriptionTag		  =	CreateAHero:SubClassDesc_Noldor
		IconImage			  = UPNolCah ;CPMaleElfArcher
		ButtonImage           		= BINolCah ;HICAHMaleElfArcher
		// In UI it should be  		=  HICAHCaptainGondor_wotr
		DefaultFaction              = Arnor
		UsableFactions              = Men Elves Dwarves Arnor
		SpendableAttributePoints        = 30
		
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth


		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW03
		//-------------------------------
		// Head	Gear
		BlingUpgrades =	Upgrade_NoHelmet Upgrade_ELFA_CHH01 Upgrade_ELFA_CHH02
		//-------------------------------
		// Shoulder Plates
		BlingUpgrades =	Upgrade_NoShoulderPlates Upgrade_ELFA_CHSP01 Upgrade_ELFA_CHSP02 Upgrade_ELFA_CHSP03 Upgrade_ELFA_CHSP04
		//-------------------------------
		// Gauntlets
		BlingUpgrades =	Upgrade_NoGauntlets	Upgrade_ELFA_CHG01 Upgrade_ELFA_CHG02 Upgrade_ELFA_CHG03 Upgrade_ELFA_CHG04
		//-------------------------------
		// Shield
		BlingUpgrades =  Upgrade_NoShield Upgrade_CAPG_CHS04
		//-------------------------------
		// Boots
		BlingUpgrades =	Upgrade_NoBoots	Upgrade_ELFA_CHB01 Upgrade_ELFA_CHB02 Upgrade_ELFA_CHB03
		//-------------------------------
		// Body
		BlingUpgrades =	Upgrade_ELFA_CHBOD01 Upgrade_ELFA_CHBOD02 Upgrade_ELFA_CHBOD03 Upgrade_ELFA_CHBOD04
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute05
			MaxValueUpgrade		= Upgrade_ArmorAttribute20
			DefaultValueUpgrade	= Upgrade_ArmorAttribute16
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute17
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute18
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute14
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End
        
        
		// Camera used to view object with in create a hero
		// NormaCam == 1.0 means it is at far location
		ViewInfo
				FarPitch  = -0.066
		        FarZoom   = 0.210
		        FarFloor  = 15.760
		        FarDist   = 20.500
		        FarShift  = 5.900
		        NearPitch = 0.354
		        NearZoom  = 0.254
		        NearFloor = 74.260
		        NearDist  = 40.000
		        NearShift = 5.300
		        CloseUpPitch = -0.300
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 29.000
		        CloseUpShift = 0.100
		        PortraitPitch = -0.050
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 55.00
		        PortraitShift = 0.50
		        //NormalCam = 0.50


		      

		    


			MapLocation	= 6
		End
	End

End
