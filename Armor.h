#pragma once // Include guard
#include "Item.h" // Include Item header file
class Armor : // Armor class
    public Item // Inherits from Item
{

    enum class ArmorType // ArmorType enum
    {
        Helmet, 
        Chestplate,
        Leggings,
        Boots,
    };
private: // Private variables

    int defense; // Defense variable
    int durability; // Durability variable

public: // Public functions

    int getDefense(); // Getter for defense
    void setDefense(int d); // Setter for defense

    int getDurability(); // Getter for durability
    void setDurability(int du); // Setter for durability

    Armor(); // Default constructor for Armor
    Armor(ArmorType at,int d, int du); // Constructor for Armor
};

