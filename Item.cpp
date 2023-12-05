#include "Item.h" // Include Item header file

std::string Item::getName() // Getter
{
	return name; // Retourne le nom
}
void Item::setName(std::string n) // Setter
{
	name = n; // D�finit le nom
}

Item::Item() // Constructeur par d�faut
{
	srand(time(0)); // G�n�re un nombre al�atoire
	int random = (rand() % 3) + 1; // Entre 1 et 3
	
	switch (random) // Switch pour d�finir le nom de l'item
	{
		case 1:
			setName("Weapon"); // D�finit le nom
			break;
		case 2:
			setName("Armor"); // D�finit le nom
			break;
		case 3:
			setName("Potion");	// D�finit le nom
			break;
		default:
			setName("Potion"); // D�finit le nom
			break;
	}
}


