class Atlas_B_G_Plane_Fighter_01_F: B_Plane_Fighter_01_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {mfd_off,0},
            {mfd_on,0},
            {mfd_radar_on,0},
            {mfd_radar_hide,0},
            {mfd_mball_off,0},
            {mfd_mball_down_hide,0},
            {mfd_mball_ok_hide_1,0},
            {mfd_mball_ok_hide_2,0},
            {mfd_mball_up_hide,0},
            {mfd_mastercaution_hide,0},
            {mfd_apufire_hide,0},
            {mfd_engine_l_fire_hide,0},
            {mfd_engine_r_fire_hide,0},
            {mfd_damage_hide,0},
            {mfd_gun_ammo_indicator,1},
            {mfd_flaps_indicator,0},
            {mfd_gear_up,0},
            {mfd_gear_down,0},
            {mfd_horizon_ball_rotate,0},
            {mfd_horizon_ball_horizondive_0,-0.02},
            {mfd_horizon_ball_horizondive_1,-0.02},
            {mfd_horizon_ball_horizondive_2,-0.02},
            {mfd_compass_rotate,0},
            {mfd_fuel_indicator,0.09},
            {mfd_eng_throttle_indicator_hide,0},
            {mfd_eng_throttle_indicator_1,0},
            {mfd_eng_throttle_indicator_2,0},
            {mfd_eng_throttle_indicator_3,0},
            {mfd_eng_throttle_indicator_4,0},
            {mfd_eng_throttle_indicator_5,0},
            {mfd_eng_throttle_indicator_6,0},
            {mfd_eng_throttle_indicator_7,0},
            {mfd_eng_throttle_indicator_8,0},
            {mfd_eng_throttle_indicator_9,0},
            {mfd_eng_throttle_indicator_10,0},
            {mfd_eng_throttle_indicator_11,0},
            {mfd_eng_throttle_indicator_12,0},
            {mfd_eng_throttle_indicator_13,0},
            {mfd_eng_throttle_indicator_14,0},
            {mfd_eng_throttle_indicator_15,0},
            {mfd_eng_throttle_indicator_16,0},
            {mfd_eng_throttle_indicator_17,0},
            {mfd_eng_throttle_indicator_18,0},
            {mfd_eng_throttle_indicator_19,0},
            {mfd_eng_throttle_indicator_20,0},
            {muzzleflashrot,660},
            {pylon_damagehide,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {canopy_open,0},
            {canopy_hydraulic_1,0},
            {canopy_hydraulic_2,0},
            {canopy_hydraulic_3_1,0},
            {canopy_hydraulic_3_2,0},
            {ladder_door,0},
            {ladder_fold,0},
            {ladder_fold_1,0},
            {ladder_fold_2,0},
            {ladder_colapse_1,0},
            {ladder_colapse_2,0},
            {ladder_colapse_3,0},
            {slat_l1_aoa,0},
            {slat_l2_aoa,0},
            {slat_r1_aoa,0},
            {slat_r2_aoa,0},
            {slat_l1_flap,0},
            {slat_l2_flap,0},
            {slat_r1_flap,0},
            {slat_r2_flap,0},
            {aileron_l,0},
            {aileron_l_flap,0},
            {aileron_r,0},
            {aileron_r_flap,0},
            {aileron_l_cover_a,0},
            {aileron_r_cover_a,0},
            {flap_l,0},
            {flap_r,0},
            {flap_l_cover,0},
            {flap_r_cover,0},
            {aileron_l_cover,0},
            {aileron_r_cover,0},
            {rudder_l,0},
            {rudder_l_brake,0},
            {rudder_r,0},
            {rudder_r_brake,0},
            {elevator_l_1,0},
            {elevator_l_2,0},
            {elevator_r_1,0},
            {elevator_r_2,0},
            {gear_door_f_1,0},
            {gear_door_f_2,0},
            {gear_door_f_3,0},
            {gear_door_f_4,0},
            {gear_door_f_5,0},
            {gear_door_l_1,0},
            {gear_door_l_2,0},
            {gear_door_r_1,0},
            {gear_door_r_2,0},
            {gear_f,0},
            {gear_f_hook,0},
            {gear_f_hydraulic_1,0},
            {gear_f_hydraulic_2,0},
            {suspension_f,0},
            {gear_f_suspension_spring_1,0},
            {gear_f_suspension_spring_2,0},
            {suspension_f_lock,0},
            {gear_f_suspension_spring_1_lock,0},
            {gear_f_suspension_spring_2_lock,0},
            {gear_f_stearing,0},
            {gear_rear_l,0},
            {gear_rear_hydraulic_l_1,0},
            {gear_rear_hydraulic_l_2_stage1,0},
            {gear_rear_hydraulic_l_2_stage2,0},
            {gear_rear_hydraulic_l_2_fold,0},
            {suspension_l,0},
            {gear_rear_suspension_spring_l_1,0},
            {gear_rear_suspension_spring_l_2,0},
            {suspension_l_lock,0},
            {gear_rear_suspension_spring_l_1_lock,0},
            {gear_rear_suspension_spring_l_2_lock,0},
            {gear_rear_r,0},
            {gear_rear_hydraulic_r_1,0},
            {gear_rear_hydraulic_r_2_stage1,0},
            {gear_rear_hydraulic_r_2_stage2,0},
            {gear_rear_hydraulic_r_2_fold,0},
            {suspension_r,0},
            {gear_rear_suspension_spring_r_1,0},
            {gear_rear_suspension_spring_r_2,0},
            {suspension_r_lock,0},
            {gear_rear_suspension_spring_r_1_lock,0},
            {gear_rear_suspension_spring_r_2_lock,0},
            {wheels_f,0},
            {wheel_l,0},
            {wheel_r,0},
            {engine_fan_l,0},
            {engine_fan_r,0},
            {engine_nozzle_l1,0},
            {engine_nozzle_l1_aileron,0},
            {engine_nozzle_l1_cover,0},
            {engine_nozzle_l1_cover_aileron,0},
            {engine_nozzle_r1,0},
            {engine_nozzle_r1_aileron,0},
            {engine_nozzle_r1_cover,0},
            {engine_nozzle_r1_cover_aileron,0},
            {engine_nozzle_l2,0},
            {engine_nozzle_l2_aileron,0},
            {engine_nozzle_l2_cover,0},
            {engine_nozzle_l2_cover_aileron,0},
            {engine_nozzle_r2,0},
            {engine_nozzle_r2_aileron,0},
            {engine_nozzle_r2_cover,0},
            {engine_nozzle_r2_cover_aileron,0},
            {engine_fire_l,0},
            {engine_fire_right,0},
            {engine_fire_l_damage_hide,0},
            {engine_fire_r_damage_hide,0},
            {weapons_bay_l_1,0},
            {weapons_bay_l_2,0},
            {weapons_bay_r_1,0},
            {weapons_bay_r_2,0},
            {weapons_rail_l_1,0},
            {weapons_rail_l_1_retract,0},
            {weapons_rail_l_1_colapse,0},
            {weapons_rail_r_1,0},
            {weapons_rail_r_1_retract,0},
            {weapons_rail_r_1_colapse,0},
            {weapons_bay_c_1,0},
            {weapons_bay_c_2,0},
            {weapons_bay_c_3,0},
            {weapons_bay_c_4,0},
            {collision_lights_green,0},
            {collision_lights_green_wing,0},
            {collision_lights_red,0},
            {collision_lights_red_wing,0},
            {collision_lights_white_blinking,0},
            {mainturret,0},
            {maingun,0.44}
        };
		hide[] =
        {
            clan,
            zasleh,
            gear_f_lights,
            "zadni svetlo",
            autobacklit,
            poskozeni
        };
		verticalOffset = 2.445;
		verticalOffsetWorld = -0.051;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Plane_Fighter_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Fighter_Pilot_F;
	typicalCargo[] = {Atlas_B_G_Fighter_Pilot_F};
	textureList[] = {Luftwaffe,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Air_F_Atlas\Plane_Fighter_01\Data\Fighter_01_fuselage_01_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Plane_Fighter_01\Data\Fighter_01_fuselage_02_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_glass_01_CA.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_01_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_02_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_03_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_05_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_01_CA.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_00_CA.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_01_CA.paa"
    };
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Atlas_B_G_Ejection_Seat_Plane_Fighter_01_F;
	};
};
class Atlas_B_G_Plane_Fighter_01_Stealth_F: B_Plane_Fighter_01_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {mfd_off,0},
            {mfd_on,0},
            {mfd_radar_on,0},
            {mfd_radar_hide,0},
            {mfd_mball_off,0},
            {mfd_mball_down_hide,0},
            {mfd_mball_ok_hide_1,0},
            {mfd_mball_ok_hide_2,0},
            {mfd_mball_up_hide,0},
            {mfd_mastercaution_hide,0},
            {mfd_apufire_hide,0},
            {mfd_engine_l_fire_hide,0},
            {mfd_engine_r_fire_hide,0},
            {mfd_damage_hide,0},
            {mfd_gun_ammo_indicator,1},
            {mfd_flaps_indicator,0},
            {mfd_gear_up,0},
            {mfd_gear_down,0},
            {mfd_horizon_ball_rotate,0},
            {mfd_horizon_ball_horizondive_0,-0.02},
            {mfd_horizon_ball_horizondive_1,-0.02},
            {mfd_horizon_ball_horizondive_2,-0.02},
            {mfd_compass_rotate,0},
            {mfd_fuel_indicator,0.09},
            {mfd_eng_throttle_indicator_hide,0},
            {mfd_eng_throttle_indicator_1,0},
            {mfd_eng_throttle_indicator_2,0},
            {mfd_eng_throttle_indicator_3,0},
            {mfd_eng_throttle_indicator_4,0},
            {mfd_eng_throttle_indicator_5,0},
            {mfd_eng_throttle_indicator_6,0},
            {mfd_eng_throttle_indicator_7,0},
            {mfd_eng_throttle_indicator_8,0},
            {mfd_eng_throttle_indicator_9,0},
            {mfd_eng_throttle_indicator_10,0},
            {mfd_eng_throttle_indicator_11,0},
            {mfd_eng_throttle_indicator_12,0},
            {mfd_eng_throttle_indicator_13,0},
            {mfd_eng_throttle_indicator_14,0},
            {mfd_eng_throttle_indicator_15,0},
            {mfd_eng_throttle_indicator_16,0},
            {mfd_eng_throttle_indicator_17,0},
            {mfd_eng_throttle_indicator_18,0},
            {mfd_eng_throttle_indicator_19,0},
            {mfd_eng_throttle_indicator_20,0},
            {muzzleflashrot,660},
            {pylon_damagehide,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {canopy_open,0},
            {canopy_hydraulic_1,0},
            {canopy_hydraulic_2,0},
            {canopy_hydraulic_3_1,0},
            {canopy_hydraulic_3_2,0},
            {ladder_door,0},
            {ladder_fold,0},
            {ladder_fold_1,0},
            {ladder_fold_2,0},
            {ladder_colapse_1,0},
            {ladder_colapse_2,0},
            {ladder_colapse_3,0},
            {slat_l1_aoa,0},
            {slat_l2_aoa,0},
            {slat_r1_aoa,0},
            {slat_r2_aoa,0},
            {slat_l1_flap,0},
            {slat_l2_flap,0},
            {slat_r1_flap,0},
            {slat_r2_flap,0},
            {aileron_l,0},
            {aileron_l_flap,0},
            {aileron_r,0},
            {aileron_r_flap,0},
            {aileron_l_cover_a,0},
            {aileron_r_cover_a,0},
            {flap_l,0},
            {flap_r,0},
            {flap_l_cover,0},
            {flap_r_cover,0},
            {aileron_l_cover,0},
            {aileron_r_cover,0},
            {rudder_l,0},
            {rudder_l_brake,0},
            {rudder_r,0},
            {rudder_r_brake,0},
            {elevator_l_1,0},
            {elevator_l_2,0},
            {elevator_r_1,0},
            {elevator_r_2,0},
            {gear_door_f_1,0},
            {gear_door_f_2,0},
            {gear_door_f_3,0},
            {gear_door_f_4,0},
            {gear_door_f_5,0},
            {gear_door_l_1,0},
            {gear_door_l_2,0},
            {gear_door_r_1,0},
            {gear_door_r_2,0},
            {gear_f,0},
            {gear_f_hook,0},
            {gear_f_hydraulic_1,0},
            {gear_f_hydraulic_2,0},
            {suspension_f,0},
            {gear_f_suspension_spring_1,0},
            {gear_f_suspension_spring_2,0},
            {suspension_f_lock,0},
            {gear_f_suspension_spring_1_lock,0},
            {gear_f_suspension_spring_2_lock,0},
            {gear_f_stearing,0},
            {gear_rear_l,0},
            {gear_rear_hydraulic_l_1,0},
            {gear_rear_hydraulic_l_2_stage1,0},
            {gear_rear_hydraulic_l_2_stage2,0},
            {gear_rear_hydraulic_l_2_fold,0},
            {suspension_l,0},
            {gear_rear_suspension_spring_l_1,0},
            {gear_rear_suspension_spring_l_2,0},
            {suspension_l_lock,0},
            {gear_rear_suspension_spring_l_1_lock,0},
            {gear_rear_suspension_spring_l_2_lock,0},
            {gear_rear_r,0},
            {gear_rear_hydraulic_r_1,0},
            {gear_rear_hydraulic_r_2_stage1,0},
            {gear_rear_hydraulic_r_2_stage2,0},
            {gear_rear_hydraulic_r_2_fold,0},
            {suspension_r,0},
            {gear_rear_suspension_spring_r_1,0},
            {gear_rear_suspension_spring_r_2,0},
            {suspension_r_lock,0},
            {gear_rear_suspension_spring_r_1_lock,0},
            {gear_rear_suspension_spring_r_2_lock,0},
            {wheels_f,0},
            {wheel_l,0},
            {wheel_r,0},
            {engine_fan_l,0},
            {engine_fan_r,0},
            {engine_nozzle_l1,0},
            {engine_nozzle_l1_aileron,0},
            {engine_nozzle_l1_cover,0},
            {engine_nozzle_l1_cover_aileron,0},
            {engine_nozzle_r1,0},
            {engine_nozzle_r1_aileron,0},
            {engine_nozzle_r1_cover,0},
            {engine_nozzle_r1_cover_aileron,0},
            {engine_nozzle_l2,0},
            {engine_nozzle_l2_aileron,0},
            {engine_nozzle_l2_cover,0},
            {engine_nozzle_l2_cover_aileron,0},
            {engine_nozzle_r2,0},
            {engine_nozzle_r2_aileron,0},
            {engine_nozzle_r2_cover,0},
            {engine_nozzle_r2_cover_aileron,0},
            {engine_fire_l,0},
            {engine_fire_right,0},
            {engine_fire_l_damage_hide,0},
            {engine_fire_r_damage_hide,0},
            {weapons_bay_l_1,0},
            {weapons_bay_l_2,0},
            {weapons_bay_r_1,0},
            {weapons_bay_r_2,0},
            {weapons_rail_l_1,0},
            {weapons_rail_l_1_retract,0},
            {weapons_rail_l_1_colapse,0},
            {weapons_rail_r_1,0},
            {weapons_rail_r_1_retract,0},
            {weapons_rail_r_1_colapse,0},
            {weapons_bay_c_1,0},
            {weapons_bay_c_2,0},
            {weapons_bay_c_3,0},
            {weapons_bay_c_4,0},
            {collision_lights_green,0},
            {collision_lights_green_wing,0},
            {collision_lights_red,0},
            {collision_lights_red_wing,0},
            {collision_lights_white_blinking,0},
            {mainturret,0},
            {maingun,0.44}
        };
		hide[] =
        {
            clan,
            zasleh,
            gear_f_lights,
            "zadni svetlo",
            autobacklit,
            poskozeni
        };
		verticalOffset = 2.445;
		verticalOffsetWorld = -0.051;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Plane_Fighter_01_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Fighter_Pilot_F;
	typicalCargo[] = {Atlas_B_G_Fighter_Pilot_F};
	textureList[] = {Luftwaffe,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Air_F_Atlas\Plane_Fighter_01\Data\Fighter_01_fuselage_01_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Plane_Fighter_01\Data\Fighter_01_fuselage_02_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_glass_01_CA.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_01_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_02_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_03_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_cockpit_05_CO.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_01_CA.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_00_CA.paa",
        "\A3\Air_F_Jets\Plane_Fighter_01\Data\Numbers\Fighter_01_01_CA.paa"
    };
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Atlas_B_G_Ejection_Seat_Plane_Fighter_01_F;
	};
};
class Atlas_B_G_Ejection_Seat_Plane_Fighter_01_F: Ejection_Seat_Plane_Fighter_01_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Fighter_Pilot_F;
};

/* Bundeswehr Arid */
class Atlas_B_G_Plane_Fighter_01_ard_F: Atlas_B_G_Plane_Fighter_01_F
{
    scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_G_ard_F;
	crew = Atlas_B_G_Fighter_Pilot_ard_F;
	typicalCargo[] = {Atlas_B_G_Fighter_Pilot_ard_F};
    class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Atlas_B_G_Ejection_Seat_Plane_Fighter_01_ard_F;
	};
};
class Atlas_B_G_Plane_Fighter_01_Stealth_ard_F: Atlas_B_G_Plane_Fighter_01_Stealth_F
{
    scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_G_ard_F;
	crew = Atlas_B_G_Fighter_Pilot_ard_F;
	typicalCargo[] = {Atlas_B_G_Fighter_Pilot_ard_F};
    class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Atlas_B_G_Ejection_Seat_Plane_Fighter_01_ard_F;
	};
};
class Atlas_B_G_Ejection_Seat_Plane_Fighter_01_ard_F: Ejection_Seat_Plane_Fighter_01_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = Atlas_BLU_G_ard_F;
	crew = Atlas_B_G_Fighter_Pilot_ard_F;
};