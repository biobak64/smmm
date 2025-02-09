#include "src/game/envfx_snow.h"

const GeoLayout jrb_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(2, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, jrb_dl_201__Fall_geo),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jrb_dl_201__Fall_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 189, -3892, 4070, 0, 90, 0, jrb_dl_Grass_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 19, -6154, 404, jrb_dl_Ground_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 0, 422, 6866, 100, 0, 0, jrb_dl_Moon_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -375, 857, 2881, 90, 0, 0, jrb_dl_Skybox_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jrb_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 65536, 0, 0, 65536, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, jrb_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, jrb_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, jrb_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
