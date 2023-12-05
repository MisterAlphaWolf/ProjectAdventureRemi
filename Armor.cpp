#include "Armor.h" // Include Armor header file

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

Armor::Armor() // Default constructor for Armor
{
	setName("Armor"); // sets name
	defense = 0; // sets defense
	durability = 0; // sets durability
}

Armor::Armor(ArmorType at,int d, int du) // Constructor for Armor
{
	switch (at) // Switch statement for ArmorType
	{
	case ArmorType::Helmet: // If Helmet
		setName("Helmet"); // sets name
		defense = d; // sets defense
		durability = du; // sets durability
		break;
	case ArmorType::Chestplate: // If Chestplate
		setName("Chestplate"); // sets name
		defense = d; // sets defense
		durability = du;	
		break;
	case ArmorType::Leggings: // If Leggings
		setName("Leggings"); // sets name
		defense = d; // sets defense
		durability = du; // sets durability
		break;
	case ArmorType::Boots: // If Boots
		setName("Boots"); // sets name
		defense = d; // sets defense
		durability = du; // sets durability
		break;
	default: // If none of the above
		setName("Armor"); // sets name
		defense = 0; // sets defense
		durability = 0; // sets durability
		break;
	}
}
