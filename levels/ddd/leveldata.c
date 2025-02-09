#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "moving_texture_macros.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
#include "special_preset_names.h"
#include "textures.h"
#include "dialog_ids.h"

#include "make_const_nonconst.h"
#include "levels/ddd/texture.inc.c"
#include "levels/ddd/areas/1/1/model.inc.c"
#include "levels/ddd/areas/1/2/model.inc.c"
#include "levels/ddd/areas/1/3/model.inc.c"
#include "levels/ddd/areas/1/4/model.inc.c"
#include "levels/ddd/areas/2/1/model.inc.c"
#include "levels/ddd/areas/2/2/model.inc.c"
#include "levels/ddd/areas/2/3/model.inc.c"
#include "levels/ddd/areas/2/4/model.inc.c"
#include "levels/ddd/sub_door/1.inc.c"
#include "levels/ddd/sub_door/2.inc.c"
#include "levels/ddd/sub_door/3.inc.c"
#include "levels/ddd/submarine/1.inc.c"
#include "levels/ddd/submarine/2.inc.c"
#include "levels/ddd/areas/2/5/model.inc.c"
#include "levels/ddd/areas/2/6/model.inc.c"
#include "levels/ddd/pole/model.inc.c"
#include "levels/ddd/areas/1/collision.inc.c"
#include "levels/ddd/areas/2/collision.inc.c"
#include "levels/ddd/areas/1/macro.inc.c"
#include "levels/ddd/areas/2/macro.inc.c"
#include "levels/ddd/submarine/collision.inc.c"
#include "levels/ddd/sub_door/collision.inc.c"
#include "levels/ddd/areas/1/movtext.inc.c"
#include "levels/ddd/areas/2/movtext.inc.c"
#include "levels/ddd/leveldata.inc.c"

#include "levels/ddd/controller/model.inc.c"
#include "levels/ddd/end_goomba/model.inc.c"
#include "levels/ddd/end_shyguy/model.inc.c"
#include "levels/ddd/end_boo/model.inc.c"
#include "levels/ddd/end_cage/model.inc.c"
#include "levels/ddd/end_cage/collision.inc.c"
#include "levels/ddd/end_fist/model.inc.c"
#include "levels/ddd/end_bubble/model.inc.c"
#include "levels/ddd/end_log/model.inc.c"
#include "levels/ddd/end_spike/model.inc.c"
#include "levels/ddd/end_spike/anims/data.inc.c"
#include "levels/ddd/end_spike/anims/table.inc.c"
#include "levels/ddd/end_laser/model.inc.c"
#include "levels/ddd/hole_wall/model.inc.c"
#include "levels/ddd/hole_wall1/collision.inc.c"
#include "levels/ddd/hole_wall2/collision.inc.c"
#include "levels/ddd/hole_wall3/collision.inc.c"
#include "levels/ddd/roof_hole/model.inc.c"
#include "levels/ddd/roof_hole/collision.inc.c"
#include "levels/ddd/controller/anims/data.inc.c"
#include "levels/ddd/controller/anims/table.inc.c"
#include "levels/ddd/hole_wall4/collision.inc.c"
#include "levels/ddd/hole_wall5/collision.inc.c"
#include "levels/ddd/hole_wall_ground/model.inc.c"
#include "levels/ddd/hole_wall_ground/collision.inc.c"
#include "levels/ddd/bg_ground/model.inc.c"
#include "levels/ddd/bg_ground/collision.inc.c"
#include "levels/ddd/cage_beam/model.inc.c"
#include "levels/ddd/bg_ground_center/model.inc.c"
#include "levels/ddd/bg_ground_center/collision.inc.c"
#include "levels/ddd/nice_face/model.inc.c"
#include "levels/ddd/teardrop/model.inc.c"
#include "levels/ddd/winking_moon/model.inc.c"
#include "levels/ddd/red_shadow2/model.inc.c"