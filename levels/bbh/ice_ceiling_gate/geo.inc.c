#include "src/game/envfx_snow.h"

const GeoLayout ice_ceiling_gate_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ice_ceiling_gate_ceilgate_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ice_ceiling_gate_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
