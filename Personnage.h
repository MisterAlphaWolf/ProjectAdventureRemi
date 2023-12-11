#pragma once

#include <iostream>
#include <cstdlib>
#include <random>
#include <vector>
#include <windows.h>
#include "Item.h"

using namespace std;

class Personnage
{

private:

	//Attribute (variables)
	std::string name;
	std::string targetname;
	int hp;
	int targethp;
	int damage;
	int armor;
	int initiative;
	int delay = 2000;
	bool ally;
	vector<Item> Inventory;

public:

	//Constructeur
	Personnage();

	Personnage(std::string n, int hp, int d, int a);

	//Actions (Functions)
	void RollInt(Personnage& perso);

	void Attack(Personnage& perso);

	void AddInventory(Item I);

	void ShowInventory();

	void UseItem();

	std::string getName();
	void setName(std::string n);

	int getHealth();
	void setHealth(int h);

	int getDamage();
	void setDamage(int d);

	int getArmor();
	void setArmor(int a);

	int getinitiativeValue();
	void setInitiativeValue(int i);

	bool allyValue();
	void setAllyValue(bool al);

};

