const Collision l2_falling_floor_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(16),
	COL_VERTEX(-542, -100, 25),
	COL_VERTEX(-314, -100, 251),
	COL_VERTEX(-314, 0, 251),
	COL_VERTEX(-542, 0, 25),
	COL_VERTEX(358, -100, 305),
	COL_VERTEX(319, -100, -84),
	COL_VERTEX(319, 0, -84),
	COL_VERTEX(358, 0, 305),
	COL_VERTEX(-192, -100, 536),
	COL_VERTEX(-192, 0, 536),
	COL_VERTEX(479, -100, -225),
	COL_VERTEX(236, -100, -402),
	COL_VERTEX(236, 0, -402),
	COL_VERTEX(479, 0, -225),
	COL_VERTEX(-344, -100, -405),
	COL_VERTEX(-344, 0, -405),
	COL_TRI_INIT(SURFACE_DEFAULT, 22),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(4, 6, 7),
	COL_TRI(8, 4, 7),
	COL_TRI(8, 7, 9),
	COL_TRI(10, 11, 12),
	COL_TRI(10, 12, 13),
	COL_TRI(5, 10, 13),
	COL_TRI(5, 13, 6),
	COL_TRI(1, 8, 9),
	COL_TRI(1, 9, 2),
	COL_TRI(11, 14, 15),
	COL_TRI(11, 15, 12),
	COL_TRI(14, 0, 3),
	COL_TRI(14, 3, 15),
	COL_TRI(13, 12, 15),
	COL_TRI(15, 3, 2),
	COL_TRI(2, 9, 7),
	COL_TRI(6, 13, 15),
	COL_TRI(2, 7, 6),
	COL_TRI(15, 2, 6),
	COL_TRI_STOP(),
	COL_END()
};