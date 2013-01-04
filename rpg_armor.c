#include "rpg_armor.h"
#include <strings.h>
#include "rpg_logger.h"
#include "rpg_utils.h"

rpg_status_enum_t rpg_create_armor(const char *name, rpg_armor_enum_t type, int defense, rpg_armor_t **armor)
{
    *armor = (rpg_armor_t*) malloc(sizeof(rpg_armor_t));
    
    if (!*armor) {
        RPG_ERR(RPG_ERR_STR_MEM);
        return RPG_STATUS_MEM_ERR;
    }

    (*armor)->name = strdup(name);
    (*armor)->type = type;
    (*armor)->defense = defense;
    
    RPG_DBG("Armor created [%s, %s, %d]", rpg_armor_enum2str(type), name, defense);
    return RPG_STATUS_SUCCESS;
}
