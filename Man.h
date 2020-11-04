#pragma once
#include "Cat.h"
typedef struct Cat;
struct Man {
    long long id;
    Cat* kitty;
    char name[30];
    int KittyCount;
};