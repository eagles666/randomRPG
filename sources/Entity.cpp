#include "Entity.h"

Entity::Entity()
{
    attack = 10;
    health = 100;
}

int Entity::getAttack()
{
    return attack;
}

int Entity::getHealth()
{
    return health;
}

void Entity::setHealth(int dammage)
{
    health -= dammage;
}

void Entity::showStats()
{
    cout << "\tAttaque : " << attack << endl;
    cout << "\tVie : " << health << endl;
}