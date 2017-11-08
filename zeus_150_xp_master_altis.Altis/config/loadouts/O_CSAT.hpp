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
	
	class O_Soldier_TL_F
	{
		displayName = "Team Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "", "hgun_Rook40_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"16Rnd_9x21_Mag", 2}, {"SmokeShell", 5}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Soldier_AR_F
	{
		displayName = "Auto Rifleman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"LMG_Zafir_F", "", "hgun_Rook40_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "150Rnd_762x54_Box"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"150Rnd_762x54_Box", 3}, {"SmokeShell", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Soldier_M_F
	{
		displayName = "Marksman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"srifle_DMR_01_F", "", "hgun_Rook40_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_DMS", "acc_pointer_IR", "bipod_02_F_blk", "ACE_10Rnd_762x54_Tracer_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetSpecO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"10Rnd_762x54_Mag", 8}, {"ACE_10Rnd_762x54_Tracer_mag", 4}, {"16Rnd_9x21_Mag", 2}, {"SmokeShell", 3}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Soldier_LAT_F
	{
		displayName = "Light Anti-tank"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "launch_O_Titan_short_F", "hgun_Rook40_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"Titan_AT"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_FieldPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"16Rnd_9x21_Mag", 2}, {"SmokeShell", 5}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {"Titan_AT", 2}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Soldier_F
	{
		displayName = "Rifleman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "", "hgun_Rook40_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"16Rnd_9x21_Mag", 2}, {"SmokeShell", 5}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Soldier_A_F
	{
		displayName = "Ammo Bearer"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "", "hgun_Rook40_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_Kitbag_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"16Rnd_9x21_Mag", 2}, {"SmokeShell", 5}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"150Rnd_762x54_Box", 2}, {"30Rnd_65x39_caseless_green_mag_Tracer", 14}, {"10Rnd_762x54_Mag", 5}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Sniper_F
	{
		displayName = "Sniper"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"srifle_GM6_camo_F", "", "hgun_Rook40_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_LRPS", "", "5Rnd_127x108_Mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_FullGhillie_sard";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"optic_Nightstalker", 1}, {"5Rnd_127x108_Mag", 6}, {"16Rnd_9x21_Mag", 2}, {"5Rnd_127x108_APDS_Mag", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"5Rnd_127x108_Mag", 4}, {"SmokeShell", 3}, {"SmokeShellGreen", 2}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	
	class O_Spotter_F
	{
		displayName = "Spotter"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_Katiba_F", "", "hgun_Rook40_F", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ERCO_blk_F", "acc_pointer_IR", "30Rnd_65x39_caseless_green"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {""}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"16Rnd_9x21_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_O_FullGhillie_sard";
		headgearClass = "";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_Kitbag_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid", "NVGoggles"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"30Rnd_65x39_caseless_green", 6}, {"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"16Rnd_9x21_Mag", 2}, {"SmokeShell", 5}, {"HandGrenade", 2}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_Tripod", 1}, {"ACE_SpottingScope", 1}, {"5Rnd_127x108_Mag", 8}, {"5Rnd_127x108_APDS_Mag", 3}}; // Items to place in backpack. Includes weapon magazines		
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_morphine", 5}, {"ACE_epinephrine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};