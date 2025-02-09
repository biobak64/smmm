#include "src/game/envfx_snow.h"

const GeoLayout lightning_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lightning_lightning_mesh_layer_1_mat_override_Blank_0),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lightning_lightning_mesh_layer_4_mat_override_Blank_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lightning_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_ASM(10, geo_update_layer_transparency),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, lightning_mark_mesh_layer_5),
			GEO_SWITCH_CASE(2, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, lightning_lightning_mesh_layer_1),
					GEO_DISPLAY_LIST(LAYER_ALPHA, lightning_lightning_mesh_layer_4),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, lightning_switch_opt1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lightning_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lightning_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, lightning_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
