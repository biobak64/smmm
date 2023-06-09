const Collision hole_wall_ground_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(32),
	COL_VERTEX(-4945, 100, 5050),
	COL_VERTEX(-1600, 100, 5072),
	COL_VERTEX(-1600, 100, -2487),
	COL_VERTEX(-4945, 100, -2453),
	COL_VERTEX(-1600, 100, -3296),
	COL_VERTEX(-4301, 100, -3296),
	COL_VERTEX(-4687, 100, 5635),
	COL_VERTEX(-1600, 100, 5635),
	COL_VERTEX(4940, 100, 5050),
	COL_VERTEX(4940, 100, -2453),
	COL_VERTEX(1600, 100, -2487),
	COL_VERTEX(1600, 100, 5072),
	COL_VERTEX(4296, 100, -3296),
	COL_VERTEX(1600, 100, -3296),
	COL_VERTEX(4682, 100, 5635),
	COL_VERTEX(1600, 100, 5635),
	COL_VERTEX(-5045, 0, 5072),
	COL_VERTEX(-4752, 0, 5735),
	COL_VERTEX(-1500, 0, 5735),
	COL_VERTEX(-1500, 0, 5072),
	COL_VERTEX(-1500, 0, -2487),
	COL_VERTEX(-1500, 0, -3396),
	COL_VERTEX(-4350, 0, -3396),
	COL_VERTEX(-5045, 0, -2487),
	COL_VERTEX(4747, 0, 5735),
	COL_VERTEX(5040, 0, 5072),
	COL_VERTEX(1500, 0, 5735),
	COL_VERTEX(1500, 0, -2487),
	COL_VERTEX(1500, 0, 5072),
	COL_VERTEX(4345, 0, -3396),
	COL_VERTEX(1500, 0, -3396),
	COL_VERTEX(5040, 0, -2487),
	COL_TRI_INIT(SURFACE_INSTANT_QUICKSAND, 44),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(6, 7, 1),
	COL_TRI(6, 1, 0),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI(9, 12, 13),
	COL_TRI(9, 13, 10),
	COL_TRI(14, 8, 11),
	COL_TRI(14, 11, 15),
	COL_TRI(6, 0, 16),
	COL_TRI(6, 16, 17),
	COL_TRI(7, 6, 17),
	COL_TRI(7, 17, 18),
	COL_TRI(2, 1, 19),
	COL_TRI(2, 19, 20),
	COL_TRI(5, 4, 21),
	COL_TRI(5, 21, 22),
	COL_TRI(3, 5, 22),
	COL_TRI(3, 22, 23),
	COL_TRI(4, 2, 20),
	COL_TRI(4, 20, 21),
	COL_TRI(0, 3, 23),
	COL_TRI(0, 23, 16),
	COL_TRI(1, 7, 18),
	COL_TRI(1, 18, 19),
	COL_TRI(8, 14, 24),
	COL_TRI(8, 24, 25),
	COL_TRI(14, 15, 26),
	COL_TRI(14, 26, 24),
	COL_TRI(11, 10, 27),
	COL_TRI(11, 27, 28),
	COL_TRI(13, 12, 29),
	COL_TRI(13, 29, 30),
	COL_TRI(12, 9, 31),
	COL_TRI(12, 31, 29),
	COL_TRI(10, 13, 30),
	COL_TRI(10, 30, 27),
	COL_TRI(9, 8, 25),
	COL_TRI(9, 25, 31),
	COL_TRI(15, 11, 28),
	COL_TRI(15, 28, 26),
	COL_TRI_STOP(),
	COL_END()
};