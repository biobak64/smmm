#include "src/game/envfx_snow.h"

const GeoLayout c1_cushion_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, c1_cushion_Cushion_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, c1_cushion_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};