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
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc", "ItemcTab", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
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
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc", "ItemcTab", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
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
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc", "ItemAndroid", "NVGoggles_INDEP"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"30Rnd_9x21_Mag", 2}, {"HandGrenade", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"ACE_EntrenchingTool", 1}, {"30Rnd_65x39_caseless_mag", 6}, {"30Rnd_65x39_caseless_mag_Tracer", 2}, {"ACE_CableTie", 2}, {"AUR_Rope_Item", 1}, {"ItemcTabHCam", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShellGreen", 5}, {"SmokeShellRed", 5}, {"SmokeShell", 5}, {"B_IR_Grenade", 2}, {"ACE_Chemlight_IR", 2}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 7}, {"ACE_epinephrine", 5}}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};