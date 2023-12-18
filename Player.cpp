#include "Player.h"

Player::Player() //Player Constructor
{
	setName("Default"); //Set Name to Default
	//setXp(0); //Set XP to 0
	//setLevel(0); //Set Level to 0
}

/*Player::Player(int x, int l) //Player Constructor with XP and Level definition
{
	setXp(x); //Set XP to x
	setLevel(l); //Set Level to l
*/

Player::Player(std::string n, int h, int d, int a, int x, int l) //Player Constructor with name, health, attack, defence, armure, xp and level definition
{
	setName(n); //Set Name to n
	setHealth(h); //Set Health to h
	setDamage(d); //Set Damage to d
	setArmor(a); //Set Armor to a
	//setXp(x); //Set XP to x
	//setLevel(l); //Set Level to l
}

/*int Player::getXp() //XP Getter
{
	return XP; //Return XP
}

void Player::setXp(int x) //XP Setter
{
	if (x < 0) XP = 0; //If XP is less than 0, XP is 0
	else XP = XP + x; //Else XP is XP + x
}

int Player::getLevel() //Level Getter
{
	return Level; //Return Level
}

void Player::setLevel(int l) //Level Setter
{
	if (l < 0) Level = 1; //If Level is less than 0, Level is 1
	else Level = Level + l; //Else Level is Level + l
}*/

int Player::getNumberOfKill() //Number of Kill Getter
{
	return NumberOfKill; //Return Number of Kill
}

void Player::setNumberOfKill(int Nok) //Number of Kill Setter
{
	if (Nok < 0) NumberOfKill = 0; //If Number of Kill is less than 0, Number of Kill is 0
	else NumberOfKill = NumberOfKill + Nok; //Else Number of Kill is Number of Kill + Nok
}

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) //Window Procedure
{
	switch (uMsg) //Switch Message
	{
	case WM_CLOSE: //If Message is WM_CLOSE
		DestroyWindow(hWnd); //Destroy Window
		break; //Break

	case WM_DESTROY: //If Message is WM_DESTROY
		PostQuitMessage(0); //Post Quit Message
		return 0; //Return 0
	}

	return DefWindowProc(hWnd, uMsg, wParam, lParam); //Return Default Window Procedure
}


//Player::Player()
//	: m_hInstance(GetModuleHandle(nullptr))
//{
//
//	const wchar_t* CLASS_NAME = L"Window Class";
//	WNDCLASS wndClass = {};
//	wndClass.lpszClassName = CLASS_NAME;
//	wndClass.hInstance = m_hInstance;
//	wndClass.hIcon = LoadIcon(NULL, IDI_WINLOGO);
//	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
//	wndClass.lpfnWndProc = WindowProc;
//
//	RegisterClass(&wndClass);
//
//	DWORD style = WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU;
//
//	int width = 640;
//	int height = 480;
//
//	RECT rect;
//	rect.left = 250;
//	rect.top = 250;
//	rect.right = rect.left + width;
//	rect.bottom = rect.top + height;
//
//	AdjustWindowRect(&rect, style, false);
//
//	m_hWnd = CreateWindowEx(0, CLASS_NAME, L"Inventory", style, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top, NULL, NULL, m_hInstance, NULL);
//
//
//
//}
//
//Player::~Player()
//{
//
//	const wchar_t* CLASS_NAME = L"Window Class";
//
//	UnregisterClass(CLASS_NAME, m_hInstance);
//
//}
//
//bool Player::OpenInventory()
//{
//
//	MSG msg = {};
//
//	while (PeekMessage(&msg, nullptr, 0u, 0u, PM_REMOVE)) {
//
//		if (msg.message == WM_QUIT) {
//			return false;
//		}
//		ShowWindow(m_hWnd, SW_SHOW);
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//
//	return true;
//
//}

