#pragma once
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <time.h>
#include <vector>
#include "Personnage.h"
#include "Item.h"
#include <string>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//using namespace std;

class Player : public Personnage
{
	std::vector<Item> Inventory;

		private:

			int XP = 0;
			int Level = 0;
			int NumberOfKill = 0;
			

		public:

			//Constructeur

			Player();
			/*Constructeur Player avec définition de l'xp de départ et du niveau de départ*/
			Player(int x, int l);
			/*Constructeur player avec définition du nom, health, attack, defence, armure, xp et level*/
			Player(std::string n, int h, int d, int a, int x, int l);

			int getXp();
			void setXp(int x);

			int getLevel();
			void setLevel(int l);

			int getNumberOfKill();
			void setNumberOfKill(int Nok);

			//Fenetre destructeur


			//Player(const Player&) = delete;
			//Player& operator =(const Player&) = delete;
			//~Player();


			//HINSTANCE m_hInstance;
			//HWND m_hWnd;

			////Actions
			//bool OpenInventory();
};

