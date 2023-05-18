#include "src/game/envfx_snow.h"

const GeoLayout mem_bounce_box_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, mem_bounce_box_Spring_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, mem_bounce_box_Spring_002_mesh_layer_6),
		GEO_DISPLAY_LIST(LAYER_ALPHA, mem_bounce_box_Spring_002_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, mem_bounce_box_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, mem_bounce_box_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, mem_bounce_box_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};