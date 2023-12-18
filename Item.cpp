#include "Item.h" // Include Item header file
#include "Weapon.h" // Include Weapon header file
#include "Armor.h" // Include Armor header file
#include "Potion.h" // Include Potion header file




Item::Item() // Constructeur par d�faut
{
	std::random_device r;
	std::uniform_int_distribution<int> dist(1, 3);
	int random = 0;
	random = (dist(r)); // G�n�re un nombre al�atoire


	
	switch (random) // Switch pour d�finir le nom de l'item
	{
		case 1:
			//cr�ation d'une arme
			Weapon Weapon(int da); // Appelle le constructeur avec param�tre de Weapon
			setName(Item::getName()); // D�finit le nom
			break;
		case 2: 
			setName("Armor"); // D�finit le nom
			//cr�ation d'une armure
			Armor Armor(); // Appelle le constructeur par d�faut de Armor
			break;
		case 3:
			setName("Potion");	// D�finit le nom
			//cr�ation d'une potion
			Potion Potion(); // Appelle le constructeur par d�faut de Potion
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
	name = n; // D�finit le nom
}

