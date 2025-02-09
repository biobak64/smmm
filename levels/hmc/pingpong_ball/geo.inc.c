#include "src/game/envfx_snow.h"

const GeoLayout pingpong_ball_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 102, 45),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, pingpong_ball_Ball_002_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pingpong_ball_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
