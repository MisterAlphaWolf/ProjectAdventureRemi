#include "Potion.h" // Include Potion header file

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

Potion::Potion() // Default constructor for Potion
{
    setName("Potion"); // sets name
	HP = 0; // sets HP
	damage = 0; // sets damage
}	

Potion::Potion(PotionType pt, int value) // Constructor for Potion
{
    switch (pt) // Switch statement for PotionType
	{
	case PotionType::Health: // If Health
		setName("HP Potion"); // sets name
		HP = value; // sets HP
		damage = 0; // sets damage
		break;
case PotionType::Strength: // If Strength
setName("Damage Potion"); // sets name
		HP = 0; // sets HP
		damage = value; // sets damage
		break;
case PotionType::Defense: // If Defense
setName("Armor Potion"); // sets name
		HP = 0; // sets HP
		damage = 0; // sets damage
		armor = value; // sets armor
		break;
	
	default: // If none of the above
		setName("Potion"); // sets name
		HP = 0; // sets HP
		damage = 0; // sets damage
		break;
	}

}



