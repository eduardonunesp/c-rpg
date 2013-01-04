#include "rpg_person.h"
#include <stdio.h>
#include <stdlib.h>
#include "rpg_logger.h"
#include "rpg_utils.h"

rpg_status_t rpg_init_person(int hp, int mp, int str, int dex, int cons, rpg_race_t race, rpg_person_t **person)
{
    *person = (rpg_person_t*) malloc(sizeof(rpg_person_t));

    if (!*person) {
        RPG_ERR(RPG_ERR_STR_MEM);
        return RPG_STATUS_MEM_ERR;
    }

    (*person)->hp = hp;
    (*person)->mp = mp;
    (*person)->str = str;
    (*person)->str = dex;
    (*person)->cons = cons;
    (*person)->race = race;
    (*person)->equipment = NULL;

    return RPG_STATUS_SUCCESS;
}

void rpg_debug_person(rpg_person_t *person) 
{
    if (!person) {
        RPG_ERR(RPG_ERR_STR_NULL_PTR);
        return;
    }

    RPG_DBG("Person HP %d MP %d RACE %d", person->hp, person->mp, person->race);
}
