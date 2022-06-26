
class CfgPatches {
	class catears {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		requiredVersion = 0.1;
		author = "Xelantro"; 	
		authorUrl = "gamerparty.eu";
		version = "1.0.0";
		versionAr[] = {1,0,0};
		versionStr = "1.0.0";
		mail = "dev@memium.de";
		fileName = "catears.pbo";
	};
};

class CfgWeapons {
	/*extern*/ class NVGoggles;

	class catears_nvg1: NVGoggles {
		author = "Xelantro";
		displayName = "Cat Ears (Pink)";
		picture = "\catears\icon\icon_pink.paa";

		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "\catears\nvg_overlay\nvg_scene.p3d";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		descriptionUse = "$STR_A3_cfgWeapons_Default_NVGoggles1";
		
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0};

		class Library {
			libTextDesc = "$STR_LIB_NV_GOGGLES";
		};
		descriptionShort = "$STR_DSS_NV_GOGGLES";

		class ItemInfo {
			type = 616;
			hmdType = 0;
			uniformModel = "\catears\model\catears_pink.p3d";
			modelOff = "\catears\model\catears_pink.p3d";
			mass = 24;
		};
	};
	
	class catears_nvg1_helm: catears_nvg1 {
		author = "Xelantro";
		displayName = "Cat Ears (Pink, Helmet)";
		class ItemInfo {
			uniformModel = "\catears\model\catears_pink_h.p3d";
			modelOff = "\catears\model\catears_pink_h.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};
	
	
	class catears_nvg2: catears_nvg1 {
		author = "Xelantro";
		displayName = "Cat Ears (Olive)";
		picture = "\catears\icon\icon_olive.paa";
		class ItemInfo {
			uniformModel = "\catears\model\catears_olive.p3d";
			modelOff = "\catears\model\catears_olive.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};

	class catears_nvg2_helm: catears_nvg2 {
		author = "Xelantro";
		displayName = "Cat Ears (Olive, Helmet)";
		class ItemInfo {
			uniformModel = "\catears\model\catears_olive_h.p3d";
			modelOff = "\catears\model\catears_olive_h.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};
	
	class catears_nvg3: catears_nvg1 {
		author = "Xelantro";
		displayName = "Cat Ears (Tan)";
		picture = "\catears\icon\icon_tan.paa";
		class ItemInfo {
			uniformModel = "\catears\model\catears_tan.p3d";
			modelOff = "\catears\model\catears_tan.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};

	class catears_nvg3_helm: catears_nvg3 {
		author = "Xelantro";
		displayName = "Cat Ears (Tan, Helmet)";
		class ItemInfo {
			uniformModel = "\catears\model\catears_tan_h.p3d";
			modelOff = "\catears\model\catears_tan_h.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};
	
	class catears_nvg4: catears_nvg1 {
		author = "Xelantro";
		displayName = "Cat Ears (White)";
		picture = "\catears\icon\icon_white.paa";
		class ItemInfo {
			uniformModel = "\catears\model\catears_white.p3d";
			modelOff = "\catears\model\catears_white.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};

	class catears_nvg4_helm: catears_nvg4 {
		author = "Xelantro";
		displayName = "Cat Ears (White, Helmet)";
		class ItemInfo {
			uniformModel = "\catears\model\catears_white_h.p3d";
			modelOff = "\catears\model\catears_white_h.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};
	
	class catears_nvg5: catears_nvg1 {
		author = "Xelantro";
		displayName = "Cat Ears (Black)";
		picture = "\catears\icon\icon_black.paa";
		class ItemInfo {
			uniformModel = "\catears\model\catears_black.p3d";
			modelOff = "\catears\model\catears_black.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};

	class catears_nvg5_helm: catears_nvg5 {
		author = "Xelantro";
		displayName = "Cat Ears (Black, Helmet)";
		class ItemInfo {
			uniformModel = "\catears\model\catears_black_h.p3d";
			modelOff = "\catears\model\catears_black_h.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};
	
	class catears_nvg6: catears_nvg1 {
		author = "Xelantro";
		displayName = "Cat Ears (Brown)";
		picture = "\catears\icon\icon_brown.paa";
		class ItemInfo {
			uniformModel = "\catears\model\catears_brown.p3d";
			modelOff = "\catears\model\catears_brown.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};

	class catears_nvg6_helm: catears_nvg6 {
		author = "Xelantro";
		displayName = "Cat Ears (Brown, Helmet)";
		class ItemInfo {
			uniformModel = "\catears\model\catears_brown_h.p3d";
			modelOff = "\catears\model\catears_brown_h.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};
	
	class catears_nvg7: catears_nvg1 {
		author = "Xelantro";
		displayName = "Cat Ears (Arid)";
		picture = "\catears\icon\icon_arid.paa";
		class ItemInfo {
			uniformModel = "\catears\model\catears_arid.p3d";
			modelOff = "\catears\model\catears_arid.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};

	class catears_nvg7_helm: catears_nvg7 {
		author = "Xelantro";
		displayName = "Cat Ears (Arid, Helmet)";
		class ItemInfo {
			uniformModel = "\catears\model\catears_arid_h.p3d";
			modelOff = "\catears\model\catears_arid_h.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};
	
	class catears_nvg8: catears_nvg1 {
		author = "Xelantro";
		displayName = "Cat Ears (Semi-Arid)";
		picture = "\catears\icon\icon_semiarid.paa";
		class ItemInfo {
			uniformModel = "\catears\model\catears_semiarid.p3d";
			modelOff = "\catears\model\catears_semiarid.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};

	class catears_nvg8_helm: catears_nvg8 {
		author = "Xelantro";
		displayName = "Cat Ears (Semi-Arid, Helmet)";
		class ItemInfo {
			uniformModel = "\catears\model\catears_semiarid_h.p3d";
			modelOff = "\catears\model\catears_semiarid_h.p3d";
			type = 616;
			hmdType = 0;
			mass = 24;
		};
	};
};
