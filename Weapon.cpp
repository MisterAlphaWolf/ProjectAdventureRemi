#include "Weapon.h" // Include Weapon header file

/*Weapon::Weapon() // Constructeur par d�faut
{
    srand(time(0)); // G�n�re un nombre al�atoire
    durability = (rand() % 10) + 1; // Durabilit� entre 1 et 10
    setName("Default"); // Nom par d�faut
    damage = 3; // D�g�ts par d�faut
    setIsOneHanded(true); // Arme � une main par d�faut
    
}*/

Weapon::Weapon(int da) // Constructeur Sword avec param�tres
{
    name = n;   
    damage = da; // D�g�ts
    srand(time(0)); // G�n�re un nombre al�atoire
    durability = (rand() % 10) + 1; // Durabilit� entre 1 et 10

    switch (rand()%2) // Switch pour d�finir le nom de l'arme et si elle est � une main ou non (0 = �p�e, 1 = �p�e longue) en random
    {
        case 0: // Si c'est une �p�e
			setName("Sword"); // D�finit le nom
            setIsOneHanded(true); // D�finit si l'arme est � une main
			break;
        case 1: // Si c'est une �p�e longue
            setName("Longsword"); // D�finit le nom
            setIsOneHanded(false); // D�finit si l'arme est � une main
            break;
        default:
            setName("Default"); // D�finit le nom
            setIsOneHanded(true); // D�finit si l'arme est � une main
			break;

    }
}

std::string Weapon::getName()
{
    return std::string();
}
void Weapon::setName(std::string n)
{
	name = n; // D�finit le nom
}

int Weapon::getDamage() // Getter
{
    return damage; // Retourne les d�g�ts
}
void Weapon::setDamage(int d) // Setter
{
    //si c'est une �p�e longue
    if (getIsOneHanded() == false)
    {
		damage = d + 2; // D�finit les d�g�ts
	}
    else
    {
		damage = d; // D�finit les d�g�ts
	}   
}

int Weapon::getDurability() // Getter
{
    return durability; // Retourne la durabilit�
}
void Weapon::setDurability(int du) // Setter
{
    durability = du; // D�finit la durabilit�
}

int Weapon::getIsOneHanded() // Getter
{
    return isOneHanded; // Retourne si l'arme est � une main
}
void Weapon::setIsOneHanded(bool isOneHanded) // Setter
{
    	isOneHanded = isOneHanded; // D�finit si l'arme est � une main
}


