#include "Personnage.h"

std::random_device r;
std::uniform_int_distribution<int> dist(1, 20);

Personnage::Personnage()
{
    setName("Default");
    setHealth(10);
    setDamage(5);
    setArmor(5);
}

Personnage::Personnage(std::string n, int hp, int d, int a)
{
    setName(n);
    setHealth(hp);
    setDamage(damage);
    setArmor(a);
}

void Personnage::RollInt(Personnage& perso)
{
    setInitiativeValue(dist(r));
    std::cout << "Initiative " << getName() << " " << getinitiativeValue() << std::endl;

}

void Personnage::Attack(Personnage& perso)
{

    int dicehit = dist(r);

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

std::string Personnage::getName()
{
    return name;
}

void Personnage::setName(std::string n)
{
    if (n == "") name = "Default";
    else name = n;
}

int Personnage::getHealth()
{
    return hp;
}

void Personnage::setHealth(int h)
{
    if (h < 0) hp = 1;
    else hp = h;
}

int Personnage::getDamage()
{
    return damage;
}

void Personnage::setDamage(int d)
{
    if (d < 0) damage = 1;
    else damage = d;
}

int Personnage::getArmor()
{
    return armor;
}

void Personnage::setArmor(int a)
{
    if (a < 0) armor = 1;
    else armor = a;
}

int Personnage::getinitiativeValue()
{
    return initiative;
}

void Personnage::setInitiativeValue(int i)
{
    initiative = dist(r);
}

bool Personnage::allyValue()
{
    return ally;
}

void Personnage::setAllyValue(bool al)
{
    ally = al;
}
