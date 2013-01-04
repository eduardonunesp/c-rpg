#ifndef __RPG_PERSON_H__
#define __RPG_PERSON_H__

#include "rpg_types.h"

rpg_status_enum_t rpg_init_person(int hp, int mp, int str, int dex, int cons, 
                                 rpg_race_enum_t race_type, 
                                 rpg_class_enum_t class_type,
                                 rpg_mage_enum_t mage_type,
                                 rpg_person_t **person);

void rpg_debug_person(rpg_person_t *person);

#endif
