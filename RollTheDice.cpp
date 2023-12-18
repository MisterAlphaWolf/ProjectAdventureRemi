// RollTheDice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream> 
#include <cstdlib> 
#include <random>
#include <map>
#define NOMINMAX
#include <Windows.h>
#include "Personnage.h"
#include "Ennemi.h"
#include "Player.h"
#include "Item.h"

//using namespace std;
#pragma comment(lib, "winmm.lib")

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

    std::cout << " .o88b. d8888b. d88888b  .d8b.  d888888b d888888b  .d88b.  d8b   db      d8888b. d88888b d8888b. .d8888.  .d88b.  d8b   db d8b   db  .d8b.   d888b  d88888b " << std::endl; // Creation du joueur
    std::cout << "d8P  Y8 88  `8D 88'     d8' `8b `~~88~~'   `88'   .8P  Y8. 888o  88      88  `8D 88'     88  `8D 88'  YP .8P  Y8. 888o  88 888o  88 d8' `8b 88' Y8b 88'     " << std::endl;
    std::cout << "8P      88oobY' 88ooooo 88ooo88    88       88    88    88 88V8o 88      88oodD' 88ooooo 88oobY' `8bo.   88    88 88V8o 88 88V8o 88 88ooo88 88      88ooooo " << std::endl;
    std::cout << "8b      88`8b   88~~~~~ 88~~~88    88       88    88    88 88 V8o88      88~~~   88~~~~~ 88`8b     `Y8b. 88    88 88 V8o88 88 V8o88 88~~~88 88  ooo 88~~~~~ " << std::endl;
    std::cout << "Y8b  d8 88 `88. 88.     88   88    88      .88.   `8b  d8' 88  V888      88      88.     88 `88. db   8D `8b  d8' 88  V888 88  V888 88   88 88. ~8~ 88.     " << std::endl;
    std::cout << " `Y88P' 88   YD Y88888P YP   YP    YP    Y888888P  `Y88P'  VP   V8P      88      Y88888P 88   YD `8888Y'  `Y88P'  VP   V8P VP   V8P YP   YP  Y888P  Y88888P " << std::endl << std::endl;
    std::cout << "Entrez le nom de votre personnage : "; // Demande le nom
    std::cin >> tempname; // Le joueur entre son nom
    std::cout << std::endl; // Saut de ligne
    std::cout << "Vous avez " << pointcreation << " point disponible pour choisir vos statistique." << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez les points de vie ( Entre 1 et 10 ) : "; // Demande les points de vie
    std::cin >> temphealth; // Le joueur entre les points de vie
    if (temphealth > 10) temphealth = 10;
    pointcreation = pointcreation - temphealth; // Point de creation = Point de creation - Points de vie
    std::cout << std::endl; // Saut de ligne
    std::cout << "Il vous reste " << pointcreation << " point." << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez la valeur d'attaque ( entre 1 et 10 ) : "; // Demande la valeur d'attaque
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl; // Si le joueur n'a plus de point
    else std::cin >> tempdamage; // Le joueur entre la valeur d'attaque
    if (tempdamage > 10) tempdamage = 10;
    pointcreation = pointcreation - tempdamage; // Point de creation = Point de creation - Valeur d'attaque
    std::cout << std::endl; // Saut de ligne
    std::cout << "Il vous reste " << pointcreation << " point." << std::endl << std::endl; // Affiche le nombre de point disponible
    std::cout << "Entrez la valeur de defense ( entre 1 et 10 ) : "; // Demande la valeur de defense
    if (pointcreation <= 0) std::cout << "Vous n'avez plus assez de point pour ameliorer votre personnage." << std::endl; // Si le joueur n'a plus de point
    else std::cin >> tempca; // Le joueur entre la valeur de defense
    if (tempca > 10) tempca = 10;
    pointcreation = pointcreation - tempca; // Point de creation = Point de creation - Valeur de defense
    system("cls"); // Efface la console
    return Player(tempname, temphealth, tempdamage, tempca, 0, 1); // Retourne le joueur

}

