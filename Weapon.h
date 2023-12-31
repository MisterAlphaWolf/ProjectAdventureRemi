#pragma once // Include guard
#include "Item.h" // Include Item header file
class Weapon : // Weapon class
    public Item // Inherits from Item
{

    enum WeaponType // WeaponType enum
    {
		Sword,
		Longsword
	};

private: // Private variables

    int damage; // Damage variable
    int durability; // Durability variable
    bool isOneHanded; // IsOneHanded variable


public: // Public functions

    int getDamage();// Getter for damage
    void setDamage(int da); // Setter for damage

    int getDurability(); // Getter for durability
    void setDurability(int du); // Setter for durability

    int getIsOneHanded(); // Getter for isOneHanded
    void setIsOneHanded(bool isOneHanded); // Setter for isOneHanded

    //Weapon(); // Default constructor for Weapon
    Weapon(int da); // Constructor for Weapon
};

