#ifndef __RPG_PERSON_H__
#define __RPG_PERSON_H__

#include "rpg_types.h"

rpg_status_t rpg_init_person(int hp, int mp, int str, int dex, int cons, rpg_race_t race, rpg_person_t **person);
void rpg_debug_person(rpg_person_t *person);

#endif
