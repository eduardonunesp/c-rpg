#ifndef __RPG_TYPES_H__
#define __RPG_TYPES_H__

typedef enum {
    RPG_STATUS_SUCCESS = 1,
    RPG_STATUS_FAIL,
    RPG_STATUS_INVALID_PTR,
    RPG_STATUS_MEM_ERR,
    RPG_STATUS_FILE_ERR
} rpg_status_t;

typedef enum {
    RPG_WEAPON_TYPE_SWORD,
    RPG_WEAPON_TYPE_AXE,
    RPG_WEAPON_TYPE_KNIFE,
    RPG_WEAPON_TYPE_HAMMER, 
    RPG_WEAPON_TYPE_STAFF,
    RPG_WEAPON_TYPE_SPEAR,
    RPG_WEAPON_TYPE_BOW
} rpg_weapon_type_t;

typedef struct {
    rpg_weapon_type_t type;
    int damage;
} rpg_weapon_t;

typedef enum {
    RPG_ARMOR_TYPE_HELMET,
    RPG_ARMOR_TYPE_ARMOR,
    RPG_ARMOR_TYPE_SHIELD,
    RPG_ARMOR_TYPE_GLOVES,
    RPG_ARMOR_TYPE_BOOTS
} rpg_armor_type_t;

typedef struct {
    rpg_armor_type_t type;
    int defense;
} rpg_armor_t;

typedef enum {
    RPG_RACE_HUMAN = 1, 
    RPG_RACE_ELF, 
    RPG_RACE_DWARF, 
    RPG_RACE_GNOME
} rpg_race_t;

typedef union {
    rpg_weapon_t *weapon;
    rpg_armor_t *armor;
} rpg_person_arm_t;

typedef struct {
    rpg_armor_t *head;
    rpg_armor_t *body;
    rpg_armor_t *legs;
    rpg_person_arm_t *left_arm;
    rpg_person_arm_t *right_arm;
} rpg_person_equipment_t;

typedef struct {
    int hp;
    int mp;
    int str;
    int dex;
    int cons;
    rpg_race_t race;
    rpg_person_equipment_t *equipment;
} rpg_person_t;

#endif
