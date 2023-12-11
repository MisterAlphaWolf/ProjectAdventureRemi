#pragma once // Include guard

#include <iostream> // Include iostream
#include <cstdlib> // Include cstdlib
#include <time.h> // Include time.h
#include <random>
//#include "Personnage.h" // Include Personnage header file

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

