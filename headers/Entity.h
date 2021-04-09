#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

using namespace std;

class Entity
{

protected:
    int attack;
    int health;

public:
    Entity();
    int getAttack();
    int getHealth();
    void setHealth(int dammage);
    void showStats();
};

#endif // ENTITY_H