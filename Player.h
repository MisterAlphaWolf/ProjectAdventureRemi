#pragma once
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <time.h>
#include <vector>
#include "Personnage.h"
#include "Item.h"

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//using namespace std;

class Player : public Personnage
{
	std::vector<Item> Inventory;

	public :

		Player(); 
		Player(const Player&) = delete;
		Player& operator =(const Player&) = delete;
		~Player();


		HINSTANCE m_hInstance;
		HWND m_hWnd;

		//Actions
		bool OpenInventory();
};

