#include "Item.h"

string Item::getName()
{
	return name;
}

void Item::setName(string n)
{
	n = name;
}

int Item::getDamage()
{
	return damage;
}

void Item::setDamage(int d)
{
	d = damage;
}

int Item::getArmor()
{
	return armor;
}

void Item::setArmor(int a)
{
	a = armor;
}
