const Collision crumble_floor_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(16),
	COL_VERTEX(-347, 0, 90),
	COL_VERTEX(-469, 0, 456),
	COL_VERTEX(0, 0, 0),
	COL_VERTEX(-193, 0, 342),
	COL_VERTEX(52, 0, 566),
	COL_VERTEX(107, 0, 362),
	COL_VERTEX(447, 0, 485),
	COL_VERTEX(378, 0, 220),
	COL_VERTEX(597, 0, 215),
	COL_VERTEX(367, 0, -196),
	COL_VERTEX(428, 0, -554),
	COL_VERTEX(28, 0, -430),
	COL_VERTEX(-209, 0, -567),
	COL_VERTEX(-427, 0, -550),
	COL_VERTEX(-414, 0, -250),
	COL_VERTEX(-630, 0, -130),
	COL_TRI_INIT(SURFACE_DEFAULT, 15),
	COL_TRI(0, 1, 2),
	COL_TRI(1, 3, 2),
	COL_TRI(3, 4, 2),
	COL_TRI(4, 5, 2),
	COL_TRI(5, 6, 2),
	COL_TRI(6, 7, 2),
	COL_TRI(7, 8, 2),
	COL_TRI(8, 9, 2),
	COL_TRI(9, 10, 2),
	COL_TRI(10, 11, 2),
	COL_TRI(11, 12, 2),
	COL_TRI(12, 13, 2),
	COL_TRI(13, 14, 2),
	COL_TRI(14, 15, 2),
	COL_TRI(15, 0, 2),
	COL_TRI_STOP(),
	COL_END()
};