Ennemi createEnnemi(Player p, Ennemi m) 
{
    switch (p.getLevel())
    {
    case 1:
        m.setArmor(1);
        m.setDamage(4);
        m.setHealth(10);
        m.setXPGive(20);
    case 2:
        m.setArmor(4);
        m.setDamage(5);
        m.setHealth(14);
        m.setXPGive(25);
    case 3:
        m.setArmor(7);
        m.setDamage(9);
        m.setHealth(16);
        m.setXPGive(30);
    case 4:
        m.setArmor(11);
        m.setDamage(12);
        m.setHealth(20);
        m.setXPGive(35);
    case 5:
        m.setArmor(15);
        m.setDamage(15);
        m.setHealth(25);
        m.setXPGive(40);
    default:
        m.setArmor(1);
        m.setDamage(4);
        m.setHealth(10);
        m.setXPGive(20);
        break;
    }
    return m;
}

void LevelUp(Player p)
{
    switch (p.getLevel())
    {
    case 1:
        p.setLevel(1);
        p.setArmor(p.getArmor() + 2);
        p.setDamage(p.getDamage() + 2);
        p.setHealth(p.getHealth() + 5);
        std::cout << "Level up to level " << p.getLevel() << " Congratulation !" << std::endl << "Your armor " << p.getArmor() << " + 2" << std::endl << "Your damage " << p.getDamage() << " + 2" << std::endl << "Your health " << p.getHealth() << " + 2" << std::endl;   
    case 2:
        p.setLevel(1);
        p.setArmor(p.getArmor() + 2);
        p.setDamage(p.getDamage() + 2);
        p.setHealth(p.getHealth() + 5);
        std::cout << "Level up to level " << p.getLevel() << " Congratulation !" << std::endl << "Your armor " << p.getArmor() << " + 2" << std::endl << "Your damage " << p.getDamage() << " + 2" << std::endl << "Your health " << p.getHealth() << " + 2" << std::endl;    
    case 3:
        p.setLevel(1);
        p.setArmor(p.getArmor() + 2);
        p.setDamage(p.getDamage() + 2);
        p.setHealth(p.getHealth() + 5);
        std::cout << "Level up to level " << p.getLevel() << " Congratulation !" << std::endl << "Your armor " << p.getArmor() << " + 2" << std::endl << "Your damage " << p.getDamage() << " + 2" << std::endl << "Your health " << p.getHealth() << " + 2" << std::endl;    
    case 4:
        p.setLevel(1);
        p.setArmor(p.getArmor() + 2);
        p.setDamage(p.getDamage() + 2);
        p.setHealth(p.getHealth() + 5);
        std::cout << "Level up to level " << p.getLevel() << " Congratulation !" << std::endl << "Your armor " << p.getArmor() << " + 2" << std::endl << "Your damage " << p.getDamage() << " + 2" << std::endl << "Your health " << p.getHealth() << " + 2" << std::endl;
    default:
        p.setLevel(0);
        p.setArmor(p.getArmor());
        p.setDamage(p.getDamage());
        p.setHealth(p.getHealth());
        break;
    }
}

enum Room
{
   Monster,
   RItem,
   Empty
};

void MainMenu()
{
   std::cout << " '########:::'#######::'##:::::::'##::::::::::'########:'##::::'##:'########::::'########::'####::'######::'########: " << endl;
   std::cout << "  ##.... ##:'##.... ##: ##::::::: ##::::::::::... ##..:: ##:::: ##: ##.....::::: ##.... ##:. ##::'##... ##: ##.....:: " << endl;
   std::cout << "  ##:::: ##: ##:::: ##: ##::::::: ##::::::::::::: ##:::: ##:::: ##: ##:::::::::: ##:::: ##:: ##:: ##:::..:: ##::::::: " << endl;
   std::cout << "  ########:: ##:::: ##: ##::::::: ##::::::::::::: ##:::: #########: ######:::::: ##:::: ##:: ##:: ##::::::: ######::: " << endl;
   std::cout << "  ##.. ##::: ##:::: ##: ##::::::: ##::::::::::::: ##:::: ##.... ##: ##...::::::: ##:::: ##:: ##:: ##::::::: ##...:::: " << endl;
   std::cout << "  ##::. ##:: ##:::: ##: ##::::::: ##::::::::::::: ##:::: ##:::: ##: ##:::::::::: ##:::: ##:: ##:: ##::: ##: ##::::::: " << endl;
   std::cout << "  ##:::. ##:. #######:: ########: ########::::::: ##:::: ##:::: ##: ########:::: ########::'####:. ######:: ########: " << endl;
   std::cout << " ..:::::..:::.......:::........::........::::::::..:::::..:::::..::........:::::........:::....:::......:::........:: " << endl << endl << endl;
}

