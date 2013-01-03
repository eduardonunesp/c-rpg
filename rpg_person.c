#include "rpg_person.h"
#include <stdio.h>
#include <stdlib.h>

rpg_status_t rpg_init_person(int hp, int mp, int str, int dex, int cons, rpg_race_t race, rpg_person_t **person)
{
    *person = (rpg_person_t*) malloc(sizeof(rpg_person_t));

    if (!*person) {
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
        fprintf(stderr, "Invalid ptr (rpg_person_t == NULL)\n");
        return;
    }

    fprintf(stdout, "Person HP %d MP %d RACE %d\n",
                    person->hp, person->mp, person->race);
}
