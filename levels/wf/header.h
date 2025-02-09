#ifndef WF_HEADER_H
#define WF_HEADER_H

#include "types.h"
#include "game/moving_texture.h"

// geo
extern const GeoLayout wf_geo_0007E0[];
extern const GeoLayout wf_geo_000820[];
extern const GeoLayout wf_geo_000860[];
extern const GeoLayout wf_geo_000878[];
extern const GeoLayout wf_geo_000890[];
extern const GeoLayout wf_geo_0008A8[];
extern const GeoLayout wf_geo_0008E8[];
extern const GeoLayout wf_geo_000900[];
extern const GeoLayout wf_geo_000940[];
extern const GeoLayout wf_geo_000958[];
extern const GeoLayout wf_geo_0009A0[];
extern const GeoLayout wf_geo_0009B8[];
extern const GeoLayout wf_geo_0009D0[];
extern const GeoLayout wf_geo_0009E8[];
extern const GeoLayout wf_geo_000A00[];
extern const GeoLayout wf_geo_000A40[];
extern const GeoLayout wf_geo_000A58[];
extern const GeoLayout wf_geo_000A98[];
extern const GeoLayout wf_geo_000AB0[];
extern const GeoLayout wf_geo_000AC8[];
extern const GeoLayout wf_geo_000AE0[];
extern const GeoLayout wf_geo_000AF8[];
extern const GeoLayout wf_geo_000B10[];
extern const GeoLayout wf_geo_000B38[];
extern const GeoLayout wf_geo_000B60[];
extern const GeoLayout wf_geo_000B78[];
extern const GeoLayout wf_geo_000B90[];
extern const GeoLayout wf_geo_000BA8[];
extern const GeoLayout wf_geo_000BC8[];
extern const GeoLayout wf_geo_000BE0[];
extern const GeoLayout wf_geo_000BF8[];

// leveldata
extern const Gfx wf_seg7_dl_070050C8[];
extern const Gfx wf_seg7_dl_070052B8[];
extern const Gfx wf_seg7_dl_07005538[];
extern const Gfx wf_seg7_dl_07005690[];
extern const Gfx wf_seg7_dl_07005DD8[];
extern const Gfx wf_seg7_dl_07005EE8[];
extern const Gfx wf_seg7_dl_070064E8[];
extern const Gfx wf_seg7_dl_070065F8[];
extern const Gfx wf_seg7_dl_07006820[];
extern const Gfx wf_seg7_dl_07007220[];
extern const Gfx wf_seg7_dl_07007518[];
extern const Gfx wf_seg7_dl_070087B0[];
extern const Gfx wf_seg7_dl_07008FE8[];
extern const Gfx wf_seg7_dl_07009278[];
extern const Gfx wf_seg7_dl_07009780[];
extern const Gfx wf_seg7_dl_07009890[];
extern const Gfx wf_seg7_dl_07009DB0[];
extern const Gfx wf_seg7_dl_0700A170[];
extern const Gfx wf_seg7_dl_0700ABA0[];
extern const Gfx wf_seg7_dl_0700AEC8[];
extern const Gfx wf_seg7_dl_0700AFB8[];
extern const Gfx wf_seg7_dl_0700BA28[];
extern const Gfx wf_seg7_dl_0700BF50[];
extern const Gfx wf_seg7_dl_0700D028[];
extern const Gfx wf_seg7_dl_0700D300[];
extern const Gfx wf_seg7_dl_0700D708[];
extern const Gfx wf_seg7_dl_0700D9F0[];
extern const Gfx wf_seg7_dl_0700DE20[];
extern const Gfx wf_seg7_dl_0700E0F0[];
extern const Gfx wf_seg7_dl_0700E3D0[];
extern const Gfx wf_seg7_dl_0700E760[];
extern const Gfx wf_seg7_dl_0700E9B8[];
extern const Gfx wf_seg7_dl_0700EB40[];
extern const Gfx wf_seg7_dl_0700EDC0[];
extern const Gfx wf_seg7_dl_0700F018[];
extern const Gfx wf_seg7_dl_0700F1A8[];
extern const Gfx wf_seg7_dl_0700F340[];
extern const Gfx wf_seg7_dl_0700F610[];
extern const Gfx wf_seg7_dl_0700F6C0[];
extern const Gfx wf_seg7_dl_0700F7F8[];
extern const Collision wf_seg7_collision_small_bomp[];
extern const Collision wf_seg7_collision_large_bomp[];
extern const Collision wf_seg7_collision_clocklike_rotation[];
extern const Collision wf_seg7_collision_sliding_brick_platform[];
extern const Collision wf_seg7_collision_tumbling_bridge[];
extern const Collision wf_seg7_collision_trapezoid[];
extern const Collision wf_seg7_collision_platform[];
extern const Collision wf_seg7_collision_breakable_wall[];
extern const Collision wf_seg7_collision_breakable_wall_2[];
extern const Collision wf_seg7_collision_kickable_board[];
extern const Collision wf_seg7_collision_tower_door[];
extern const Collision wf_seg7_collision_rotating_platform[];
extern const Collision wf_seg7_collision_tower[];
extern const Collision wf_seg7_collision_bullet_bill_cannon[];
extern const Collision wf_seg7_collision_070102D8[];
extern const MacroObject wf_seg7_macro_objs[];
extern const struct MovtexQuadCollection wf_movtex_water[];

