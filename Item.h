#pragma once

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Personnage.h"

using namespace std;

class Item
{

private:

	//Attribute (variables)
	string name;
	int damage;
	int armor;

public:

	//Actions (functions)



	string getName();
	void setName(string n);

	int getDamage();
	void setDamage(int d);

	int getArmor();
	void setArmor(int a);


};

