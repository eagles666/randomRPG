#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

using namespace std;
class Player
{

private:
    int attack;
    int health;

public:
    Player();
    int getAttack();
    int getHealth();
    void showStats();
};

#endif // PLAYER_H