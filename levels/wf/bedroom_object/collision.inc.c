const Collision bedroom_object_collision3[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-33, 0, 110),
	COL_VERTEX(-33, 68, 110),
	COL_VERTEX(-110, 68, -33),
	COL_VERTEX(-110, 0, -33),
	COL_VERTEX(33, 68, -110),
	COL_VERTEX(33, 0, -110),
	COL_VERTEX(110, 68, 33),
	COL_VERTEX(110, 0, 33),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(7, 6, 1),
	COL_TRI(7, 1, 0),
	COL_TRI(3, 5, 7),
	COL_TRI(3, 7, 0),
	COL_TRI(4, 2, 1),
	COL_TRI(4, 1, 6),
	COL_TRI_STOP(),
	COL_END()
};

const Collision bedroom_object_collision2[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-81, 0, 81),
	COL_VERTEX(-81, 162, 81),
	COL_VERTEX(-81, 162, -81),
	COL_VERTEX(-81, 0, -81),
	COL_VERTEX(81, 162, -81),
	COL_VERTEX(81, 0, -81),
	COL_VERTEX(81, 162, 81),
	COL_VERTEX(81, 0, 81),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(7, 6, 1),
	COL_TRI(7, 1, 0),
	COL_TRI(3, 5, 7),
	COL_TRI(3, 7, 0),
	COL_TRI(4, 2, 1),
	COL_TRI(4, 1, 6),
	COL_TRI_STOP(),
	COL_END()
};


const Collision bedroom_object_collision1[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-134, 0, 10),
	COL_VERTEX(-134, 190, 10),
	COL_VERTEX(-10, 190, -134),
	COL_VERTEX(-10, 0, -134),
	COL_VERTEX(134, 190, -10),
	COL_VERTEX(134, 0, -10),
	COL_VERTEX(10, 190, 134),
	COL_VERTEX(10, 0, 134),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(7, 6, 1),
	COL_TRI(7, 1, 0),
	COL_TRI(3, 5, 7),
	COL_TRI(3, 7, 0),
	COL_TRI(4, 2, 1),
	COL_TRI(4, 1, 6),
	COL_TRI_STOP(),
	COL_END()
};
