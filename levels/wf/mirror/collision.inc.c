const Collision mirror_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-8, 0, 154),
	COL_VERTEX(32, 0, 154),
	COL_VERTEX(32, 346, 154),
	COL_VERTEX(-8, 346, 154),
	COL_VERTEX(32, 0, -153),
	COL_VERTEX(-8, 0, -153),
	COL_VERTEX(-8, 346, -153),
	COL_VERTEX(32, 346, -153),
	COL_TRI_INIT(SURFACE_DEFAULT, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(4, 6, 7),
	COL_TRI(1, 0, 5),
	COL_TRI(1, 5, 4),
	COL_TRI(3, 2, 7),
	COL_TRI(3, 7, 6),
	COL_TRI(4, 7, 2),
	COL_TRI(4, 2, 1),
	COL_TRI_INIT(SURFACE_MIRROR, 2),
	COL_TRI(3, 6, 5),
	COL_TRI(3, 5, 0),
	COL_TRI_STOP(),
	COL_END()
};