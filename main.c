#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"

int main(int argc, char** argv) 
{
    rpg_status_t cause;
    rpg_person_t *person = NULL;
    
    cause = rpg_init_person(40, 2, 10, 10, 5, RPG_RACE_HUMAN, &person);
    if (cause != RPG_STATUS_SUCCESS) { 
        fprintf(stderr, "Error while creates person [%d]\n", cause); 
        return 0;
    }

    rpg_debug_person(person);
    free(person);

    return 0;
}
