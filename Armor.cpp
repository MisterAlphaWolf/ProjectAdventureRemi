#include "Armor.h" // Include Armor header file


Armor::Armor() // Default constructor for Armor
{
	setName("Armor"); // sets name
	defense = 0; // sets defense
	durability = 0; // sets durability
}

Armor::Armor(int d, int du) // Constructor for Armor
{
	defense = d; // sets defense
	srand(time(0)); // Génère un nombre aléatoire
	durability = (rand() % 10) + 1; // Durabilité entre 1 et 10

	switch (rand() % 4) // Switch pour définir le nom de l'armure (0 = casque, 1 = plastron, 2 = jambières, 3 = bottes) en random
	{
	case 0: // If Helmet
		setName("Helmet"); // sets name
		setDefense(2); // sets defense
		break;
	case 1: // If Chestplate
		setName("Chestplate"); // sets name
		setDefense(4); // sets defense
		break;
	case 2: // If Leggings
		setName("Leggings"); // sets name
		setDefense(3); // sets defense
		break;
	case 3: // If Boots
		setName("Boots"); // sets name
		setDefense(1); // sets defense
		break;
	default: // If none of the above
		setName("Chestplate"); // sets name
		setDefense(4); // sets defense
		break;
	}
}


int Armor::getDefense() // Getter for defense
{
    return defense;	// sets defense
}
void Armor::setDefense(int d) // Setter for defense
{
    defense = d; // sets defense
}

int Armor::getDurability() // Getter for durability
{
    return durability; // sets durability
}
void Armor::setDurability(int du) // Setter for durability
{
    durability = du; // sets durability
}
