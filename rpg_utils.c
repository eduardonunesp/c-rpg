#include "rpg_utils.h"

const char *rpg_weapon_enum2str(rpg_weapon_enum_t weapon_enum)
{
    switch (weapon_enum) {
        case RPG_WEAPON_ENUM_SWORD: 
            return "SWORD";
        case RPG_WEAPON_ENUM_AXE: 
            return "AXE";
        case RPG_WEAPON_ENUM_KNIFE: 
            return "KNIFE";
        case RPG_WEAPON_ENUM_HAMMER: 
            return "HAMMER";
        case RPG_WEAPON_ENUM_STAFF: 
            return "STAFF";
        case RPG_WEAPON_ENUM_SPEAR: 
            return "SPEAR";
        case RPG_WEAPON_ENUM_BOW: 
            return "BOW";
        default: 
            return "UNKNOW";
    }
}

const char *rpg_armor_enum2str(rpg_armor_enum_t armor_enum) 
{
    switch (armor_enum) {
        case RPG_ARMOR_ENUM_HELMET:
            return "HELMET";
        case RPG_ARMOR_ENUM_ARMOR:
            return "ARMOR";
        case RPG_ARMOR_ENUM_SHIELD:
            return "SHIELD";
        case RPG_ARMOR_ENUM_GLOVES:
            return "GLOVES";
        case RPG_ARMOR_ENUM_BOOTS:
            return "BOOTS";
        default:
            return "UNKNOW";
    }
}

const char *rpg_race_enum2str(rpg_race_enum_t race_enum)
{
    switch (race_enum) {
        case RPG_RACE_ENUM_HUMAN:
            return "HUMAN";
        case RPG_RACE_ENUM_ELF:
            return "ELF";
        case RPG_RACE_ENUM_DWARF:
            return "DWARF";
        case RPG_RACE_ENUM_GNOME:
            return "GNOME";
        default:
            return "UNKNOW";
    }
}

const char *rpg_status_enum2str(rpg_status_enum_t status_enum)
{
    switch (status_enum) {
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
