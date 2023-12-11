// RollTheDice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.


#include <iostream> 
#include <cstdlib> 
#include <random>
#include <map>
#include "Personnage.h"
#include "Ennemi.h"
#include "Player.h"

//using namespace std;


// Fonction de création dynamique par le joueur de son personnage
Personnage starting() // Creation du personnage
{
    std::string tempname; // Nom temporaire
    int tempca = 0; // Valeur de defense temporaire
    int temphealth = 0; // Valeur de vie temporaire
    int tempdamage = 0; // Valeur d'attaque temporaire
    int pointcreation = 10; // Point de creation

    std::cout << "--- Creation personnage ---" << std::endl << std::endl;   // Creation du personnage
    std::cout << "Entrez le nom : "; // Demande le nom
    std::cin >> tempname; // Le joueur entre son nom
    std::cout << std::endl; // Saut de ligne
    std::cout << "Vous avez " << pointcreation << " point pour creer votre personnage" << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez les HP ( Entre 1 et 10 ) : "; // Demande les points de vie
    std::cin >> temphealth; // Le joueur entre les points de vie
    pointcreation = pointcreation - temphealth; // Point de creation = Point de creation - Points de vie
    std::cout << std::endl; // Saut de ligne
    std::cout << "Il vous reste " << pointcreation << " point pour creer votre personnage" << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez la valeur d'attaque ( entre 1 et 10 ) : "; // Demande la valeur d'attaque
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl; // Si le joueur n'a plus de point
    else std::cin >> tempdamage; // Le joueur entre la valeur d'attaque
    pointcreation = pointcreation - tempdamage; // Point de creation = Point de creation - Valeur d'attaque
    std::cout << std::endl; // Saut de ligne
    std::cout << "Il vous reste " << pointcreation << " point pour creer votre personnage" << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez la valeur de defense ( entre 1 et 10 ) : "; // Demande la valeur de defense
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl; // Si le joueur n'a plus de point
    else std::cin >> tempca; // Le joueur entre la valeur de defense
    pointcreation = pointcreation - tempca; // Point de creation = Point de creation - Valeur de defense
    return Personnage(tempname, temphealth, tempdamage, tempca); // Retourne le personnage
}

// Fonction de création dynamique par le joueur de son personnage jouable
Player startingPlayer() // Creation du joueur
{
    std::string tempname; // Nom temporaire
    int tempca = 0; // Valeur de defense temporaire
    int temphealth = 0; // Valeur de vie temporaire
    int tempdamage = 0; // Valeur d'attaque temporaire
    int pointcreation = 10; // Point de creation

    std::cout << "--- Creation Player ---" << std::endl << std::endl; // Creation du joueur
    std::cout << "Entrez le nom de votre personnage : "; // Demande le nom
    std::cin >> tempname; // Le joueur entre son nom
    std::cout << std::endl; // Saut de ligne
    std::cout << "Vous avez " << pointcreation << " point disponible pour choisir vos statistique." << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez les points de vie ( Entre 1 et 10 ) : "; // Demande les points de vie
    std::cin >> temphealth; // Le joueur entre les points de vie
    pointcreation = pointcreation - temphealth; // Point de creation = Point de creation - Points de vie
    std::cout << std::endl; // Saut de ligne
    std::cout << "Il vous reste " << pointcreation << " point." << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez la valeur d'attaque ( entre 1 et 10 ) : "; // Demande la valeur d'attaque
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl; // Si le joueur n'a plus de point
    else std::cin >> tempdamage; // Le joueur entre la valeur d'attaque
    pointcreation = pointcreation - tempdamage; // Point de creation = Point de creation - Valeur d'attaque
    std::cout << std::endl; // Saut de ligne
    std::cout << "Il vous reste " << pointcreation << " point." << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez la valeur de defense ( entre 1 et 10 ) : "; // Demande la valeur de defense
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl; // Si le joueur n'a plus de point
    else std::cin >> tempca; // Le joueur entre la valeur de defense
    pointcreation = pointcreation - tempca; // Point de creation = Point de creation - Valeur de defense
    system("cls"); // Efface la console
    return Player(tempname, temphealth, tempdamage, tempca, 0, 1); // Retourne le joueur

}

int main() // Fonction principale
{ 
    //Personnage p1;
    Player pl1; // Player
    Ennemi mob; // Mob

    std::string name = ""; // Nom du joueur
    int turn = 1; // Tour de jeu

    //Set Player
    //p1 = starting(); // Creation de la classe personnage ( classe parent )
    pl1 = startingPlayer(); // Creation du joueur ( classe enfant )
    pl1.setInitiativeValue(20); // Initiative du joueur

    //Set Mob
    mob.setName("Zombie"); // Nom du mob
    mob.setInitiativeValue(1); // Initiative du mob
    mob.setHealth(10); // Vie du mob
    mob.setDamage(4); // Dommage du mob
    mob.setXPGive(25); // XP donne par le mob
    

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
    std::cout << "Game Over" << endl; // Affiche "Game Over"
    pl1.setNumberOfKill(1); // Nombre de kill du joueur + 1
    std::cout << "Number of kill : " << pl1.getNumberOfKill() << std::endl; //Le nombre de kill
    //std::cout << "XP gain : " << pl1.getXp() << std::endl
    return 0; // Fin du programme
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage