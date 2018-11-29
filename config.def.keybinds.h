/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2016 - Daniel De Matteis
 *  Copyright (C) 2016 - Brad Parker
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __CONFIG_DEF_KEYBINDS_H
#define __CONFIG_DEF_KEYBINDS_H

#ifndef IS_SALAMANDER

/* User 1 */
static const struct retro_keybind retro_keybinds_1[] = {
    /*     | RetroPad button              | enum                                             | keyboard key  | m-btn | js btn   | js axis | */
#ifdef __QNX__
   { true, RETRO_DEVICE_ID_JOYPAD_B,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_B,              RETROK_k,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_Y,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_Y,              RETROK_i,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_SELECT, MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_SELECT,         RETROK_v,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_START,  MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_START,          RETROK_b,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_UP,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_UP,             RETROK_e,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_DOWN,   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_DOWN,           RETROK_s,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_LEFT,   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_LEFT,           RETROK_w,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_RIGHT,  MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_RIGHT,          RETROK_d,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_A,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_A,              RETROK_l,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_X,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_X,              RETROK_o,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L,              RETROK_f,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R,              RETROK_j,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L2,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L2,             RETROK_r,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R2,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R2,             RETROK_u,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L3,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L3,             RETROK_g,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R3,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R3,             RETROK_h,       NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_ANALOG_LEFT_X_PLUS,      MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_PLUS,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_X_MINUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_MINUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_Y_PLUS,      MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_PLUS,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_Y_MINUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_MINUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_X_PLUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_PLUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_X_MINUS,    MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_MINUS,  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_Y_PLUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_PLUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_Y_MINUS,    MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_MINUS,  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_LIGHTGUN_TRIGGER,        MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_TRIGGER,      RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_RELOAD,         MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_RELOAD,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_A,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_A,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_B,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_B,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_C,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_C,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_START,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_START,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_SELECT,         MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_SELECT,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_UP,        MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_UP,      RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_DOWN,      MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_DOWN,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_LEFT,      MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_LEFT,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_RIGHT,     MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_RIGHT,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_TURBO_ENABLE,             MENU_ENUM_LABEL_VALUE_INPUT_TURBO_ENABLE,              RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_FAST_FORWARD_KEY,         MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_KEY,     RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_FAST_FORWARD_HOLD_KEY,    MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_HOLD_KEY,RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SLOWMOTION_KEY,           MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_KEY,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SLOWMOTION_HOLD_KEY,      MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_HOLD_KEY,  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LOAD_STATE_KEY,           MENU_ENUM_LABEL_VALUE_INPUT_META_LOAD_STATE_KEY,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SAVE_STATE_KEY,           MENU_ENUM_LABEL_VALUE_INPUT_META_SAVE_STATE_KEY,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_FULLSCREEN_TOGGLE_KEY,    MENU_ENUM_LABEL_VALUE_INPUT_META_FULLSCREEN_TOGGLE_KEY,RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_QUIT_KEY,                 MENU_ENUM_LABEL_VALUE_INPUT_META_QUIT_KEY,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_STATE_SLOT_PLUS,          MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_PLUS,      RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_STATE_SLOT_MINUS,         MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_MINUS,     RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_REWIND,                   MENU_ENUM_LABEL_VALUE_INPUT_META_REWIND,               RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_BSV_RECORD_TOGGLE,        MENU_ENUM_LABEL_VALUE_INPUT_META_BSV_RECORD_TOGGLE,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_PAUSE_TOGGLE,             MENU_ENUM_LABEL_VALUE_INPUT_META_PAUSE_TOGGLE,         RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_FRAMEADVANCE,             MENU_ENUM_LABEL_VALUE_INPUT_META_FRAMEADVANCE,         RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_RESET,                    MENU_ENUM_LABEL_VALUE_INPUT_META_RESET,                RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SHADER_NEXT,              MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_NEXT,          RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SHADER_PREV,              MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_PREV,          RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_CHEAT_INDEX_PLUS,         MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_PLUS,     RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_CHEAT_INDEX_MINUS,        MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_MINUS,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_CHEAT_TOGGLE,             MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_TOGGLE,         RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SCREENSHOT,               MENU_ENUM_LABEL_VALUE_INPUT_META_SCREENSHOT,           RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_MUTE,                     MENU_ENUM_LABEL_VALUE_INPUT_META_MUTE,                 RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_OSK,                      MENU_ENUM_LABEL_VALUE_INPUT_META_OSK,                  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_FPS_TOGGLE,               MENU_ENUM_LABEL_VALUE_INPUT_META_FPS_TOGGLE,           RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_NETPLAY_GAME_WATCH,       MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_GAME_WATCH,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ENABLE_HOTKEY,            MENU_ENUM_LABEL_VALUE_INPUT_META_ENABLE_HOTKEY,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_VOLUME_UP,                MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_UP,            RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_VOLUME_DOWN,              MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_DOWN,          RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_OVERLAY_NEXT,             MENU_ENUM_LABEL_VALUE_INPUT_META_OVERLAY_NEXT,         RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_DISK_EJECT_TOGGLE,        MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_EJECT_TOGGLE,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_DISK_NEXT,                MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_NEXT,            RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_DISK_PREV,                MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_PREV,            RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_GRAB_MOUSE_TOGGLE,        MENU_ENUM_LABEL_VALUE_INPUT_META_GRAB_MOUSE_TOGGLE,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_GAME_FOCUS_TOGGLE,        MENU_ENUM_LABEL_VALUE_INPUT_META_GAME_FOCUS_TOGGLE,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_UI_COMPANION_TOGGLE,      MENU_ENUM_LABEL_VALUE_INPUT_META_UI_COMPANION_TOGGLE,  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_MENU_TOGGLE,              MENU_ENUM_LABEL_VALUE_INPUT_META_MENU_TOGGLE,          RETROK_SPACE,   NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_RECORDING_TOGGLE,         MENU_ENUM_LABEL_VALUE_INPUT_META_RECORDING_TOGGLE,     RETROK_UNKNOWN,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_STREAMING_TOGGLE,         MENU_ENUM_LABEL_VALUE_INPUT_META_STREAMING_TOGGLE,     RETROK_UNKNOWN,      NO_BTN, NO_BTN, 0, AXIS_NONE },
#else
   { true, RETRO_DEVICE_ID_JOYPAD_B,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_B,              RETROK_z,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_Y,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_Y,              RETROK_a,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_SELECT, MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_SELECT,         RETROK_RSHIFT,  NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_START,  MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_START,          RETROK_RETURN,  NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_UP,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_UP,             RETROK_UP,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_DOWN,   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_DOWN,           RETROK_DOWN,    NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_LEFT,   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_LEFT,           RETROK_LEFT,    NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_RIGHT,  MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_RIGHT,          RETROK_RIGHT,   NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_A,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_A,              RETROK_x,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_X,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_X,              RETROK_s,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L,              RETROK_q,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R,              RETROK_w,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L2,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L2,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R2,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R2,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L3,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L3,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R3,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R3,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_ANALOG_LEFT_X_PLUS,      MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_PLUS,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_X_MINUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_MINUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_Y_PLUS,      MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_PLUS,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_Y_MINUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_MINUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_X_PLUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_PLUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_X_MINUS,    MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_MINUS,  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_Y_PLUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_PLUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_Y_MINUS,    MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_MINUS,  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_LIGHTGUN_TRIGGER,        MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_TRIGGER,      RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_RELOAD,         MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_RELOAD,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_A,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_A,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_B,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_B,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_C,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_C,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_START,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_START,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_SELECT,         MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_SELECT,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_UP,        MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_UP,      RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_DOWN,      MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_DOWN,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_LEFT,      MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_LEFT,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_RIGHT,     MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_RIGHT,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_TURBO_ENABLE,             MENU_ENUM_LABEL_VALUE_INPUT_TURBO_ENABLE,         RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_FAST_FORWARD_KEY,         MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_KEY,     RETROK_SPACE,   NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_FAST_FORWARD_HOLD_KEY,    MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_HOLD_KEY,RETROK_l,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SLOWMOTION_KEY,           MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_KEY,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SLOWMOTION_HOLD_KEY,      MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_KEY,       RETROK_e,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LOAD_STATE_KEY,           MENU_ENUM_LABEL_VALUE_INPUT_META_LOAD_STATE_KEY,       RETROK_F4,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SAVE_STATE_KEY,           MENU_ENUM_LABEL_VALUE_INPUT_META_SAVE_STATE_KEY,       RETROK_F2,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_FULLSCREEN_TOGGLE_KEY,    MENU_ENUM_LABEL_VALUE_INPUT_META_FULLSCREEN_TOGGLE_KEY,RETROK_f,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_QUIT_KEY,                 MENU_ENUM_LABEL_VALUE_INPUT_META_QUIT_KEY,             RETROK_ESCAPE,  NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_STATE_SLOT_PLUS,          MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_PLUS,      RETROK_F7,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_STATE_SLOT_MINUS,         MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_MINUS,     RETROK_F6,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_REWIND,                   MENU_ENUM_LABEL_VALUE_INPUT_META_REWIND,               RETROK_r,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_BSV_RECORD_TOGGLE,        MENU_ENUM_LABEL_VALUE_INPUT_META_BSV_RECORD_TOGGLE,  RETROK_o,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_PAUSE_TOGGLE,             MENU_ENUM_LABEL_VALUE_INPUT_META_PAUSE_TOGGLE,         RETROK_p,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_FRAMEADVANCE,             MENU_ENUM_LABEL_VALUE_INPUT_META_FRAMEADVANCE,         RETROK_k,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_RESET,                    MENU_ENUM_LABEL_VALUE_INPUT_META_RESET,                RETROK_h,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SHADER_NEXT,              MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_NEXT,          RETROK_m,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SHADER_PREV,              MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_PREV,          RETROK_n,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_CHEAT_INDEX_PLUS,         MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_PLUS,     RETROK_y,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_CHEAT_INDEX_MINUS,        MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_MINUS,    RETROK_t,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_CHEAT_TOGGLE,             MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_TOGGLE,         RETROK_u,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_SCREENSHOT,               MENU_ENUM_LABEL_VALUE_INPUT_META_SCREENSHOT,           RETROK_F8,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_MUTE,                     MENU_ENUM_LABEL_VALUE_INPUT_META_MUTE,                 RETROK_F9,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_OSK,                      MENU_ENUM_LABEL_VALUE_INPUT_META_OSK,                  RETROK_F12,     NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_FPS_TOGGLE,               MENU_ENUM_LABEL_VALUE_INPUT_META_FPS_TOGGLE,           RETROK_F3,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_NETPLAY_GAME_WATCH,       MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_GAME_WATCH,   RETROK_i,       NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ENABLE_HOTKEY,            MENU_ENUM_LABEL_VALUE_INPUT_META_ENABLE_HOTKEY,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_VOLUME_UP,                MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_UP,            RETROK_KP_PLUS, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_VOLUME_DOWN,              MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_DOWN,          RETROK_KP_MINUS,NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_OVERLAY_NEXT,             MENU_ENUM_LABEL_VALUE_INPUT_META_OVERLAY_NEXT,         RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_DISK_EJECT_TOGGLE,        MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_EJECT_TOGGLE,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_DISK_NEXT,                MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_NEXT,            RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_DISK_PREV,                MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_PREV,            RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_GRAB_MOUSE_TOGGLE,        MENU_ENUM_LABEL_VALUE_INPUT_META_GRAB_MOUSE_TOGGLE,    RETROK_F11,     NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_GAME_FOCUS_TOGGLE,        MENU_ENUM_LABEL_VALUE_INPUT_META_GAME_FOCUS_TOGGLE,    RETROK_SCROLLOCK,  NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_UI_COMPANION_TOGGLE,      MENU_ENUM_LABEL_VALUE_INPUT_META_UI_COMPANION_TOGGLE,  RETROK_F5,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_MENU_TOGGLE,              MENU_ENUM_LABEL_VALUE_INPUT_META_MENU_TOGGLE,          RETROK_F1,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_RECORDING_TOGGLE,         MENU_ENUM_LABEL_VALUE_INPUT_META_RECORDING_TOGGLE,     RETROK_UNKNOWN,      NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_STREAMING_TOGGLE,         MENU_ENUM_LABEL_VALUE_INPUT_META_STREAMING_TOGGLE,     RETROK_UNKNOWN,      NO_BTN, NO_BTN, 0, AXIS_NONE },
#endif
};

