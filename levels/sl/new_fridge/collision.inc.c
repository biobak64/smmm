const Collision new_fridge_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-21, 350, 440),
	COL_VERTEX(-21, -350, 440),
	COL_VERTEX(21, -350, 440),
	COL_VERTEX(21, 350, 440),
	COL_VERTEX(21, -350, 0),
	COL_VERTEX(21, 350, 0),
	COL_VERTEX(-21, 350, 0),
	COL_VERTEX(-21, -350, 0),
	COL_TRI_INIT(SURFACE_DEFAULT, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(2, 4, 5),
	COL_TRI(2, 5, 3),
	COL_TRI(6, 0, 3),
	COL_TRI(6, 3, 5),
	COL_TRI(7, 6, 5),
	COL_TRI(7, 5, 4),
	COL_TRI(0, 6, 7),
	COL_TRI(0, 7, 1),
	COL_TRI_STOP(),
	COL_END()
};