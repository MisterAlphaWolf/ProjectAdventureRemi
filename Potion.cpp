#include "Potion.h" // Include Potion header file


Potion::Potion() // Default constructor for Potion
{
	setName("Potion"); // sets name
	HP = 0; // sets HP
	damage = 0; // sets damage
	armor = 0; // sets armor
}

Potion::Potion(int hp, int d, int a) // Constructor for Potion
{
	HP = hp; // sets HP
	damage = d; // sets damage
	armor = a; // sets armor

	switch (rand()%3) // Switch statement for PotionType
	{
	case 0: // If Health
		setName("HP Potion"); // sets name
		setHP(10); // sets HP
		break;
	case 1: // If Strength
		setName("Damage Potion"); // sets name
		setDamage(5); // sets damage
		break;
	case 2: // If Defense
		setName("Armor Potion"); // sets name
		setArmor(5); // sets armor
		break;

	default: // If none of the above
		setName("HP Potion"); // sets name
		setHP(10); // sets HP
		break;
	}

}

int Potion::getHP() // Getter for HP
{
    return HP; // sets HP
}
void Potion::setHP(int hp) // Setter for HP
{
    HP = hp; // sets HP

}

int Potion::getDamage() // Getter for damage
{
    return damage; // sets damage
}
void Potion::setDamage(int d) // Setter for damage
{
    damage = d;	// sets damage
}

int Potion::getArmor() // Getter for armor
{
    return armor; // sets armor
}
void Potion::setArmor(int a) // Setter for armor
{
	armor = a; // sets armor
}



