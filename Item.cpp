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
	std::random_device r;
	std::uniform_int_distribution<int> dist(1, 3);
	int random = (dist(r));
	
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


