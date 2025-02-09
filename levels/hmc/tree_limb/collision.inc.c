const Collision tree_limb_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(16),
	COL_VERTEX(0, 50, -543),
	COL_VERTEX(-384, 50, -384),
	COL_VERTEX(-543, 50, 0),
	COL_VERTEX(-384, 50, 384),
	COL_VERTEX(0, 50, 543),
	COL_VERTEX(384, 50, 384),
	COL_VERTEX(543, 50, 0),
	COL_VERTEX(384, 50, -384),
	COL_VERTEX(543, -50, 0),
	COL_VERTEX(384, -50, -384),
	COL_VERTEX(0, -50, 543),
	COL_VERTEX(384, -50, 384),
	COL_VERTEX(-543, -50, 0),
	COL_VERTEX(-384, -50, 384),
	COL_VERTEX(0, -50, -543),
	COL_VERTEX(-384, -50, -384),
	COL_TRI_INIT(SURFACE_DEFAULT, 22),
	COL_TRI(0, 1, 2),
	COL_TRI(2, 3, 4),
	COL_TRI(4, 5, 6),
	COL_TRI(6, 7, 0),
	COL_TRI(0, 2, 4),
	COL_TRI(4, 6, 0),
	COL_TRI(8, 9, 7),
	COL_TRI(8, 7, 6),
	COL_TRI(10, 11, 5),
	COL_TRI(10, 5, 4),
	COL_TRI(12, 13, 3),
	COL_TRI(12, 3, 2),
	COL_TRI(14, 15, 1),
	COL_TRI(14, 1, 0),
	COL_TRI(9, 14, 0),
	COL_TRI(9, 0, 7),
	COL_TRI(11, 8, 6),
	COL_TRI(11, 6, 5),
	COL_TRI(13, 10, 4),
	COL_TRI(13, 4, 3),
	COL_TRI(15, 12, 2),
	COL_TRI(15, 2, 1),
	COL_TRI_STOP(),
	COL_END()
};
