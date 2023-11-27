#include "Personnage.h"

std::random_device r;
std::uniform_int_distribution<int> dist(1, 20);

void Personnage::RollInt(Personnage& perso)
{
    perso.SetInitiative(dist(r));
    std::cout << "Initiative " << perso.GetName() << " " << perso.GetInitiative() << std::endl;

}

void Personnage::Attack(Personnage& perso)
{

    int dicehit = dist(r);

    switch (dicehit) {
    case 1:

        //Affichage resultats
        std::cout << "Roll = " << dicehit << " : " << "Critical Fail" << std::endl << std::endl;
        std::cout << " HP " << perso.GetName() << " = " << GetHP() << std::endl;
        Sleep(delay);    //milliseconds
        break;

    case 20:
        std::cout << "Roll = " << dicehit << " : " << "Critical Win" << std::endl << std::endl;
        GetDamage() * 2;
        perso.SetHP(perso.GetHP() - GetDamage());   //Calcul des dégâts

        if (perso.GetHP() <= 0) {

            perso.SetHP(0);
     
        }

        //Affichage résultats
        std::cout << " Damage " << GetName() << " = " << GetDamage() << std::endl;
        std::cout << " HP " << perso.GetName() << " = " << perso.GetHP() << std::endl;
        Sleep(delay);
        break;


    default:
        std::cout << "Roll = " << dicehit << ";" << std::endl << std::endl;
        if (dicehit >= perso.GetCA() && dicehit < 20) {
            perso.SetHP(perso.GetHP() - GetDamage());   //Calcul des dégâts

            if (perso.GetHP() <= 0) {

                perso.SetHP(0);
        
            }

            //Affichage résultats
            std::cout << " Damage " << GetName() << " = " << GetDamage() << std::endl;
            std::cout << " HP " << perso.GetName() << " = " << perso.GetHP() << std::endl << std::endl;
        }

        else std::cout << GetName() << " Fail" << std::endl << std::endl;

        Sleep(delay);
        break;


    }

    if (perso.GetHP() <= 0) {

        std::cout << GetName() << " gagne !";

    }
    
}
