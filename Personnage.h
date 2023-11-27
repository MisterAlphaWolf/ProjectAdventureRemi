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

	//Actions (Functions)
	void RollInt(Personnage& perso);

	void Attack(Personnage& perso);

	//Getter

	int GetCA() {
		return ca;
	}

	int GetHP() {
		return hp;
	}

	int GetDamage() {
		return damage;
	}

	int GetInitiative() {
		return initiative;
	}

	bool GetAlly() {
		return ally;
	}

	std::string GetName()const {
		return name;
	}


	//Setter

	void SetCA(int a) {
		ca = a;
	}

	void SetHP(int h) {
		hp = h;
	}

	void SetDamage(int d) {
		damage = d;
	}

	void SetInitiative(int i) {
		initiative = i;
	}

	void SetAlly(bool al) {
		ally = al;
	}

	void SetName(std::string n) {
		name = n;
	}


};

