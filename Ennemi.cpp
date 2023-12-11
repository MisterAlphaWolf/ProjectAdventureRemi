#include "Ennemi.h"

Ennemi::Ennemi()
{
    string n;
    setHealth(hp);
    setDamage(damage);
    setArmor(ca);
}

std::string Ennemi::getName()
{
    return std::string();
}

void Ennemi::setName(std::string n)
{
    name = "Zombie";
}

int Ennemi::getHealth()
{
    return hp;
}

void Ennemi::setHealth(int h)
{
    if (h <  0) hp = 0;
    else hp = h;
}

int Ennemi::getDamage()
{
    return damage;
}

void Ennemi::setDamage(int d)
{
    if(d < 0) damage = 1;
	else damage = d;
}

int Ennemi::getArmor()
{
    return ca;
}

void Ennemi::setArmor(int a)
{
    if (a < 0) ca = 1;
    else ca = a;
}

int Ennemi::getInitiativeValue()
{
    return initiative;
}

void Ennemi::setInitiativeValue(int i)
{
    initiative = i;
}

int Ennemi::getXPGive()
{
    return XPGive;
}

void Ennemi::setXPGive(int xp)
{
    if ( xp < 1 ) XPGive = 1;
	else XPGive = xp;
}

int Ennemi::getZombieLevel()
{
    return 0;
}

void Ennemi::setZombieLevel(int l)
{
    l = 5;
}

