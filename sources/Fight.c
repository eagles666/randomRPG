#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "Ennemy.h"
#include "Player.h"

void displayTurnStats(Player player, Ennemy ennemy, int turnNumber) {
    printf("===== Tour %d =====\n", turnNumber);
    printf("%s : \n", player.name);
    printf("\tPoints de vie : %d/100\n", player.health);
    printf("%s : \n", ennemy.name);
    printf("\tPoints de vie : %d/100\n", ennemy.health);
}

void playTurn(Player* player, Ennemy* ennemy) {
    srand(time(NULL));
    int playerAttack = rand() % player->attack;
    int ennemyAttack = rand() % player->attack;
    ennemy->health -= playerAttack;
    printf("%s à infliger %d degats a %s.\n", player->name, playerAttack, ennemy->name);
    player->health -= ennemyAttack;
    printf("%s a infliger %d degats a %s.\n", ennemy->name, ennemyAttack, player->name);
}