#pragma once
#include "Item.h"
class Weapon :
    public Item
{

    enum WeaponType
    {
		Sword,
		Longsword
	};

private:

    int damage;
    int durability;
    bool isOneHanded;

public:

    int getDamage();
    void setDamage(int da);

    int getDurability();
    void setDurability(int du);

    int getIsOneHanded();
    void setIsOneHanded(bool isOneHanded);

    Weapon();
    Weapon(WeaponType wt, int da, int du);
};

