#include "rpg.h"
#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"

rpg_status_enum_t rpg_init_person(int hp, int mp, int str, int dex, int cons, 
                             rpg_race_enum_t race_type, 
                             rpg_class_enum_t class_type,
                             rpg_mage_enum_t mage_type,
                             rpg_character_t **person)
{
    *person = (rpg_character_t*) malloc(sizeof(rpg_character_t));

    if (!*person) {
        RPG_ERR(RPG_ERR_STR_MEM);
        return RPG_STATUS_MEM_ERR;
    }

    (*person)->hp = hp;
    (*person)->mp = mp;
    (*person)->str = str;
    (*person)->str = dex;
    (*person)->race_type = race_type;
    (*person)->class_type = class_type;
    (*person)->mage_type = mage_type;
    (*person)->equipment = NULL;

    return RPG_STATUS_SUCCESS;
}

void rpg_debug_person(rpg_character_t *person) 
{
    if (!person) {
        RPG_ERR(RPG_ERR_STR_NULL_PTR);
        return;
    }

    RPG_DBG("Person HP %d MP %d RACE %s", person->hp, person->mp, rpg_race_enum2str(person->race_type));
}
