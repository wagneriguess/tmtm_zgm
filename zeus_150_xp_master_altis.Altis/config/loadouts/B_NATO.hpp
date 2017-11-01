class loadouts
{
	class B_Officer_F
	{
		displayName = "Commander"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_Pistol_heavy_01_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"11Rnd_45ACP_Mag", "optic_MRD"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_Beret_02";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "TFAR_rt1523g_big_bwmod";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemcTab", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_CableTie", 2}, {"11Rnd_45ACP_Mag", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_EntrenchingTool", 1}, {"30Rnd_65x39_caseless_mag", 6}, {"30Rnd_65x39_caseless_mag_Tracer", 3}, {"SmokeShell", 3}, {"SmokeShellRed", 3}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShellGreen", 3}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 14}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class cmd_medic
	{
		displayName = "Commander Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_P07_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier2_rgr";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemcTab", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_CableTie", 2}, {"ItemcTabHCam", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_mag", 5}, {"30Rnd_65x39_caseless_mag_Tracer", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShellGreen", 5}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 5}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {{"ACE_fieldDressing", 40}, {"ACE_morphine", 15}, {"ACE_epinephrine", 15}}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {{"ACE_bloodIV", 6}, {"ACE_bloodIV_500", 10}, {"ACE_morphine", 15}, {"ACE_epinephrine", 15}, {"ACE_fieldDressing", 20}}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
	};
	
	class B_Soldier_SL_F
	{
		displayName = "Squad Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_P07_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "TFAR_rt1523g_big_bwmod";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"30Rnd_9x21_Mag", 2}, {"HandGrenade", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_EntrenchingTool", 1}, {"30Rnd_65x39_caseless_mag", 6}, {"30Rnd_65x39_caseless_mag_Tracer", 2}, {"ACE_CableTie", 2}, {"ItemcTabHCam", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShellGreen", 5}, {"SmokeShellRed", 5}, {"SmokeShell", 5}, {"B_IR_Grenade", 2}, {"ACE_Chemlight_IR", 2}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 7}, {"ACE_epinephrine", 5}}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class B_Medic_F
	{
		displayName = "Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_P07_F", ""}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"30Rnd_9x21_Mag", 2}, {"ACE_EntrenchingTool", 1}, {"ItemcTabHCam", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_mag", 5}, {"30Rnd_65x39_caseless_mag_Tracer", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShellGreen", 4}, {"SmokeShell", 6}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {{"ACE_fieldDressing", 40}, {"ACE_morphine", 15}, {"ACE_epinephrine", 15}}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {{"ACE_bloodIV", 6}, {"ACE_bloodIV_500", 10}, {"ACE_morphine", 15}, {"ACE_epinephrine", 15}, {"ACE_fieldDressing", 20}}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class B_Soldier_TL_F
	{
		displayName = "Team Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_GL_Black_F", "", "hgun_P07_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag", "3Rnd_HE_Grenade_shell"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"16Rnd_9x21_Mag", 1}, {"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"1Rnd_HE_Grenade_shell", 8}, {"30Rnd_65x39_caseless_mag", 6}, {"30Rnd_65x39_caseless_mag_Tracer", 2}, {"SmokeShell", 6}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class B_Soldier_AR_F
	{
		displayName = "Auto Rifleman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_SW_Black_F", "", "hgun_P07_F", ""}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "bipod_01_F_blk", "100Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"SmokeShell", 4}, {"ItemcTabHCam", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"100Rnd_65x39_caseless_mag", 3}, {"100Rnd_65x39_caseless_mag_Tracer", 2}, {"HandGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class B_Soldier_M_F
	{
		displayName = "Marksman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MXM_Black_F", "", "hgun_P07_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_DMS", "acc_pointer_IR", "bipod_01_F_blk", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_Booniehat_mcamo";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_RangeCard", 1}, {"ItemcTabHCam", 1}, {"ACE_Kestrel4500", 1}, {"SmokeShell", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_EntrenchingTool", 1}, {"30Rnd_65x39_caseless_mag", 6}, {"16Rnd_9x21_Mag", 1}, {"30Rnd_65x39_caseless_mag_Tracer", 3}, {"HandGrenade", 2}, {"SmokeShell", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class B_Soldier_LAT_F
	{
		displayName = "Light Antitank"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "launch_NLAW_F", "hgun_P07_F", ""}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"_i"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"16Rnd_9x21_Mag", 1}, {"SmokeShell", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ItemcTabHCam", 1}, {"30Rnd_65x39_caseless_mag", 6}, {"ACE_EntrenchingTool", 1}, {"30Rnd_65x39_caseless_mag_Tracer", 2}, {"HandGrenade", 2}, {"SmokeShell", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"_i", 2}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};

	class B_Soldier_F
	{
		displayName = "Rifleman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_P07_F", ""}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"16Rnd_9x21_Mag", 2}, {"SmokeShell", 1}, {"ItemcTabHCam", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_EntrenchingTool", 1}, {"30Rnd_65x39_caseless_mag", 7}, {"SmokeShell", 5}, {"30Rnd_65x39_caseless_mag_Tracer", 2}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};

	class B_Soldier_A_F
	{
		displayName = "Ammo Bearer"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_P07_F", ""}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"16Rnd_9x21_Mag", 2}, {"SmokeShell", 1}, {"ItemcTabHCam", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_EntrenchingTool", 1}, {"30Rnd_65x39_caseless_mag", 7}, {"SmokeShell", 5}, {"30Rnd_65x39_caseless_mag_Tracer", 2}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"100Rnd_65x39_caseless_mag", 2}, {"30Rnd_65x39_caseless_mag", 15}, {"NLAW_F", 1}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class B_Sniper_F
	{
		displayName = "Special Snowflake Sniper"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"srifle_LRR_camo_F", "", "hgun_P07_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_LRPS", "", "7Rnd_408_Mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_FullGhillie_sard";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "TFAR_rt1523g_big_bwmod";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"16Rnd_9x21_Mag", 3}, {"ACE_RangeCard", 1}, {"ItemcTabHCam", 1}, {"optic_Nightstalker", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"7Rnd_408_Mag", 10}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShell", 3}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class B_Spotter_F
	{
		displayName = "Spotter"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_P07_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_FullGhillie_sard";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"16Rnd_9x21_Mag", 2}, {"ACE_RangeCard", 1}, {"ItemcTabHCam", 1}, {"ACE_Kestrel4500", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_mag", 4}, {"30Rnd_65x39_caseless_mag_Tracer", 4}, {"B_IR_Grenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_SpottingScope", 1}, {"ACE_Tripod", 1}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 4}, {"SmokeShellRed", 2}, {"SmokeShellGreen", 2}, {"7Rnd_408_Mag", 11}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 20}, {"ACE_morphine", 10}, {"ACE_epinephrine", 10}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {{"ACE_fieldDressing", 10}, {"ACE_bloodIV", 2}, {"ACE_bloodIV_500", 4}}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class crew_lead
	{
		displayName = "Crew Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_P07_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "TFAR_rt1523g_big_bwmod";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"16Rnd_9x21_Mag", 2}, {"ItemcTabHCam", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_mag", 5}, {"30Rnd_65x39_caseless_mag_Tracer", 2}, {"SmokeShell", 6}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ToolKit", 1}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class B_Crew_F
	{
		displayName = "Crew Member"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MX_Black_F", "", "hgun_P07_F", ""}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_Hamr", "acc_pointer_IR", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"30Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"16Rnd_9x21_Mag", 2}, {"ItemcTabHCam", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_mag", 5}, {"30Rnd_65x39_caseless_mag_Tracer", 2}, {"SmokeShell", 6}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ToolKit", 1}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
};