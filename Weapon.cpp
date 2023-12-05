#include "Weapon.h"

Weapon::Weapon() // Constructeur par d�faut
{
    srand(time(0)); // G�n�re un nombre al�atoire
    durability = (rand() % 10) + 1; // Durabilit� entre 1 et 10
    setName("Default"); // Nom par d�faut
    damage = 3; // D�g�ts par d�faut
    setIsOneHanded(true); // Arme � une main par d�faut
    
}

Weapon::Weapon(WeaponType wt, int da, int du) // Constructeur Sword avec param�tres
{
    damage = da; // D�g�ts
    durability = du; // Durabilit�

    switch (wt)
    {
        case Sword:
			setName("Sword"); // D�finit le nom
            setIsOneHanded(true); // D�finit si l'arme est � une main
			break;
        case Longsword:
            setName("Longsword"); // D�finit le nom
            setIsOneHanded(false); // D�finit si l'arme est � une main
            break;
        default:
            setName("Default"); // D�finit le nom
            setIsOneHanded(true); // D�finit si l'arme est � une main
			break;

    }
}


int Weapon::getDamage() // Getter
{
    return damage; // Retourne les d�g�ts
}
void Weapon::setDamage(int d) // Setter
{
   damage = d; // D�finit les d�g�ts
}

int Weapon::getDurability() // Getter
{
    return durability; // Retourne la durabilit�
}
void Weapon::setDurability(int du) // Setter
{
    durability = du; // D�finit la durabilit�
}

int Weapon::getIsOneHanded()
{
    return isOneHanded;
}

void Weapon::setIsOneHanded(bool isOneHanded)
{
    	isOneHanded = isOneHanded;
}


