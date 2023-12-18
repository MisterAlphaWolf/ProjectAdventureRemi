#include "Weapon.h" // Include Weapon header file

/*Weapon::Weapon() // Constructeur par défaut
{
    srand(time(0)); // Génère un nombre aléatoire
    durability = (rand() % 10) + 1; // Durabilité entre 1 et 10
    setName("Default"); // Nom par défaut
    damage = 3; // Dégâts par défaut
    setIsOneHanded(true); // Arme à une main par défaut
    
}*/

Weapon::Weapon(int da) // Constructeur Sword avec paramètres
{
    name = n;   
    damage = da; // Dégâts
    srand(time(0)); // Génère un nombre aléatoire
    durability = (rand() % 10) + 1; // Durabilité entre 1 et 10

    switch (rand()%2) // Switch pour définir le nom de l'arme et si elle est à une main ou non (0 = épée, 1 = épée longue) en random
    {
        case 0: // Si c'est une épée
			setName("Sword"); // Définit le nom
            setIsOneHanded(true); // Définit si l'arme est à une main
			break;
        case 1: // Si c'est une épée longue
            setName("Longsword"); // Définit le nom
            setIsOneHanded(false); // Définit si l'arme est à une main
            break;
        default:
            setName("Default"); // Définit le nom
            setIsOneHanded(true); // Définit si l'arme est à une main
			break;

    }
}

std::string Weapon::getName()
{
    return std::string();
}
void Weapon::setName(std::string n)
{
	name = n; // Définit le nom
}

int Weapon::getDamage() // Getter
{
    return damage; // Retourne les dégâts
}
void Weapon::setDamage(int d) // Setter
{
    //si c'est une épée longue
    if (getIsOneHanded() == false)
    {
		damage = d + 2; // Définit les dégâts
	}
    else
    {
		damage = d; // Définit les dégâts
	}   
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


