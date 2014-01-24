#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "rpg.h"

int main(int argc, char** argv) 
{
    rpg_status_enum_t cause;
    rpg_character_t *character = NULL;
    
    cause = rpg_init_character(40, 2, 10, 10, 5, RPG_RACE_HUMAN, RPG_CLASS_WARRIOR, &character);
    if (cause != RPG_STATUS_SUCCESS) { 
        fprintf(stderr, "Error while creates character [%s]\n", rpg_status_enum2str(cause)); 
        return 1;
    }

    rpg_weapon_t *weapon_sword = NULL;
    cause = rpg_create_weapon(RPG_WEAPON_SWORD__RUSTY_SWORD, &weapon_sword);
    if (cause != RPG_STATUS_SUCCESS) {
        fprintf(stderr, "Error while created weapon [%s]\n", rpg_status_enum2str(cause));
        return 1;
    }

    rpg_armor_t *armor_helmet = NULL;
    cause = rpg_create_armor(RPG_ARMOR_HELMET__IRON_CAP, &armor_helmet);
    if (cause != RPG_STATUS_SUCCESS) {
        fprintf(stderr, "Error while created armor [%s]\n", rpg_status_enum2str(cause));
        return 1;
    }

    rpg_debug_character(character);
    free(character);
    free(weapon_sword);

    return 0;
}