int main() // Fonction principale
{
    
    ::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000); //Force la console en fullscreen;
    
    int r = rand() % 3;
    PlaySound(TEXT("GameMusic.wav"), NULL, SND_ASYNC);

    //Personnage p1;
    Player pl1; // Player

    std::string name = ""; // Nom du joueur
    int turn = 1; // Tour de jeu

    //Starting
    MainMenu();
    //Set Player
    //p1 = starting(); // Creation de la classe personnage ( classe parent )
    pl1 = startingPlayer(); // Creation du joueur ( classe enfant )
    pl1.setInitiativeValue(20); // Initiative du joueur
    
    //Boucle de jeu
    while (pl1.getHealth() > 0) // Tant que le joueur est en vie
    {
        std::cout << "Player HP : " << pl1.getHealth() << endl; // Affiche la vie du joueur

        if (r == Monster) // Si la salle contient un monstre
        {
            system("cls"); // Efface la console
            std::cout << "Vous entrez dans une salle avec un monstre" << std::endl; // Affiche "Vous entrez dans une salle avec un monstre"
            Ennemi mob; //Ennemi
            mob = createEnnemi(pl1, mob);
            mob.setName("Zombie");

            //Boucle de Fight
            while (pl1.getHealth() > 0 && mob.getHealth() > 0) // Tant que le joueur et le mob sont en vie
            {
                std::cout << "tour : " << turn << std::endl; // Affiche le tour
                if (pl1.getinitiativeValue() > mob.getInitiativeValue()) // Si le joueur a plus d'initiative que le mob
                {
                    std::cout << "Player HP : " << pl1.getHealth() << endl; // Affiche la vie du joueur
                    std::cout << "Mob HP : " << mob.getHealth() << endl; // Affiche la vie du mob
                    std::cout << "  " << endl;
                    std::cout << "Player turn" << endl;  // Si c'est le tour du joueur
                    std::cout << "1: Attack  2: Defend 3: Inventory " << endl; // Demande au joueur d'attaquer ou de defendre

                    string playerchoice; // Choix du joueur
                    cin >> playerchoice; // Le joueur entre son choix
                    if (playerchoice == "attack" || playerchoice == "Attack" || playerchoice == "1")  // Si le joueur attaque
                    {
                        mob.setHealth(mob.getHealth() - (pl1.getDamage() - mob.getArmor())); // Mob HP = Mob HP - (Player Damage - Mob Armor)
                    }
                    else if (playerchoice == "defend" || playerchoice == "Defend" || playerchoice == "2") // Si le joueur defend
                    {
                        pl1.setHealth(pl1.getHealth() - ((pl1.getArmor() + 2) - mob.getDamage())); // Player HP = Player HP - ((Player Armor + 2) - Mob Damage)
                    }
                    else if (playerchoice == "inventory" || playerchoice == "Inventory" || playerchoice == "3") // Si le joueur ouvre son inventaire
                    {
                        string itemchoice = " "; // Choix de l'item
						pl1.ShowInventory(); // Affiche l'inventaire du joueur
                        std::cout << "Choisir un item" << endl; // Demande au joueur de choisir un item
                        cin >> itemchoice; // Le joueur entre son choix
                        pl1.UseItem(itemchoice); // Utilise l'item
                        std::cout << "  " << endl;
					}
                    else // Si le joueur entre autre chose
                    {
                        std::cout << "invalid choice"<< endl; // Affiche "Choix invalide"
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
            bool levelup2Make = FALSE;
            bool levelup3Make = FALSE;
            bool levelup4Make = FALSE;
            bool levelup5Make = FALSE;
            if (pl1.getXp() >= 35 && levelup2Make == false)
            {
                levelup2Make = true;
                LevelUp(pl1);
            }
            else if (pl1.getXp() >= 80 && levelup2Make == false)
            {
                levelup3Make = true;
                LevelUp(pl1);
            }
            if (pl1.getXp() >= 150 && levelup2Make == false)
            {
                levelup4Make = true;
                LevelUp(pl1);
            }
            if (pl1.getXp() >= 300 && levelup2Make == false)
            {
                levelup5Make = true;
                LevelUp(pl1);
            }
        }

        else if (r == RItem)
        {
            std::cout << "Vous entrez dans une salle avec un item" << std::endl; // Affiche "Vous entrez dans une salle avec un item"
            // Créer un item
            Item I;
            std::cout << "Vous avez trouver un " << I.getName() << std::endl; // Affiche "Vous avez trouve un " + nom de l'item
            pl1.AddInventory(I); // Ajoute l'item dans l'inventaire du joueur
            Sleep(1000); // Attend 1 seconde
            system("cls"); // Efface la console
		}
        else if (r == Empty) // Si la salle est vide
        {
             std::cout << "Vous entrez dans une salle vide" << std::endl; // Affiche "Vous entrez dans une salle vide"
             Sleep(800); // Attend 0.8 secondes
             system("cls"); // Efface la console
        }
        else
        {
            std::cout << "Vous entrez dans une salle vide" << std::endl; // Affiche "Vous entrez dans une salle vide"
        }

        r = rand() % 3; // Random entre 0 et 2
    }
    system("Color 0F");
    SetConsoleOutputCP(65001);
    std::cout << "     ,o888888o.          .8.                   ,8.       ,8.          8 8888888888                 ,o888888o.  `8.`888b           ,8' 8 8888888888   8 888888888o.   " << std::endl;
    std::cout << "    8888     `88.       .888.                 ,888.     ,888.         8 8888                    . 8888     `88. `8.`888b         ,8'  8 8888         8 8888    `88.  " << std::endl;
    std::cout << " ,8 8888       `8.     :88888.               .`8888.   .`8888.        8 8888                   ,8 8888       `8b `8.`888b       ,8'   8 8888         8 8888     `88  " << std::endl;
    std::cout << " 88 8888              . `88888.             ,8.`8888. ,8.`8888.       8 8888                   88 8888        `8b `8.`888b     ,8'    8 8888         8 8888     ,88  " << std::endl;
    std::cout << " 88 8888             .8. `88888.           ,8'8.`8888,8^8.`8888.      8 888888888888           88 8888         88  `8.`888b   ,8'     8 888888888888 8 8888.   ,88'  " << std::endl;
    std::cout << " 88 8888            .8`8. `88888.         ,8' `8.`8888' `8.`8888.     8 8888                   88 8888         88   `8.`888b ,8'      8 8888         8 888888888P'   " << std::endl;
    std::cout << " 88 8888   8888888 .8' `8. `88888.       ,8'   `8.`88'   `8.`8888.    8 8888                   88 8888        ,8P    `8.`888b8'       8 8888         8 8888`8b       " << std::endl;
    std::cout << " `8 8888       .8'.8'   `8. `88888.     ,8'     `8.`'     `8.`8888.   8 8888                   `8 8888       ,8P      `8.`888'        8 8888         8 8888 `8b.     " << std::endl;
    std::cout << "    8888     ,88'.888888888. `88888.   ,8'       `8        `8.`8888.  8 8888                    ` 8888     ,88'        `8.`8'         8 8888         8 8888   `8b.   " << std::endl;
    std::cout << "     `8888888P' .8'       `8. `88888. ,8'         `         `8.`8888. 8 888888888888               `8888888P'           `8.`          8 888888888888 8 8888     `88. " << std::endl << std::endl;// Affiche "Game Over"
    
    pl1.setNumberOfKill(1); // Nombre de kill du joueur + 1
    std::cout << "Number of kill : " << pl1.getNumberOfKill() << std::endl; //Le nombre de kill
    std::cout << "XP gain : " << pl1.getXp() << std::endl; // L'xp gagne
    return 0; // Fin du programme
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage