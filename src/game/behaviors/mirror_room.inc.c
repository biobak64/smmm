void bhv_l2_fog_init(void) {
    if (save_file_get_newflags(0) & SAVE_NEW_FLAG_FOG_KILLED) {
        o->activeFlags = 0;
        return;
    }
    if (gIsConsole) {
        cur_obj_set_model(MODEL_L2_FOG_CONSOLE);
    }
}

void bhv_l2_fog_loop(void) {
    switch (o->oAction) {
        case 0:
            if (CL_nearest_object_with_behavior_and_field(bhvDenLight, 0x144, 1)) {
                o->oAction = 1;
            }
            break;
        case 1:
            o->oOpacity -= 10;
            if (o->oOpacity < 15) {
                o->activeFlags = 0;
                save_file_set_newflags(SAVE_NEW_FLAG_FOG_KILLED, 0);
                o->oObj100 = spawn_object_relative(17, 0, -600, -800, o, MODEL_NONE, bhvCoinFormation);
            }
            break;
    }
}


void bhv_den_light_init(void) {
    o->header.gfx.scale[1] = 50.0f;
    if (o->oBehParams2ndByte == 0) {
        o->oFaceAnglePitch = 0x4000;
        o->header.gfx.scale[0] = o->header.gfx.scale[2] = 6.0f;
        cur_obj_hide();
    } else {
        o->oFaceAnglePitch = 0x3800;
        o->header.gfx.scale[0] = o->header.gfx.scale[2] = 4.0f;
    }
}

void bhv_den_light_loop(void) {
    struct Object *obj;
    switch (o->oAction) {
        case 0:
            obj = CL_obj_nearest_object_behavior_params(bhvLightButton, 0);
            if (obj != NULL && obj->oF4 == 1) {
                o->oAction = 1;
                cur_obj_unhide();
            }
            break;
        case 1:
            break;
    }
}


void bhv_light_button_loop(void) {
    switch (o->oAction) {
        case 0:
            o->oAnimState = 0;
            if (o->oF4 && o->oBehParams2ndByte == 0) {
                o->oF4 = 0;
            }
            break;
        case 1:
            o->oAnimState = 1;
            if (o->oF4 == 0) {
                o->oF4 = 1;
                play_sound(SOUND_GENERAL2_RIGHT_ANSWER, gGlobalSoundSource);
                if (o->oBehParams2ndByte) {
                    o->oObj100 = spawn_object(o, MODEL_STAR_PIECE, bhvStarPiece);
                    o->oObj100->oBehParams = 0x09000000;
                    vec3f_set(&o->oObj100->oPosX, -8823.0f, 493.5f, -17575.0f);
                }
            }
            break;
    }
    o->oAction = 0;
}



void bhv_mirror_switch_init(void) {
    f32 zpos = o->oPosZ + 20028.0f;
    o->oObj100 = spawn_object(o, MODEL_MIRROR_SWITCH, bhvStaticObject);
    o->oObj100->oPosZ = -20028.0f - zpos;
    o->oObj100->oBehParams2ndByte = o->oBehParams2ndByte;
    o->oObj100->oFlags &= ~OBJ_FLAG_DISABLE_ON_ROOM_EXIT;
    o->os16F6 = o->os16F8 = 0x100;
}


void bhv_mirror_switch_loop(void) {
    struct Object *obj;
    if (o->oBehParams2ndByte == 0) {
        if (gMarioState->pos[2] < -19300.0f && gMarioState->pos[0] < -8500.0f) {
            gCamera->comitCutscene = 3;
        } else {
            gCamera->comitCutscene = 0;
        }
    }
    switch (o->oAction) {
        case 0:
            if (gMarioObject->platform == o) {
                o->oAction = 1;
            }
            break;
        case 1:
            cur_obj_scale_over_time(2, 3, 1.5f, 0.2f);
            if (o->oTimer == 3) {
                cur_obj_play_sound_2(SOUND_GENERAL2_PURPLE_SWITCH);
                o->oAction = 2;
                cur_obj_shake_screen(SHAKE_POS_SMALL);
                queue_rumble_data(5, 80);
            }
            break;
        case 2:
            /*if (gPlayer1Controller->buttonPressed & L_JPAD) {
                o->os16F4 += 0x2000;
            } else if (gPlayer1Controller->buttonPressed & R_JPAD) {
                o->os16F4 -= 0x2000;
            }*/
            if (gPlayer1Controller->buttonDown & L_JPAD || gPlayer1Controller->buttonDown & L_CBUTTONS) {
                cur_obj_play_sound_1(SOUND_ENV_METAL_BOX_PUSH);
                o->os16F6 = approach_s16_symmetric(o->os16F6, 0xC0, 0x8);
                o->os16F4 += o->os16F6;
                o->os16106++;
                if (o->os16106 > 30) {
                    o->os16F6 = approach_s16_symmetric(o->os16F6, 0x200, 0x20);
                }
            } else {
                o->os16F6 = 0x80;
                o->os16106 = 0;
            }
            
            if (gPlayer1Controller->buttonDown & R_JPAD || gPlayer1Controller->buttonDown & R_CBUTTONS) {
                cur_obj_play_sound_1(SOUND_ENV_METAL_BOX_PUSH);
                o->os16F8 = approach_s16_symmetric(o->os16F8, 0xC0, 0x8);
                o->os16F4 -= o->os16F8;
                o->os16104++;
                if (o->os16104 > 30) {
                    o->os16F8 = approach_s16_symmetric(o->os16F8, 0x200, 0x20);
                }
            } else {
                o->os16F8 = 0x80;
                o->os16104 = 0;
            }

            if (gPlayer1Controller->buttonPressed & U_JPAD || gPlayer1Controller->buttonPressed & U_CBUTTONS) {
                // if (o->os16F6 != 0) {
                    cur_obj_play_sound_1(SOUND_OBJ_PIRANHA_PLANT_APPEAR);
                // }
                o->os16F6 = 0;
            } else if (gPlayer1Controller->buttonPressed & D_JPAD || gPlayer1Controller->buttonPressed & D_CBUTTONS) {
                // if (o->os16F6 != 1) {
                    cur_obj_play_sound_1(SOUND_GENERAL_CASTLE_TRAP_OPEN);
                // }
                o->os16F6 = 1;
            }

            if (gMarioObject->platform != o) {
                o->oAction = 3;
            }
            break;
        case 3:
            cur_obj_scale_over_time(2, 3, 0.2f, 1.5f);
            if (o->oTimer == 3) {
                o->oAction = 0;
            }
            break;
    }
    if (o->oObj100 != NULL) {
        o->oObj100->header.gfx.scale[1] = o->header.gfx.scale[1];
    }
}



void bhv_mirror_init(void) {
    f32 zpos = o->oPosZ + 20028.0f;
    o->os16F6 = o->oFaceAngleYaw;
    o->oFloatF8 = 1.0f;
    if (o->oRoom == 6) {
        o->oObj100 = spawn_object(o, MODEL_MIRROR, bhvStaticObject);
        o->oObj100->oPosZ = -20028.0f - zpos;   
        o->oObj100->oBehParams2ndByte = o->oBehParams2ndByte;
        o->oObj100->oFlags &= ~OBJ_FLAG_DISABLE_ON_ROOM_EXIT;
    }
}


