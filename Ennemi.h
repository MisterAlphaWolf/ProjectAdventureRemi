#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Personnage.h"

using namespace std; // Pour utiliser les fonctions de la librairie standard

class Ennemi : public Personnage // Classe Ennemi
{

private: // Attributs privés

	//Attribute (variables)
	std::string name; // Nom du personnage
	int hp = 10; // Points de vie
	int damage = 20; // Dégâts
	int ca; // Armure
	int initiative; // Initiative
	int XPGive = 1; // XP donné
	int ZombieLevel; // Niveau du zombie

public: // Attributs publics

	//Constructeur

	Ennemi(); // Constructeur par défaut

	//Getter Setter

	std::string getName();	//Name Getter
	void setName(std::string n); //Name Setter

	int getHealth(); //Health Getter
	void setHealth(int h); //Health Setter

	int getDamage(); //Damage Getter
	void setDamage(int d); //Damage Setter

	int getArmor(); //Armor Getter
	void setArmor(int a); //Armor Setter

	int getInitiativeValue(); //Initiative Getter
	void setInitiativeValue(int i); //Initiative Setter

	int getXPGive(); //XP Getter
	void setXPGive(int xp); //XP Setter

	int getZombieLevel(); //Zombie Level Getter
	void setZombieLevel(int l); //Zombie Level Setter
};