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
	int ZombieLevel = 1; // Niveau du zombie
	int hp = 10; // Points de vie
	int damage = 20; // Dégâts
	int ca = 1; // Armure
	int initiative; // Initiative
	int XPGive = 20; // XP donné

public: // Attributs publics

	//Constructeur

	Ennemi(); // Constructeur par défaut

	//Getter Setter

	std::string getName();	//Name Getter
	void setName(std::string n); //Name Setter

	int getZombieLevel(); //Zombie Level Getter
	void setZombieLevel(int l); //Zombie Level Setter

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

};