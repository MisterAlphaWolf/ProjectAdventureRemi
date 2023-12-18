#include "Item.h" // Include Item header file
#include "Weapon.h" // Include Weapon header file
#include "Armor.h" // Include Armor header file
#include "Potion.h" // Include Potion header file




Item::Item() // Constructeur par défaut
{
	std::random_device r;
	std::uniform_int_distribution<int> dist(1, 3);
	int random = 0;
	random = (dist(r)); // Génère un nombre aléatoire


	
	switch (random) // Switch pour définir le nom de l'item
	{
		case 1:
			//création d'une arme
			Weapon Weapon(int da); // Appelle le constructeur avec paramètre de Weapon
			setName(Item::getName()); // Définit le nom
			break;
		case 2: 
			setName("Armor"); // Définit le nom
			//création d'une armure
			Armor Armor(); // Appelle le constructeur par défaut de Armor
			break;
		case 3:
			setName("Potion");	// Définit le nom
			//création d'une potion
			Potion Potion(); // Appelle le constructeur par défaut de Potion
			break;
		default:
			break;
	}
}

std::string Item::getName()
{
	return name; // Retourne le nom
}
void Item::setName(std::string n)
{
	name = n; // Définit le nom
}

