#include "Weapon.h" // Include Weapon header file

Weapon::Weapon() // Constructeur par défaut
{
    srand(time(0)); // Génère un nombre aléatoire
    durability = (rand() % 10) + 1; // Durabilité entre 1 et 10
    setName("Default"); // Nom par défaut
    damage = 3; // Dégâts par défaut
    setIsOneHanded(true); // Arme à une main par défaut
    
}

Weapon::Weapon(WeaponType wt, int da, int du) // Constructeur Sword avec paramètres
{
    damage = da; // Dégâts
    durability = du; // Durabilité

    switch (wt) // Switch pour le type d'arme
    {
        case Sword: // Si c'est une épée
			setName("Sword"); // Définit le nom
            setIsOneHanded(true); // Définit si l'arme est à une main
			break;
        case Longsword: // Si c'est une épée longue
            setName("Longsword"); // Définit le nom
            setIsOneHanded(false); // Définit si l'arme est à une main
            break;
        default:
            setName("Default"); // Définit le nom
            setIsOneHanded(true); // Définit si l'arme est à une main
			break;

    }
}


int Weapon::getDamage() // Getter
{
    return damage; // Retourne les dégâts
}
void Weapon::setDamage(int d) // Setter
{
   damage = d; // Définit les dégâts
}

int Weapon::getDurability() // Getter
{
    return durability; // Retourne la durabilité
}
void Weapon::setDurability(int du) // Setter
{
    durability = du; // Définit la durabilité
}

int Weapon::getIsOneHanded() // Getter
{
    return isOneHanded; // Retourne si l'arme est à une main
}

void Weapon::setIsOneHanded(bool isOneHanded) // Setter
{
    	isOneHanded = isOneHanded; // Définit si l'arme est à une main
}


