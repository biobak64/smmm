const Collision jukebox_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(14),
	COL_VERTEX(-112, 0, -112),
	COL_VERTEX(-112, 0, 112),
	COL_VERTEX(-112, 112, 112),
	COL_VERTEX(-112, 112, -112),
	COL_VERTEX(112, 0, 112),
	COL_VERTEX(112, 112, 112),
	COL_VERTEX(112, 112, -112),
	COL_VERTEX(112, 0, -112),
	COL_VERTEX(-112, 0, -188),
	COL_VERTEX(-112, 337, -188),
	COL_VERTEX(112, 337, -188),
	COL_VERTEX(112, 0, -188),
	COL_VERTEX(-112, 337, -113),
	COL_VERTEX(112, 337, -113),
	COL_TRI_INIT(SURFACE_DEFAULT, 20),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(1, 4, 5),
	COL_TRI(1, 5, 2),
	COL_TRI(0, 3, 6),
	COL_TRI(0, 6, 7),
	COL_TRI(2, 5, 6),
	COL_TRI(2, 6, 3),
	COL_TRI(7, 6, 5),
	COL_TRI(7, 5, 4),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI(12, 13, 10),
	COL_TRI(12, 10, 9),
	COL_TRI(12, 9, 8),
	COL_TRI(12, 8, 0),
	COL_TRI(11, 10, 13),
	COL_TRI(11, 13, 7),
	COL_TRI(12, 0, 7),
	COL_TRI(12, 7, 13),
	COL_TRI_STOP(),
	COL_END()
};
