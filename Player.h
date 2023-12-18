#pragma once
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <time.h>
#include <vector>
#include "Personnage.h"
#include "Item.h"
#include <string>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam); //Window Procedure
//using namespace std;

class Player : public Personnage //Classe Player
{
	std::vector<Item> Inventory; //Inventaire

		private: //Attributs privés

			int XP = 0; //XP
			int Level = 0; //Level
			int NumberOfKill = 0; //Number of Kill
			

		public: //Attributs publics

			//Constructeur

			Player();
			/*Constructeur Player avec définition de l'xp de départ et du niveau de départ*/
			Player(int x, int l);
			/*Constructeur player avec définition du nom, health, attack, defence, armure, xp et level*/
			Player(std::string n, int h, int d, int a, int x, int l);

			int getXp(); //XP Getter
			void setXp(int x); //XP Setter

			int getLevel(); //Level Getter
			void setLevel(int l); //Level Setter
			

			int getNumberOfKill(); //Number of Kill Getter
			void setNumberOfKill(int Nok); //Number of Kill Setter

			//Fenetre destructeur


			//Player(const Player&) = delete;
			//Player& operator =(const Player&) = delete;
			//~Player();


			//HINSTANCE m_hInstance;
			//HWND m_hWnd;

			////Actions
			//bool OpenInventory();
};