// script
extern const LevelScript level_wf_entry[];

#include "levels/wf/header.inc.h"

#include "levels/wf/heavyobject/geo_header.h"

#include "levels/wf/heavyobject/anim_header.h"

#include "levels/wf/heavyobject/collision_header.h"

#include "levels/wf/heavyswitch/geo_header.h"

#include "levels/wf/heavyswitch/collision_header.h"

#include "levels/wf/l2_gate/geo_header.h"

#include "levels/wf/l2_gate/collision_header.h"

#include "levels/wf/l2_lava/geo_header.h"

#include "levels/wf/l2_lava/collision_header.h"

#include "levels/wf/lemon/geo_header.h"

#include "levels/wf/lemon/collision_header.h"

#include "levels/wf/lightning/geo_header.h"

#include "levels/wf/lightning/anim_header.h"

#include "levels/wf/moving_vine/geo_header.h"

#include "levels/wf/locked_cage/collision_header.h"

#include "levels/wf/locked_cage/geo_header.h"

#include "levels/wf/l2_falling_floor/collision_header.h"

#include "levels/wf/l2_falling_floor/geo_header.h"

#include "levels/wf/pipeseg/geo_header.h"

#include "levels/wf/gushing_water/geo_header.h"

#include "levels/wf/octopus/geo_header.h"

#include "levels/wf/mirror_light/geo_header.h"

#include "levels/wf/mirror/geo_header.h"

#include "levels/wf/mirror/collision_header.h"

#include "levels/wf/mirror_switch/geo_header.h"

#include "levels/wf/light_button/geo_header.h"

#include "levels/wf/light_button/collision_header.h"

#include "levels/wf/l2_fog/geo_header.h"

#include "levels/wf/l2_fog/collision_header.h"

#include "levels/wf/blue_cushion/geo_header.h"

#include "levels/wf/blue_cushion/collision_header.h"

#include "levels/wf/bedroom_gate/geo_header.h"

#include "levels/wf/bedroom_gate/collision_header.h"

#include "levels/wf/bedroom_gate_alt/collision_header.h"

#include "levels/wf/bouncy_bed/geo_header.h"

#include "levels/wf/bouncy_bed/collision_header.h"

#include "levels/wf/pressure_plate/geo_header.h"

#include "levels/wf/pressure_plate/collision_header.h"

#include "levels/wf/printer/geo_header.h"

#include "levels/wf/printer/collision_header.h"

#include "levels/wf/printer_paper/geo_header.h"

#include "levels/wf/shadow_boss/geo_header.h"

#include "levels/wf/light_bubble/geo_header.h"

#include "levels/wf/rising_fist/geo_header.h"

#include "levels/wf/fist_indicator/geo_header.h"

#include "levels/wf/bedroom_object/geo_header.h"

#include "levels/wf/bedroom_object/collision_header.h"

#include "levels/wf/shower_wall/geo_header.h"

#include "levels/wf/shower_wall/collision_header.h"

#include "levels/wf/l2_fog_console/geo_header.h"

#include "levels/wf/l2_cushion_friend/geo_header.h"

#include "levels/wf/l2_cushion_friend/collision_header.h"

#include "levels/wf/dblock/geo_header.h"

#include "levels/wf/dblock/collision_header.h"

#include "levels/wf/lightning_spinner/geo_header.h"

#include "levels/wf/lightning_spinner/anim_header.h"

#include "levels/wf/floating_plant/geo_header.h"

#include "levels/wf/floating_plant/collision_header.h"

#include "levels/wf/bottled_lava/geo_header.h"

#include "levels/wf/map_l2/geo_header.h"

#include "levels/wf/bar_stool/geo_header.h"

#include "levels/wf/bar_stool/collision_header.h"

#include "levels/wf/red_light_button/geo_header.h"

#include "levels/wf/balcony_elevator/geo_header.h"

#include "levels/wf/balcony_elevator/collision_header.h"

#include "levels/wf/playset_cloth/geo_header.h"

#include "levels/wf/bar_barrier/geo_header.h"

#endif
