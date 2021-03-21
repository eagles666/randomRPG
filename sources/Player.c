#include <time.h>
#include <stdlib.h>

#include "Player.h"

void generatePlayerStats(Player* player) {
    srand(time(NULL));
    player->health = 100;
    player->attack = (rand() % 20) + 1;
}