void bhv_mirror_loop(void) {
    struct Object *obj;
    if ((o->oBehParams >> 24) == 0) {
        obj = CL_obj_nearest_object_behavior_params(bhvMirrorSwitch, o->oBehParams2ndByte << 16);
        if (obj == NULL)
            return;
        switch (o->oAction) {
            case 0:
                o->oFaceAngleYaw = o->os16F6 + obj->os16F4;

                if (obj->os16F6 == 1) {
                    o->oAction = 1;
                }
                load_object_collision_model();
                break;
            case 1:
                if (o->oFloatF8 > 0.4f) {
                    o->oFloatF8 -= 0.05f;
                    cur_obj_scale(o->oFloatF8);
                }
                if (obj->os16F6 == 0) {
                    o->oAction = 2;
                }
                break;
            case 2:
                o->oFloatF8 += 0.05f;
                if (o->oFloatF8 >= 1.0f) {
                    o->oFloatF8 = 1.0f;
                    o->oAction = 0;
                }
                cur_obj_scale(o->oFloatF8);
                break;
        }
    } else {
        switch (o->oAction) {
            case 0:
                spawn_mist_particles();
                obj = cur_obj_nearest_object_with_behavior(bhvDenLight);
                if (obj == NULL)
                    return;
                obj->header.gfx.scale[1] = 27.0;
                obj = spawn_object(o, MODEL_MIRROR_LIGHT, bhvDenLight);
                obj->oBehParams2ndByte = 1;
                obj->oFaceAngleYaw = 0x8000;
                obj->oPosY = 213.0f;
                o->oAction = 1;
                break;
            case 1:
                break;
        }
        load_object_collision_model();
    }
    //o->os16FC = 0;
    if (o->oObj100 != NULL) {
        obj_scale(o->oObj100, o->oFloatF8);
        //o->oObj100->header.gfx.scale[2] = -o->oFloatF8;
        o->oObj100->oFaceAngleYaw = -o->oFaceAngleYaw;
    }
}



void bhv_mirror_light_init(void) {
    o->oFaceAnglePitch = 0x4000;
}

void bhv_mirror_light_loop(void) {
    struct Surface *wall = NULL;
    struct Object *obj;
    f32 length, sin, cos;
    s16 angle;
    s32 i = 0;
    if (o->oObjF8 != NULL) {
        o->oObjF8->os16FC = 0;
    }
    o->header.gfx.scale[1] = 1.0f;
    if (o->oRoom != gMarioCurrentRoom)
        return;

    if (o->oBehParams2ndByte && o->oTimer) {
        o->activeFlags = 0;
        return;
        //o->parentObj->header.gfx.scale[1] = 1.0f;
    }
    switch (o->oAction) {
        case 0:
            o->oHomeY = o->oPosY;
            length = o->header.gfx.scale[1] * 100.0f;
            sin = sins(o->oFaceAngleYaw);
            cos = coss(o->oFaceAngleYaw);
            while (wall == NULL) {
                length += 100.0f;
                o->oHomeX = o->oPosX + (length * sin);
                o->oHomeZ = o->oPosZ + (length * cos);
                wall = resolve_and_return_wall_collisions(&o->oHomeX, 0, 140.0f);
                if (wall != NULL) {
                    length -= 10.0f;
                    while (o->oSurfF4 == NULL) {
                        length += 10.0f;
                        o->oHomeX = o->oPosX + (length * sin);
                        o->oHomeZ = o->oPosZ + (length * cos);
                        o->oSurfF4 = resolve_and_return_wall_collisions(&o->oHomeX, 0, 40.0f);
                        if (o->oSurfF4 != NULL) {
                            length -= 10.0f;
                            break;
                        }
                        i++;
                        if (i >= 200) {
                            return;
                        }
                    }
                    break;
                }
                i++;
                if (i >= 200) {
                    return;
                }
            }
            o->header.gfx.scale[1] = length / 100.0f;
            // o->oSurfF4 = wall;

            if (o->oSurfF4->type == SURFACE_MIRROR && (o->oSurfF4->object == NULL || o->oSurfF4->object->os16FC == 0)) {
                if (o->oSurfF4->object != NULL) {
                    o->oObjF8 = o->oSurfF4->object;
                    o->oObjF8->os16FC = 1;
                }
                obj = spawn_object(o, MODEL_MIRROR_LIGHT, bhvMirrorLight);
                angle = atan2s(o->oSurfF4->normal.z, o->oSurfF4->normal.x);
                obj->oFaceAngleYaw = (angle - o->oFaceAngleYaw) - (0x8000 - angle);
                obj->oBehParams2ndByte = 1;
                vec3f_copy(&obj->oPosX, &o->oHomeX);
                //o->oAction = 1;
            } else if (o->oSurfF4->type == SURFACE_LIGHT_CHECKPOINT && o->oSurfF4->object != NULL) {
                o->oSurfF4->object->oAction = 1;
            }
            o->oSurfF4 = NULL;
            break;
        case 1:
            break;
    }
}