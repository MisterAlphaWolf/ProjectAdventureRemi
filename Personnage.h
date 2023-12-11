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

private: // Attributs priv�s

	//Attribute (variables)
	std::string name; // Nom du personnage
	std::string targetname; // Nom de la cible
	int hp; // Points de vie
	int targethp; // Points de vie de la cible
	int damage; // D�g�ts
	int armor; // Armure
	int initiative; // Initiative
	int delay = 2000; // D�lai
	bool ally; // Alli�
	vector<Item> Inventory; // Inventaire

public: // Attributs publics

	//Constructeur
	Personnage(); // Constructeur par d�faut

	Personnage(std::string n, int hp, int d, int a); // Constructeur avec d�finition du nom, des points de vie, des d�g�ts et de l'armure

	//Actions (Functions)
	void RollInt(Personnage& perso); // Fonction pour lancer un d�

	void Attack(Personnage& perso); // Fonction pour attaquer

	void AddInventory(Item I); // Fonction pour ajouter un item dans l'inventaire

	void ShowInventory(); // Fonction pour afficher l'inventaire

	void UseItem(); // Fonction pour utiliser un item

	std::string getName(); // Fonction pour obtenir le nom du personnage
	void setName(std::string n); // Fonction pour d�finir le nom du personnage

	int getHealth(); // Fonction pour obtenir les points de vie du personnage
	void setHealth(int h); // Fonction pour d�finir les points de vie du personnage

	int getDamage(); // Fonction pour obtenir les d�g�ts du personnage
	void setDamage(int d); // Fonction pour d�finir les d�g�ts du personnage

	int getArmor(); // Fonction pour obtenir l'armure du personnage
	void setArmor(int a); // Fonction pour d�finir l'armure du personnage

	int getinitiativeValue(); // Fonction pour obtenir l'initiative du personnage
	void setInitiativeValue(int i); // Fonction pour d�finir l'initiative du personnage

	bool allyValue(); // Fonction pour obtenir la valeur de l'alli�
	void setAllyValue(bool al); // Fonction pour d�finir la valeur de l'alli�

};

