const Collision light_button_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(87, -100, 56),
	COL_VERTEX(-87, -100, 56),
	COL_VERTEX(-87, -100, 0),
	COL_VERTEX(87, -100, 0),
	COL_VERTEX(-87, 100, 56),
	COL_VERTEX(-87, 100, 0),
	COL_VERTEX(87, 100, 56),
	COL_VERTEX(87, 100, 0),
	COL_TRI_INIT(SURFACE_DEFAULT, 8),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(1, 4, 5),
	COL_TRI(1, 5, 2),
	COL_TRI(6, 0, 3),
	COL_TRI(6, 3, 7),
	COL_TRI(4, 6, 7),
	COL_TRI(4, 7, 5),
	COL_TRI_INIT(SURFACE_LIGHT_CHECKPOINT, 2),
	COL_TRI(0, 6, 4),
	COL_TRI(0, 4, 1),
	COL_TRI_STOP(),
	COL_END()
};