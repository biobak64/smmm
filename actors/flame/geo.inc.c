// 0x16000B10
const GeoLayout red_flame_shadow_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x50, 20),
   GEO_OPEN_NODE(),
      GEO_BRANCH_AND_LINK(red_flame_geo),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16000B2C
const GeoLayout red_flame_geo[] = {
   GEO_CULLING_RADIUS(0x1000),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(8, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B3B0),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B3C8),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B3E0),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B3F8),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B410),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B428),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B440),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B458),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16000B8C
const GeoLayout blue_flame_geo[] = {
   GEO_CULLING_RADIUS(0x1000),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(8, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B500),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B518),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B530),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B548),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B560),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B578),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B590),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_seg3_dl_0301B5A8),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};


const GeoLayout env_flame_geo[] = {
   GEO_CULLING_RADIUS(0x1000),
   GEO_OPEN_NODE(),
      GEO_ASM(5, geo_set_color_env),
      GEO_OPEN_NODE(),
         GEO_SWITCH_CASE(8, geo_switch_anim_state),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame1_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame2_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame3_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame4_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame5_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame6_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame7_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame8_dl),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};


const GeoLayout env_flame_shadow_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x50, 20),
   GEO_OPEN_NODE(),
      GEO_ASM(5, geo_set_color_env),
      GEO_OPEN_NODE(),
         GEO_SWITCH_CASE(8, geo_switch_anim_state),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame1_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame2_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame3_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame4_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame5_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame6_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame7_dl),
            GEO_DISPLAY_LIST(LAYER_TRANSPARENT, flame_frame8_dl),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};