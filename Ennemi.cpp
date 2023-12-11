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
    else hp = 1;
}

int Ennemi::getDamage()
{
    return damage;
}

void Ennemi::setDamage(int d)
{
    d = 10;
}

int Ennemi::getArmor()
{
    return ca;
}

void Ennemi::setArmor(int a)
{
    a = 10;
}

int Ennemi::getInitiativeValue()
{
    return 0;
}

void Ennemi::setInitiativeValue(int i)
{
    i = 10;
}

int Ennemi::getXPGive()
{
    return XPGive;
}

void Ennemi::setXPGive(int xp)
{
    xp = 10;
}

int Ennemi::getZombieLevel()
{
    return 0;
}

void Ennemi::setZombieLevel(int l)
{
    l = 5;
}

