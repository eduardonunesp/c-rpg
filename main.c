#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"

int main(int argc, char** argv) 
{
    rpg_status_enum_t cause;
    rpg_person_t *person = NULL;
    
    cause = rpg_init_person(40, 2, 10, 10, 5, RPG_RACE_ENUM_HUMAN, RPG_CLASS_ENUM_WARRIOR, RPG_MAGE_ENUM_NONE, &person);
    if (cause != RPG_STATUS_SUCCESS) { 
        fprintf(stderr, "Error while creates person [%s]\n", rpg_status_enum2str(cause)); 
        return 0;
    }

    rpg_weapon_t *weapon_sword = NULL;
    cause = rpg_create_weapon(RPG_WEAPON_SWORD__RUSTY_SWORD, &weapon_sword);
    if (cause != RPG_STATUS_SUCCESS) {
        fprintf(stderr, "Error while created weapon [%s]\n", rpg_status_enum2str(cause));
        return 0;
    }

    rpg_armor_t *armor_helmet = NULL;
    cause = rpg_create_armor(RPG_ARMOR_HELMET__IRON_CAP, &armor_helmet);
    if (cause != RPG_STATUS_SUCCESS) {
        fprintf(stderr, "Error while created armor [%s]\n", rpg_status_enum2str(cause));
        return 0;
    }

    rpg_debug_person(person);
    free(person);
    free(weapon_sword);

    return 0;
}
