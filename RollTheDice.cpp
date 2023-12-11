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
    std::cout << "Entrez la valeur de defense ( entre 1 et 10 ) : ";
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
    std::cout << "Entrez la valeur de defense ( entre 1 et 10 ) : ";
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl;
    else std::cin >> tempca;
    pointcreation = pointcreation - tempca;
    system("cls");
    return Player(tempname, temphealth, tempdamage, tempca, 0, 1);

}

int main()
{ 
    //Personnage p1;
    Player pl1;
    Ennemi mob;

    std::string name = "";
    int turn = 1;
    std::map<int, Personnage, std::greater<int>> order;

    //Set Player

    //p1 = starting();
    pl1 = startingPlayer();
    pl1.setInitiativeValue(20);

    //Set Mob
    mob.setName("Zombie");
    mob.setInitiativeValue(1);
    mob.setHealth(10);
    mob.setDamage(4);
    
    //Boucle de jeu

    while (pl1.getHealth() > 0 && mob.getHealth() > 0) // Tant que le joueur et le mob sont en vie
    {

        bool playerattack = false; // Le joueur n'attaque pas
        bool playerdefend = false; // Le joueur ne defend pas

        std::cout << "tour : " << turn << std::endl; // Affiche le tour
        if (pl1.getinitiativeValue() > mob.getInitiativeValue()) // Si le joueur a plus d'initiative que le mob
        {
            std::cout << "Player HP : " << pl1.getHealth() << endl; // Affiche la vie du joueur
            std::cout << "Mob HP : " << mob.getHealth() << endl; // Affiche la vie du mob
            std::cout <<"  " << endl;
            std::cout << "Player turn" << endl;  // Si c'est le tour du joueur
            std::cout << "Attack or Defend ?" << endl; // Demande au joueur d'attaquer ou de defendre

            string playerchoice; // Choix du joueur
            cin >> playerchoice; // Le joueur entre son choix
            if (playerchoice == "attack")  // Si le joueur attaque
            {
				playerattack = true; // Le joueur attaque
			}
            else if (playerchoice == "defend") // Si le joueur defend
            {
				playerdefend = true; // Le joueur defend
			}
            else // Si le joueur entre autre chose
            {
                std::cout << "invalid choice" << endl; // Affiche "invalid choice"
			}

            if (playerattack == true) // Si le joueur attaque
            {
                mob.setHealth(mob.getHealth() - (pl1.getDamage() - mob.getArmor())); // Mob HP = Mob HP - (Player Damage - Mob Armor)
			}
			else if (playerdefend == true) // Si le joueur defend
			{
				pl1.setHealth(pl1.getHealth() - ((pl1.getArmor() + 2) - mob.getDamage())); // Player HP = Player HP - ((Player Armor + 2) - Mob Damage)
            }            
        }
            std::cout << "Mob turn" << endl; // Si le mob attaque
            if (turn % 2 == 0) // Si le tour est pair
            {
                pl1.setHealth(pl1.getHealth() - (mob.getDamage() - pl1.getArmor())); // Player HP = Player HP - (Mob Damage - Player Armor)
			}
            else // Si le tour est impair
            {
				pl1.setHealth(pl1.getHealth() - ((mob.getDamage() + 2) - pl1.getArmor())); // Player HP = Player HP - ((Mob Damage + 2) - Player Armor)
            }
        turn++; // Tour suivant
        system("cls"); // Efface la console
    }
    std::cout << "Game Over" << endl;
    pl1.setNumberOfKill(1);
    pl1.setXp(mob.getXPGive());
    std::cout << "XP gain : " << pl1.getXp() << std::endl << "Number of kill : " << pl1.getNumberOfKill() << std::endl;
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage