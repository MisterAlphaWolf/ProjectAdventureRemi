#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Personnage.h"

using namespace std;

class Ennemi : public Personnage
{

private:

	//Attribute (variables)
	std::string name;
	int hp;
	int damage;
	int ca;
	int initiative;
	int XPGive = 1;
	int ZombieLevel;

public:

	//Constructeur

	Ennemi();

	//Getter Setter

	std::string getName();
	void setName(std::string n);

	int getHealth();
	void setHealth(int h);

	int getDamage();
	void setDamage(int d);

	int getArmor();
	void setArmor(int a);

	int getInitiativeValue();
	void setInitiativeValue(int i);

	int getXPGive();
	void setXPGive(int xp);

	int getZombieLevel();
	void setZombieLevel(int l);

};