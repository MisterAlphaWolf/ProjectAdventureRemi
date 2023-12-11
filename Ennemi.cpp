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
    if (h > 0) hp = h;
    else hp = 2;
}

int Ennemi::getDamage()
{
    return damage;
}

void Ennemi::setDamage(int d)
{
    d = 1;
}

int Ennemi::getArmor()
{
    return ca;
}

void Ennemi::setArmor(int a)
{
    a = 0;
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
    xp = 5;
}

int Ennemi::getZombieLevel()
{
    return 0;
}

void Ennemi::setZombieLevel(int l)
{
    l = 5;
}

