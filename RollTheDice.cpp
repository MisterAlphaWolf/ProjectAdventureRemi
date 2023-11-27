// RollTheDice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.


#include <iostream>
#include <cstdlib>
#include <random>
#include <map>
#include "Personnage.h"

//using namespace std;

int main()
{

    std::random_device r;
    std::uniform_int_distribution<int> dist(1, 20);
    
    
    Personnage p1;
    Personnage mob;

    std::string name = "";
    int turn = 1;
    std::map<int, Personnage, std::greater<int>> order;

    //Set Player

    std::cout << "Enter the name of your player : ";
    std::cin >> name;
    p1.SetName(name);
    p1.SetCA(13);
    p1.SetHP(25);
    p1.SetInitiative(dist(r));

    order.emplace(p1.GetInitiative(), p1);
    
    //CConsoleLogger another_console;

    //Set Mob
    mob.SetName("Zombie");
    mob.SetCA(10);
    mob.SetHP(20);
    mob.SetInitiative(dist(r));
    
    order.emplace(mob.GetInitiative(), mob);
    
    for (auto it = order.begin(); it != order.end(); it++) {

        std::cout << it->first << std::endl;
        std::cout << it->second.GetName() << std::endl;

    }

    while (p1.GetHP() > 0 && mob.GetHP() > 0) {

        std::cout << "tour : " << turn << std::endl << std::endl;
        if (p1.GetInitiative() > mob.GetInitiative()) {

            p1.SetDamage(dist(r));
            p1.Attack(mob);
        }

        else {

            mob.SetDamage(dist(r));
            mob.Attack(p1);
        }

        turn++;
    }
    //cout << "Hello" << endl;  //dedug
   /* int dice;
    srand(time(NULL));


    dice = rand() % 100;

    if (dice <= 5) {
        cout << dice << " : " << "Réussite critique !";
    }


    if (dice >= 95) {
        cout << dice << " : " << "Échec critique !";
    }

    else {
        cout << dice;
    }*/

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage