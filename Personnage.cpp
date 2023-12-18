#include "Personnage.h"

std::random_device r; //Initialisation du g�n�rateur de nombre al�atoire
std::uniform_int_distribution<int> dist(1, 20); //D�finition de l'intervalle de nombre al�atoire

Personnage::Personnage() //Constructeur par d�faut
{
    setName("Default"); //Initialisation des attributs
    setHealth(10); //Initialisation des attributs
    setDamage(5); //Initialisation des attributs
    setArmor(5); //Initialisation des attributs
}

Personnage::Personnage(std::string n, int hp, int d, int a) //Constructeur avec param�tres
{
    setName(n); //Initialisation des attributs
    setHealth(hp); //Initialisation des attributs
    setDamage(damage); //Initialisation des attributs
    setArmor(a); //Initialisation des attributs
}

void Personnage::RollInt(Personnage& perso) //Lancer de d� d'initiative
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
    //cout << Inventory.size() << endl; //Affichage de la taille de l'inventaire

    for (int i = 0; i < Inventory.size(); i++) //Boucle pour afficher l'inventaire
    {
        cout << Inventory[i].getName(); //Affichage de l'item
    }
    cout << endl; //Saut de ligne

}

void Personnage::UseItem(string itemname) //Utilisation d'un item
{

    for (int i = 0; i < Inventory.size(); i++) //Boucle pour utiliser un item
    {
            if (Inventory[i].getName() == "Potion HP") //Si l'item est une potion de heal
            {

                setHealth(getHealth() + 10); //Le joueur gagne 10HP
                cout << "Vous gagnez +10 HP"; //Affichage du r�sultat
                Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
                break; //Sortie de la boucle

            }

            else if (Inventory[i].getName() == "Potion Damage") //Si l'item est une potion de d�g�ts
            {

                setDamage(getDamage() + 5); //Le joueur gagne 5 d�g�ts
                cout << "Player gain 5 damage"; //Affichage du r�sultat
                Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
                break; //Sortie de la boucle

            }

            else if (Inventory[i].getName() == "Potion Armor") //Si l'item est une potion d'armure
            {

                setArmor(getArmor() + 5); //Le joueur gagne 5 armure
                cout << "Player gain 5 armor"; //Affichage du r�sultat
                Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
                break; //Sortie de la boucle

            }

            else //Si l'item n'est pas une potion
            {
                cout << "Vous n'avez pas de potion"; //Affichage du r�sultat
            }

            if (Inventory[i].getName() == "Sword") //Si l'item est une �p�e
            {
				setDamage(getDamage() + 2); //Le joueur gagne 2 d�g�ts
				cout << "Player gain 2 damage"; //Affichage du r�sultat
				Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
				break; //Sortie de la boucle
			}

            else if (Inventory[i].getName() == "Longsword") //Si l'item est une �p�e longue
            {
				setDamage(getDamage() + 4); //Le joueur gagne 4 d�g�ts
				cout << "Player gain 4 damage"; //Affichage du r�sultat
				Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
				break; //Sortie de la boucle
			}
            else //Si l'item n'est pas une arme
            {
				cout << "Vous n'avez pas d'arme"; //Affichage du r�sultat
			}

            if (Inventory[i].getName() == "Helmet") //Si l'item est un casque
            {
                setArmor(getArmor() + 2); //Le joueur gagne 2 armure
                cout << "Player gain 2 armor"; //Affichage du r�sultat
                Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
            }

            else if (Inventory[i].getName() == "Chestplate") //Si l'item est un chestplate
            {
				setArmor(getArmor() + 4); //Le joueur gagne 4 armure
				cout << "Player gain 4 armor"; //Affichage du r�sultat
				Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
			}

            else if (Inventory[i].getName() == "Leggings") //Si l'item est un leggings
            {
				setArmor(getArmor() + 3); //Le joueur gagne 3 armure
				cout << "Player gain 3 armor"; //Affichage du r�sultat
				Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
			}

            else if (Inventory[i].getName() == "Boots") //Si l'item est une paire de boots
            {
				setArmor(getArmor() + 1); //Le joueur gagne 1 armure
				cout << "Player gain 1 armor"; //Affichage du r�sultat
				Inventory.erase(Inventory.begin() + i); //Suppression de l'item de l'inventaire
			}

            else //Si l'item n'est pas une armure
            {
				cout << "Vous n'avez pas d'armure"; //Affichage du r�sultat
			}     
    }
}

void Personnage::Attack(Personnage& perso) //Inutilis�
{

    int dicehit = dist(r); //Lancer de d�

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
        setHealth(getHealth() - getDamage());   //Calcul des d�g�ts

        if (getHealth() <= 0) {

            setHealth(0);
     
        }

        //Affichage r�sultats
        std::cout << " Damage " << getName() << " = " << getDamage() << std::endl;
        std::cout << " HP " << getName() << " = " << getHealth() << std::endl;
        Sleep(delay);
        break;


    default:
        std::cout << "Roll = " << dicehit << ";" << std::endl << std::endl;
        if (dicehit >= getArmor() && dicehit < 20) {
            setHealth(getHealth() - getDamage());   //Calcul des d�g�ts

            if (getHealth() <= 0) {

                setHealth(0);
        
            }

            //Affichage r�sultats
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
    else name = n; //Sinon le nom est le nom entr�
}

int Personnage::getHealth() //Health Getter
{
    return hp; //Retourne la vie
}

void Personnage::setHealth(int h) //Health Setter
{
    if (h < 1) hp = 1; //Si la vie est inf�rieure � 1, la vie est 1
    else hp = h; //Sinon la vie est la vie entr�e
}

int Personnage::getDamage() //Damage Getter
{
    return damage; //Retourne les d�g�ts
}

void Personnage::setDamage(int d) //Damage Setter
{
    if (d < 1) damage = 1; //Si les d�g�ts sont inf�rieurs � 1, les d�g�ts sont 1
    else damage = d; //Sinon les d�g�ts sont les d�g�ts entr�s
}

int Personnage::getArmor() //Armor Getter
{
    return armor; //Retourne l'armure
}

void Personnage::setArmor(int a) //Armor Setter
{
    if (a < 1) armor = 1; //Si l'armure est inf�rieure � 1, l'armure est 1
    else armor = a; //Sinon l'armure est l'armure entr�e
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
    return ally; //Retourne l'alli�
}

void Personnage::setAllyValue(bool al) //Ally Setter
{
    ally = al; //Initialisation de l'alli�
}
