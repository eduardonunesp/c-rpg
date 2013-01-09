#include "rpg.h"
#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"

rpg_status_enum_t rpg_init_character(int hp, int mp, int str, int dex, int cons, 
                             rpg_race_enum_t race_type, 
                             rpg_class_enum_t class_type,
                             rpg_character_t **character)
{
    *character = (rpg_character_t*) malloc(sizeof(rpg_character_t));

    if (!*character) {
        RPG_ERR(RPG_ERR_STR_MEM);
        return RPG_STATUS_MEM_ERR;
    }

    (*character)->hp = hp;
    (*character)->mp = mp;
    (*character)->str = str;
    (*character)->str = dex;
    (*character)->race_type = race_type;
    (*character)->class_type = class_type;
    (*character)->equipment = NULL;

    return RPG_STATUS_SUCCESS;
}

void rpg_debug_character(rpg_character_t *character) 
{
    if (!character) {
        RPG_ERR(RPG_ERR_STR_NULL_PTR);
        return;
    }

    RPG_DBG("character HP %d MP %d RACE %s", character->hp, character->mp, rpg_race_enum2str(character->race_type));
}