/* Users 2 to MAX_USERS */
static const struct retro_keybind retro_keybinds_rest[] = {
    /*     | RetroPad button              | desc                                             | keyboard key  | js btn   | js axis | */
   { true, RETRO_DEVICE_ID_JOYPAD_B,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_B,              RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_Y,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_Y,              RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_SELECT, MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_SELECT,         RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_START,  MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_START,          RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_UP,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_UP,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_DOWN,   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_DOWN,           RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_LEFT,   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_LEFT,           RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_RIGHT,  MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_RIGHT,          RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_A,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_A,              RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_X,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_X,              RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L,              RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R,      MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R,              RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L2,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L2,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R2,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R2,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_L3,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L3,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RETRO_DEVICE_ID_JOYPAD_R3,     MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R3,             RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_ANALOG_LEFT_X_PLUS,      MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_PLUS,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_X_MINUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_MINUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_Y_PLUS,      MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_PLUS,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_LEFT_Y_MINUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_MINUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_X_PLUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_PLUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_X_MINUS,    MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_MINUS,  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_Y_PLUS,     MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_PLUS,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_ANALOG_RIGHT_Y_MINUS,    MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_MINUS,  RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_LIGHTGUN_TRIGGER,        MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_TRIGGER,      RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_RELOAD,         MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_RELOAD,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_A,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_A,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_B,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_B,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_AUX_C,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_C,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_START,          MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_START,        RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_SELECT,         MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_SELECT,       RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_UP,        MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_UP,      RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_DOWN,      MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_DOWN,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_LEFT,      MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_LEFT,    RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
   { true, RARCH_LIGHTGUN_DPAD_RIGHT,     MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_RIGHT,   RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },

   { true, RARCH_TURBO_ENABLE,            MENU_ENUM_LABEL_VALUE_INPUT_TURBO_ENABLE,          RETROK_UNKNOWN, NO_BTN, NO_BTN, 0, AXIS_NONE },
};

#endif

#endif
