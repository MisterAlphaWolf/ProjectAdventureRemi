#pragma once

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Personnage.h"

//using namespace std;

class Item // Classe m�re
{

private: // Attributs

	std::string name; // Nom de l'item

	
	
public: // M�thodes


	std::string getName(); // Getter
	void setName(std::string n); // Setter

	Item(); // Constructeur par d�faut

};

