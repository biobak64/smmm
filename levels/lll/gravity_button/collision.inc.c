const Collision gravity_button_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-100, 100, 0),
	COL_VERTEX(-100, -100, 0),
	COL_VERTEX(-100, -100, 50),
	COL_VERTEX(-100, 100, 50),
	COL_VERTEX(100, -100, 50),
	COL_VERTEX(100, 100, 50),
	COL_VERTEX(100, 100, 0),
	COL_VERTEX(100, -100, 0),
	COL_TRI_INIT(SURFACE_DEFAULT, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(2, 4, 5),
	COL_TRI(2, 5, 3),
	COL_TRI(6, 0, 3),
	COL_TRI(6, 3, 5),
	COL_TRI(1, 7, 4),
	COL_TRI(1, 4, 2),
	COL_TRI(7, 6, 5),
	COL_TRI(7, 5, 4),
	COL_TRI_STOP(),
	COL_END()
};
