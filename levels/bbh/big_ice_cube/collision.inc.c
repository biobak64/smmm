const Collision big_ice_cube_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(150, 1, 150),
	COL_VERTEX(150, 0, -150),
	COL_VERTEX(149, 296, -150),
	COL_VERTEX(149, 297, 150),
	COL_VERTEX(-150, 0, -150),
	COL_VERTEX(-151, 296, -150),
	COL_VERTEX(-150, 0, 150),
	COL_VERTEX(-151, 296, 150),
	COL_TRI_INIT(SURFACE_ICE, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(1, 4, 5),
	COL_TRI(1, 5, 2),
	COL_TRI(6, 0, 3),
	COL_TRI(6, 3, 7),
	COL_TRI(4, 6, 7),
	COL_TRI(4, 7, 5),
	COL_TRI(3, 2, 5),
	COL_TRI(3, 5, 7),
	COL_TRI_STOP(),
	COL_END()
};