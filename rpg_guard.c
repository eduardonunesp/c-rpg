#include "rpg.h"
#include <strings.h>

rpg_status_enum_t rpg_create_guard(const char *name, int defense, rpg_guard_t **guard)
{
    *guard = (rpg_guard_t*) malloc(sizeof(rpg_guard_t));
    
    if (!*guard) {
        RPG_ERR(RPG_ERR_STR_MEM);
        return RPG_STATUS_MEM_ERR;
    }

    (*guard)->name = strdup(name);
    (*guard)->defense = defense;
    
    RPG_DBG("Guard created [%s, %d]", name, defense);
    return RPG_STATUS_SUCCESS;
}
