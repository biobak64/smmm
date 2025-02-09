#include "src/game/envfx_snow.h"

const GeoLayout boogoo_shyguy_000_switchcase_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 80, 0, 0, 90, 79),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, boogoo_shyguy_shyguy_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boogoo_shyguy_geo[] = {
	GEO_CULLING_RADIUS(4096),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_ASM(0, geo_update_boogoo_color),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 80, 0, 0, 90, 79),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, boogoo_shyguy_shyguy_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, boogoo_shyguy_000_switchcase_opt1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boogoo_shyguy_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, boogoo_shyguy_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
