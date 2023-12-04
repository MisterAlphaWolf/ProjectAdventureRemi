#pragma once

#include <iostream>
#include <cstdlib>
#include <random>
#include <windows.h>


//using namespace std;

class Personnage
{

private:

	//Attribute (variables)
	std::string name;
	std::string targetname;
	int hp;
	int targethp;
	int damage;
	int ca;
	int initiative;
	int delay = 2000;
	int XP;
	int level;
	bool ally;

public:

	//Constructeur

	Personnage(std::string n, int hp, int damage, int ca);

	//Actions (Functions)
	void RollInt(Personnage& perso);

	void Attack(Personnage& perso);

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

	//int GetCA() {
	//	return ca;
	//}

	//int GetHP() {
	//	return hp;
	//}

	//int GetDamage() {
	//	return damage;
	//}

	//int GetInitiative() {
	//	return initiative;
	//}

	//bool GetAlly() {
	//	return ally;
	//}

	//std::string GetName()const {
	//	return name;
	//}

	//void SetCA(int a) {
	//	ca = a;
	//}

	//void SetHP(int h) {
	//	hp = h;
	//}

	//void SetDamage(int d) {
	//	damage = d;
	//}

	//void SetInitiative(int i) {
	//	initiative = i;
	//}

	//void SetAlly(bool al) {
	//	ally = al;
	//}

	//void SetName(std::string n) {
	//	name = n;
	//}


};

