#ifndef __RPG_LOGGER_H__
#define __RPG_LOGGER_H__

#include <stdio.h>
#include <stdlib.h>

#define RPG_DBG(STR, ...) fprintf(stdout, STR "\n", ##__VA_ARGS__)
#define RPG_ERR(STR, ...) fprintf(stderr, STR "\n", ##__VA_ARGS__)

#define RPG_ERR_STR_MEM "Error while trying alloc memory"
#define RPG_ERR_STR_NULL_PTR "Null ptr detected"

#endif
