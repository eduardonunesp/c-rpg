#include "rpg.h"

const char *rpg_weapon_enum2str(rpg_weapon_enum_t weapon_enum)
{
    switch (weapon_enum) {
        case RPG_WEAPON_SWORD: 
            return "SWORD";
        case RPG_WEAPON_AXE: 
            return "AXE";
        case RPG_WEAPON_KNIFE: 
            return "KNIFE";
        case RPG_WEAPON_HAMMER: 
            return "HAMMER";
        case RPG_WEAPON_STAFF: 
            return "STAFF";
        case RPG_WEAPON_SPEAR: 
            return "SPEAR";
        case RPG_WEAPON_BOW: 
            return "BOW";
        default: 
            return "UNKNOW";
    }
}

const char *rpg_guard_enum2str(rpg_guard_enum_t guard_enum) 
{
    switch (guard_enum) {
        case RPG_GUARD_HELMET:
            return "HELMET";
        case RPG_GUARD_SHIELD:
            return "SHIELD";
        case RPG_GUARD_GLOVES:
            return "GLOVES";
        case RPG_GUARD_BOOTS:
            return "BOOTS";
        default:
            return "UNKNOW";
    }
}

const char *rpg_race_enum2str(rpg_race_enum_t race_enum)
{
    switch (race_enum) {
        case RPG_RACE_HUMAN:
            return "HUMAN";
        case RPG_RACE_ELF:
            return "ELF";
        case RPG_RACE_DWARF:
            return "DWARF";
        case RPG_RACE_IMP:
            return "IMP";
        case RPG_RACE_SPRITE:
            return "SPRITE";
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
