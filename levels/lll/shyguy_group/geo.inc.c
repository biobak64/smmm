#include "src/game/envfx_snow.h"

const GeoLayout shyguy_group_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, shyguy_group_group_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout shyguy_group_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_ASM(0, geo_update_layer_transparency),
			GEO_SWITCH_CASE(2, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, shyguy_group_group_mesh_layer_1),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, shyguy_group_switch_opt1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, shyguy_group_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, shyguy_group_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
