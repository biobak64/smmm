// skeeter.inc.c

struct Struct80331C38 {
    s16 unk00;
    s16 unk02;
};

struct ObjectHitbox sSkeeterHitbox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP,
    /* downOffset:        */ 20,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 3,
    /* radius:            */ 180,
    /* height:            */ 100,
    /* hurtboxRadius:     */ 150,
    /* hurtboxHeight:     */ 90,
};

struct Struct80331C38 D_80331C38[] = {
    { 0xFF7E, 0xFF42 },
    { 0x0082, 0xFF42 },
    { 0xFF4C, 0x0082 },
    { 0x00B4, 0x0082 },
};

static void skeeter_spawn_waves(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        spawn_object_relative_with_scale(0, D_80331C38[i].unk00, 0, D_80331C38[i].unk02, 0.8f, o,
                                         MODEL_IDLE_WATER_WAVE, bhvSkeeterWave);
    }
}

static void skeeter_act_idle(void) {
    cur_obj_init_animation_with_sound(3);
    o->oForwardVel = 0.0f;

    if (o->oTimer > 90 && cur_obj_check_if_near_animation_end()) {
        o->oAction = SKEETER_ACT_WALK;
    }
}

static void skeeter_act_lunge(void) {
    skeeter_spawn_waves();
    cur_obj_init_animation_with_sound(0);

    if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
        o->oMoveAngleYaw = cur_obj_reflect_move_angle_off_wall();
        o->oForwardVel *= 0.3f;
        o->oFlags &= ~OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
    }

    if (obj_forward_vel_approach(0.0f, 0.8f) && cur_obj_check_if_at_animation_end()) {
        o->oMoveAngleYaw = o->oFaceAngleYaw;

        //if (o->oDistanceToMario >= 25000.0f) {
        //    o->oSkeeterTargetAngle = o->oAngleToMario;
        //} else {
        //    o->oSkeeterTargetAngle = obj_random_fixed_turn(random_u16() % 0x2000);
        //}

        o->oAction = SKEETER_ACT_IDLE;
        o->oFlags |= OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
    }
}

static void skeeter_act_walk(void) {
    f32 sp24;

    if (!(o->oMoveFlags & OBJ_MOVE_MASK_ON_GROUND)) {
        o->oAction = SKEETER_ACT_IDLE;
    } else {
        obj_forward_vel_approach(o->oSkeeterUnkFC, 0.4f);
        sp24 = 0.12f * o->oForwardVel;

        cur_obj_init_animation_with_accel_and_sound(2, sp24);
        cur_obj_play_sound_at_anim_range(3, 13, SOUND_OBJ_SKEETER_WALK);

        if (o->oSkeeterTurningAwayFromWall != 0) {
            o->oSkeeterTurningAwayFromWall = obj_resolve_collisions_and_turn(o->oSkeeterTargetAngle, 0);
        } else {
            if (o->oDistanceToMario >= 25000.0f) {
                o->oSkeeterTargetAngle = o->oAngleToMario;
                o->oSkeeterWaitTime = random_linear_offset(20, 30);
            }

            if (!(o->oSkeeterTurningAwayFromWall = obj_bounce_off_walls_edges_objects(&o->oSkeeterTargetAngle))) {
                if (o->oDistanceToMario < 500.0f) {
                    o->oSkeeterTargetAngle = o->oAngleToMario;
                    o->oSkeeterUnkFC = 20.0f;
                } else {
                    o->oSkeeterUnkFC = 10.0f;
                    if (o->oSkeeterWaitTime != 0) {
                        o->oSkeeterWaitTime--;
                    } else if (cur_obj_check_if_near_animation_end()) {
                        if (random_u16() & 0x0003) {
                            o->oSkeeterTargetAngle = obj_random_fixed_turn(0x2000);
                            o->oSkeeterWaitTime = random_linear_offset(100, 100);
                        } else {
                            o->oAction = SKEETER_ACT_IDLE;
                            o->oSkeeterWaitTime = random_linear_offset(100, 100);
                        }
                    }
                }
            }
        }

        cur_obj_rotate_yaw_toward(o->oSkeeterTargetAngle, 0x400);
    }
}

void bhv_skeeter_update(void) {
    o->oDeathSound = SOUND_OBJ_SNUFIT_SKEETER_DEATH;
    //treat_far_home_as_mario(1000.0f);
    if (gCurrLevelNum == LEVEL_WF) {
        if (gMarioState->pos[1] > -100.0f) {
            cur_obj_hide();
        } else {
            cur_obj_unhide();
        }
    }

    cur_obj_update_floor_and_walls();

    if (o->oFloorType == SURFACE_INSTANT_QUICKSAND || o->oFloorType == SURFACE_DEATH_PLANE) {
        vec3f_copy(&o->oPosX, &o->oHomeX);
    }

    switch (o->oAction) {
        case SKEETER_ACT_IDLE:
            skeeter_act_idle();
            break;
        case SKEETER_ACT_LUNGE:
            skeeter_act_lunge();
            break;
        case SKEETER_ACT_WALK:
            skeeter_act_walk();
            break;
    }

    obj_check_attacks(&sSkeeterHitbox, o->oAction);
    cur_obj_move_standard(-78);
}

void bhv_skeeter_wave_update(void) {
    if (approach_f32_ptr(&o->header.gfx.scale[0], 0.0f, 0.3f)) {
        obj_mark_for_deletion(o);
    }

    cur_obj_scale(o->header.gfx.scale[0]);
    o->oAnimState = gGlobalTimer / 6;
}
