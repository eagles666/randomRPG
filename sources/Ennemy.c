#include <time.h>
#include <stdlib.h>

#include "Ennemy.h"
#include <string.h>

void generateRandomEnnemy(Ennemy* ennemy) {
    srand(time(NULL));
    char ennemyName[32] = "Dragon";
    strcpy(ennemy->name, ennemyName);
    ennemy->health = 100;
    ennemy->attack = (rand() % 20) + 1;
}