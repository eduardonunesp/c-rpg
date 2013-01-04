#ifndef __RPG_ARMOR_H__
#define __RPG_ARMOR_H__

#include "rpg_types.h"

#define RPG_ARMOR_HELMET__IRON_CAP "IRON CAP", RPG_ARMOR_TYPE_HELMET, 6
#define RPG_ARMOR_ARMOR__IRON_ARMOR "IRON ARMOR", RPG_ARMOR_TYPE_ARMOR, 22
#define RPG_ARMOR_SHIELD__IRON_SHIELD "IRON SHIELD", RPG_ARMOR_TYPE_SHIELD, 12
#define RPG_ARMOR_GLOVE__IRON_GLOVES "IRON GLOVES", RPG_ARMOR_TYPE_GLOVES, 4
#define RPG_ARMOR_BOOTS__IRON_BOOTS "IRON BOOTS", RPG_ARMOR_TYPE_BOOTS, 4

rpg_status_t rpg_create_armor(const char *name, rpg_armor_type_t type, int defense, rpg_armor_t **armor);

#endif
