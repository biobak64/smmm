#include "src/game/envfx_snow.h"

const GeoLayout theater_tomato_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, theater_tomato_Tomato_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, theater_tomato_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
