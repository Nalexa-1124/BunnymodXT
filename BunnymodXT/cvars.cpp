#include "stdafx.hpp"

#include "cvars.hpp"

namespace CVars
{
	// Engine CVars
	CVarWrapper _bxt_taslog("_bxt_taslog", "0");
	CVarWrapper _bxt_min_frametime("_bxt_min_frametime", "0");
	CVarWrapper _bxt_norefresh("_bxt_norefresh", "0");
	CVarWrapper _bxt_bunnysplit_time_update_frequency("_bxt_bunnysplit_time_update_frequency", "41");
	CVarWrapper bxt_taslog_filename("bxt_taslog_filename", "taslogger.log");
	CVarWrapper bxt_autopause("bxt_autopause", "0");
	CVarWrapper bxt_interprocess_enable("bxt_interprocess_enable", "0");
	CVarWrapper bxt_fade_remove("bxt_fade_remove", "0");

	CVarWrapper con_color;
	CVarWrapper sv_maxvelocity;
	CVarWrapper sv_maxspeed;
	CVarWrapper sv_stopspeed;
	CVarWrapper sv_friction;
	CVarWrapper edgefriction;
	CVarWrapper sv_accelerate;
	CVarWrapper sv_airaccelerate;
	CVarWrapper sv_gravity;
	CVarWrapper sv_stepsize;
	CVarWrapper sv_bounce;

	// Serverside CVars
	CVarWrapper bxt_autojump("bxt_autojump", "0");
	CVarWrapper bxt_bhopcap("bxt_bhopcap", "1");
	CVarWrapper bxt_timer_autostop("bxt_timer_autostop", "1");
	CVarWrapper bxt_show_hidden_entities("bxt_show_hidden_entities", "0");
	CVarWrapper bxt_show_triggers("bxt_show_triggers", "0");

	// Clientside CVars
	CVarWrapper bxt_autojump_prediction("bxt_autojump_prediction", "0");
	CVarWrapper bxt_bhopcap_prediction("bxt_bhopcap_prediction", "1");
	CVarWrapper bxt_show_nodes("bxt_show_nodes", "0");
	CVarWrapper bxt_hud("bxt_hud", "1");
	CVarWrapper bxt_hud_color("bxt_hud_color", "");
	CVarWrapper bxt_hud_precision("bxt_hud_precision", "6");
	CVarWrapper bxt_hud_velocity("bxt_hud_velocity", "0");
	CVarWrapper bxt_hud_velocity_offset("bxt_hud_velocity_offset", "");
	CVarWrapper bxt_hud_velocity_anchor("bxt_hud_velocity_anchor", "1 0");
	CVarWrapper bxt_hud_origin("bxt_hud_origin", "0");
	CVarWrapper bxt_hud_origin_offset("bxt_hud_origin_offset", "");
	CVarWrapper bxt_hud_origin_anchor("bxt_hud_origin_anchor", "1 0");
	CVarWrapper bxt_hud_viewangles("bxt_hud_viewangles", "0");
	CVarWrapper bxt_hud_viewangles_offset("bxt_hud_viewangles_offset", "");
	CVarWrapper bxt_hud_viewangles_anchor("bxt_hud_viewangles_anchor", "1 0");
	CVarWrapper bxt_hud_distance("bxt_hud_distance", "0");
	CVarWrapper bxt_hud_distance_offset("bxt_hud_distance_offset", "");
	CVarWrapper bxt_hud_distance_anchor("bxt_hud_distance_anchor", "1 0");
	CVarWrapper bxt_hud_entity_hp("bxt_hud_entity_hp", "0");
	CVarWrapper bxt_hud_entity_hp_offset("bxt_hud_entity_hp_offset", "");
	CVarWrapper bxt_hud_entity_hp_anchor("bxt_hud_entity_hp_anchor", "1 0");
	CVarWrapper bxt_hud_selfgauss("bxt_hud_selfgauss", "0");
	CVarWrapper bxt_hud_selfgauss_offset("bxt_hud_selfgauss_offset", "");
	CVarWrapper bxt_hud_selfgauss_anchor("bxt_hud_selfgauss_anchor", "1 0");
	CVarWrapper bxt_hud_speedometer("bxt_hud_speedometer", "1");
	CVarWrapper bxt_hud_speedometer_offset("bxt_hud_speedometer_offset", "");
	CVarWrapper bxt_hud_speedometer_anchor("bxt_hud_speedometer_anchor", "0.5 1");
	CVarWrapper bxt_hud_jumpspeed("bxt_hud_jumpspeed", "0");
	CVarWrapper bxt_hud_jumpspeed_offset("bxt_hud_jumpspeed_offset", "");
	CVarWrapper bxt_hud_jumpspeed_anchor("bxt_hud_jumpspeed_anchor", "0.5 1");
	CVarWrapper bxt_hud_timer("bxt_hud_timer", "0");
	CVarWrapper bxt_hud_timer_offset("bxt_hud_timer_offset", "");
	CVarWrapper bxt_hud_timer_anchor("bxt_hud_timer_anchor", "0 0.5");
	CVarWrapper bxt_hud_visible_landmarks("bxt_hud_visible_landmarks", "0");
	CVarWrapper bxt_hud_visible_landmarks_offset("bxt_hud_visible_landmarks_offset", "");
	CVarWrapper bxt_hud_visible_landmarks_anchor("bxt_hud_visible_landmarks_anchor", "0.5 0");

