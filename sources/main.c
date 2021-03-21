#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "Ennemy.h"
#include "Fight.h"

int main(int argc, char const *argv[])
{
    Player player;
    Ennemy ennemy;
    int turnCount = 0;
    printf("===== Creation du profil =====\n");
    printf("Nom de votre personnage : > ");
    scanf("%s", player.name);
    generatePlayerStats(&player);
    generateRandomEnnemy(&ennemy);
    do {
        turnCount++;
        playTurn(&player, &ennemy);
        displayTurnStats(player, ennemy, turnCount);
    } while (player.health > 0 && ennemy.health > 0);
    return 0;
}
