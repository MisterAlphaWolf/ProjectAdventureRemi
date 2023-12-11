// RollTheDice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.


#include <iostream>
#include <cstdlib>
#include <random>
#include <map>
#include "Personnage.h"
#include "Ennemi.h"
#include "Player.h"

//using namespace std;

Personnage starting() {
    std::string tempname;
    int tempca = 0;
    int temphealth = 0;
    int tempdamage = 0;
    int pointcreation = 10;

    std::cout << "--- Creation personnage ---" << std::endl << std::endl;
    std::cout << "Entrez le nom : ";
    std::cin >> tempname;
    std::cout << std::endl;
    std::cout << "Vous avez " << pointcreation << " point pour creer votre personnage" << std::endl << std::endl;
    std::cout << "Entrez les HP ( Entre 1 et 10 ) : ";
    std::cin >> temphealth;
    pointcreation = pointcreation - temphealth;
    std::cout << std::endl;
    std::cout << "Il vous reste " << pointcreation << " point pour creer votre personnage" << std::endl << std::endl;
    std::cout << "Entrez la valeur d'attaque ( entre 1 et 10 ) : ";
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl;
    else std::cin >> tempdamage;
    pointcreation = pointcreation - tempdamage;
    std::cout << std::endl;
    std::cout << "Il vous reste " << pointcreation << " point pour creer votre personnage" << std::endl << std::endl;
    std::cout << "Entrez la valeur de defence ( entre 1 et 10 ) : ";
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl;
    else std::cin >> tempca;
    pointcreation = pointcreation - tempca;
    return Personnage(tempname, temphealth, tempdamage, tempca);
}

Player startingPlayer() {
    std::string tempname;
    int tempca = 0;
    int temphealth = 0;
    int tempdamage = 0;
    int pointcreation = 10;

    std::cout << "--- Creation Player ---" << std::endl << std::endl;
    std::cout << "Entrez le nom de votre personnage : ";
    std::cin >> tempname;
    std::cout << std::endl;
    std::cout << "Vous avez " << pointcreation << " point disponible pour choisir vos statistique." << std::endl << std::endl;
    std::cout << "Entrez les points de vie ( Entre 1 et 10 ) : ";
    std::cin >> temphealth;
    pointcreation = pointcreation - temphealth;
    std::cout << std::endl;
    std::cout << "Il vous reste " << pointcreation << " point." << std::endl << std::endl;
    std::cout << "Entrez la valeur d'attaque ( entre 1 et 10 ) : ";
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl;
    else std::cin >> tempdamage;
    pointcreation = pointcreation - tempdamage;
    std::cout << std::endl;
    std::cout << "Il vous reste " << pointcreation << " point." << std::endl << std::endl;
    std::cout << "Entrez la valeur de defence ( entre 1 et 10 ) : ";
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl;
    else std::cin >> tempca;
    pointcreation = pointcreation - tempca;
    return Player(tempname, temphealth, tempdamage, tempca, 0, 1);
}

int main()
{

    std::random_device r;
    std::uniform_int_distribution<int> dist(1, 20);
    
    Personnage p1;
    Player pl1;
    Ennemi mob;

    std::string name = "";
    int turn = 1;
    std::map<int, Personnage, std::greater<int>> order;

    //Set Player

    p1 = starting();
    pl1 = startingPlayer();
    
   /* std::cout << "Enter the name of your player : ";
    std::cin >> name;
    p1.SetName(name);
    p1.SetCA(13);
    p1.SetHP(25);
    p1.SetInitiative(dist(r));

    order.emplace(p1.GetInitiative(), p1);*/
    
    //CConsoleLogger another_console;

    //Set Mob
    mob.setName("Zombie");
    mob.setInitiativeValue(dist(r));
    
    order.emplace(mob.getInitiativeValue(), mob);
    
    //for (auto it = order.begin(); it != order.end(); it++) {

    //    std::cout << it->first << std::endl;
    //    std::cout << it->second.getName() << std::endl;

    //}

    //Boucle de jeu

    while (p1.getHealth() > 0 && mob.getHealth() > 0) {

        bool playerattack = false;
        bool playerdefend = false;

        std::cout << "tour : " << turn << std::endl;
        if (p1.getinitiativeValue() > mob.getInitiativeValue()) 
        {
            cout << "Player turn" << endl;  
            cout << "player attack or defend ?" << endl;
            string playerchoice;
            cin >> playerchoice;
            if (playerchoice == "attack")
            {
				playerattack = true;
			}
            else if (playerchoice == "defend")
            {
				playerdefend = true;
			}
            else
            {
				cout << "invalid choice" << endl;
			}
            if (playerattack == true) 
            {
                mob.setHealth(mob.getHealth() - (p1.getDamage() - mob.getArmor()));
				cout << "Mob HP : " << mob.getHealth() << endl;
			}
			else if (playerdefend == true) 
			{
				p1.setHealth(p1.getHealth() - ((p1.getArmor() + 2) - mob.getDamage()));
				cout << "Player HP : " << p1.getHealth() << endl;
            }            
        }
        else {
            cout << "Mob turn" << endl;
            //mob.setDamage(dist(r));
            //mob.Attack(p1);
        }
           

    }
    turn++;
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage