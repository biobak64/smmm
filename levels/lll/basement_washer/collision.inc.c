const Collision basement_washer_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-170, 0, -170),
	COL_VERTEX(-170, 340, -170),
	COL_VERTEX(170, 340, -170),
	COL_VERTEX(170, 0, -170),
	COL_VERTEX(-170, 340, 170),
	COL_VERTEX(-170, 0, 170),
	COL_VERTEX(170, 0, 170),
	COL_VERTEX(170, 340, 170),
	COL_TRI_INIT(SURFACE_DEFAULT, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 1, 0),
	COL_TRI(4, 0, 5),
	COL_TRI(6, 7, 4),
	COL_TRI(6, 4, 5),
	COL_TRI(1, 4, 7),
	COL_TRI(1, 7, 2),
	COL_TRI(2, 7, 6),
	COL_TRI(2, 6, 3),
	COL_TRI_STOP(),
	COL_END()
};
