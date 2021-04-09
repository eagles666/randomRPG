#include "Player.h"

Player::Player()
{
    attack = 10;
    health = 100;
}

int Player::getAttack()
{
    return attack;
}

int Player::getHealth()
{
    return health;
}

void Player::showStats()
{
    cout << "\tAttaque : " << attack << endl;
    cout << "\tVie : " << health << endl;
}