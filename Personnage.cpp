#include "Personnage.h"

std::random_device r; //Initialisation du générateur de nombre aléatoire
std::uniform_int_distribution<int> dist(1, 20); //Définition de l'intervalle de nombre aléatoire

Personnage::Personnage() //Constructeur par défaut
{
    setName("Default"); //Initialisation des attributs
    setHealth(10); //Initialisation des attributs
    setDamage(5); //Initialisation des attributs
    setArmor(5); //Initialisation des attributs
}

Personnage::Personnage(std::string n, int hp, int d, int a) //Constructeur avec paramètres
{
    setName(n); //Initialisation des attributs
    setHealth(hp); //Initialisation des attributs
    setDamage(damage); //Initialisation des attributs
    setArmor(a); //Initialisation des attributs
}

void Personnage::RollInt(Personnage& perso) //Lancer de dé d'initiative
{
    setInitiativeValue(dist(r)); //Initialisation de l'initiative
    std::cout << "Initiative " << getName() << " " << getinitiativeValue() << std::endl; //Affichage de l'initiative

}


void Personnage::AddInventory(Item I) //Ajout d'un item dans l'inventaire
{

    Inventory.push_back(I); //Ajout de l'item dans l'inventaire

}

void Personnage::ShowInventory() //Affichage de l'inventaire
{

    for (int i = 0; i < Inventory.size(); i++) //Boucle pour afficher l'inventaire
    {
        cout << Inventory[i].getName() << " "; //Affichage de l'item
    }
    cout << endl; //Saut de ligne
}

void Personnage::UseItem() //Utilisation d'un item
{

    for (int i = 0; i < Inventory.size(); i++) //Boucle pour utiliser un item
    {

        if (Inventory[i].getName() == "Potion") //Si l'item est une potion
        {

            getHealth() + 10; //Le joueur regagne 10HP
            cout << "Player heal 10HP"; //Affichage du résultat
            Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
            break; //Sortie de la boucle

        }
        
    }
}

void Personnage::Attack(Personnage& perso) //Inutilisé
{

    int dicehit = dist(r); //Lancer de dé

   /* switch (dicehit) {
    case 1:

        //Affichage resultats
        std::cout << "Roll = " << dicehit << " : " << "Critical Fail" << std::endl << std::endl;
        std::cout << " HP " << getName() << " = " << getHealth() << std::endl;
        Sleep(delay);    //milliseconds
        break;

    case 20:
        std::cout << "Roll = " << dicehit << " : " << "Critical Win" << std::endl << std::endl;
        getDamage() * 2;
        setHealth(getHealth() - getDamage());   //Calcul des dégâts

        if (getHealth() <= 0) {

            setHealth(0);
     
        }

        //Affichage résultats
        std::cout << " Damage " << getName() << " = " << getDamage() << std::endl;
        std::cout << " HP " << getName() << " = " << getHealth() << std::endl;
        Sleep(delay);
        break;


    default:
        std::cout << "Roll = " << dicehit << ";" << std::endl << std::endl;
        if (dicehit >= getArmor() && dicehit < 20) {
            setHealth(getHealth() - getDamage());   //Calcul des dégâts

            if (getHealth() <= 0) {

                setHealth(0);
        
            }

            //Affichage résultats
            std::cout << " Damage " << getName() << " = " << getDamage() << std::endl;
            std::cout << " HP " << getName() << " = " << getHealth() << std::endl << std::endl;
        }

        else std::cout << getName() << " Lancer Fail" << std::endl << std::endl;

        Sleep(delay);
        break;


    }

    if (getHealth() <= 0) {

        std::cout << getName() << " gagne !";

    }
    */
}

std::string Personnage::getName() //Getter
{
    return name; //Retourne le nom
}

void Personnage::setName(std::string n) //Name Setter
{
    if (n == "") name = "Default"; //Si le nom est vide, le nom est "Default"
    else name = n; //Sinon le nom est le nom entré
}

int Personnage::getHealth() //Health Getter
{
    return hp; //Retourne la vie
}

void Personnage::setHealth(int h) //Health Setter
{
    if (h < 1) hp = 1; //Si la vie est inférieure à 1, la vie est 1
    else hp = h; //Sinon la vie est la vie entrée
}

int Personnage::getDamage() //Damage Getter
{
    return damage; //Retourne les dégâts
}

void Personnage::setDamage(int d) //Damage Setter
{
    if (d < 1) damage = 1; //Si les dégâts sont inférieurs à 1, les dégâts sont 1
    else damage = d; //Sinon les dégâts sont les dégâts entrés
}

int Personnage::getArmor() //Armor Getter
{
    return armor; //Retourne l'armure
}

void Personnage::setArmor(int a) //Armor Setter
{
    if (a < 1) armor = 1; //Si l'armure est inférieure à 1, l'armure est 1
    else armor = a; //Sinon l'armure est l'armure entrée
}

int Personnage::getinitiativeValue() //Initiative Getter
{
    return initiative; //Retourne l'initiative
}

void Personnage::setInitiativeValue(int i) //Initiative Setter
{
    initiative = dist(r); //Initialisation de l'initiative
}

bool Personnage::allyValue() //Ally Getter
{
    return ally; //Retourne l'allié
}

void Personnage::setAllyValue(bool al) //Ally Setter
{
    ally = al; //Initialisation de l'allié
}
