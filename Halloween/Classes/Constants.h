#ifndef Halloween_Constants_h
#define Halloween_Constants_h

#include "cocos2d.h"

#define DES_RES_X 640.0f // iphone 6 regular
#define DES_RES_Y 1136.0f

#define WELCOME_SCREEN_DISP_TIME 1.5//1.8
#define TRANSITION_TIME 0.6

#define HERO_SPEED 0.2
#define COIN_SPEED 0.005
#define COIN2_SPEED 0.003
#define COIN3_SPEED 0.0012
#define CCOIN_SPEED 0.0015
#define BAT_SPEED 0.002
#define BBAT_SPEED 0.002

#define HERO_CONTACT_BITMASK 0x00000001
#define HERO_COLLISION_BITMASK 0x00000001
#define WALL_COLLISION_BITMASK 0x00000004
#define WALL_CONTACT_BITMASK 0x00000004
#define COIN_COLLISION_BITMASK 0x00000003
#define COIN_CONTACT_BITMASK 0x00000003
#define COIN2_COLLISION_BITMASK 0x00000002
#define COIN2_CONTACT_BITMASK 0x00000002
#define COIN3_COLLISION_BITMASK 0x00000005
#define COIN3_CONTACT_BITMASK 0x00000005
#define BAT_COLLISION_BITMASK 0x00000006
#define BAT_CONTACT_BITMASK 0x00000006
#define BBAT_COLLISION_BITMASK 0x00000007
#define BBAT_CONTACT_BITMASK 0x00000007
#define CCOIN_COLLISION_BITMASK 0x00000008
#define CCOIN_CONTACT_BITMASK 0x00000008

#define COIN_SPAWN_FREQ 0.00017
#define COIN2_SPAWN_FREQ 0.0025
#define COIN3_SPAWN_FREQ 0.005
#define CCOIN_SPAWN_FREQ 0.017
#define BAT_SPAWN_FREQ 0.001
#define BBAT_SPAWN_FREQ 0.001
#define CLOUD_SPAWN_FREQ 0.005

#define SCROLL_PIXEL 1
#define BACK_SCROLL_PIXEL 80

#define SCORE_FONT 0.1778 // changed from 0.1
#endif