// 0x16000E14
const GeoLayout number_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_ASM(0, geo_set_number_palette),
      GEO_SWITCH_CASE(10, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_0),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_1),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_2),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_3),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_4),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_5),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_6),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_7),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_8),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_9),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};


const GeoLayout rank_splus_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_TRANSLATE_WITH_DL(LAYER_ALPHA, -24, 0, 0, dl_billboard_num_S),
      GEO_TRANSLATE_WITH_DL(LAYER_ALPHA, 32, 0, 0, dl_billboard_num_plus),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};


const GeoLayout rank_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_ASM(0, geo_set_number_palette),
      GEO_SWITCH_CASE(8, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_F),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_E),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_D),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_C),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_B),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_A),
         GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_S),
         GEO_BRANCH(1, rank_splus_geo),
         // GEO_DISPLAY_LIST(LAYER_ALPHA, dl_billboard_num_Splus),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
