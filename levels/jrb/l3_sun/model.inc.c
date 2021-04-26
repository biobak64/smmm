Lights1 l3_sun_SpinningSun_002_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx l3_sun_bright_chain_ci8_aligner[] = {gsSPEndDisplayList()};
u8 l3_sun_bright_chain_ci8[] = {
	0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x04, 0x05, 
	0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x06, 0x07, 
	0x02, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x09, 0x06, 0x00, 0x02, 
	0x02, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x09, 0x06, 0x0a, 0x02, 
	0x02, 0x02, 0x00, 0x0b, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x09, 0x04, 0x00, 0x02, 0x02, 
	0x02, 0x02, 0x00, 0x0b, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x09, 0x04, 0x00, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x0c, 0x01, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x06, 0x0d, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x0c, 0x01, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x06, 0x0d, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x00, 0x01, 0x02, 0x02, 
	0x02, 0x09, 0x04, 0x0d, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x00, 0x01, 0x02, 0x02, 
	0x02, 0x09, 0x04, 0x0d, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x0b, 0x02, 
	0x03, 0x06, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x0b, 0x02, 
	0x03, 0x06, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x01, 
	0x06, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x01, 
	0x06, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 
	0x0e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 
	0x0e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x09, 0x04, 0x05, 
	0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x09, 0x04, 0x05, 
	0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x03, 0x06, 0x00, 0x02, 
	0x0f, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x03, 0x06, 0x00, 0x02, 
	0x0f, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x09, 0x04, 0x0d, 0x02, 0x02, 
	0x02, 0x0f, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x09, 0x04, 0x0d, 0x02, 0x02, 
	0x02, 0x0f, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x06, 0x00, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x0f, 0x08, 0x0b, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x06, 0x00, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x0f, 0x08, 0x0b, 0x02, 0x02, 0x02, 
	0x02, 0x03, 0x06, 0x07, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x0f, 0x08, 0x01, 0x02, 0x02, 
	0x02, 0x03, 0x06, 0x07, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x0f, 0x08, 0x01, 0x02, 0x02, 
	0x09, 0x06, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x0f, 0x08, 0x0b, 0x02, 
	0x09, 0x06, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x0f, 0x08, 0x0b, 0x02, 
	0x04, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x0f, 0x00, 0x10, 
	0x04, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x0f, 0x08, 0x01, 
	0x11, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x12, 0x08, 
	0x11, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0f, 0x0a, 
	0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x04, 0x05, 
	0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x04, 0x05, 
	0x02, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x09, 0x06, 0x00, 0x02, 
	0x02, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x09, 0x06, 0x00, 0x02, 
	0x02, 0x02, 0x00, 0x0b, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x09, 0x04, 0x00, 0x02, 0x02, 
	0x02, 0x02, 0x00, 0x0b, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x09, 0x04, 0x00, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x0c, 0x01, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x06, 0x0d, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x0c, 0x01, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x06, 0x0d, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x00, 0x01, 0x02, 0x02, 
	0x02, 0x09, 0x04, 0x0d, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x00, 0x01, 0x02, 0x02, 
	0x02, 0x09, 0x04, 0x0d, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x0b, 0x02, 
	0x03, 0x06, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x0b, 0x02, 
	0x03, 0x06, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x01, 
	0x06, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x01, 
	0x06, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 
	0x0e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 
	0x0e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x09, 0x04, 0x05, 
	0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x09, 0x04, 0x05, 
	0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x03, 0x06, 0x00, 0x02, 
	0x0f, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x03, 0x06, 0x00, 0x02, 
	0x0f, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x09, 0x04, 0x0d, 0x02, 0x02, 
	0x02, 0x0f, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x09, 0x04, 0x0d, 0x02, 0x02, 
	0x02, 0x0f, 0x08, 0x01, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x06, 0x00, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x0f, 0x08, 0x0b, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x06, 0x00, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x0f, 0x08, 0x0b, 0x02, 0x02, 0x02, 
	0x02, 0x03, 0x06, 0x07, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x0f, 0x08, 0x01, 0x02, 0x02, 
	0x02, 0x03, 0x06, 0x07, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x0f, 0x08, 0x01, 0x02, 0x02, 
	0x09, 0x06, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x0f, 0x08, 0x0b, 0x02, 
	0x09, 0x06, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x0f, 0x08, 0x0b, 0x02, 
	0x04, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x0f, 0x08, 0x13, 
	0x04, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x0f, 0x08, 0x13, 
	0x14, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x15, 0x08, 
	0x14, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x15, 0x0d, 
	
};

