#pragma once

#include <iostream>
#include <cstdlib>
#include <random>
#include <vector>
#include <windows.h>
#include "Item.h"

using namespace std; // Pour utiliser les fonctions de la librairie standard

class Personnage // Classe Personnage
{

private: // Attributs privés

	//Attribute (variables)
	std::string name; // Nom du personnage
	std::string targetname; // Nom de la cible
	int hp; // Points de vie
	int targethp; // Points de vie de la cible
	int damage; // Dégâts
	int armor; // Armure
	int initiative; // Initiative
	int delay = 2000; // Délai
	bool ally; // Allié
	vector<Item> Inventory; // Inventaire

public: // Attributs publics

	//Constructeur
	Personnage(); // Constructeur par défaut

	Personnage(std::string n, int hp, int d, int a); // Constructeur avec définition du nom, des points de vie, des dégâts et de l'armure

	//Actions (Functions)
	void RollInt(Personnage& perso); // Fonction pour lancer un dé

	void Attack(Personnage& perso); // Fonction pour attaquer

	void AddInventory(Item I); // Fonction pour ajouter un item dans l'inventaire

	void ShowInventory(); // Fonction pour afficher l'inventaire

	void UseItem(); // Fonction pour utiliser un item

	std::string getName(); // Fonction pour obtenir le nom du personnage
	void setName(std::string n); // Fonction pour définir le nom du personnage

	int getHealth(); // Fonction pour obtenir les points de vie du personnage
	void setHealth(int h); // Fonction pour définir les points de vie du personnage

	int getDamage(); // Fonction pour obtenir les dégâts du personnage
	void setDamage(int d); // Fonction pour définir les dégâts du personnage

	int getArmor(); // Fonction pour obtenir l'armure du personnage
	void setArmor(int a); // Fonction pour définir l'armure du personnage

	int getinitiativeValue(); // Fonction pour obtenir l'initiative du personnage
	void setInitiativeValue(int i); // Fonction pour définir l'initiative du personnage

	bool allyValue(); // Fonction pour obtenir la valeur de l'allié
	void setAllyValue(bool al); // Fonction pour définir la valeur de l'allié

};

