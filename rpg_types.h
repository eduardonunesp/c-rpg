#ifndef __RPG_TYPES_H__
#define __RPG_TYPES_H__

/**
 * Commom status returned from many functions
 */
typedef enum {
    RPG_STATUS_SUCCESS = 1,  /* Success     */
    RPG_STATUS_FAIL,         /* Fail        */
    RPG_STATUS_INVALID_PTR,  /* Invalid ptr */  
    RPG_STATUS_MEM_ERR,      /* Memory err  */
    RPG_STATUS_FILE_ERR      /* File err    */
} rpg_status_t;

typedef enum {
    RPG_RACE_TYPE_HUMAN = 0x1, /* Human */
    RPG_RACE_TYPE_ELF   = 0x2, /* Elf   */
    RPG_RACE_TYPE_DWARF = 0x3, /* Dwarf */
    RPG_RACE_TYPE_GNOME = 0x4  /* Gnome */
} rpg_race_t;

typedef enum {
    RPG_CLASS_TYPE_NONE    = 0x0, /* Ordinary */
    RPG_CLASS_TYPE_WARRIOR = 0x1, /* Warrior  */
    RPG_CLASS_TYPE_THIEF   = 0x2, /* Thief    */
    RPG_CLASS_TYPE_MAGE    = 0x3, /* Mage     */
    RPG_CLASS_TYPE_MONK    = 0x4  /* Monk     */
} rpg_class_type_t;

typedef enum {
    RPG_MAGE_TYPE_NONE  = 0x0, /* No magic   */
    RPG_MAGE_TYPE_BLACK = 0x1, /* Black mage */
    RPG_MAGE_TYPE_WHITE = 0x2, /* White mage */
} rpg_mage_type_t;

typedef enum {
    RPG_ELEMENT_TYPE_NONE  = 0x0, /* Ordinary */
    RPG_ELEMENT_TYPE_EARTH = 0x1, /* Earth    */
    RPG_ELEMENT_TYPE_WATER = 0x2, /* Water    */
    RPG_ELEMENT_TYPE_FIRE  = 0x3, /* Fire     */
    RPG_ELEMENT_TYPE_AIR   = 0x4  /* Air      */
} rpg_element_type_t;

typedef enum {
    RPG_WEAPON_TYPE_SWORD  = 0x1, /* Sword  */
    RPG_WEAPON_TYPE_AXE    = 0x2, /* Axe    */
    RPG_WEAPON_TYPE_KNIFE  = 0x3, /* Knife  */
    RPG_WEAPON_TYPE_HAMMER = 0x4, /* Hammer */
    RPG_WEAPON_TYPE_STAFF  = 0x5, /* Staff  */
    RPG_WEAPON_TYPE_SPEAR  = 0x6, /* Spear  */
    RPG_WEAPON_TYPE_BOW    = 0x7  /* Bow    */
} rpg_weapon_type_t;

typedef enum {
    RPG_ARMOR_TYPE_HELMET = 0x1, /* Helmet */
    RPG_ARMOR_TYPE_ARMOR  = 0x2, /* Armor  */
    RPG_ARMOR_TYPE_SHIELD = 0x3, /* Shield */
    RPG_ARMOR_TYPE_GLOVES = 0x4, /* Gloves */
    RPG_ARMOR_TYPE_BOOTS  = 0x5  /* Boots  */
} rpg_armor_type_t;

typedef enum {
    RPG_EFFECT_TYPE_NONE      = 0x0,  /* No effect, ordinary  */
    RPG_EFFECT_TYPE_SUM_ONE   = 0x1,  /* Sum one targets      */
    RPG_EFFECT_TYPE_SUB_ONE   = 0x2,  /* Sub one target       */
    RPG_EFFECT_TYPE_SUM_ALL   = 0x3,  /* Sum all targets      */
    RPG_EFFECT_TYPE_SUB_ALL   = 0x4,  /* Sub all targets      */
    RPG_EFFECT_TYPE_KILL      = 0x5,  /* Kill one target      */
    RPG_EFFECT_TYPE_RESSURECT = 0x6,  /* Ressurect one target */
    RPG_EFFECT_TYPE_CONFUSE   = 0x7,  /* Confuses one target  */
    RPG_EFFECT_TYPE_BLIND     = 0x8,  /* Blinds one target    */
    RPG_EFFECT_TYPE_SLEEP     = 0x9,  /* Sleep one target     */
    RPG_EFFECT_TYPE_SPEED     = 0xa,  /* Speed up one target  */
    RPG_EFFECT_TYPE_SLOW      = 0xb,  /* Slow down one target */
    RPG_EFFECT_TYPE_PARALYZE  = 0xc,  /* Paralyzes one target */
} rpg_effect_type_t;

typedef enum {
    RPG_ITEM_TYPE_POTION = 0x1, /* Potion */
    RPG_ITEM_TYPE_KEY    = 0x2, /* Key    */
} rpg_item_type_t;

typedef struct {
    char *name;                            /* Weapon name */
    rpg_weapon_type_t type;                /* Weapon type */
    rpg_effect_type_t self_effect_type;    /* Self effect, means effect over the user */
    rpg_effect_type_t target_effect_type;  /* Target effect, means effect over the target */
    rpg_element_type_t element_type;       /* Element type, passive effect over target or user */
    int damage;                            /* Damage, bonus to afflict damage */
} rpg_weapon_t;

typedef struct {
    char *name;                            /* Armor name */
    rpg_armor_type_t type;                 /* Ammor type: helmet, shield, armor, gloves, boots */
    rpg_effect_type_t self_effect_type;    /* Self effect, means effect over the user */
    rpg_effect_type_t target_effect_type;  /* Target effect, means effect over the agressor */
    rpg_element_type_t element_type;       /* Element type, passive effect over target or user */
    int defense;                           /* Defense, bonus to absorb damage */
} rpg_armor_t;

typedef struct {
    char *name;            /* Item name */
    rpg_item_type_t type;  /* Item type */
} rpg_item_t;

typedef union { 
    rpg_weapon_t *weapon; /* Item can be a sword  */
    rpg_armor_t *armor;   /* Item can be an armor */
    rpg_item_t *item;     /* Item can be an item  */
} rpg_any_item_t;

typedef union {
    rpg_weapon_t *weapon; /* An arm can hold a weapon */
    rpg_armor_t *armor;   /* An arm can hold a shield */
} rpg_person_arm_t;

typedef struct {
    rpg_armor_t *head;           /* Equipment on head      */
    rpg_armor_t *body;           /* Equipment on body      */ 
    rpg_armor_t *legs;           /* Equipment on legs      */
    rpg_person_arm_t *left_arm;  /* Equipment on left arm  */
    rpg_person_arm_t *right_arm; /* Equipment on right arm */
} rpg_person_equipment_t;

typedef struct {
    int hp;                            /* Hit point             */
    int mp;                            /* Magic point           */
    int str;                           /* Strength              */
    int dex;                           /* Dexterity             */
    int cons;                          /* Constitution          */
    rpg_race_t race_type;              /* Race                  */
    rpg_class_type_t class_type;       /* Class                 */
    rpg_mage_type_t mage_type;         /* Mage ? White Or Black */
    rpg_person_equipment_t *equipment; /* Equipment used        */
} rpg_person_t;

#endif
