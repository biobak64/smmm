// 0x0E000848
const GeoLayout magic_carpet_geo[] = {
   GEO_CULLING_RADIUS(500),
   GEO_OPEN_NODE(),
      GEO_ASM(0, geo_exec_flying_carpet_create),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
