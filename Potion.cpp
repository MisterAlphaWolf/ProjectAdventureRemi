#include "Potion.h"

int Potion::getHP()
{
    return HP;
}
void Potion::setHP(int hp)
{
    HP = hp;
}

int Potion::getDamage()
{
    return damage;
}
void Potion::setDamage(int d)
{
    damage = d;
}

int Potion::getArmor()
{
    return armor;
}
void Potion::setArmor(int a)
{
	armor = a;
}

Potion::Potion()
{
    setName("Potion");
	HP = 0;
	damage = 0;
}

Potion::Potion(PotionType pt, int value)
{
    switch (pt)
	{
	case PotionType::Health:
		setName("HP Potion");
		HP = value;
		damage = 0;
		break;
case PotionType::Strength:
setName("Damage Potion");
		HP = 0;
		damage = value;
		break;
case PotionType::Defense:
setName("Armor Potion");
		HP = 0;
		damage = 0;
		armor = value;
		break;
	
	default:
		setName("Potion");
		HP = 0;
		damage = 0;
		break;
	}

}



