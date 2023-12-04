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
	int hp;
	int damage;
	int ca;
	int XPGive;
	int ZombieLevel;

public:

	//Constructeur



	//Getter Setter

	int getHealth();
	void setHealth(int h);

	int getDamage();
	void setDamage(int d);

	int getArmor();
	void setArmor(int a);

	int getXPGive();
	void setXPGive(int xp);

	int getZombieLevel();
	void setZombieLevel(int l);

};