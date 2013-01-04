#include "rpg_weapon.h"
#include <strings.h>
#include "rpg_logger.h"
#include "rpg_utils.h"

rpg_status_enum_t rpg_create_weapon(const char *name, rpg_weapon_enum_t type, int damage, rpg_weapon_t **weapon)
{
    *weapon = (rpg_weapon_t*) malloc(sizeof(rpg_weapon_t));
    
    if (!weapon) {
        RPG_ERR(RPG_ERR_STR_MEM);
        return RPG_STATUS_MEM_ERR;
    }

    (*weapon)->name = strdup(name);
    (*weapon)->type = type;
    (*weapon)->damage = damage;
    
    RPG_DBG("Weapon created [%s, %s, %d]", rpg_weapon_enum2str(type), name, damage);

    return RPG_STATUS_SUCCESS;
}