	CVarWrapper bxt_hud_useables("bxt_hud_useables", "0");
	CVarWrapper bxt_hud_useables_radius("bxt_hud_useables_radius", "64");

	const std::vector<CVarWrapper*> allCVars =
	{
		&_bxt_taslog,
		&_bxt_min_frametime,
		&_bxt_norefresh,
		&bxt_taslog_filename,
		&bxt_autopause,
		&bxt_interprocess_enable,
		&bxt_fade_remove,
		&con_color,
		&sv_maxvelocity,
		&sv_maxspeed,
		&sv_stopspeed,
		&sv_friction,
		&edgefriction,
		&sv_accelerate,
		&sv_airaccelerate,
		&sv_gravity,
		&sv_stepsize,
		&sv_bounce,
		&bxt_autojump,
		&bxt_bhopcap,
		&bxt_timer_autostop,
		&bxt_show_hidden_entities,
		&bxt_show_triggers,
		&bxt_autojump_prediction,
		&bxt_bhopcap_prediction,
		&bxt_show_nodes,
		&bxt_hud,
		&bxt_hud_color,
		&bxt_hud_precision,
		&bxt_hud_velocity,
		&bxt_hud_velocity_offset,
		&bxt_hud_velocity_anchor,
		&bxt_hud_origin,
		&bxt_hud_origin_offset,
		&bxt_hud_origin_anchor,
		&bxt_hud_viewangles,
		&bxt_hud_viewangles_offset,
		&bxt_hud_viewangles_anchor,
		&bxt_hud_distance,
		&bxt_hud_distance_offset,
		&bxt_hud_distance_anchor,
		&bxt_hud_entity_hp,
		&bxt_hud_entity_hp_offset,
		&bxt_hud_entity_hp_anchor,
		&bxt_hud_selfgauss,
		&bxt_hud_selfgauss_offset,
		&bxt_hud_selfgauss_anchor,
		&bxt_hud_speedometer,
		&bxt_hud_speedometer_offset,
		&bxt_hud_speedometer_anchor,
		&bxt_hud_jumpspeed,
		&bxt_hud_jumpspeed_offset,
		&bxt_hud_jumpspeed_anchor,
		&bxt_hud_timer,
		&bxt_hud_timer_offset,
		&bxt_hud_timer_anchor,
		&bxt_hud_visible_landmarks,
		&bxt_hud_visible_landmarks_offset,
		&bxt_hud_visible_landmarks_anchor,
		&bxt_hud_useables,
		&bxt_hud_useables_radius
	};
}
