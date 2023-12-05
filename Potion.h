#pragma once
#include "Item.h"
class Potion :
    public Item
{

    enum class PotionType
	{
		Health,
		Strength,
		Defense,
	};
private:

    int HP;
    int damage;
    int armor;

public:
    int getHP();
    void setHP(int hp);

    int getDamage();
    void setDamage(int d);

    int getArmor();
    void setArmor(int a);

    Potion();
    Potion(PotionType pt, int value);

};

