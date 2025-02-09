// door.inc.c

struct DoorAction {
    u32 flag;
    s32 action;
};

static struct DoorAction sDoorActions[] = { { 0x40000, 3 }, { 0x80000, 4 }, { 0x10000, 1 }, { 0x20000, 2 }, { 0xFFFFFFFF, 0 }, };

static s32 sDoorOpenSounds[] = { SOUND_GENERAL_OPEN_WOOD_DOOR, SOUND_GENERAL_OPEN_IRON_DOOR };

static s32 sDoorCloseSounds[] = { SOUND_GENERAL_CLOSE_WOOD_DOOR, SOUND_GENERAL_CLOSE_IRON_DOOR };

void door_animation_and_reset(s32 sp18) {
    cur_obj_init_animation_with_sound(sp18);
    if (cur_obj_check_if_near_animation_end()) {
        o->oAction = 0;
    }
}


s32 check_warp_door_cutscene(const BehaviorScript *behavior) {
    if (segmented_to_virtual(bhvDoor) == behavior) {
        return FALSE;
    } else if (segmented_to_virtual(bhvBlockedDoor) == behavior) {
        return FALSE;
    } else if (segmented_to_virtual(bhvSmallKeyDoor) == behavior) {
        return FALSE;
    }

    return TRUE;
}


void set_door_camera_event(void) {
    if (check_warp_door_cutscene(o->behavior))
        gPlayerCameraState->cameraEvent = CAM_EVENT_DOOR_WARP;
    gPlayerCameraState->usedObj = o;
}

void play_door_open_noise(void) {
    s32 sp1C = cur_obj_has_model(MODEL_HMC_METAL_DOOR);
    if (o->oTimer == 0) {
        cur_obj_play_sound_2(sDoorOpenSounds[sp1C]);
        gTimeStopState |= TIME_STOP_MARIO_OPENED_DOOR;
    }
    if (o->oTimer == 70) {
        cur_obj_play_sound_2(sDoorCloseSounds[sp1C]);
    }
}

void play_warp_door_open_noise(void) {
    s32 sp1C = cur_obj_has_model(MODEL_HMC_METAL_DOOR);
    if (o->oTimer == 30) {
        cur_obj_play_sound_2(sDoorCloseSounds[sp1C]);
    }
}
extern s8 sLevelRoomOffsets[];
void bhv_door_loop(void) {
    struct Object *obj = NULL;
    s32 sp1C = 0;
    
    if (gCurrLevelNum == LEVEL_HMC && o->oRoom == 9 && (o->oBehParams2ndByte == 2 ||
        (o->oBehParams2ndByte == 1 && save_file_get_rooms(1) & (1 << 25)))) {
        o->oInteractType = INTERACT_IGLOO_BARRIER;
    } else if (o->oDistanceToMario < 1500.0f && o->oInteractType != INTERACT_WARP_DOOR) {
        if ((obj = CL_obj_find_nearest_object_with_behavior_room(o, bhvProspectorLock, gMarioCurrentRoom)) != NULL 
            && dist_between_objects(o, obj) < 600.0f) {
                o->oInteractType = INTERACT_IGLOO_BARRIER;
        } else {
            o->oInteractType = INTERACT_DOOR;
        }
    }

    if (cur_obj_has_behavior(bhvSmallKeyDoor)) {
        if (save_file_get_keys(1) & (1 << o->oBehParams2ndByte)) {
            o->oAnimState = 0;
        }
    }

    if (o->oInteractionSubtype & INT_SUBTYPE_LOCKED_DOOR) {
        if (save_file_get_keys(0) & (1 << o->oBehParams2ndByte) && !(save_file_get_keys(1) & (1 << o->oBehParams2ndByte))) {
            obj = spawn_object(o, MODEL_NONE, bhvSparkleSpawn);
            obj->oFlags |= OBJ_FLAG_MULTIROOM;
            obj->oRoom2 = gMarioCurrentRoom;
            obj->oF4 = 1;
        }
    }

    while (sDoorActions[sp1C].flag != 0xFFFFFFFF) {
        if (cur_obj_clear_interact_status_flag(sDoorActions[sp1C].flag)) {
            set_door_camera_event();
            cur_obj_change_action(sDoorActions[sp1C].action);
        }
        sp1C++;
    }

    switch (o->oAction) {
        case 0:
            cur_obj_init_animation_with_sound(0);
            break;
        case 1:
            door_animation_and_reset(1);
            play_door_open_noise();
            break;
        case 2:
            door_animation_and_reset(2);
            play_door_open_noise();
            break;
        case 3:
            door_animation_and_reset(3);
            play_warp_door_open_noise();
            break;
        case 4:
            door_animation_and_reset(4);
            play_warp_door_open_noise();
            break;
    }

    if (o->oAction == 0) {
        load_object_collision_model();
    }

    bhv_star_door_loop_2();
}

void bhv_door_init(void) {
    f32 x;
    f32 z;
    struct Surface *floor;
    x = o->oPosX + sins(o->oMoveAngleYaw) * 200.0f;
    z = o->oPosZ + coss(o->oMoveAngleYaw) * 200.0f;
    find_floor(x, o->oPosY, z, &floor);
    if (floor != NULL) {
        o->oRoom = floor->room;
    }
    x = o->oPosX + sins(o->oMoveAngleYaw) * -200.0f;
    z = o->oPosZ + coss(o->oMoveAngleYaw) * -200.0f;
    find_floor(x, o->oPosY, z, &floor);
    if (floor != NULL) {
        o->oRoom2 = floor->room;
    }

    if (cur_obj_has_behavior(bhvBigKeyDoor)) {
        o->oAnimState = o->oBehParams >> 24;
        return;
    }
}

void bhv_star_door_loop_2(void) {
    s32 sp4 = FALSE;

    if (gMarioCurrentRoom != 0) {
        if (o->oDoorUnkF8 == gMarioCurrentRoom) {
            sp4 = TRUE;
        } else if (gMarioCurrentRoom == o->oDoorUnkFC) {
            sp4 = TRUE;
        } else if (gMarioCurrentRoom == o->oDoorUnk100) {
            sp4 = TRUE;
        } else if (gDoorAdjacentRooms[gMarioCurrentRoom][0] == o->oDoorUnkFC) {
            sp4 = TRUE;
        } else if (gDoorAdjacentRooms[gMarioCurrentRoom][0] == o->oDoorUnk100) {
            sp4 = TRUE;
        } else if (gDoorAdjacentRooms[gMarioCurrentRoom][1] == o->oDoorUnkFC) {
            sp4 = TRUE;
        } else if (gDoorAdjacentRooms[gMarioCurrentRoom][1] == o->oDoorUnk100) {
            sp4 = TRUE;
        }
    } else {
        sp4 = TRUE;
    }

    if (sp4 == TRUE) {
        o->header.gfx.node.flags |= GRAPH_RENDER_ACTIVE;
        D_8035FEE4++;
    }

    if (!sp4) {
        o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
    }

    o->oDoorUnk88 = sp4;
}
