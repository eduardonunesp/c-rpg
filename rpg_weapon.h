#ifndef __RPG_WEAPON_H__
#define __RPG_WEAPON_H__

#include "rpg_types.h"

#define RPG_WEAPON_SWORD__RUSTY_SWORD "RUSTY SWORD", RPG_WEAPON_ENUM_SWORD, 10
#define RPG_WEAPON_SWORD__RUSTY_AXE   "RUSTY AXE", RPG_WEAPON_ENUM_AXE, 12

rpg_status_enum_t rpg_create_weapon(const char *name, rpg_weapon_enum_t type, int damage, rpg_weapon_t **weapon);

#endif
