#include "rpg_utils.h"

const char *rpg_weapon_type2str(rpg_weapon_type_t weapon_type)
{
    switch (weapon_type) {
        case RPG_WEAPON_TYPE_SWORD: 
            return "SWORD";
        case RPG_WEAPON_TYPE_AXE: 
            return "AXE";
        case RPG_WEAPON_TYPE_KNIFE: 
            return "KNIFE";
        case RPG_WEAPON_TYPE_HAMMER: 
            return "HAMMER";
        case RPG_WEAPON_TYPE_STAFF: 
            return "STAFF";
        case RPG_WEAPON_TYPE_SPEAR: 
            return "SPEAR";
        case RPG_WEAPON_TYPE_BOW: 
            return "BOW";
        default: 
            return "UNKNOW";
    }
}

const char *rpg_armor_type2str(rpg_armor_type_t armor_type) 
{
    switch (armor_type) {
        case RPG_ARMOR_TYPE_HELMET:
            return "HELMET";
        case RPG_ARMOR_TYPE_ARMOR:
            return "ARMOR";
        case RPG_ARMOR_TYPE_SHIELD:
            return "SHIELD";
        case RPG_ARMOR_TYPE_GLOVES:
            return "GLOVES";
        case RPG_ARMOR_TYPE_BOOTS:
            return "BOOTS";
        default:
            return "UNKNOW";
    }
}

const char *rpg_race_type2str(rpg_race_t race_type)
{
    switch (race_type) {
        case RPG_RACE_TYPE_HUMAN:
            return "HUMAN";
        case RPG_RACE_TYPE_ELF:
            return "ELF";
        case RPG_RACE_TYPE_DWARF:
            return "DWARF";
        case RPG_RACE_TYPE_GNOME:
            return "GNOME";
        default:
            return "UNKNOW";
    }
}

const char *rpg_status_type2str(rpg_status_t status_type)
{
    switch (status_type) {
        case RPG_STATUS_SUCCESS:
            return "SUCCESS";
        case RPG_STATUS_FAIL:
            return "FAIL";
        case RPG_STATUS_MEM_ERR:
            return "MEM ERR";
        case RPG_STATUS_INVALID_PTR:
            return "INVALID PTR";
        case RPG_STATUS_FILE_ERR:
            return "FILE ERR";
        default:
            return "UNKNOW";
    }
}
