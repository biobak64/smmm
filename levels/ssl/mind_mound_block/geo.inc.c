#include "src/game/envfx_snow.h"

const GeoLayout mind_mound_block_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, mind_mound_block_MindMoundBlock_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, mind_mound_block_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
