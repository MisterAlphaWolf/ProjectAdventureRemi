#pragma once
#include "Item.h"
class Potion :
    public Item
{
private:

    int HP;
    int damage;

public:
    int getHP();
    void setHP(int hp);

    int getDamage();
    void setDamage(int d);

};

