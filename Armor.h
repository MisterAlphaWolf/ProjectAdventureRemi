#pragma once
#include "Item.h"
class Armor :
    public Item
{
private:

    int defense;
    int durability;

public:

    int getDefense();
    void setDefense(int d);

    int getDurability();
    void setDurability(int du);
};

