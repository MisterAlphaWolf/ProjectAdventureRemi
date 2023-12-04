#include "Ennemi.h"


int Ennemi::getHealth()
{
    return hp;
}

void Ennemi::setHealth(int h)
{
    std::random_device h;
    std::uniform_int_distribution<int> dist(1, 20);

}

int Ennemi::getDamage()
{
    return damage;
}

void Ennemi::setDamage(int d)
{
    std::random_device d;
    std::uniform_int_distribution<int> dist(1, 10);
}

int Ennemi::getArmor()
{
    return ca;
}

void Ennemi::setArmor(int a)
{
    std::random_device a;
    std::uniform_int_distribution<int> dist(1, 10);
}

int Ennemi::getXPGive()
{
    return XPGive;
}

void Ennemi::setXPGive(int xp)
{
    std::random_device xp;
    std::uniform_int_distribution<int> dist(1, 15);
}

int Ennemi::getZombieLevel()
{
    return 0;
}

void Ennemi::setZombieLevel(int l)
{
    std::random_device l;
    std::uniform_int_distribution<int> dist(1, 5);
}

