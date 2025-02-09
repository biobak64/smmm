#include "src/game/envfx_snow.h"

const GeoLayout water_bucket_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, water_bucket_1_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, water_bucket_5_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, water_bucket_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, water_bucket_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
