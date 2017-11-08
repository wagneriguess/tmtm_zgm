class loadouts
{
	class O_Officer_F
	{
		displayName = "Commander"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "", "hgun_Pistol_heavy_02_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"6Rnd_45ACP_Cylinder"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_OfficerUniform_ocamo";
		headgearClass = "H_Beret_ocamo";
		facewearClass = "G_Aviator";
		vestClass = "V_TacVest_khk";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemcTab", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"6Rnd_45ACP_Cylinder", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShell", 8}, {"SmokeShellRed", 2}, {"SmokeShellGreen", 3}, {"ACE_Chemlight_HiWhite", 3}, {"ACE_Chemlight_HiRed" 3}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class cmd_medic
	{
		displayName = "Commander Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "", "hgun_Rook40_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_TacVest_brn";
		backpackClass = "B_Kitbag_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemcTab", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"16Rnd_9x21_Mag", 3}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShell", 10}, {"SmokeShellGreen", 4}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {{"ACE_fieldDressing", 70}, {"ACE_epinephrine", 25}, {"ACE_morphine", 25}, {"ACE_bloodIV", 5}, {"ACE_bloodIV_500", 10}}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Soldier_SL_F
	{
		displayName = "Squad Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "", "hgun_Rook40_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_TacVest_brn";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"16Rnd_9x21_Mag", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShell", 10}, {"SmokeShellGreen", 4}, {"HandGrenade", 2}, {"O_IR_Grenade", 2}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Medic_F
	{
		displayName = "Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "", "hgun_Rook40_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_TacVest_brn";
		backpackClass = "B_Kitbag_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"16Rnd_9x21_Mag", 3}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"SmokeShell", 10}, {"SmokeShellGreen", 4}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {{"ACE_fieldDressing", 70}, {"ACE_epinephrine", 25}, {"ACE_morphine", 25}, {"ACE_bloodIV", 5}, {"ACE_bloodIV_500", 10}}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};