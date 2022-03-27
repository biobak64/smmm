const Collision foreroom_books_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(80, 0, -225),
	COL_VERTEX(80, 555, -225),
	COL_VERTEX(80, 555, 225),
	COL_VERTEX(80, 0, 225),
	COL_VERTEX(-80, 0, -225),
	COL_VERTEX(-80, 555, -225),
	COL_VERTEX(-80, 555, 225),
	COL_VERTEX(-80, 0, 225),
	COL_TRI_INIT(SURFACE_NOT_SLIPPERY, 8),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 1),
	COL_TRI(4, 1, 0),
	COL_TRI(3, 2, 6),
	COL_TRI(3, 6, 7),
	COL_TRI(2, 1, 5),
	COL_TRI(2, 5, 6),
	COL_TRI_STOP(),
	COL_END()
};