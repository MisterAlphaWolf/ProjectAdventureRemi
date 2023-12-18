#pragma once // Include guard
#include "Item.h" // Include Item header file
class Potion : // Potion class
    public Item // Inherits from Item
{

    enum class PotionType // PotionType enum
	{
		Health,
		Strength,
		Defense,
	};
private: // Private variables

    int HP; // HP variable
    int damage; // Damage variable
    int armor; // Armor variable

public: // Public functions
    int getHP(); // Getter for HP
    void setHP(int hp); // Setter for HP

    int getDamage(); // Getter for damage
    void setDamage(int d); // Setter for damage

    int getArmor(); // Getter for armor
    void setArmor(int a); // Setter for armor

    Potion(); // Default constructor for Potion
    Potion(int hp, int d, int a); // Constructor for Potion

};

