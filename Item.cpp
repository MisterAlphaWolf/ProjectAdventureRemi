#include "Item.h" // Include Item header file

std::string Item::getName() // Getter
{
	return name; // Retourne le nom
}
void Item::setName(std::string n) // Setter
{
	name = n; // Définit le nom
}

Item::Item() // Constructeur par défaut
{
	std::random_device r;
	std::uniform_int_distribution<int> dist(1, 3);
	int random = (dist(r));
	
	switch (random) // Switch pour définir le nom de l'item
	{
		case 1:
			setName("Weapon"); // Définit le nom
			break;
		case 2:
			setName("Armor"); // Définit le nom
			break;
		case 3:
			setName("Potion");	// Définit le nom
			break;
		default:
			setName("Potion"); // Définit le nom
			break;
	}
}


