#include "Ennemi.h"

Ennemi::Ennemi() //Ennemi Constructor
{
    string n; //Name
    setHealth(hp); //Set Health to hp
    setDamage(damage); //Set Damage to damage
    setArmor(ca); //Set Armor to ca
}

std::string Ennemi::getName() //Name Getter
{
    return std::string(); //Return Name
}

void Ennemi::setName(std::string n) //Name Setter
{
    name = "Zombie"; //Name is Zombie
}

int Ennemi::getZombieLevel() //Zombie Level Getter
{
    return 0; //Return Zombie Level
}

void Ennemi::setZombieLevel(int l) //Zombie Level Setter
{
    if (l <= 0) ZombieLevel = 1; //If Level is less or equal than 0, Level is 1
    else ZombieLevel = ZombieLevel + l; //Else Level is Level + l
}

int Ennemi::getHealth() //Health Getter
{
    return hp; //Return Health
}

void Ennemi::setHealth(int h) //Health Setter
{
        if (h < 0) hp = 0; //If Health is less than 0, Health is 0
        else hp = h; //Else Health is Health   
}

int Ennemi::getDamage() //Damage Getter
{
    return damage; //Return Damage
}

void Ennemi::setDamage(int d) //Damage Setter
{
    if(d < 0) damage = 1; //If Damage is less than 0, Damage is 1
	else damage = d; //Else Damage is Damage
}

int Ennemi::getArmor() //Armor Getter
{
    return ca; //Return Armor
}

void Ennemi::setArmor(int a) //Armor Setter
{
    if (a <= 0) ca = 1; //If Armor is less than 0, Armor is 1
    else ca = a; //Else Armor is Armor
}

int Ennemi::getInitiativeValue() //Initiative Getter
{
    return initiative; //Return Initiative
}

void Ennemi::setInitiativeValue(int i) //Initiative Setter
{
    initiative = i; //Initiative is i
}

int Ennemi::getXPGive() //XP Getter
{
    return XPGive; //Return XP
}

void Ennemi::setXPGive(int xp) //XP Setter
{
    if ( xp < 1 ) XPGive = 1; //If XP is less than 1, XP is 1
	else XPGive = xp; //Else XP is XP
}

