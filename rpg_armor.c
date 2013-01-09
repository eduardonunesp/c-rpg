#include "rpg.h"
#include <strings.h>
#include "rpg.h"

rpg_status_enum_t rpg_create_armor(const char *name, int defense, rpg_armor_t **armor)
{
    *armor = (rpg_armor_t*) malloc(sizeof(rpg_armor_t));
    
    if (!*armor) {
        RPG_ERR(RPG_ERR_STR_MEM);
        return RPG_STATUS_MEM_ERR;
    }

    (*armor)->name = strdup(name);
    (*armor)->defense = defense;
    
    RPG_DBG("Armor created [%s, %d]", name, defense);
    return RPG_STATUS_SUCCESS;
}
