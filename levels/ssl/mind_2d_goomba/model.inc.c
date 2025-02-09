Gfx mind_2d_goomba_goomba_sprite_ci4_aligner[] = {gsSPEndDisplayList()};
u8 mind_2d_goomba_goomba_sprite_ci4[] = {
	0x00, 0x00, 0x00, 0x11, 0x11, 0x22, 0x22, 0x22, 
	0x00, 0x00, 0x01, 0x11, 0x11, 0x12, 0x22, 0x22, 
	0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x22, 0x22, 
	0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x12, 0x22, 
	0x00, 0x13, 0x31, 0x11, 0x11, 0x13, 0x31, 0x22, 
	0x01, 0x11, 0x43, 0x11, 0x11, 0x34, 0x11, 0x12, 
	0x01, 0x11, 0x43, 0x33, 0x33, 0x34, 0x11, 0x12, 
	0x11, 0x11, 0x43, 0x41, 0x14, 0x34, 0x11, 0x11, 
	0x11, 0x11, 0x44, 0x41, 0x14, 0x44, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x21, 0x11, 0x14, 0x44, 0x44, 0x41, 0x11, 0x12, 
	0x22, 0x22, 0x44, 0x44, 0x44, 0x44, 0x22, 0x22, 
	0x22, 0x22, 0x44, 0x44, 0x44, 0x44, 0x33, 0x22, 
	0x22, 0x23, 0x34, 0x44, 0x44, 0x33, 0x33, 0x32, 
	0x22, 0x23, 0x33, 0x44, 0x43, 0x33, 0x33, 0x32, 
	0x22, 0x22, 0x33, 0x32, 0x23, 0x33, 0x33, 0x22, 
	
};

Gfx mind_2d_goomba_goomba_sprite_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mind_2d_goomba_goomba_sprite_ci4_pal_rgba16[] = {
	0xff, 0xfe, 0x9a, 0x41, 0x94, 0xbe, 0x00, 0x01, 
	0xfe, 0x71, 
};

Vtx mind_2d_goomba_2DGoomba_mesh_layer_4_vtx_cull[8] = {
	{{ {-50, 0, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-50, 100, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-50, 100, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-50, 0, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {50, 0, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {50, 100, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {50, 100, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {50, 0, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
};

Vtx mind_2d_goomba_2DGoomba_mesh_layer_4_vtx_0[4] = {
	{{ {-50, 0, 0}, 0, {0, 512}, {255, 255, 255, 255} }},
	{{ {50, 0, 0}, 0, {512, 512}, {255, 255, 255, 255} }},
	{{ {50, 100, 0}, 0, {512, 0}, {255, 255, 255, 255} }},
	{{ {-50, 100, 0}, 0, {0, 0}, {255, 255, 255, 255} }},
};

Gfx mind_2d_goomba_2DGoomba_mesh_layer_4_tri_0[] = {
	gsSPVertex(mind_2d_goomba_2DGoomba_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_mind_2d_goomba__2DGoomba[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0),
	gsSPGeometryMode(G_CULL_BACK | G_LIGHTING, 0),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mind_2d_goomba_goomba_sprite_ci4_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(7, 4),
	gsDPLoadSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, mind_2d_goomba_goomba_sprite_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPLoadBlock(7, 0, 0, 63, 2048),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mind_2d_goomba__2DGoomba[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK | G_LIGHTING),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mind_2d_goomba_2DGoomba_mesh_layer_4[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(mind_2d_goomba_2DGoomba_mesh_layer_4_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_mind_2d_goomba__2DGoomba),
	gsSPDisplayList(mind_2d_goomba_2DGoomba_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mind_2d_goomba__2DGoomba),
	gsSPEndDisplayList(),
};

Gfx mind_2d_goomba_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

