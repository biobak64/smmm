#include "src/game/envfx_snow.h"

const GeoLayout attic_indicator_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, attic_indicator_AtticSpireIndicator_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, attic_indicator_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
