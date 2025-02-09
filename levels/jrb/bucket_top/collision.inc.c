const Collision bucket_top_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(12),
	COL_VERTEX(0, 0, -100),
	COL_VERTEX(-87, 0, -50),
	COL_VERTEX(-87, 0, 50),
	COL_VERTEX(0, 0, 100),
	COL_VERTEX(87, 0, 50),
	COL_VERTEX(87, 0, -50),
	COL_VERTEX(87, -20, -50),
	COL_VERTEX(0, -20, -100),
	COL_VERTEX(0, -20, 100),
	COL_VERTEX(87, -20, 50),
	COL_VERTEX(-87, -20, -50),
	COL_VERTEX(-87, -20, 50),
	COL_TRI_INIT(SURFACE_DEFAULT, 16),
	COL_TRI(0, 1, 2),
	COL_TRI(2, 3, 4),
	COL_TRI(4, 5, 0),
	COL_TRI(2, 4, 0),
	COL_TRI(0, 5, 6),
	COL_TRI(0, 6, 7),
	COL_TRI(4, 3, 8),
	COL_TRI(4, 8, 9),
	COL_TRI(2, 1, 10),
	COL_TRI(2, 10, 11),
	COL_TRI(5, 4, 9),
	COL_TRI(5, 9, 6),
	COL_TRI(3, 2, 11),
	COL_TRI(3, 11, 8),
	COL_TRI(1, 0, 7),
	COL_TRI(1, 7, 10),
	COL_TRI_STOP(),
	COL_END()
};