Gfx l3_sun_bright_chain_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 l3_sun_bright_chain_ci8_pal_rgba16[] = {
	0x7b, 0x43, 0x4a, 0x03, 0xe6, 0x4b, 0xf7, 0x69, 
	0x39, 0x83, 0xa4, 0x85, 0x41, 0xc3, 0x94, 0x05, 
	0x83, 0x85, 0xf7, 0x29, 0x9c, 0x45, 0x62, 0x83, 
	0x8b, 0xc5, 0x9c, 0x05, 0x5a, 0x43, 0xb4, 0xc5, 
	0x6a, 0xc3, 0x52, 0x43, 0xac, 0x85, 0x62, 0xc3, 
	0x6b, 0x03, 0xc5, 0x45, 
};

Vtx l3_sun_Sun_mesh_layer_1_vtx_0[90] = {
	{{{0, 0, 0},0, {822, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{11, 5, -15},0, {775, 927},{0x27, 0x94, 0xCA, 0xFF}}},
	{{{18, 5, 6},0, {868, 927},{0x3F, 0x94, 0x14, 0xFF}}},
	{{{29, 17, -9},0, {822, 847},{0x67, 0xBD, 0xDF, 0xFF}}},
	{{{19, 20, -26},0, {729, 847},{0x43, 0xC7, 0xA4, 0xFF}}},
	{{{29, 36, -21},0, {775, 766},{0x67, 0x0, 0xB5, 0xFF}}},
	{{{11, 36, -34},0, {682, 766},{0x27, 0x0, 0x87, 0xFF}}},
	{{{0, 17, -31},0, {636, 847},{0x0, 0xBD, 0x94, 0xFF}}},
	{{{11, 5, -15},0, {682, 927},{0x27, 0x94, 0xCA, 0xFF}}},
	{{{-11, 5, -15},0, {589, 927},{0xD9, 0x94, 0xCA, 0xFF}}},
	{{{0, 0, 0},0, {636, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-19, 20, -26},0, {543, 847},{0xBD, 0xC7, 0xA4, 0xFF}}},
	{{{-11, 36, -34},0, {589, 766},{0xD9, 0x0, 0x87, 0xFF}}},
	{{{-29, 36, -21},0, {496, 766},{0x99, 0x0, 0xB5, 0xFF}}},
	{{{-29, 17, -9},0, {449, 847},{0x99, 0xBD, 0xDF, 0xFF}}},
	{{{-11, 5, -15},0, {496, 927},{0xD9, 0x94, 0xCA, 0xFF}}},
	{{{-18, 5, 6},0, {403, 927},{0xC1, 0x94, 0x14, 0xFF}}},
	{{{0, 0, 0},0, {449, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-31, 20, 10},0, {356, 847},{0x94, 0xC7, 0x23, 0xFF}}},
	{{{-36, 36, 0},0, {403, 766},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-29, 36, 21},0, {310, 766},{0x99, 0x0, 0x4B, 0xFF}}},
	{{{-18, 17, 25},0, {263, 847},{0xC1, 0xBD, 0x58, 0xFF}}},
	{{{-18, 5, 6},0, {310, 927},{0xC1, 0x94, 0x14, 0xFF}}},
	{{{0, 5, 19},0, {217, 927},{0x0, 0x94, 0x43, 0xFF}}},
	{{{0, 0, 0},0, {263, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 20, 32},0, {170, 847},{0x0, 0xC7, 0x72, 0xFF}}},
	{{{-11, 36, 34},0, {217, 766},{0xD9, 0x0, 0x79, 0xFF}}},
	{{{11, 36, 34},0, {124, 766},{0x27, 0x0, 0x79, 0xFF}}},
	{{{18, 17, 25},0, {77, 847},{0x3F, 0xBD, 0x58, 0xFF}}},
	{{{0, 5, 19},0, {124, 927},{0x0, 0x94, 0x43, 0xFF}}},
	{{{18, 5, 6},0, {31, 927},{0x3F, 0x94, 0x14, 0xFF}}},
	{{{0, 0, 0},0, {77, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{18, 5, 6},0, {31, 927},{0x3F, 0x94, 0x14, 0xFF}}},
	{{{31, 20, 10},0, {-16, 847},{0x6C, 0xC7, 0x23, 0xFF}}},
	{{{18, 17, 25},0, {77, 847},{0x3F, 0xBD, 0x58, 0xFF}}},
	{{{29, 36, 21},0, {31, 766},{0x67, 0x0, 0x4B, 0xFF}}},
	{{{11, 36, 34},0, {124, 766},{0x27, 0x0, 0x79, 0xFF}}},
	{{{19, 52, 26},0, {77, 686},{0x43, 0x39, 0x5C, 0xFF}}},
	{{{0, 55, 31},0, {170, 686},{0x0, 0x43, 0x6C, 0xFF}}},
	{{{11, 67, 15},0, {124, 605},{0x27, 0x6C, 0x36, 0xFF}}},
	{{{-11, 67, 15},0, {217, 605},{0xD9, 0x6C, 0x36, 0xFF}}},
	{{{0, 72, 0},0, {170, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-19, 52, 26},0, {263, 686},{0xBD, 0x39, 0x5C, 0xFF}}},
	{{{-11, 36, 34},0, {217, 766},{0xD9, 0x0, 0x79, 0xFF}}},
	{{{-29, 36, 21},0, {310, 766},{0x99, 0x0, 0x4B, 0xFF}}},
	{{{-29, 55, 9},0, {356, 686},{0x99, 0x43, 0x21, 0xFF}}},
	{{{-11, 67, 15},0, {310, 605},{0xD9, 0x6C, 0x36, 0xFF}}},
	{{{-18, 67, -6},0, {403, 605},{0xC1, 0x6C, 0xEC, 0xFF}}},
	{{{0, 72, 0},0, {356, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-31, 52, -10},0, {449, 686},{0x94, 0x39, 0xDD, 0xFF}}},
	{{{-36, 36, 0},0, {403, 766},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-29, 36, -21},0, {496, 766},{0x99, 0x0, 0xB5, 0xFF}}},
	{{{-18, 55, -25},0, {543, 686},{0xC1, 0x43, 0xA8, 0xFF}}},
	{{{-18, 67, -6},0, {496, 605},{0xC1, 0x6C, 0xEC, 0xFF}}},
	{{{0, 67, -19},0, {589, 605},{0x0, 0x6C, 0xBD, 0xFF}}},
	{{{0, 72, 0},0, {543, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 52, -32},0, {636, 686},{0x0, 0x39, 0x8E, 0xFF}}},
	{{{-11, 36, -34},0, {589, 766},{0xD9, 0x0, 0x87, 0xFF}}},
	{{{11, 36, -34},0, {682, 766},{0x27, 0x0, 0x87, 0xFF}}},
	{{{18, 55, -25},0, {729, 686},{0x3F, 0x43, 0xA8, 0xFF}}},
	{{{0, 67, -19},0, {682, 605},{0x0, 0x6C, 0xBD, 0xFF}}},
	{{{18, 67, -6},0, {775, 605},{0x3F, 0x6C, 0xEC, 0xFF}}},
	{{{0, 72, 0},0, {729, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{31, 52, -10},0, {822, 686},{0x6C, 0x39, 0xDD, 0xFF}}},
	{{{29, 36, -21},0, {775, 766},{0x67, 0x0, 0xB5, 0xFF}}},
	{{{18, 55, -25},0, {729, 686},{0x3F, 0x43, 0xA8, 0xFF}}},
	{{{31, 52, -10},0, {822, 686},{0x6C, 0x39, 0xDD, 0xFF}}},
	{{{36, 36, 0},0, {868, 766},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{29, 55, 9},0, {915, 686},{0x67, 0x43, 0x21, 0xFF}}},
	{{{18, 67, -6},0, {868, 605},{0x3F, 0x6C, 0xEC, 0xFF}}},
	{{{11, 67, 15},0, {961, 605},{0x27, 0x6C, 0x36, 0xFF}}},
	{{{0, 72, 0},0, {915, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{19, 52, 26},0, {1008, 686},{0x43, 0x39, 0x5C, 0xFF}}},
	{{{29, 36, 21},0, {961, 766},{0x67, 0x0, 0x4B, 0xFF}}},
	{{{31, 20, 10},0, {915, 847},{0x6C, 0xC7, 0x23, 0xFF}}},
	{{{29, 17, -9},0, {822, 847},{0x67, 0xBD, 0xDF, 0xFF}}},
	{{{18, 5, 6},0, {868, 927},{0x3F, 0x94, 0x14, 0xFF}}},
	{{{11, 36, -34},0, {682, 766},{0x27, 0x0, 0x87, 0xFF}}},
	{{{0, 17, -31},0, {636, 847},{0x0, 0xBD, 0x94, 0xFF}}},
	{{{-11, 36, -34},0, {589, 766},{0xD9, 0x0, 0x87, 0xFF}}},
	{{{-29, 36, 21},0, {310, 766},{0x99, 0x0, 0x4B, 0xFF}}},
	{{{-18, 17, 25},0, {263, 847},{0xC1, 0xBD, 0x58, 0xFF}}},
	{{{-11, 36, 34},0, {217, 766},{0xD9, 0x0, 0x79, 0xFF}}},
	{{{-29, 36, -21},0, {496, 766},{0x99, 0x0, 0xB5, 0xFF}}},
	{{{-29, 17, -9},0, {449, 847},{0x99, 0xBD, 0xDF, 0xFF}}},
	{{{-36, 36, 0},0, {403, 766},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-18, 55, -25},0, {543, 686},{0xC1, 0x43, 0xA8, 0xFF}}},
	{{{11, 36, 34},0, {124, 766},{0x27, 0x0, 0x79, 0xFF}}},
	{{{0, 55, 31},0, {170, 686},{0x0, 0x43, 0x6C, 0xFF}}},
	{{{-29, 55, 9},0, {356, 686},{0x99, 0x43, 0x21, 0xFF}}},
};

Gfx l3_sun_Sun_mesh_layer_1_tri_0[] = {
	gsSPVertex(l3_sun_Sun_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(1, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
	gsSP2Triangles(4, 8, 7, 0, 7, 8, 9, 0),
	gsSP2Triangles(8, 10, 9, 0, 7, 9, 11, 0),
	gsSP2Triangles(7, 11, 12, 0, 11, 13, 12, 0),
	gsSP2Triangles(11, 14, 13, 0, 15, 14, 11, 0),
	gsSP2Triangles(15, 16, 14, 0, 17, 16, 15, 0),
	gsSP2Triangles(16, 18, 14, 0, 14, 18, 19, 0),
	gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
	gsSP2Triangles(22, 21, 18, 0, 22, 23, 21, 0),
	gsSP2Triangles(24, 23, 22, 0, 23, 25, 21, 0),
	gsSP2Triangles(21, 25, 26, 0, 25, 27, 26, 0),
	gsSP2Triangles(25, 28, 27, 0, 29, 28, 25, 0),
	gsSP2Triangles(29, 30, 28, 0, 31, 30, 29, 0),
	gsSPVertex(l3_sun_Sun_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(4, 2, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(10, 6, 8, 0, 11, 6, 10, 0),
	gsSP2Triangles(12, 11, 10, 0, 12, 10, 13, 0),
	gsSP2Triangles(13, 10, 14, 0, 15, 13, 14, 0),
	gsSP2Triangles(15, 14, 16, 0, 17, 13, 15, 0),
	gsSP2Triangles(18, 13, 17, 0, 19, 18, 17, 0),
	gsSP2Triangles(19, 17, 20, 0, 20, 17, 21, 0),
	gsSP2Triangles(22, 20, 21, 0, 22, 21, 23, 0),
	gsSP2Triangles(24, 20, 22, 0, 25, 20, 24, 0),
	gsSP2Triangles(26, 25, 24, 0, 26, 24, 27, 0),
	gsSP2Triangles(27, 24, 28, 0, 29, 27, 28, 0),
	gsSP2Triangles(29, 28, 30, 0, 31, 27, 29, 0),
	gsSPVertex(l3_sun_Sun_mesh_layer_1_vtx_0 + 64, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 4, 2, 5, 0),
	gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 4, 6, 0, 9, 4, 8, 0),
	gsSP2Triangles(9, 3, 4, 0, 10, 3, 9, 0),
	gsSP2Triangles(10, 11, 3, 0, 12, 11, 10, 0),
	gsSP2Triangles(3, 11, 0, 0, 13, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
	gsSP2Triangles(0, 13, 1, 0, 15, 19, 22, 0),
	gsSP2Triangles(18, 23, 24, 0, 21, 16, 25, 0),
	gsSPEndDisplayList(),
};

Vtx l3_sun_Beams_mesh_layer_5_vtx_0[18] = {
	{{{0, 0, -91},0, {989, 1240},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{-24, 0, -42},0, {-202, 347},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{24, 0, -42},0, {989, -248},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{0, 0, 91},0, {989, 1240},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{24, 0, 42},0, {-202, 347},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{-24, 0, 42},0, {989, -248},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{-79, 0, 46},0, {989, 1240},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{-24, 0, 42},0, {-202, 347},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{-49, 0, 0},0, {989, -248},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{79, 0, 46},0, {989, 1240},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{49, 0, 0},0, {-202, 347},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{24, 0, 42},0, {989, -248},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{-79, 0, -46},0, {989, 1240},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{-49, 0, 0},0, {-202, 347},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{-24, 0, -42},0, {989, -248},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{79, 0, -46},0, {989, 1240},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{24, 0, -42},0, {-202, 347},{0xFF, 0xFF, 0xFF, 0x70}}},
	{{{49, 0, 0},0, {989, -248},{0xFF, 0xFF, 0xFF, 0x70}}},
};

Gfx l3_sun_Beams_mesh_layer_5_tri_0[] = {
	gsSPVertex(l3_sun_Beams_mesh_layer_5_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSPEndDisplayList(),
};


Gfx mat_l3_sun_Sun_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_l3_sun_SpinningSun_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, l3_sun_bright_chain_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 21),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, l3_sun_bright_chain_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(l3_sun_SpinningSun_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_l3_sun_SpinningSun_002[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx l3_sun_Sun_mesh_layer_1[] = {
	gsSPDisplayList(mat_l3_sun_Sun_002),
	gsSPDisplayList(l3_sun_Sun_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx l3_sun_Beams_mesh_layer_5[] = {
	gsSPDisplayList(mat_l3_sun_SpinningSun_002),
	gsSPDisplayList(l3_sun_Beams_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_l3_sun_SpinningSun_002),
	gsSPEndDisplayList(),
};

Gfx l3_sun_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
