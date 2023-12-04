#pragma once

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Personnage.h"

//using namespace std;

class Item // Classe mère
{

private: // Attributs

	std::string name; // Nom de l'item

	
	
public: // Méthodes


	std::string getName(); // Getter
	void setName(std::string n); // Setter

	Item(); // Constructeur par défaut

};

