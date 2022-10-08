#include "src/game/envfx_snow.h"

const GeoLayout lll_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(9, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, lll_dl_101__The_Corridor_geo),
			GEO_BRANCH(1, lll_dl_102__Laundry_Room_geo),
			GEO_BRANCH(1, lll_dl_103__Gym_geo),
			GEO_BRANCH(1, lll_dl_104__Wine_Cellar_geo),
			GEO_BRANCH(1, lll_dl_105__Root_Cellar_geo),
			GEO_BRANCH(1, lll_dl_106__Meat_Locker_geo),
			GEO_BRANCH(1, lll_dl_107__Engine_Room_geo),
			GEO_BRANCH(1, lll_dl_108__Torture_Chamber_geo),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_dl_101__The_Corridor_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_BasementStairs_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_Cobwebs_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_Corridor_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, lll_dl_Fog_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_dl_102__Laundry_Room_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_LaundryRoom_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_dl_103__Gym_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_Gym_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_dl_104__Wine_Cellar_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_Stairs_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, lll_dl_Wine_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_WineCellar_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_WineLogos_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, lll_dl_WineLogos_mesh_layer_6),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_dl_105__Root_Cellar_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_RootCellar_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_dl_106__Meat_Locker_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_Meat_Locker_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_dl_107__Engine_Room_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_EngineRoom_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_dl_108__Torture_Chamber_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_TortureChamber_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, lll_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, lll_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, lll_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};