const Collision cardboard_wall_alt_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-60, 1351, 937),
	COL_VERTEX(-60, 0, 937),
	COL_VERTEX(0, 0, 937),
	COL_VERTEX(0, 1351, 937),
	COL_VERTEX(-60, 0, -937),
	COL_VERTEX(-60, 1351, -937),
	COL_VERTEX(0, 0, -937),
	COL_VERTEX(0, 1351, -937),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 1, 0),
	COL_TRI(4, 0, 5),
	COL_TRI(1, 4, 6),
	COL_TRI(1, 6, 2),
	COL_TRI(5, 0, 3),
	COL_TRI(5, 3, 7),
	COL_TRI(6, 7, 3),
	COL_TRI(6, 3, 2),
	COL_TRI(4, 5, 7),
	COL_TRI(4, 7, 6),
	COL_TRI_STOP(),
	COL_END()
};
